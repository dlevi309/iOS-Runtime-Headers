/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

