/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setElement:(AXElement *)arg1 ;
-(BOOL)isOverlay;
-(void)handleAXNotificationData:(void*)arg1 ;
-(void)dismissCorrectionsPresentationViewController:(id)arg1 ;
-(void)correctionsPresentationViewController:(id)arg1 didSelectItemWithText:(id)arg2 ;
-(void)showCorrectionsForElement:(id)arg1 nBestStrings:(id)arg2 ;
-(void)hideIfNeededForElements:(id)arg1 ;
-(void)_showCorrectionsForElement:(id)arg1 fromString:(id)arg2 withAlternatives:(id)arg3 withEmojis:(id)arg4 portraitUpRect:(CGRect)arg5 ;
@end

