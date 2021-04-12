/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/CNChangeNotificationReceiver.h>

@protocol CNSchedulerProvider, CNContactsLoggerProvider, OS_dispatch_queue;
@class NSMapTable, NSMutableDictionary, NSCountedSet, NSObject, CNCoalescingTimer, NSString;

@interface CNChangesNotifierProxy : NSObject <CNChangeNotificationReceiver> {

	BOOL forwardsSelfGeneratedDistributedSaveNotifications;
	double _externalNotificationCoalescingDelay;
	NSMapTable* _removalBlocks;
	NSMapTable* _notifyingBlocks;
	id<CNSchedulerProvider> _schedulerProvider;
	id<CNContactsLoggerProvider> _loggerProvider;
	NSMutableDictionary* _notificationForwardingMapping;
	NSCountedSet* _supressedNotificationNames;
	NSMutableDictionary* _notificationsToBeSentOnceAllowed;
	NSObject*<OS_dispatch_queue> _notifierQueue;
	CNCoalescingTimer* _coalescingTimer;
	NSString* _coalescingNotificationName;

}

@property (assign,nonatomic) BOOL forwardsSelfGeneratedDistributedSaveNotifications; 
@property (assign,nonatomic) double externalNotificationCoalescingDelay;                          //@synthesize externalNotificationCoalescingDelay=_externalNotificationCoalescingDelay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)receiveNotificationName:(id)arg1 fromSender:(id)arg2 saveIdentifier:(id)arg3 userInfo:(id)arg4 isFromExternalProcess:(BOOL)arg5 ;
-(void)receiveExternalNotificationName:(id)arg1 ;
-(double)externalNotificationCoalescingDelay;
-(void)waitForCurrentTasksToFinish;
-(BOOL)forwardsSelfGeneratedDistributedSaveNotifications;
-(void)setForwardsSelfGeneratedDistributedSaveNotifications:(BOOL)arg1 ;
-(void)setExternalNotificationCoalescingDelay:(double)arg1 ;
@end

