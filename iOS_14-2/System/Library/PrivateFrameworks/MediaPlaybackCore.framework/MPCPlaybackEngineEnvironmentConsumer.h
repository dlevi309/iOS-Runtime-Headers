/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/MPCPlaybackEngineEventObserving.h>
#import <libobjc.A.dylib/ICEnvironmentMonitorObserver.h>
#import <libobjc.A.dylib/MPCPlaybackEngineEventConsumer.h>

@protocol MPCPlaybackEngineEventStreamSubscription;
@class MPCPlaybackEngine, NSString;

@interface MPCPlaybackEngineEnvironmentConsumer : NSObject <MPCPlaybackEngineEventObserving, ICEnvironmentMonitorObserver, MPCPlaybackEngineEventConsumer> {

	MPCPlaybackEngine* _playbackEngine;
	id<MPCPlaybackEngineEventStreamSubscription> _subscription;

}

@property (nonatomic,readonly) id<MPCPlaybackEngineEventStreamSubscription> subscription;              //@synthesize subscription=_subscription - In the implementation block
@property (nonatomic,__weak,readonly) MPCPlaybackEngine * playbackEngine;                              //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifier;
-(id)initWithPlaybackEngine:(id)arg1 ;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg1 ;
-(void)engine:(id)arg1 didChangeAccounts:(id)arg2 ;
-(id<MPCPlaybackEngineEventStreamSubscription>)subscription;
-(void)environmentMonitorDidChangeNetworkType:(id)arg1 ;
-(MPCPlaybackEngine *)playbackEngine;
-(void)subscribeToEventStream:(id)arg1 ;
-(void)unsubscribeFromEventStream:(id)arg1 ;
-(void)_snapshotAccount:(id)arg1 eventType:(id)arg2 atTime:(SCD_Struct_MP9)arg3 ;
-(void)_devicePrivateListeningDidChange:(id)arg1 ;
-(void)_applicationWillTerminate:(id)arg1 ;
-(void)_snapshotDeviceWithEvent:(id)arg1 nudge:(int)arg2 ;
-(void)_snapshotNetworkReachabilityWithEvent:(id)arg1 nudge:(int)arg2 ;
-(void)_snapshotNetworkTypeWithEvent:(id)arg1 nudge:(int)arg2 ;
-(void)_snapshotAccount:(id)arg1 eventType:(id)arg2 event:(id)arg3 nudge:(int)arg4 ;
-(void)_snapshotNetworkReachabilityAtTime:(SCD_Struct_MP9)arg1 ;
-(void)_snapshotNetworkTypeAtTime:(SCD_Struct_MP9)arg1 ;
-(void)_snapshotDeviceAtTime:(SCD_Struct_MP9)arg1 ;
@end

