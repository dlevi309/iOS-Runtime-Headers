/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPresenter:(id)arg1;
-(id<PLClickPresentationInteractionPresenting>)presenter;

@end

