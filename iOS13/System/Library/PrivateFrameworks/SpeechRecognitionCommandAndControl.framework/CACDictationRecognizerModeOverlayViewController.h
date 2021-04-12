/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CACViewController.h>

@interface CACDictationRecognizerModeOverlayViewController : UIViewController <CACViewController>

@property (nonatomic,readonly) long long zOrder; 
@property (nonatomic,readonly) BOOL isOverlay; 
-(void)loadView;
-(BOOL)_canShowWhileLocked;
-(void)setImageRect:(CGRect)arg1 ;
-(BOOL)isOverlay;
-(long long)zOrder;
-(void)setDictationRecognizerMode:(int)arg1 ;
@end

