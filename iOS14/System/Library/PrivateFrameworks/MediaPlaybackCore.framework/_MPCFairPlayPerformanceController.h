/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <libobjc.A.dylib/MPCPlaybackEngineEventObserving.h>
#import <libobjc.A.dylib/MPServerObjectDatabaseObserver.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, NSMutableDictionary, MPCPlaybackEngine, NSString;

@interface _MPCFairPlayPerformanceController : NSObject <MPCPlaybackEngineEventObserving, MPServerObjectDatabaseObserver> {

	NSMutableSet* _SAPSignPrewarmingAccounts;
	NSMutableSet* _SAPSignPrewarmedAccounts;
	NSObject*<OS_dispatch_queue> _miniQueue;
	NSMutableSet* _miniSINFEndpointLoadingAccounts;
	NSMutableDictionary* _miniSINFAccounts;
	BOOL _scheduledMiniSINFs;
	MPCPlaybackEngine* _playbackEngine;

}

@property (nonatomic,__weak,readonly) MPCPlaybackEngine * playbackEngine;              //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPlaybackEngine:(id)arg1 ;
-(void)engine:(id)arg1 didChangeAccounts:(id)arg2 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(MPCPlaybackEngine *)playbackEngine;
-(void)database:(id)arg1 didFinishImportRequest:(id)arg2 ;
-(void)dealloc;
-(void)_prewarmSAPSigningForAccount:(id)arg1 ;
-(void)_optimisticallyFetchLeaseForAccount:(id)arg1 ;
-(void)_prewarmMiniSINFEndpointForAccount:(id)arg1 ;
-(void)scheduleMiniSINFFetch;
-(void)_fetchMiniSINFsWithCompletion:(/*^block*/id)arg1 ;
@end

