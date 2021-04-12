/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentView.h>
#import <libobjc.A.dylib/SXTextViewDelegate.h>

@class SXTangierController, SXTextView, NSString;

@interface SXTextComponentView : SXComponentView <SXTextViewDelegate> {

	SXTangierController* _tangierController;
	SXTextView* _textView;
	CGSize _calculatedSize;

}

@property (nonatomic,__weak,readonly) SXTangierController * tangierController;              //@synthesize tangierController=_tangierController - In the implementation block
@property (nonatomic,retain) SXTextView * textView;                                         //@synthesize textView=_textView - In the implementation block
@property (assign,nonatomic) CGSize calculatedSize;                                         //@synthesize calculatedSize=_calculatedSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXTextView *)textView;
-(void)setTextView:(SXTextView *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
-(void)animationDidStart:(id)arg1 ;
-(void)setAbsoluteFrame:(CGRect)arg1 ;
-(SXTangierController *)tangierController;
-(id)textSource;
-(void)presentComponentWithChanges:(SCD_Struct_SX17)arg1 ;
-(void)receivedInfo:(id)arg1 fromLayoutingPhaseWithIdentifier:(id)arg2 ;
-(void)setPresentationFrame:(CGRect)arg1 ;
-(void)provideInfosLayoutTo:(id)arg1 ;
-(BOOL)userInteractable;
-(void)animationDidFinish:(id)arg1 ;
-(void)didApplyBehavior:(id)arg1 ;
-(id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 tangierController:(id)arg5 ;
-(void)setupTextView;
-(CGRect)absoluteTextViewFrame;
-(id)componentIdentifierForTextView:(id)arg1 ;
-(id)textRulesForTextView:(id)arg1 ;
-(id)accessibilityContextualLabelForTextView:(id)arg1 ;
-(id)accessibilityCustomRotorMembershipForTextView:(id)arg1 ;
-(CGSize)calculatedSize;
-(void)setCalculatedSize:(CGSize)arg1 ;
@end

