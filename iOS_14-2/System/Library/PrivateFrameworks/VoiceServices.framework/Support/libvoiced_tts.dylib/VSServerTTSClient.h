/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/


@interface VSServerTTSClient : NSObject
+(BOOL)shouldUseServerTTSForRequest:(id)arg1 ;
-(void)aceStartSynthesisRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)queryVoices:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)ospreyStartSynthesisRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)ospreyStartStreamingRequest:(id)arg1 dataHandler:(/*^block*/id)arg2 metaInfoHandler:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(id)genderStringFromVSGender:(long long)arg1 ;
@end

