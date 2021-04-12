/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCAudioPowerSpectrumProtocol.h>

@class NSString;

@interface VCAudioPowerSpectrum : NSObject <VCAudioPowerSpectrumProtocol> {

	long long _streamToken;
	VCAudioPowerSpectrumRealtimeContext* _realtimeContext;

}

@property (nonatomic,readonly) VCRange frequencyRange; 
@property (nonatomic,readonly) long long streamToken;               //@synthesize streamToken=_streamToken - In the implementation block
@property (nonatomic,readonly) void* realtimeContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(long long)streamToken;
-(void)dealloc;
-(void*)realtimeContext;
-(id)initWithBinCount:(unsigned)arg1 streamToken:(long long)arg2 sinkContext:(void*)arg3 sinkCallback:(/*function pointer*/void*)arg4 ;
-(VCRange)frequencyRange;
@end

