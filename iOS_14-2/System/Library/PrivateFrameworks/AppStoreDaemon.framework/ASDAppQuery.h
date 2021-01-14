/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <libobjc.A.dylib/ASDNotificationCenterNotificationObserver.h>
#import <libobjc.A.dylib/ASDNotificationCenterProgressObserver.h>

@protocol OS_dispatch_queue, ASDAppQueryResultsObserver;
@class NSObject, ASDNotificationCenter, ASDAppQueryExecutor, NSMutableDictionary, ASDServiceBroker, NRDevice, NSPredicate, NSString;

@interface ASDAppQuery : NSObject <ASDNotificationCenterNotificationObserver, ASDNotificationCenterProgressObserver> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _hasRunOnce;
	ASDNotificationCenter* _notificationCenter;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	id<ASDAppQueryResultsObserver> _observer;
	ASDAppQueryExecutor* _queryExecutor;
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
+(id)queryWithPredicate:(id)arg1 onPairedDevice:(id)arg2 ;
+(id)queryForBeagleApps;
+(id)queryForStoreApps;
+(void)anyWithPredicate:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
+(id)queryForSystemAppsOnPairedDevice:(id)arg1 ;
+(id)queryForAlmondApps;
+(id)queryForStoreItemIDs:(id)arg1 ;
+(id)queryForAppClipWithStoreItemID:(long long)arg1 ;
+(id)queryForBundleIDs:(id)arg1 ;
+(id)_defaultExecutor;
+(id)_newProgressForApp:(id)arg1 fromRemoteProgress:(id)arg2 usingServiceBroker:(id)arg3 ;
+(id)queryWithPredicate:(id)arg1 ;
+(id)queryForBetaApps;
+(id)queryForBundleAtPath:(id)arg1 ;
+(id)queryDefaultPairedWatchForBetaApps;
+(id)queryForBetaAppsOnPairedDevice:(id)arg1 ;
-(id)initWithPredicate:(id)arg1 ;
-(void)_handleAppsRemovedWithBundleIDs:(id)arg1 ;
-(void)_handleNotificationRefreshWithUserInfo:(id)arg1 ;
-(void)_handleNotificationErrorWithUserInfo:(id)arg1 ;
-(void)_handleNotificationUnregisteredWithUserInfo:(id)arg1 ;
-(NSPredicate *)predicate;
-(id)_replaceCachedResultsWithResults:(id)arg1 ;
-(void)setObserver:(id<ASDAppQueryResultsObserver>)arg1 ;
-(id)init;
-(id<ASDAppQueryResultsObserver>)observer;
-(void)_handleAppsUpdatedWithResults:(id)arg1 ;
-(void)notificationCenter:(id)arg1 receivedProgress:(id)arg2 ;
-(id)_removeCachedResultsForBundleIDs:(id)arg1 ;
-(void)_handleBrokerConnectionNotification:(id)arg1 ;
-(id)initWithPredicate:(id)arg1 queryExecutor:(id)arg2 serviceBroker:(id)arg3 notificationCenter:(id)arg4 ;
-(void)_unitTest_setHasRunOnce:(BOOL)arg1 ;
-(id)initWithPredicate:(id)arg1 onPairedDevice:(id)arg2 ;
-(id)initWithPredicate:(id)arg1 queryExecutor:(id)arg2 onPairedDevice:(id)arg3 serviceBroker:(id)arg4 notificationCenter:(id)arg5 ;
-(void)_sendResultsChangedWithResults:(id)arg1 ;
-(void)notificationCenter:(id)arg1 receivedNotifications:(id)arg2 ;
-(void)_updateCachedResultsWithResults:(id)arg1 ;
-(void)_handleAppsReplacedWithResults:(id)arg1 ;
-(void)_handleNotificationRegisteredWithUserInfo:(id)arg1 ;
-(void)executeQueryWithResultHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)_debugReceivedApps:(id)arg1 ;
@end

