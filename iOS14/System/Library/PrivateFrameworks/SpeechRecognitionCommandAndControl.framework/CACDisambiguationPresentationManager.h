/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <SpeechRecognitionCommandAndControl/CACSimpleContentViewManager.h>
#import <libobjc.A.dylib/CACContactDisambiguationPresentationViewControllerDelegate.h>

@interface CACDisambiguationPresentationManager : CACSimpleContentViewManager <CACContactDisambiguationPresentationViewControllerDelegate>
-(BOOL)isOverlay;
-(void)showWithDisambiguationItems:(id)arg1 alertTitle:(id)arg2 ;
-(void)showWithDisambiguationItems:(id)arg1 alertTitle:(id)arg2 alertMessage:(id)arg3 ;
-(void)dialDiambiguationPresentationViewController:(id)arg1 hideWithCompletion:(/*^block*/id)arg2 ;
-(void)showWithDisambiguationItems:(id)arg1 ;
@end

