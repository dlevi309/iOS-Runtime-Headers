/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
*/


@class AUPasscodeDecoder, AUAudioUnitOfflineProcessor, NSMutableArray;

@interface APCDecoderProcessor : NSObject {

	AUPasscodeDecoder* _decoderAU;
	AUAudioUnitOfflineProcessor* _processor;
	NSMutableArray* _payloadsReceived;

}
-(id)run;
-(BOOL)getResultData:(id*)arg1 ;
-(id)initWithInputURL:(id)arg1 codecConfig:(id)arg2 resultData:(id)arg3 error:(id*)arg4 ;
-(id)initWithInputURL:(id)arg1 codecConfig:(id)arg2 error:(id*)arg3 ;
@end

