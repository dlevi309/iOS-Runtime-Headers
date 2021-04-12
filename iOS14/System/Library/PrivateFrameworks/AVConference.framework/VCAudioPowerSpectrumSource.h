/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCObject.h>
#import <libobjc.A.dylib/VCAudioIOSink.h>

@class NSString;

@interface VCAudioPowerSpectrumSource : VCObject <VCAudioIOSink> {

	long long _streamToken;
	VCAudioPowerSpectrumSourceRealtimeContext* _realtimeContext;

}

@property (nonatomic,readonly) long long streamToken;                                                   //@synthesize streamToken=_streamToken - In the implementation block
@property (nonatomic,readonly) VCAudioPowerSpectrumSourceRealtimeContext* realtimeContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStreamToken:(long long)arg1 delegate:(id)arg2 ;
-(long long)streamToken;
-(void)invalidate;
-(void)dealloc;
-(VCAudioPowerSpectrumSourceRealtimeContext*)realtimeContext;
-(void)cleanupAudioPowerSpectrumSinks;
-(void)cleanupQueue:(opaqueCMSimpleQueue*)arg1 ;
-(void)pushAudioSamples:(opaqueVCAudioBufferListRef)arg1 ;
-(void)registerAudioPowerSpectrumSink:(id)arg1 callback:(/*function pointer*/void*)arg2 ;
-(void)unregisterAudioPowerSpectrumSink:(id)arg1 ;
@end

