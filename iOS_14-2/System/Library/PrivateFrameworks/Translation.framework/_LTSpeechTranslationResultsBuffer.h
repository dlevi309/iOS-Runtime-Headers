/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <libobjc.A.dylib/_LTSpeechTranslationDelegate.h>

@protocol _LTSpeechTranslationDelegate;
@class NSMutableDictionary, _LTTranslationResult, NSError, NSString;

@interface _LTSpeechTranslationResultsBuffer : NSObject <_LTSpeechTranslationDelegate> {

	BOOL _isBuffering;
	NSMutableDictionary* _lastASRResults;
	_LTTranslationResult* _translationResult;
	BOOL _didFinish;
	NSError* _error;
	id<_LTSpeechTranslationDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_LTSpeechTranslationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<_LTSpeechTranslationDelegate>)delegate;
-(BOOL)hasFailed;
-(void)setDelegate:(id<_LTSpeechTranslationDelegate>)arg1 ;
-(BOOL)hasResults;
-(void)stopBuffering;
-(void)speechRecognitionResult:(id)arg1 ;
-(void)translatorDidTranslate:(id)arg1 ;
-(void)translationDidFinishWithError:(id)arg1 ;
@end

