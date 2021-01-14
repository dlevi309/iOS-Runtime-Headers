/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
*/

#import <Pegasus/Pegasus-Structs.h>
#import <Pegasus/PGMaterialView.h>
#import <UIKit/UIPointerInteractionDelegate.h>

@protocol BSInvalidatable, PGButtonViewDelegate;
@class NSString, _PGButton, UIViewPropertyAnimator, UIPointerInteraction, UIFont;

@interface PGButtonView : PGMaterialView <UIPointerInteractionDelegate> {

	double _currentGlyphSize;
	NSString* _currentGlyphImageName;
	id<BSInvalidatable> _preventAutoHideOfControlsAssertion;
	BOOL _circular;
	BOOL _highlighted;
	id<PGButtonViewDelegate> _delegate;
	NSString* _systemImageName;
	double _glyphSize;
	_PGButton* _actualButton;
	UIViewPropertyAnimator* _highlightAnimator;
	UIPointerInteraction* _pointerInteraction;

}

@property (nonatomic,retain) _PGButton * actualButton;                                       //@synthesize actualButton=_actualButton - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;                          //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic,__weak) UIViewPropertyAnimator * highlightAnimator;              //@synthesize highlightAnimator=_highlightAnimator - In the implementation block
@property (assign,nonatomic,__weak) UIPointerInteraction * pointerInteraction;               //@synthesize pointerInteraction=_pointerInteraction - In the implementation block
@property (assign,nonatomic,__weak) id<PGButtonViewDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * systemImageName;                                       //@synthesize systemImageName=_systemImageName - In the implementation block
@property (assign,getter=isCircular,nonatomic) BOOL circular;                                //@synthesize circular=_circular - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) UIFont * font; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) double glyphSize;                                               //@synthesize glyphSize=_glyphSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layerClass;
+(id)buttonWithDelegate:(id)arg1 ;
+(id)disabledTintColor;
+(id)enabledTintColor;
-(UIPointerInteraction *)pointerInteraction;
-(id<PGButtonViewDelegate>)delegate;
-(void)setFont:(UIFont *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setText:(NSString *)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIViewPropertyAnimator *)highlightAnimator;
-(void)setHighlightAnimator:(UIViewPropertyAnimator *)arg1 ;
-(void)setCircular:(BOOL)arg1 ;
-(void)setSystemImageName:(NSString *)arg1 ;
-(void)setDelegate:(id<PGButtonViewDelegate>)arg1 ;
-(void)setPointerInteraction:(UIPointerInteraction *)arg1 ;
-(void)layoutSubviews;
-(void)_handleTouchDown:(id)arg1 ;
-(void)_handleTouchUpInside:(id)arg1 ;
-(double)glyphSize;
-(void)didMoveToWindow;
-(NSString *)text;
-(BOOL)isHighlighted;
-(void)setAccessibilityIdentifier:(id)arg1 ;
-(BOOL)isEnabled;
-(void)sizeToFit;
-(id)accessibilityIdentifier;
-(NSString *)systemImageName;
-(BOOL)isCircular;
-(void)dealloc;
-(UIFont *)font;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setGlyphSize:(double)arg1 ;
-(void)_handleDragEnter:(id)arg1 ;
-(void)_handleDragExit:(id)arg1 ;
-(void)_handleTouchUpOrCancel:(id)arg1 ;
-(_PGButton *)actualButton;
-(void)_updateForCircularAppearanceIfNeeded;
-(BOOL)_shouldHitTest;
-(void)_updateGlyphConfigurationIfNeeded;
-(void)setActualButton:(_PGButton *)arg1 ;
@end

