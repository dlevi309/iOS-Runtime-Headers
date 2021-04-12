/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCAudioPowerLevelMonitorDelegate;
@class NSObject;

@interface VCAudioPowerLevelMonitor : NSObject {

	unsigned startDetectRemoteAudioLowPowerTime;
	float audioPowerThreshold;
	unsigned audioLowPowerTimeInterval;
	BOOL isAudioPowerBelowThreshold;
	BOOL isAudioPowerMovingAverage;
	float audioPowerMovingAverageCoefficient;
	float currentAudioAverage;
	NSObject*<VCAudioPowerLevelMonitorDelegate> delegate;

}

@property (assign,nonatomic) NSObject*<VCAudioPowerLevelMonitorDelegate> delegate; 
-(id)init;
-(NSObject*<VCAudioPowerLevelMonitorDelegate>)delegate;
-(void)setDelegate:(NSObject*<VCAudioPowerLevelMonitorDelegate>)arg1 ;
-(void)detectRemoteAveragePowerLevel:(float)arg1 timestamp:(unsigned)arg2 ;
@end

