/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/


@protocol _LTTranslationEngine <NSObject>
@optional
-(void)setLanguagesRecognized:(id)arg1;
-(void)startTextToSpeechTranslationWithContext:(id)arg1 text:(id)arg2 delegate:(id)arg3;

@required
-(void)endpoint;
-(void)addSpeechAudioData:(id)arg1;
-(BOOL)translatesPair:(id)arg1;
-(void)preheatAsynchronously:(BOOL)arg1 withContext:(id)arg2;
-(void)translateSentence:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3;
-(void)translate:(id)arg1 withContext:(id)arg2 paragraphResult:(/*^block*/id)arg3 completion:(/*^block*/id)arg4;
-(void)endAudio;
-(void)startSpeechTranslationWithContext:(id)arg1 delegate:(id)arg2;
-(void)cancelSpeechTranslation;
-(void)speak:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3;

@end

