/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <libobjc.A.dylib/_LTSpeechTranslationDelegate.h>

@protocol OS_dispatch_queue, _LTTranslationEngine, _LTSpeechTranslationDelegate;
@class NSObject, NSUUID, _LTLanguageDetector, _LTHybridEndpointer, NSString;

@interface _LTServerSpeechSession : NSObject <_LTSpeechTranslationDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _expectFinalLidResult;
	BOOL _sentFinalLidResult;
	BOOL _translationFinishedWithoutError;
	NSUUID* _sessionID;
	id<_LTTranslationEngine> _engine;
	/*^block*/id _completionHandler;
	_LTLanguageDetector* _languageDetector;
	_LTHybridEndpointer* _endpointer;
	id<_LTSpeechTranslationDelegate> _delegate;

}

@property (nonatomic,retain) id<_LTTranslationEngine> engine;                        //@synthesize engine=_engine - In the implementation block
@property (nonatomic,retain) id<_LTSpeechTranslationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSUUID * sessionID;                                     //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,copy) id completionHandler;                                     //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) _LTLanguageDetector * languageDetector;               //@synthesize languageDetector=_languageDetector - In the implementation block
@property (nonatomic,readonly) _LTHybridEndpointer * endpointer;                     //@synthesize endpointer=_endpointer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<_LTTranslationEngine>)engine;
-(void)setEngine:(id<_LTTranslationEngine>)arg1 ;
-(NSUUID *)sessionID;
-(void)setSessionID:(NSUUID *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id<_LTSpeechTranslationDelegate>)delegate;
-(void)startSpeechTranslationWithContext:(id)arg1 ;
-(id)completionHandler;
-(void)startTextToSpeechTranslationWithContext:(id)arg1 text:(id)arg2 ;
-(void)setDelegate:(id<_LTSpeechTranslationDelegate>)arg1 ;
-(void)speechRecognitionResult:(id)arg1 ;
-(void)translatorDidTranslate:(id)arg1 ;
-(void)translationDidFinishWithError:(id)arg1 ;
-(void)languageDetectionResult:(id)arg1 ;
-(void)languageDetectionCompleted;
-(void)hybridEndpointerFoundEndpoint;
-(void)serverEndpointerFeatures:(id)arg1 locale:(id)arg2 ;
-(void)addSpeechAudioData:(id)arg1 ;
-(_LTHybridEndpointer *)endpointer;
-(id)initWithEngine:(id)arg1 delegate:(id)arg2 ;
-(void)delegateTranslationDidFinishWithError:(id)arg1 ;
-(_LTLanguageDetector *)languageDetector;
-(void)endAudio;
-(void)cancel;
@end

