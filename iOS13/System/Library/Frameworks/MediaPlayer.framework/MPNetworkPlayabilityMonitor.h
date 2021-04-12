/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/ICEnvironmentMonitorObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface MPNetworkPlayabilityMonitor : NSObject <ICEnvironmentMonitorObserver> {

	long long _effectiveNetworkTypeForCloudPlayback;
	long long _networkType;
	double _lastAverageBitrate;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) double lastAverageBitrate; 
@property (nonatomic,readonly) long long networkType; 
@property (nonatomic,readonly) long long effectiveNetworkTypeForPlayback; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedNetworkPlayabilityMonitor;
-(id)init;
-(long long)networkType;
-(void)environmentMonitorDidChangeNetworkType:(id)arg1 ;
-(void)adjustEffectiveNetworkTypeUsingPreviouslyPlayedItem:(id)arg1 ;
-(long long)effectiveNetworkTypeForPlayback;
-(double)lastAverageBitrate;
-(long long)_onQueueEffectiveNetworkTypeForAverageBitrate:(double)arg1 ;
-(void)_onQueueUpdateEffectiveNetworkTypesForPlayback;
@end

