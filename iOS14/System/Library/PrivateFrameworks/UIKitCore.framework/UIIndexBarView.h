/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(CGPoint)arg2 ;
-(BOOL)canBecomeFocused;
-(id<UIIndexBarVisualStyle>)visualStyle;
-(id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(CGPoint)arg2 ;
-(void)_updateBackgroundColor;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setVisualStyle:(id<UIIndexBarVisualStyle>)arg1 ;
-(void)tintColorDidChange;
-(void)setEntries:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(id<UIIndexBarViewDelegate>)delegate;
-(BOOL)_canDrawContent;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(UIColor *)indexColor;
-(BOOL)_selectEntry:(id)arg1 atIndex:(long long)arg2 ;
-(void)setBackgroundColor:(id)arg1 ;
-(UISelectionFeedbackGenerator *)selectionFeedbackGenerator;
-(NSArray *)entries;
-(id)backgroundColor;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)_accessibilityHUDGestureManagerCancelsTouchesInView:(id)arg1 ;
-(void)setDelegate:(id<UIIndexBarViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setNonTrackingBackgroundColor:(UIColor *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setSelectionFeedbackGenerator:(UISelectionFeedbackGenerator *)arg1 ;
-(void)didMoveToWindow;
-(UIColor *)nonTrackingBackgroundColor;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_setupAXHUDGestureIfNecessary;
-(BOOL)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(double)deflection;
-(void)setIndexColor:(UIColor *)arg1 ;
-(long long)highlightStyle;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_largeContentViewerEnabledStatusDidChange:(id)arg1 ;
-(void)setHighlightedIndex:(double)arg1 ;
-(NSArray *)displayEntries;
-(void)_updateDisplayEntries;
-(void)setDisplayEntries:(NSArray *)arg1 ;
-(void)_userInteractionStarted;
-(void)_userInteractionStopped;
-(void)setDeflection:(double)arg1 ;
-(double)highlightedIndex;
-(BOOL)_defaultCanBecomeFocused;
-(double)displayHighlightedIndex;
-(void)setTrackingBackgroundColor:(UIColor *)arg1 ;
-(UIAccessibilityHUDGestureManager *)axHUDGestureManager;
-(BOOL)_didSelectEntry:(id)arg1 atIndex:(long long)arg2 ;
-(UIColor *)trackingBackgroundColor;
-(void)setAxHUDGestureManager:(UIAccessibilityHUDGestureManager *)arg1 ;
-(double)cachedDisplayHighlightedIndex;
-(void)setCachedDisplayHighlightedIndex:(double)arg1 ;
-(void)resetDeflection:(BOOL)arg1 ;
-(void)setHighlightStyle:(long long)arg1 ;
@end

