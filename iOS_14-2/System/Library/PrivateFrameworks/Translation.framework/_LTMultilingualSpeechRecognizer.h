/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/


@class NSDictionary;

@interface _LTMultilingualSpeechRecognizer : NSObject {

	NSDictionary* _recognizers;

}
+(void)initialize;
-(id)initWithModelURLs:(id)arg1 modelVersions:(id)arg2 ;
-(void)cancelRecognition;
-(void)startRecognitionForLocale:(id)arg1 autoEndpoint:(BOOL)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)addSpeechAudioData:(id)arg1 ;
-(void)endAudio;
@end

