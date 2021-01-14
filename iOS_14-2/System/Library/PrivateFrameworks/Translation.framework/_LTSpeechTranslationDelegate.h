/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/


@protocol _LTSpeechTranslationDelegate <NSObject>
@optional
-(void)speechRecognitionResult:(id)arg1;
-(void)translatorDidTranslate:(id)arg1;
-(void)translationDidFinishWithError:(id)arg1;
-(void)languageDetectionResult:(id)arg1;
-(void)languageDetectionCompleted;
-(void)hybridEndpointerFoundEndpoint;
-(void)serverEndpointerFeatures:(id)arg1 locale:(id)arg2;
-(void)paragraphTranslation:(id)arg1 result:(id)arg2 error:(id)arg3;
-(void)languageInstallProgressed:(id)arg1 error:(id)arg2;
-(void)cancel;

@end

