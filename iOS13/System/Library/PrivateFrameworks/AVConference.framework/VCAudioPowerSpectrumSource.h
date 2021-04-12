/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)invalidate;
-(long long)streamToken;
-(id)initWithStreamToken:(long long)arg1 delegate:(id)arg2 ;
-(VCAudioPowerSpectrumSourceRealtimeContext*)realtimeContext;
-(void)cleanupAudioPowerSpectrumSinks;
-(void)cleanupQueue:(opaqueCMSimpleQueue*)arg1 ;
-(void)pushAudioSamples:(opaqueVCAudioBufferListRef)arg1 ;
-(void)registerAudioPowerSpectrumSink:(id)arg1 callback:(/*function pointer*/void*)arg2 ;
-(void)unregisterAudioPowerSpectrumSink:(id)arg1 ;
@end

