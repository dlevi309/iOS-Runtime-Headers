/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

