/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>

@protocol VCUserNotificationManagerDelegate;
@class UNUserNotificationCenter, NSString;

@interface VCUserNotificationManager : NSObject <UNUserNotificationCenterDelegate> {

	id<VCUserNotificationManagerDelegate> _delegate;
	UNUserNotificationCenter* _notificationCenter;

}

@property (nonatomic,readonly) UNUserNotificationCenter * notificationCenter;                    //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (assign,nonatomic,__weak) id<VCUserNotificationManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<VCUserNotificationManagerDelegate>)delegate;
-(void)setDelegate:(id<VCUserNotificationManagerDelegate>)arg1 ;
-(UNUserNotificationCenter *)notificationCenter;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)removeNotificationsWithTriggerIdentifier:(id)arg1 ;
-(void)postNotificationThatTrigger:(id)arg1 failedWithError:(id)arg2 ;
-(void)postNotificationOfType:(unsigned long long)arg1 forTrigger:(id)arg2 workflowReference:(id)arg3 actionIcons:(id)arg4 completion:(/*^block*/id)arg5 ;
@end

