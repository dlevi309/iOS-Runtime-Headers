/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/


@protocol NCNotificationListCoalescingControlsHandler <NSObject>
@property (assign,nonatomic,__weak) id<NCNotificationListCoalescingControlsHandlerDelegate> handlerDelegate; 
@required
-(void)resetClearButtonStateAnimated:(BOOL)arg1;
-(BOOL)shouldReceiveTouchAtPointInWindowSpace:(CGPoint)arg1;
-(BOOL)dismissModalFullScreenIfNeeded;
-(id<NCNotificationListCoalescingControlsHandlerDelegate>)handlerDelegate;
-(void)setHandlerDelegate:(id)arg1;

@end

