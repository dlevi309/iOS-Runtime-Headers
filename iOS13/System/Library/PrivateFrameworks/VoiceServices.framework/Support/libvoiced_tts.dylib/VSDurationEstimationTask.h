/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/VSSpeechTaskProtocol.h>

@class VSSpeechRequest, NSError, VSDeviceTTSCore, NSString;

@interface VSDurationEstimationTask : NSOperation <VSSpeechTaskProtocol> {

	VSSpeechRequest* _request;
	NSError* _error;
	double _estimatedDuration;
	VSDeviceTTSCore* _deviceCore;

}

@property (nonatomic,retain) VSDeviceTTSCore * deviceCore;              //@synthesize deviceCore=_deviceCore - In the implementation block
@property (nonatomic,retain) VSSpeechRequest * request;                 //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSError * error;                           //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) double estimatedDuration;                //@synthesize estimatedDuration=_estimatedDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shortTermCachedEngines;
+(id)shortTermCachedEngineForVoice:(id)arg1 voiceResource:(id)arg2 ;
-(id)init;
-(id)delegate;
-(NSError *)error;
-(void)cancel;
-(void)resume;
-(void)main;
-(void)setError:(NSError *)arg1 ;
-(void)suspend;
-(void)setRequest:(VSSpeechRequest *)arg1 ;
-(VSSpeechRequest *)request;
-(id)initWithRequest:(id)arg1 ;
-(double)estimatedDuration;
-(id)md5hash;
-(VSDeviceTTSCore *)deviceCore;
-(void)setDeviceCore:(VSDeviceTTSCore *)arg1 ;
@end

