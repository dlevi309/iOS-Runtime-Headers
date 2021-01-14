/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <SpeechRecognitionCommandAndControl/CACSimpleContentViewManager.h>

@protocol CACDictationRecognizerModeOverlayManagerDelegate;
@interface CACDictationRecognizerModeOverlayManager : CACSimpleContentViewManager {

	id<CACDictationRecognizerModeOverlayManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CACDictationRecognizerModeOverlayManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<CACDictationRecognizerModeOverlayManagerDelegate>)delegate;
-(void)setDelegate:(id<CACDictationRecognizerModeOverlayManagerDelegate>)arg1 ;
-(BOOL)isOverlay;
-(void)showOverlayForDictiationRecognizerMode;
@end

