/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

@class UIView;


@protocol PLClickPresentationInteractionPresentable <NSObject>
@property (assign,nonatomic,__weak) id<PLClickPresentationInteractionPresenting> presenter; 
@property (nonatomic,readonly) UIView * viewWithContent; 
@property (nonatomic,readonly) UIView * viewForTouchContinuation; 
@optional
-(UIView *)viewForTouchContinuation;
-(UIView *)viewWithContent;

@required
-(id<PLClickPresentationInteractionPresenting>)presenter;
-(void)setPresenter:(id)arg1;

@end

