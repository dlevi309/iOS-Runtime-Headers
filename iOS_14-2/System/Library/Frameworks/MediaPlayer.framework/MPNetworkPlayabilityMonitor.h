/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)networkType;
-(double)lastAverageBitrate;
-(void)adjustEffectiveNetworkTypeUsingPreviouslyPlayedItem:(id)arg1 ;
-(long long)effectiveNetworkTypeForPlayback;
-(long long)_onQueueEffectiveNetworkTypeForAverageBitrate:(double)arg1 ;
-(void)_onQueueUpdateEffectiveNetworkTypesForPlayback;
-(id)init;
-(void)environmentMonitorDidChangeNetworkType:(id)arg1 ;
@end

