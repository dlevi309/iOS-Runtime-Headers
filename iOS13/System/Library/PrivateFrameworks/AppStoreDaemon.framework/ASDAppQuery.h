/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <libobjc.A.dylib/ASDNotificationCenterNotificationObserver.h>
#import <libobjc.A.dylib/ASDNotificationCenterProgressObserver.h>

@protocol OS_dispatch_queue, ASDAppQueryResultsObserver;
@class NSObject, ASDNotificationCenter, NSMutableDictionary, ASDServiceBroker, NRDevice, NSPredicate, NSString;

@interface ASDAppQuery : NSObject <ASDNotificationCenterNotificationObserver, ASDNotificationCenterProgressObserver> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _hasRunOnce;
	ASDNotificationCenter* _notificationCenter;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	id<ASDAppQueryResultsObserver> _observer;
	NSMutableDictionary* _resultCache;
	ASDServiceBroker* _serviceBroker;
	NRDevice* _device;
	NSPredicate* _predicate;

}

@property (readonly) NSPredicate * predicate;                            //@synthesize predicate=_predicate - In the implementation block
@property (__weak) id<ASDAppQueryResultsObserver> observer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)queryForSystemAppsOnPairedDevice:(id)arg1 ;
+(void)_executeQueryWithPredicate:(id)arg1 onPairedDevice:(id)arg2 usingServiceBroker:(id)arg3 withResultHandler:(/*^block*/id)arg4 ;
+(id)_newProgressForApp:(id)arg1 fromRemoteProgress:(id)arg2 usingServiceBroker:(id)arg3 ;
+(id)queryForBeagleApps;
+(id)queryForBetaApps;
+(id)queryForBundleIDs:(id)arg1 ;
+(id)queryForBundleAtPath:(id)arg1 ;
+(id)queryDefaultPairedWatchForBetaApps;
+(id)queryForBetaAppsOnPairedDevice:(id)arg1 ;
+(id)queryForStoreApps;
+(id)queryForStoreItemIDs:(id)arg1 ;
+(id)queryWithPredicate:(id)arg1 ;
+(id)queryWithPredicate:(id)arg1 onPairedDevice:(id)arg2 ;
+(void)anyWithPredicate:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(id<ASDAppQueryResultsObserver>)observer;
-(NSPredicate *)predicate;
-(void)setObserver:(id<ASDAppQueryResultsObserver>)arg1 ;
-(id)initWithPredicate:(id)arg1 ;
-(void)executeQueryWithResultHandler:(/*^block*/id)arg1 ;
-(id)initWithPredicate:(id)arg1 onPairedDevice:(id)arg2 ;
-(id)initWithPredicate:(id)arg1 serviceBroker:(id)arg2 notificationCenter:(id)arg3 ;
-(id)initWithPredicate:(id)arg1 onPairedDevice:(id)arg2 serviceBroker:(id)arg3 notificationCenter:(id)arg4 ;
-(void)_handleBrokerConnectionNotification:(id)arg1 ;
-(id)_replaceCachedResultsWithResults:(id)arg1 ;
-(void)_handleNotificationRegisteredWithUserInfo:(id)arg1 ;
-(void)_handleNotificationUnregisteredWithUserInfo:(id)arg1 ;
-(void)_handleNotificationRefreshWithUserInfo:(id)arg1 ;
-(void)_updateCachedResultsWithResults:(id)arg1 ;
-(void)_sendResultsChangedWithResults:(id)arg1 ;
-(id)_removeCachedResultsForBundleIDs:(id)arg1 ;
-(void)_handleAppsUpdatedWithResults:(id)arg1 ;
-(void)_handleAppsRemovedWithBundleIDs:(id)arg1 ;
-(void)_handleAppsReplacedWithResults:(id)arg1 ;
-(void)notificationCenter:(id)arg1 receivedNotifications:(id)arg2 ;
-(void)notificationCenter:(id)arg1 receivedProgress:(id)arg2 ;
-(void)_unitTest_setHasRunOnce:(BOOL)arg1 ;
@end

