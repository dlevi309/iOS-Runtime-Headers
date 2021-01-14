/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUIActivation.framework/SiriUIActivation
*/

#import <SiriUIActivation/SiriUIActivation-Structs.h>
#import <SiriUIActivation/SiriPresentationViewController.h>

@interface SiriPresentationPineBoardMainScreenViewController : SiriPresentationViewController {

	double _buttonDownTimestamp;

}

@property (assign,setter=_setButtonDownTimestamp:,getter=_buttonDownTimestamp,nonatomic) double buttonDownTimestamp;                               //@synthesize buttonDownTimestamp=_buttonDownTimestamp - In the implementation block
@property (assign,nonatomic,__weak) id<SiriPresentationPineBoardMainScreenViewControllerDelegate> siriPresentationControllerDelegate; 
-(id)initWithIdentifier:(long long)arg1 hostedPresentationFrame:(CGRect)arg2 ;
-(void)setNextAssistantRecognitionStrings:(id)arg1 ;
-(void)setNextVoiceRecognitionAudioInputPaths:(id)arg1 ;
-(void)siriViewController:(id)arg1 didChangePresentationPeekMode:(unsigned long long)arg2 ;
-(void)siriViewController:(id)arg1 sceneDidActivateWithIdentifier:(id)arg2 ;
-(void)siriViewControllerDidDeactivateScene:(id)arg1 ;
-(id)siriViewController:(id)arg1 willStartRequestWithOptions:(id)arg2 ;
-(void)siriViewControllerDidChangeToListeningMode:(id)arg1 ;
-(double)_buttonDownTimestamp;
-(void)_prewarmFlamesWithPresentationFrame:(CGRect)arg1 ;
-(double)_thresholdForTriggeringABCInLaunch;
-(BOOL)_shouldShowSetupViewController;
-(void)_setButtonDownTimestamp:(double)arg1 ;
@end

