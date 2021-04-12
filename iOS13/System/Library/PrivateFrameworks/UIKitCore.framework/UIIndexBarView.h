/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIAccessibilityHUDGestureDelegate.h>

@protocol UIIndexBarViewDelegate, UIIndexBarVisualStyle;
@class UIColor, NSArray, UISelectionFeedbackGenerator, UIAccessibilityHUDGestureManager, NSString;

@interface UIIndexBarView : UIControl <UIAccessibilityHUDGestureDelegate> {

	UIColor* _indexColor;
	NSArray* _entries;
	id<UIIndexBarViewDelegate> _delegate;
	UIColor* _trackingBackgroundColor;
	long long _highlightStyle;
	double _highlightedIndex;
	double _deflection;
	double _cachedDisplayHighlightedIndex;
	UIColor* _nonTrackingBackgroundColor;
	UISelectionFeedbackGenerator* _selectionFeedbackGenerator;
	UIAccessibilityHUDGestureManager* _axHUDGestureManager;
	id<UIIndexBarVisualStyle> _visualStyle;
	NSArray* _displayEntries;

}

@property (assign,nonatomic) double cachedDisplayHighlightedIndex;                                   //@synthesize cachedDisplayHighlightedIndex=_cachedDisplayHighlightedIndex - In the implementation block
@property (nonatomic,copy) UIColor * nonTrackingBackgroundColor;                                     //@synthesize nonTrackingBackgroundColor=_nonTrackingBackgroundColor - In the implementation block
@property (nonatomic,retain) UISelectionFeedbackGenerator * selectionFeedbackGenerator;              //@synthesize selectionFeedbackGenerator=_selectionFeedbackGenerator - In the implementation block
@property (nonatomic,retain) UIAccessibilityHUDGestureManager * axHUDGestureManager;                 //@synthesize axHUDGestureManager=_axHUDGestureManager - In the implementation block
@property (nonatomic,retain) id<UIIndexBarVisualStyle> visualStyle;                                  //@synthesize visualStyle=_visualStyle - In the implementation block
@property (nonatomic,retain) NSArray * displayEntries;                                               //@synthesize displayEntries=_displayEntries - In the implementation block
@property (nonatomic,readonly) double displayHighlightedIndex; 
@property (nonatomic,copy) NSArray * entries;                                                        //@synthesize entries=_entries - In the implementation block
@property (assign,nonatomic,__weak) id<UIIndexBarViewDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) UIColor * indexColor;                                                     //@synthesize indexColor=_indexColor - In the implementation block
@property (nonatomic,copy) UIColor * trackingBackgroundColor;                                        //@synthesize trackingBackgroundColor=_trackingBackgroundColor - In the implementation block
@property (assign,nonatomic) long long highlightStyle;                                               //@synthesize highlightStyle=_highlightStyle - In the implementation block
@property (assign,nonatomic) double highlightedIndex;                                                //@synthesize highlightedIndex=_highlightedIndex - In the implementation block
@property (assign,nonatomic) double deflection;                                                      //@synthesize deflection=_deflection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<UIIndexBarViewDelegate>)delegate;
-(void)setDelegate:(id<UIIndexBarViewDelegate>)arg1 ;
-(id)backgroundColor;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)canBecomeFocused;
-(BOOL)_accessibilityHUDGestureManagerCancelsTouchesInView:(id)arg1 ;
-(BOOL)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(CGPoint)arg2 ;
-(void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(CGPoint)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id<UIIndexBarVisualStyle>)visualStyle;
-(void)setVisualStyle:(id<UIIndexBarVisualStyle>)arg1 ;
-(void)tintColorDidChange;
-(void)didMoveToWindow;
-(void)_updateBackgroundColor;
-(long long)highlightStyle;
-(void)setHighlightStyle:(long long)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)_setupAXHUDGestureIfNecessary;
-(BOOL)_canDrawContent;
-(void)setEntries:(NSArray *)arg1 ;
-(NSArray *)entries;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)resetDeflection:(BOOL)arg1 ;
-(void)setIndexColor:(UIColor *)arg1 ;
-(UIColor *)indexColor;
-(void)setHighlightedIndex:(double)arg1 ;
-(BOOL)_selectEntry:(id)arg1 atIndex:(long long)arg2 ;
-(NSArray *)displayEntries;
-(void)_updateDisplayEntries;
-(void)setDisplayEntries:(NSArray *)arg1 ;
-(void)_userInteractionStarted;
-(void)_userInteractionStopped;
-(void)setDeflection:(double)arg1 ;
-(BOOL)_defaultCanBecomeFocused;
-(double)displayHighlightedIndex;
-(void)setTrackingBackgroundColor:(UIColor *)arg1 ;
-(BOOL)_didSelectEntry:(id)arg1 atIndex:(long long)arg2 ;
-(UIColor *)trackingBackgroundColor;
-(double)highlightedIndex;
-(double)deflection;
-(double)cachedDisplayHighlightedIndex;
-(void)setCachedDisplayHighlightedIndex:(double)arg1 ;
-(UIColor *)nonTrackingBackgroundColor;
-(void)setNonTrackingBackgroundColor:(UIColor *)arg1 ;
-(UISelectionFeedbackGenerator *)selectionFeedbackGenerator;
-(void)setSelectionFeedbackGenerator:(UISelectionFeedbackGenerator *)arg1 ;
-(UIAccessibilityHUDGestureManager *)axHUDGestureManager;
-(void)setAxHUDGestureManager:(UIAccessibilityHUDGestureManager *)arg1 ;
@end

