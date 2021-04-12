/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)textFieldAtIndex:(long long)arg1 ;
-(void)setHostedWindow:(id)arg1 ;
-(void)cancelAlertView;
-(void)dismissWithClickedButtonIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(void)show;
-(void)_removeObservervations;
-(void)_cancelUserNotification;
-(void)setRemoteViewController:(id)arg1 ;
-(BOOL)isVisible;
-(long long)addButtonWithTitle:(id)arg1 ;
-(void)dealloc;
@end

