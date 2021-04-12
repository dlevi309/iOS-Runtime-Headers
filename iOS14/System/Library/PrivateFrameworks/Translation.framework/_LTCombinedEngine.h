/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <libobjc.A.dylib/_LTSpeechTranslationDelegate.h>
#import <libobjc.A.dylib/_LTTranslationEngine.h>

@protocol _LTSpeechTranslationDelegate, _LTTranslationEngine;
@class _LTSpeechTranslationResultsBuffer, NSString;

@interface _LTCombinedEngine : NSObject <_LTSpeechTranslationDelegate, _LTTranslationEngine> {

	id<_LTSpeechTranslationDelegate> _delegate;
	BOOL _onlineTranslationStarted;
	BOOL _translationEnded;
	BOOL _serverCompleted;
	id<_LTTranslationEngine> _offlineEngine;
	id<_LTTranslationEngine> _onlineEngine;
	_LTSpeechTranslationResultsBuffer* _offlineDelegateBuffer;

}

@property (nonatomic,retain) _LTSpeechTranslationResultsBuffer * offlineDelegateBuffer;              //@synthesize offlineDelegateBuffer=_offlineDelegateBuffer - In the implementation block
@property (nonatomic,retain) id<_LTTranslationEngine> offlineEngine;                                 //@synthesize offlineEngine=_offlineEngine - In the implementation block
@property (nonatomic,retain) id<_LTTranslationEngine> onlineEngine;                                  //@synthesize onlineEngine=_onlineEngine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)endpoint;
-(void)speechRecognitionResult:(id)arg1 ;
-(void)translatorDidTranslate:(id)arg1 ;
-(void)translationDidFinishWithError:(id)arg1 ;
-(void)hybridEndpointerFoundEndpoint;
-(void)serverEndpointerFeatures:(id)arg1 locale:(id)arg2 ;
-(void)addSpeechAudioData:(id)arg1 ;
-(id<_LTTranslationEngine>)offlineEngine;
-(id<_LTTranslationEngine>)onlineEngine;
-(void)setOfflineEngine:(id<_LTTranslationEngine>)arg1 ;
-(void)setOnlineEngine:(id<_LTTranslationEngine>)arg1 ;
-(_LTSpeechTranslationResultsBuffer *)offlineDelegateBuffer;
-(void)setOfflineDelegateBuffer:(_LTSpeechTranslationResultsBuffer *)arg1 ;
-(void)setLanguagesRecognized:(id)arg1 ;
-(BOOL)translatesPair:(id)arg1 ;
-(void)preheatAsynchronously:(BOOL)arg1 withContext:(id)arg2 ;
-(void)translateSentence:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)translate:(id)arg1 withContext:(id)arg2 paragraphResult:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)endAudio;
-(void)startSpeechTranslationWithContext:(id)arg1 delegate:(id)arg2 ;
-(void)cancelSpeechTranslation;
-(void)speak:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)startTextToSpeechTranslationWithContext:(id)arg1 text:(id)arg2 delegate:(id)arg3 ;
@end

