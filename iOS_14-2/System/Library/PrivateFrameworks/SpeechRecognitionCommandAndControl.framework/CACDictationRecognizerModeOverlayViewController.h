/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CACViewController.h>

@interface CACDictationRecognizerModeOverlayViewController : UIViewController <CACViewController>

@property (nonatomic,readonly) long long zOrder; 
@property (nonatomic,readonly) BOOL isOverlay; 
-(long long)zOrder;
-(BOOL)isOverlay;
-(void)setImageRect:(CGRect)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)loadView;
-(void)setDictationRecognizerMode:(int)arg1 ;
@end

