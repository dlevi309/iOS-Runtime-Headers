/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, NSMutableArray, UIView;

@interface UIAutocorrectInlinePrompt : UIView {

	CGRect m_originalTypedTextRect;
	NSString* m_typedText;
	NSString* m_correction;
	NSMutableArray* m_typedTextViews;
	UIView* m_correctionView;
	UIView* m_correctionAnimationView;
	UIView* m_typedTextAnimationView;
	UIView* m_correctionShadowView;
	BOOL m_fits;
	BOOL m_mouseDown;
	double m_originalTypedTextRectCorrectionAmount;
	unsigned m_usageTrackingMask;

}

@property (assign,nonatomic) unsigned usageTrackingMask; 
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)dismiss;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(int)textEffectsVisibilityLevel;
-(void)removePromptSubviews;
-(CGRect)horizontallySquishedCorrectionFrame:(CGRect)arg1 ;
-(CGRect)correctionFrameFromDesiredFrame:(CGRect)arg1 textHeight:(int)arg2 withExtraGap:(double)arg3 ;
-(id)typedTextView;
-(BOOL)isAcceptableTextEffectsFrame:(CGRect)arg1 afterScrollBy:(double)arg2 ;
-(int)textEffectsVisibilityLevelInKeyboardWindow;
-(CGRect)shadowFrameForFrame:(CGRect)arg1 ;
-(void)setCorrection:(id)arg1 typedText:(id)arg2 inRect:(CGRect)arg3 maxX:(double)arg4 ;
-(void)addTypedTextRect:(CGRect)arg1 ;
-(id)correction;
-(id)typedText;
-(id)correctionView;
-(id)correctionAnimationView;
-(id)typedTextAnimationView;
-(id)correctionShadowView;
-(BOOL)prepareForAnimation:(CGRect)arg1 ;
-(unsigned)usageTrackingMask;
-(void)setUsageTrackingMask:(unsigned)arg1 ;
@end

