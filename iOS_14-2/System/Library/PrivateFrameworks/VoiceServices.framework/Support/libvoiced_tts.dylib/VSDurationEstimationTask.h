/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/VSSpeechTaskProtocol.h>

@class VSSpeechRequest, NSError, VSInstrumentMetrics, VSDeviceTTSCore, NSString;

@interface VSDurationEstimationTask : NSOperation <VSSpeechTaskProtocol> {

	VSSpeechRequest* _request;
	NSError* _error;
	double _estimatedDuration;
	VSInstrumentMetrics* _instrumentMetrics;
	VSDeviceTTSCore* _deviceCore;

}

@property (nonatomic,retain) VSDeviceTTSCore * deviceCore;                         //@synthesize deviceCore=_deviceCore - In the implementation block
@property (nonatomic,retain) VSSpeechRequest * request;                            //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSError * error;                                      //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) double estimatedDuration;                           //@synthesize estimatedDuration=_estimatedDuration - In the implementation block
@property (nonatomic,retain) VSInstrumentMetrics * instrumentMetrics;              //@synthesize instrumentMetrics=_instrumentMetrics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shortTermCachedEngines;
+(id)shortTermCachedEngineForVoice:(id)arg1 voiceResource:(id)arg2 ;
-(void)suspend;
-(id)init;
-(void)setRequest:(VSSpeechRequest *)arg1 ;
-(id)delegate;
-(void)setError:(NSError *)arg1 ;
-(VSSpeechRequest *)request;
-(NSError *)error;
-(void)main;
-(id)initWithRequest:(id)arg1 ;
-(double)estimatedDuration;
-(void)cancel;
-(void)resume;
-(VSInstrumentMetrics *)instrumentMetrics;
-(id)taskHash;
-(VSDeviceTTSCore *)deviceCore;
-(void)setInstrumentMetrics:(VSInstrumentMetrics *)arg1 ;
-(void)setDeviceCore:(VSDeviceTTSCore *)arg1 ;
@end

