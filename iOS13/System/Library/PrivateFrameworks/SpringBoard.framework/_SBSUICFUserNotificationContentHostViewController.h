/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/_SBSUICFUserNotificationContentExtensionHostInterface.h>

@class SBUserNotificationAlert, NSString;

@interface _SBSUICFUserNotificationContentHostViewController : _UIRemoteViewController <_SBSUICFUserNotificationContentExtensionHostInterface> {

	SBUserNotificationAlert* _userNotification;

}

@property (assign,nonatomic,__weak) SBUserNotificationAlert * userNotification;              //@synthesize userNotification=_userNotification - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(BOOL)_canShowWhileLocked;
-(void)configureWithCompletion:(/*^block*/id)arg1 ;
-(void)invalidateWithCompletion:(/*^block*/id)arg1 ;
-(SBUserNotificationAlert *)userNotification;
-(void)setUserNotification:(SBUserNotificationAlert *)arg1 ;
@end

