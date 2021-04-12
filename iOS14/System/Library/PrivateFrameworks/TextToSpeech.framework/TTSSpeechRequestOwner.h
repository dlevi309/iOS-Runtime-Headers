/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
*/

#import <TextToSpeech/TextToSpeech-Structs.h>
#import <libobjc.A.dylib/TTSSpeechRequestDelegate.h>

@protocol TTSSpeechConnectionDelegate, TTSSpeechService;
@class TTSSpeechRequest, NSString;

@interface TTSSpeechRequestOwner : NSObject <TTSSpeechRequestDelegate> {

	id<TTSSpeechConnectionDelegate> _delegate;
	TTSSpeechRequest* _request;
	id<TTSSpeechService> _speechService;

}

@property (assign,nonatomic,__weak) id<TTSSpeechService> speechService;                    //@synthesize speechService=_speechService - In the implementation block
@property (assign,nonatomic,__weak) id<TTSSpeechConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) TTSSpeechRequest * request;                                 //@synthesize request=_request - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startSpeechRequest:(id)arg1 ;
-(BOOL)isSystemSpeakingOnBehalfOfCurrentConnection;
-(void)continueCurrentSpeechRequest;
-(id)init;
-(id<TTSSpeechConnectionDelegate>)delegate;
-(TTSSpeechRequest *)request;
-(void)_setRequest:(id)arg1 ;
-(void)setDelegate:(id<TTSSpeechConnectionDelegate>)arg1 ;
-(void)dealloc;
-(oneway void)speechRequestDidStart:(id)arg1 forService:(id)arg2 ;
-(oneway void)speechRequestDidPause:(id)arg1 forService:(id)arg2 ;
-(oneway void)speechRequestDidContinue:(id)arg1 forService:(id)arg2 ;
-(oneway void)speechRequest:(id)arg1 withMark:(long long)arg2 didStartForRange:(NSRange)arg3 forService:(id)arg4 ;
-(oneway void)speechRequest:(id)arg1 didStopWithSuccess:(BOOL)arg2 phonemesSpoken:(id)arg3 forService:(id)arg4 error:(id)arg5 ;
-(oneway void)speechRequest:(id)arg1 didSynthesizeSilentlyToURL:(id)arg2 ;
-(id)availableVoicesForLanguageCode:(id)arg1 queryingMobileAssets:(BOOL)arg2 ;
-(id)initWithSpeechService:(id)arg1 ;
-(void)stopCurrentSpeechRequestAtMark:(long long)arg1 waitUntilStopped:(BOOL)arg2 ;
-(void)pauseCurrentSpeechRequestAtMark:(long long)arg1 waitUntilPaused:(BOOL)arg2 ;
-(void)setSpeechService:(id<TTSSpeechService>)arg1 ;
-(id<TTSSpeechService>)speechService;
@end

