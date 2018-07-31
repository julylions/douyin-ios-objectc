//
//  ChatTextView.h
//  Douyin
//
//  Created by Qiao Shi on 2018/7/30.
//  Copyright © 2018年 Qiao Shi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Constants.h"

@protocol ChatTextViewDelegate
@required
-(void)onSendText:(NSString *)text;
-(void)onSendImages:(NSMutableArray<UIImage *> *)images;
-(void)onEditBoardHeightChange:(CGFloat)height;
@end

@interface ChatTextView : UIView
@property (nonatomic, strong) UIView                 *container;
@property (nonatomic, strong) UITextView             *textView;
@property (nonatomic, assign) ChatEditMessageType    editMessageType;
@property (nonatomic, weak) id<ChatTextViewDelegate> delegate;
- (void)show;
- (void)dismiss;
@end

