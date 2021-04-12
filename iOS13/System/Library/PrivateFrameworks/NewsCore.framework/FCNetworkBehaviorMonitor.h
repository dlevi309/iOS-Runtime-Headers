/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCNetworkReachabilityObserving.h>
#import <libobjc.A.dylib/FCOperationThrottlerDelegate.h>

@protocol OS_dispatch_queue, FCOperationThrottler;
@class NSObject, NSMutableArray, NSMutableIndexSet, FCKeyValueStore, NSArray, NSString;

@interface FCNetworkBehaviorMonitor : NSObject <FCNetworkReachabilityObserving, FCOperationThrottlerDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableArray* _sessions;
	NSMutableIndexSet* _sessionIDsThisLaunch;
	NSMutableArray* _events;
	FCKeyValueStore* _localStore;
	id<FCOperationThrottler> _saveThrottler;

}

@property (nonatomic,copy,readonly) NSArray * sessions; 
@property (nonatomic,copy,readonly) NSArray * networkEvents; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSArray *)sessions;
-(NSArray *)networkEvents;
-(id)initWithCacheDirectory:(id)arg1 ;
-(void)operationThrottlerPerformOperation:(id)arg1 ;
-(void)_visitEventGroupsFromDate:(id)arg1 toDate:(id)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)_shouldFilterNetworkEvent:(id)arg1 ;
-(void)_sanitizeNetworkEvent:(id)arg1 ;
-(id)_respondingPOPFromEvent:(id)arg1 ;
-(int)_cacheStateFromEvent:(id)arg1 ;
-(void)wifiReachabilityDidChange:(id)arg1 ;
-(id)initTransient;
-(void)populateTelemetry:(id)arg1 withNetworkEventsFromDate:(id)arg2 toDate:(id)arg3 ;
-(void)logNetworkEvent:(id)arg1 ;
@end

