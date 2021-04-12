/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class CNChangesNotifierProxy;

@interface CNChangesNotifier : NSObject {

	CNChangesNotifierProxy* _notifierProxy;

}

@property (nonatomic,retain) CNChangesNotifierProxy * notifierProxy;              //@synthesize notifierProxy=_notifierProxy - In the implementation block
+(id)sharedNotifierWithNotificationWrapper:(id)arg1 schedulerProvider:(id)arg2 loggerProvider:(id)arg3 ;
+(id)sharedNotifier;
+(void)flushSharedNotifier;
-(void)didChangeMeContactSuccessfully:(BOOL)arg1 fromContactStore:(id)arg2 requestIdentifier:(id)arg3 ;
-(id)initWithNotificationWrapper:(id)arg1 schedulerProvider:(id)arg2 loggerProvider:(id)arg3 ;
-(void)setNotifierProxy:(CNChangesNotifierProxy *)arg1 ;
-(CNChangesNotifierProxy *)notifierProxy;
-(void)waitForCurrentTasksToFinish;
-(void)willSaveChanges;
-(BOOL)forwardsSelfGeneratedDistributedSaveNotifications;
-(void)didSaveChangesSuccessfully:(BOOL)arg1 fromContactStore:(id)arg2 requestIdentifier:(id)arg3 ;
-(void)setForwardsSelfGeneratedDistributedSaveNotifications:(BOOL)arg1 ;
-(void)dealloc;
-(void)setExternalNotificationCoalescingDelay:(double)arg1 ;
@end

