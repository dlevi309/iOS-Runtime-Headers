/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class CNChangesNotifierProxy;

@interface CNChangesNotifier : NSObject {

	CNChangesNotifierProxy* _notifierProxy;

}

@property (nonatomic,retain) CNChangesNotifierProxy * notifierProxy;              //@synthesize notifierProxy=_notifierProxy - In the implementation block
+(id)sharedNotifier;
+(id)sharedNotifierWithNotificationWrapper:(id)arg1 schedulerProvider:(id)arg2 loggerProvider:(id)arg3 ;
+(void)flushSharedNotifier;
-(void)dealloc;
-(void)willSaveChanges;
-(void)didSaveChangesSuccessfully:(BOOL)arg1 fromContactStore:(id)arg2 requestIdentifier:(id)arg3 ;
-(void)didChangeMeContactSuccessfully:(BOOL)arg1 fromContactStore:(id)arg2 requestIdentifier:(id)arg3 ;
-(BOOL)forwardsSelfGeneratedDistributedSaveNotifications;
-(void)setForwardsSelfGeneratedDistributedSaveNotifications:(BOOL)arg1 ;
-(void)setExternalNotificationCoalescingDelay:(double)arg1 ;
-(void)waitForCurrentTasksToFinish;
-(id)initWithNotificationWrapper:(id)arg1 schedulerProvider:(id)arg2 loggerProvider:(id)arg3 ;
-(CNChangesNotifierProxy *)notifierProxy;
-(void)setNotifierProxy:(CNChangesNotifierProxy *)arg1 ;
@end

