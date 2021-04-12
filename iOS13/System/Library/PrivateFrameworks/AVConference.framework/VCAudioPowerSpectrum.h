/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) void* realtimeContext; 
-(void)dealloc;
-(NSString *)description;
-(long long)streamToken;
-(void*)realtimeContext;
-(id)initWithBinCount:(unsigned)arg1 streamToken:(long long)arg2 sinkContext:(void*)arg3 sinkCallback:(/*function pointer*/void*)arg4 ;
-(VCRange)frequencyRange;
@end

