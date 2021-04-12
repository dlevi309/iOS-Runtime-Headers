/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
#import <SpeechRecognitionCommandAndControl/CACSimpleContentViewManager.h>
#import <libobjc.A.dylib/CACCorrectionsPresentationDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class AXElement, NSString;

@interface CACCorrectionPresentationManager : CACSimpleContentViewManager <CACCorrectionsPresentationDelegate, UIPopoverPresentationControllerDelegate> {

	AXElement* _element;

}

@property (nonatomic,retain) AXElement * element;                   //@synthesize element=_element - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)remoteViewType;
+(int)axNotification;
-(AXElement *)element;
-(BOOL)isOverlay;
-(void)setElement:(AXElement *)arg1 ;
-(void)handleAXNotificationData:(void*)arg1 ;
-(void)dismissCorrectionsPresentationViewController:(id)arg1 ;
-(void)correctionsPresentationViewController:(id)arg1 didSelectItemWithText:(id)arg2 ;
-(void)hideIfNeededForElements:(id)arg1 ;
-(void)showCorrectionsForElement:(id)arg1 nBestStrings:(id)arg2 ;
-(void)_showCorrectionsForElement:(id)arg1 fromString:(id)arg2 withAlternatives:(id)arg3 withEmojis:(id)arg4 portraitUpRect:(CGRect)arg5 ;
@end

