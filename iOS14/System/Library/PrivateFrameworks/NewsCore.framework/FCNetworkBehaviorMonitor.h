/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCNetworkReachabilityObserving.h>
#import <libobjc.A.dylib/FCOperationThrottlerDelegate.h>

@protocol OS_dispatch_queue, FCOperationThrottler;
@class NSObject, NSMutableArray, NSMutableIndexSet, FCKeyValueStore, NSHashTable, NSArray, NSString;

@interface FCNetworkBehaviorMonitor : NSObject <FCNetworkReachabilityObserving, FCOperationThrottlerDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableArray* _sessions;
	NSMutableIndexSet* _sessionIDsThisLaunch;
	NSMutableArray* _events;
	FCKeyValueStore* _localStore;
	id<FCOperationThrottler> _saveThrottler;
	NSHashTable* _observers;

}

@property (nonatomic,copy,readonly) NSArray * sessions; 
@property (nonatomic,copy,readonly) NSArray * networkEvents; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObserver:(id)arg1 ;
-(id)init;
-(id)_respondingPOPFromEvent:(id)arg1 ;
-(NSArray *)sessions;
-(void)populateTelemetry:(id)arg1 withNetworkEventsFromDate:(id)arg2 toDate:(id)arg3 ;
-(void)_visitEventGroupsFromDate:(id)arg1 toDate:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)initWithCacheDirectory:(id)arg1 ;
-(void)_sanitizeNetworkEvent:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)wifiReachabilityDidChange:(id)arg1 ;
-(id)initTransient;
-(NSArray *)networkEvents;
-(void)operationThrottlerPerformOperation:(id)arg1 ;
-(BOOL)_shouldFilterNetworkEvent:(id)arg1 ;
-(void)logNetworkEvent:(id)arg1 ;
-(int)_cacheStateFromEvent:(id)arg1 ;
@end

