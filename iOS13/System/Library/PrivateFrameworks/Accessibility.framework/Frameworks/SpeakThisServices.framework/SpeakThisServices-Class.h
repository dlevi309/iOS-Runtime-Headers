/*
* Generated on Monday, March 1, 2021 at 2:34:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/SpeakThisServices.framework/SpeakThisServices
*/

#import <SpeakThisServices/SpeakThisServices-Structs.h>
#import <libobjc.A.dylib/AXUIClientDelegate.h>

@class AXUIClient, NSString;

@interface SpeakThisServices : NSObject <AXUIClientDelegate> {

	AXUIClient* _client;
	BOOL _springBoardReady;
	BOOL _triedToShowSpeechControllerBeforeSBReady;
	/*^block*/id _errorHandlerFromPriorShowControllerAttempt;

}

@property (assign,nonatomic) BOOL springBoardReady;                                      //@synthesize springBoardReady=_springBoardReady - In the implementation block
@property (assign,nonatomic) BOOL triedToShowSpeechControllerBeforeSBReady;              //@synthesize triedToShowSpeechControllerBeforeSBReady=_triedToShowSpeechControllerBeforeSBReady - In the implementation block
@property (assign,nonatomic) id errorHandlerFromPriorShowControllerAttempt;              //@synthesize errorHandlerFromPriorShowControllerAttempt=_errorHandlerFromPriorShowControllerAttempt - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)speakThisMessageKeyKBFrame;
-(id)init;
-(id)_client;
-(id)_clientIdentifier;
-(void)pauseSpeaking:(/*^block*/id)arg1 ;
-(void)resumeSpeaking:(/*^block*/id)arg1 ;
-(void)_checkSpringBoardStarted;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1 ;
-(void)rewind:(/*^block*/id)arg1 ;
-(id)_descriptionForErrorCode:(long long)arg1 ;
-(BOOL)springBoardReady;
-(void)setSpringBoardReady:(BOOL)arg1 ;
-(void)_sendMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)_sendMessageWithIdentifier:(unsigned long long)arg1 errorHandler:(/*^block*/id)arg2 ;
-(BOOL)triedToShowSpeechControllerBeforeSBReady;
-(id)errorHandlerFromPriorShowControllerAttempt;
-(void)showSpeechController:(/*^block*/id)arg1 ;
-(void)setTriedToShowSpeechControllerBeforeSBReady:(BOOL)arg1 ;
-(void)setErrorHandlerFromPriorShowControllerAttempt:(id)arg1 ;
-(id)_descriptionForMessageIdentifier:(unsigned long long)arg1 ;
-(void)speakThisWithOptions:(long long)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)speakThisWithOptions:(long long)arg1 useAppAtPoint:(CGPoint)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)didCancelSpeakThisErrorHandler:(/*^block*/id)arg1 ;
-(void)toggleSpeaking:(/*^block*/id)arg1 ;
-(void)speakFaster:(/*^block*/id)arg1 ;
-(void)speakSlower:(/*^block*/id)arg1 ;
-(void)fastForward:(/*^block*/id)arg1 ;
-(void)hideSpeechController:(/*^block*/id)arg1 ;
-(void)keyboardFrameWillUpdate:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
@end

