/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKGlyphViewDelegate.h>

@protocol PKPassPaymentPayStateViewDelegate;
@class PKGlyphView, UILabel, NSString;

@interface PKPassPaymentPayStateView : UIView <PKGlyphViewDelegate> {

	long long _style;
	double _glyphViewPadding;
	double _labelTopPadding;
	BOOL _didLayout;
	BOOL _biometricsUnavailableHint;
	BOOL _touchRecognizingHint;
	BOOL _persistentEmulationHint;
	BOOL _accessPass;
	long long _state;
	long long _layoutState;
	PKGlyphView* _glyph;
	UILabel* _label;
	UILabel* _debugLabel;
	double _labelStateBottomInset;
	double _labelAlpha;
	id<PKPassPaymentPayStateViewDelegate> _delegate;

}

@property (nonatomic,readonly) long long state;                                                  //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) long long layoutState;                                            //@synthesize layoutState=_layoutState - In the implementation block
@property (nonatomic,readonly) PKGlyphView * glyph;                                              //@synthesize glyph=_glyph - In the implementation block
@property (nonatomic,readonly) UILabel * label;                                                  //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UILabel * debugLabel;                                             //@synthesize debugLabel=_debugLabel - In the implementation block
@property (assign,nonatomic) double labelStateBottomInset;                                       //@synthesize labelStateBottomInset=_labelStateBottomInset - In the implementation block
@property (assign,nonatomic) double labelAlpha;                                                  //@synthesize labelAlpha=_labelAlpha - In the implementation block
@property (assign,nonatomic) BOOL biometricsUnavailableHint;                                     //@synthesize biometricsUnavailableHint=_biometricsUnavailableHint - In the implementation block
@property (assign,nonatomic) BOOL touchRecognizingHint;                                          //@synthesize touchRecognizingHint=_touchRecognizingHint - In the implementation block
@property (assign,nonatomic) BOOL persistentEmulationHint;                                       //@synthesize persistentEmulationHint=_persistentEmulationHint - In the implementation block
@property (assign,nonatomic) BOOL accessPass;                                                    //@synthesize accessPass=_accessPass - In the implementation block
@property (assign,nonatomic,__weak) id<PKPassPaymentPayStateViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<PKPassPaymentPayStateViewDelegate>)delegate;
-(void)setDelegate:(id<PKPassPaymentPayStateViewDelegate>)arg1 ;
-(long long)state;
-(UILabel *)label;
-(PKGlyphView *)glyph;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 ;
-(long long)layoutState;
-(void)setLabelAlpha:(double)arg1 ;
-(double)labelAlpha;
-(UILabel *)debugLabel;
-(void)_configureLayoutMetrics;
-(void)_applyStatePreservingGlyphState:(BOOL)arg1 overridingText:(id)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_resolveLayout;
-(void)setState:(long long)arg1 animated:(BOOL)arg2 withOverrideText:(id)arg3 preserveGlyphState:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(long long)_defaultGlyphStateForState:(long long)arg1 ;
-(BOOL)_canPreserveGlyphForState:(long long)arg1 ;
-(id)_textForState:(long long)arg1 textOverride:(id)arg2 ;
-(id)_attributedTextWithTitle:(id)arg1 ;
-(id)_attributedTextWithTitle:(id)arg1 subtitle:(id)arg2 ;
-(void)glyphView:(id)arg1 revealingCheckmark:(BOOL)arg2 ;
-(void)setState:(long long)arg1 animated:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(BOOL)labelWillChangeForState:(long long)arg1 withOverrideText:(id)arg2 ;
-(void)emphasizeStateIfPossible:(long long)arg1 withOverrideText:(id)arg2 ;
-(void)updateDebugLabel:(id)arg1 isErrorState:(BOOL)arg2 ;
-(BOOL)_canEmphasizeState:(long long)arg1 ;
-(void)setLabelStateBottomInset:(double)arg1 ;
-(double)labelStateBottomInset;
-(BOOL)biometricsUnavailableHint;
-(void)setBiometricsUnavailableHint:(BOOL)arg1 ;
-(BOOL)touchRecognizingHint;
-(void)setTouchRecognizingHint:(BOOL)arg1 ;
-(BOOL)persistentEmulationHint;
-(void)setPersistentEmulationHint:(BOOL)arg1 ;
-(BOOL)accessPass;
-(void)setAccessPass:(BOOL)arg1 ;
@end

