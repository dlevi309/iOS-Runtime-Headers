/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCObject.h>
#import <libobjc.A.dylib/VCAudioPowerSpectrumProtocol.h>

@class NSString;

@interface VCAudioPowerSpectrumMeter : VCObject <VCAudioPowerSpectrumProtocol> {

	unsigned short _audioSpectrumBinCount;
	VCAudioPowerSpectrumMeterRealtimeContext* _realtimeContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) void* realtimeContext; 
-(void)dealloc;
-(void*)realtimeContext;
-(id)initWithBinCount:(unsigned short)arg1 refreshRate:(double)arg2 delegate:(id)arg3 ;
-(void)registerNewAudioPowerSpectrumForStreamToken:(id)arg1 spectrumSource:(id)arg2 ;
-(void)releaseAudioPowerSpectrumForStreamToken:(id)arg1 ;
-(void)unregisterAllStreams;
@end

