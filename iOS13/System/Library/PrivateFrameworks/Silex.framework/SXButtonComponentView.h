/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentView.h>
#import <libobjc.A.dylib/SXTextViewDelegate.h>

@class SXTextView, NSString;

@interface SXButtonComponentView : SXComponentView <SXTextViewDelegate> {

	SXTextView* _textView;
	CGRect _typographicBounds;

}

@property (nonatomic,readonly) SXTextView * textView;               //@synthesize textView=_textView - In the implementation block
@property (assign,nonatomic) CGRect typographicBounds;              //@synthesize typographicBounds=_typographicBounds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)typographicBounds;
-(SXTextView *)textView;
-(void)setTypographicBounds:(CGRect)arg1 ;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(void)didMoveToSuperview;
-(void)setAbsoluteFrame:(CGRect)arg1 ;
-(id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 ;
-(void)presentComponentWithChanges:(SCD_Struct_SX17)arg1 ;
-(void)receivedInfo:(id)arg1 fromLayoutingPhaseWithIdentifier:(id)arg2 ;
-(void)setPresentationFrame:(CGRect)arg1 ;
-(void)provideInfosLayoutTo:(id)arg1 ;
-(CGRect)absoluteTextViewFrame;
-(id)componentIdentifierForTextView:(id)arg1 ;
-(id)textRulesForTextView:(id)arg1 ;
-(id)accessibilityContextualLabelForTextView:(id)arg1 ;
-(id)accessibilityCustomRotorMembershipForTextView:(id)arg1 ;
@end

