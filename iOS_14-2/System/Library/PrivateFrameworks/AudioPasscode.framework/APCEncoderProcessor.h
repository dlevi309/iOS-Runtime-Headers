/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
*/


@class AUPasscodeEncoder, AUAudioUnitOfflineProcessor, APCPlayerEmbedInfo;

@interface APCEncoderProcessor : NSObject {

	AUPasscodeEncoder* _encoderAU;
	AUAudioUnitOfflineProcessor* _processor;
	APCPlayerEmbedInfo* _passcodeEmbedInfo;

}
-(void)run;
-(float)evaluateAsset:(id)arg1 ;
-(id)initWithAssetURL:(id)arg1 codecConfig:(id)arg2 payload:(id)arg3 outputURL:(id)arg4 error:(id*)arg5 ;
-(BOOL)getEmbeddingInfo:(id*)arg1 ;
@end

