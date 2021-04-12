/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray;

@interface ACDAccountNotifier : NSObject {

	NSObject*<OS_dispatch_queue> _notificationEntryQueue;
	NSArray* _notificationEntries;

}

@property (nonatomic,copy,readonly) NSArray * notificationEntries;              //@synthesize notificationEntries=_notificationEntries - In the implementation block
+(id)allNotificationEntries;
-(id)init;
-(BOOL)canRemoveAccount:(id)arg1 inStore:(id)arg2 error:(id*)arg3 ;
-(BOOL)postWillChangeNotificationForType:(int)arg1 inStore:(id)arg2 newAccount:(id)arg3 oldAccount:(id)arg4 ;
-(void)postDidChangeNotificationForType:(int)arg1 inStore:(id)arg2 newAccount:(id)arg3 oldAccount:(id)arg4 ;
-(void)postWillPerformDataclassActionsOnAccount:(id)arg1 forDataclasses:(id)arg2 ;
-(void)postDidPerformDataclassActionsOnAccount:(id)arg1 forDataclasses:(id)arg2 ;
-(BOOL)canSaveAccount:(id)arg1 inStore:(id)arg2 error:(id*)arg3 ;
-(id)initWithNotificationEntries:(id)arg1 ;
-(id)_pluginsRegisteredForAccount:(id)arg1 ;
-(id)_pluginsRegisteredForNewAccount:(id)arg1 oldAccount:(id)arg2 ;
-(id)_unsafe_pluginsRegisteredForAccount:(id)arg1 ;
-(id)_unsafe_pluginsRegisteredForNewAccount:(id)arg1 oldAccount:(id)arg2 ;
-(id)_provisionedDataclassesForNewAccount:(id)arg1 oldAccount:(id)arg2 ;
-(void)addNotificationEntry:(id)arg1 ;
-(void)removeAllNotificationEntries;
-(NSArray *)notificationEntries;
@end

