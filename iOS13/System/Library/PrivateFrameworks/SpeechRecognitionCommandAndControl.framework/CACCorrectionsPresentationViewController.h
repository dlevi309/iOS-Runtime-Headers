/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/CACCCorrectionsCandidatesViewControllerDelegate.h>
#import <libobjc.A.dylib/CACViewController.h>

@protocol CACCorrectionsPresentationDelegate;
@class NSString, NSArray, CACPopoverPresentingViewController, CACCorrectionsCandidatesViewController;

@interface CACCorrectionsPresentationViewController : UIViewController <UIPopoverPresentationControllerDelegate, CACCCorrectionsCandidatesViewControllerDelegate, CACViewController> {

	id<CACCorrectionsPresentationDelegate> _delegate;
	NSString* _text;
	NSArray* _alternatives;
	NSArray* _emojis;
	CACPopoverPresentingViewController* _popoverPresentingViewController;
	CACCorrectionsCandidatesViewController* _correctionViewController;
	CGRect _portraitUpSourceRect;

}

@property (nonatomic,retain) CACPopoverPresentingViewController * popoverPresentingViewController;              //@synthesize popoverPresentingViewController=_popoverPresentingViewController - In the implementation block
@property (nonatomic,retain) CACCorrectionsCandidatesViewController * correctionViewController;                 //@synthesize correctionViewController=_correctionViewController - In the implementation block
@property (assign,nonatomic,__weak) id<CACCorrectionsPresentationDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * text;                                                                     //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSArray * alternatives;                                                              //@synthesize alternatives=_alternatives - In the implementation block
@property (nonatomic,copy) NSArray * emojis;                                                                    //@synthesize emojis=_emojis - In the implementation block
@property (assign,nonatomic) CGRect portraitUpSourceRect;                                                       //@synthesize portraitUpSourceRect=_portraitUpSourceRect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long zOrder; 
@property (nonatomic,readonly) BOOL isOverlay; 
-(id)init;
-(id<CACCorrectionsPresentationDelegate>)delegate;
-(void)setDelegate:(id<CACCorrectionsPresentationDelegate>)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSArray *)alternatives;
-(BOOL)_canShowWhileLocked;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)isOverlay;
-(void)setAlternatives:(NSArray *)arg1 ;
-(long long)zOrder;
-(NSArray *)emojis;
-(void)dismissCorrectionsCandidatesViewController:(id)arg1 ;
-(void)correctionsCandidatesViewController:(id)arg1 didSelectItemWithText:(id)arg2 ;
-(void)setEmojis:(NSArray *)arg1 ;
-(CGRect)portraitUpSourceRect;
-(void)setPortraitUpSourceRect:(CGRect)arg1 ;
-(CACPopoverPresentingViewController *)popoverPresentingViewController;
-(CACCorrectionsCandidatesViewController *)correctionViewController;
-(void)setPopoverPresentingViewController:(CACPopoverPresentingViewController *)arg1 ;
-(void)setCorrectionViewController:(CACCorrectionsCandidatesViewController *)arg1 ;
@end

