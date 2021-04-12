/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <libobjc.A.dylib/TICandidateHandler.h>

@protocol TIClientProxy, TIKeyboardInputManagerLogging;
@class TIKeyboardInputManagerBase, TICandidateRequestToken, TIKeyboardState;

@interface TIStreamingCandidateHandler : NSObject <TICandidateHandler> {

	unsigned long long _status;
	BOOL _didCallHandler;
	TIKeyboardInputManagerBase* _inputManager;
	id<TIClientProxy> _clientProxy;
	TICandidateRequestToken* _requestToken;
	/*^block*/id _candidateHandler;
	TIKeyboardState* _keyboardState;
	id<TIKeyboardInputManagerLogging> _logger;

}

@property (nonatomic,retain) TIKeyboardState * keyboardState;                              //@synthesize keyboardState=_keyboardState - In the implementation block
@property (assign,nonatomic,__weak) id<TIKeyboardInputManagerLogging> logger;              //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) id<TIClientProxy> clientProxy;                              //@synthesize clientProxy=_clientProxy - In the implementation block
@property (nonatomic,readonly) TICandidateRequestToken * requestToken;                     //@synthesize requestToken=_requestToken - In the implementation block
@property (nonatomic,copy,readonly) id candidateHandler;                                   //@synthesize candidateHandler=_candidateHandler - In the implementation block
@property (nonatomic,readonly) BOOL asynchronous; 
-(void)dealloc;
-(void)open;
-(void)close;
-(id<TIKeyboardInputManagerLogging>)logger;
-(void)setLogger:(id<TIKeyboardInputManagerLogging>)arg1 ;
-(TIKeyboardState *)keyboardState;
-(void)setKeyboardState:(TIKeyboardState *)arg1 ;
-(TICandidateRequestToken *)requestToken;
-(BOOL)asynchronous;
-(id<TIClientProxy>)clientProxy;
-(void)pushCandidates:(id)arg1 ;
-(id)candidateHandler;
-(id)initWithClientProxy:(id)arg1 keyboardState:(id)arg2 requestToken:(id)arg3 logger:(id)arg4 inputManager:(id)arg5 candidateHandler:(/*^block*/id)arg6 ;
@end

