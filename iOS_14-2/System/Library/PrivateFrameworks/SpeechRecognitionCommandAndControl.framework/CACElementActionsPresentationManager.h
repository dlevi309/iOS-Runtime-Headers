/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
#import <SpeechRecognitionCommandAndControl/CACSimpleContentViewManager.h>
#import <libobjc.A.dylib/CACElementActionsPresentationViewControllerDelegate.h>

@interface CACElementActionsPresentationManager : CACSimpleContentViewManager <CACElementActionsPresentationViewControllerDelegate>
+(BOOL)canShowElementActionsForElement:(id)arg1 ;
-(BOOL)isOverlay;
-(void)showElementActionsForElement:(id)arg1 usingPortraitUpRect:(CGRect)arg2 ;
-(void)elementActionsPresentationViewController:(id)arg1 hideWithCompletion:(/*^block*/id)arg2 ;
@end

