/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIAlertView.h>

@interface _UIUserNotificationAlertView : UIAlertView {

	CFUserNotificationRef _userNotification;
	CFRunLoopSourceRef _userNotificationRunLoopSource;
	id _strongDelegate;
	id _retainedSelf;

}
+(void)initialize;
-(void)dealloc;
-(BOOL)isVisible;
-(long long)addButtonWithTitle:(id)arg1 ;
-(void)dismissWithClickedButtonIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(id)textFieldAtIndex:(long long)arg1 ;
-(void)show;
-(void)setRemoteViewController:(id)arg1 ;
-(void)_removeObservervations;
-(void)cancelAlertView;
-(void)_cancelUserNotification;
-(void)setHostedWindow:(id)arg1 ;
@end

