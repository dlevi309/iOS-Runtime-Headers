/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,readonly) void* realtimeContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void*)realtimeContext;
-(id)initWithBinCount:(unsigned short)arg1 refreshRate:(double)arg2 delegate:(id)arg3 ;
-(void)registerNewAudioPowerSpectrumForStreamToken:(id)arg1 spectrumSource:(id)arg2 ;
-(void)releaseAudioPowerSpectrumForStreamToken:(id)arg1 ;
-(void)unregisterAllStreams;
@end

