/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)textEffectsVisibilityLevel;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)typedText;
-(id)correctionView;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)removePromptSubviews;
-(CGRect)shadowFrameForFrame:(CGRect)arg1 ;
-(BOOL)prepareForAnimation:(CGRect)arg1 ;
-(void)setUsageTrackingMask:(unsigned)arg1 ;
-(id)correctionShadowView;
-(CGRect)horizontallySquishedCorrectionFrame:(CGRect)arg1 ;
-(id)correctionAnimationView;
-(CGRect)correctionFrameFromDesiredFrame:(CGRect)arg1 textHeight:(int)arg2 withExtraGap:(double)arg3 ;
-(BOOL)isAcceptableTextEffectsFrame:(CGRect)arg1 afterScrollBy:(double)arg2 ;
-(void)addTypedTextRect:(CGRect)arg1 ;
-(int)textEffectsVisibilityLevelInKeyboardWindow;
-(unsigned)usageTrackingMask;
-(void)setCorrection:(id)arg1 typedText:(id)arg2 inRect:(CGRect)arg3 maxX:(double)arg4 ;
-(id)typedTextAnimationView;
-(id)correction;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)dealloc;
-(id)typedTextView;
-(void)dismiss;
@end

