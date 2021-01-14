/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetCacheServicesExtensions.framework/AssetCacheServicesExtensions
*/


@protocol AssetCacheServicesReporterDelegate, OS_dispatch_queue, OS_os_log;
@class NSObject, NSMutableDictionary, NSMutableSet;

@interface AssetCacheServicesReporter : NSObject {

	id<AssetCacheServicesReporterDelegate> _weakDelegate;
	NSObject*<OS_dispatch_queue> _weakDelegateQueue;
	NSObject*<OS_os_log> _logHandle;
	NSMutableDictionary* _results;
	NSMutableSet* _allServerHostPorts;

}

@property (__weak) id<AssetCacheServicesReporterDelegate> weakDelegate;              //@synthesize weakDelegate=_weakDelegate - In the implementation block
@property (__weak) NSObject*<OS_dispatch_queue> weakDelegateQueue;                   //@synthesize weakDelegateQueue=_weakDelegateQueue - In the implementation block
@property (retain) NSObject*<OS_os_log> logHandle;                                   //@synthesize logHandle=_logHandle - In the implementation block
@property (retain) NSMutableDictionary * results;                                    //@synthesize results=_results - In the implementation block
@property (retain) NSMutableSet * allServerHostPorts;                                //@synthesize allServerHostPorts=_allServerHostPorts - In the implementation block
-(id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 ;
-(void)setResults:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)results;
-(void)start;
-(void)setLogHandle:(NSObject*<OS_os_log>)arg1 ;
-(NSObject*<OS_os_log>)logHandle;
-(id<AssetCacheServicesReporterDelegate>)weakDelegate;
-(void)setWeakDelegate:(id<AssetCacheServicesReporterDelegate>)arg1 ;
-(void)setWeakDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAllServerHostPorts:(NSMutableSet *)arg1 ;
-(void)reportPublicIPAddress;
-(void)reportMightHaveWithKeyPath:(id)arg1 ;
-(void)reportCachedServersWithKeyPath:(id)arg1 ;
-(void)reportCachedPublicIPAddressRangesAndFavoredServerRangesWithKeyPath:(id)arg1 ;
-(void)reportFreshServersWithKeyPath:(id)arg1 ;
-(void)reportFreshPublicIPAddressRangesAndFavoredServerRangesWithKeyPath:(id)arg1 ;
-(void)reportReachability;
-(void)didFinishWithResults:(id)arg1 ;
-(id)serverSortInfoForHostPort:(id)arg1 rank:(id)arg2 ;
-(id)sortedHostPorts:(id)arg1 usingSortInfo:(id)arg2 ;
-(void)willStartGatheringResultsForKeyPath:(id)arg1 ;
-(void)didGatherResults:(id)arg1 forKeyPath:(id)arg2 ;
-(id)keyPath:(id)arg1 byAppendingKey:(id)arg2 ;
-(void)reportServersWithKeyPath:(id)arg1 generateOptions:(/*^block*/id)arg2 ;
-(id)locateServersWithOptions:(id)arg1 ;
-(NSMutableSet *)allServerHostPorts;
-(void)reportPublicIPAddressRangesWithKeyPath:(id)arg1 andFavoredServerRangesWithKeyPath:(id)arg2 generateOptions:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)weakDelegateQueue;
-(id)prettyRanges:(id)arg1 ;
-(BOOL)doRanges:(id)arg1 containAddress:(id)arg2 ;
-(id)sortedHostPorts:(id)arg1 ;
@end

