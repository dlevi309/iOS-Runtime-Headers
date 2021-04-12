/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXMOutputComponent.h>
#import <libobjc.A.dylib/AVSpeechSynthesizerDelegate.h>

@class AVSpeechSynthesizer, NSString;

@interface AXMSpeechComponent : AXMOutputComponent <AVSpeechSynthesizerDelegate> {

	AVSpeechSynthesizer* _synthesizer;
	/*^block*/id _currentRequestCompletionBlock;

}

@property (nonatomic,retain) AVSpeechSynthesizer * synthesizer;              //@synthesize synthesizer=_synthesizer - In the implementation block
@property (nonatomic,copy) id currentRequestCompletionBlock;                 //@synthesize currentRequestCompletionBlock=_currentRequestCompletionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSupported;
-(id)init;
-(BOOL)canHandleRequest:(id)arg1 ;
-(void)speechSynthesizer:(id)arg1 didStartSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didPauseSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didContinueSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2 ;
-(void)setSynthesizer:(AVSpeechSynthesizer *)arg1 ;
-(AVSpeechSynthesizer *)synthesizer;
-(id)currentRequestCompletionBlock;
-(void)setCurrentRequestCompletionBlock:(id)arg1 ;
-(void)handleRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)stopSpeakingImmediately;
-(void)stopSpeakingAtNextWord;
@end

