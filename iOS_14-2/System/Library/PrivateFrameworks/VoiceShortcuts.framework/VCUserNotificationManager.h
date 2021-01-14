/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>
#import <libobjc.A.dylib/VCTriggerNotificationDebouncerDelegate.h>

@protocol VCUserNotificationManagerDelegate;
@class VCTriggerNotificationDebouncer, WFUserNotificationManager, NSString;

@interface VCUserNotificationManager : NSObject <UNUserNotificationCenterDelegate, VCTriggerNotificationDebouncerDelegate> {

	VCTriggerNotificationDebouncer* _debouncer;
	id<VCUserNotificationManagerDelegate> _delegate;
	WFUserNotificationManager* _userNotificationManager;

}

@property (nonatomic,readonly) WFUserNotificationManager * userNotificationManager;              //@synthesize userNotificationManager=_userNotificationManager - In the implementation block
@property (nonatomic,readonly) VCTriggerNotificationDebouncer * debouncer;                       //@synthesize debouncer=_debouncer - In the implementation block
@property (assign,nonatomic,__weak) id<VCUserNotificationManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)alertCategory;
+(id)categoryIdentifiers;
+(id)promptCategory;
-(BOOL)postNotificationOfType:(unsigned long long)arg1 forTrigger:(id)arg2 workflowReference:(id)arg3 removeDeliveredNotifications:(BOOL)arg4 pendingTriggerEventIDs:(id)arg5 actionIcons:(id)arg6 error:(id*)arg7 ;
-(void)postNotificationThatTrigger:(id)arg1 failedWithError:(id)arg2 ;
-(id<VCUserNotificationManagerDelegate>)delegate;
-(VCTriggerNotificationDebouncer *)debouncer;
-(void)removeStaleNotificationsWithCompletion:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<VCUserNotificationManagerDelegate>)arg1 ;
-(id)initWithUserNotificationManager:(id)arg1 ;
-(void)removeNotificationsWithTriggerIdentifier:(id)arg1 ;
-(BOOL)_postNotificationOfType:(unsigned long long)arg1 forTrigger:(id)arg2 workflowReference:(id)arg3 removeDeliveredNotifications:(BOOL)arg4 pendingTriggerEventIDs:(id)arg5 actionIcons:(id)arg6 error:(id*)arg7 ;
-(WFUserNotificationManager *)userNotificationManager;
-(void)postNotificationForTrigger:(id)arg1 workflowReference:(id)arg2 pendingTriggerEventIDs:(id)arg3 ;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
@end

