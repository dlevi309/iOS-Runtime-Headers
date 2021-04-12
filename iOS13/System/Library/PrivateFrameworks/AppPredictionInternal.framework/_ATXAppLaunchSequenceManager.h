/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@protocol OS_dispatch_queue;
@class _ATXDataStore, NSMapTable, _ATXInternalUninstallNotification, NSObject, NSString, NSDate;

@interface _ATXAppLaunchSequenceManager : NSObject {

	_ATXDataStore* _datastore;
	NSMapTable* _appLaunchSequence;
	NSMapTable* _appActionLaunchSequence;
	_ATXInternalUninstallNotification* _uninstallNotificationListener;
	NSObject*<OS_dispatch_queue> _syncQueue;
	NSString* _lastAppActionLaunch;
	NSDate* _lastAppActionLaunchDate;

}
+(id)sharedInstance;
-(id)init;
-(id)syncQueue;
-(id)initWithDataStore:(id)arg1 ;
-(id)launchSequence;
-(id)initWithInMemoryStore;
-(id)launchSequenceForBundle:(id)arg1 ;
-(id)launchSequenceForAppAction:(id)arg1 ;
-(void)decayAllLaunchSequencesWithHalfLifeInDays:(double)arg1 ;
-(void)decayAllAppActionLaunchSequencesWithHalfLifeInDays:(double)arg1 ;
-(void)deleteAllLaunchesForBundles:(id)arg1 ;
-(void)deleteAllLaunchesForAppActions:(id)arg1 ;
-(void)addBundleIdToLaunchSequence:(id)arg1 date:(id)arg2 ;
@end

