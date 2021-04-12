/*
* Generated on Monday, March 1, 2021 at 2:35:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@protocol UIAccessibilityElementMockViewDelegateProtocol;
@class UIView;

@interface UIAccessibilityElementMockView : UIAccessibilityElement {

	id<UIAccessibilityElementMockViewDelegateProtocol> _delegate;
	long long _subviewIndex;
	UIView* _view;

}

@property (nonatomic,retain) UIView * view;                                                                   //@synthesize view=_view - In the implementation block
@property (assign,nonatomic,__weak) id<UIAccessibilityElementMockViewDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long subviewIndex;                                                          //@synthesize subviewIndex=_subviewIndex - In the implementation block
-(void)dealloc;
-(id)description;
-(id<UIAccessibilityElementMockViewDelegateProtocol>)delegate;
-(void)setDelegate:(id<UIAccessibilityElementMockViewDelegateProtocol>)arg1 ;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(id)accessibilityLanguage;
-(BOOL)accessibilityRespondsToUserInteraction;
-(void)setAccessibilityContainer:(id)arg1 ;
-(void)accessibilityElementDidBecomeFocused;
-(void)accessibilityElementDidLoseFocus;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(BOOL)accessibilityPerformEscape;
-(BOOL)accessibilityPerformMagicTap;
-(BOOL)accessibilityActivate;
-(id)accessibilityCustomActions;
-(id)accessibilityIdentification;
-(id)accessibilityIdentifier;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(id)accessibilityElements;
-(CGPoint)convertPoint:(CGPoint)arg1 fromView:(id)arg2 ;
-(id)accessibilityCustomRotors;
-(BOOL)canBecomeFocused;
-(BOOL)becomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(long long)accessibilityCompareGeometry:(id)arg1 ;
-(double)_accessibilityMinValue;
-(double)_accessibilityMaxValue;
-(NSRange)accessibilityRowRange;
-(BOOL)_accessibilityScrollToVisible;
-(void)_accessibilitySetValue:(id)arg1 ;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(id)_accessibilityTextViewTextOperationResponder;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_accessibilityIsSpeakThisElement;
-(BOOL)_accessibilityIsScannerGroup;
-(id)_accessibilityScannerGroupElements;
-(unsigned long long)_accessibilityScannerGroupTraits;
-(BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
-(id)_accessibilityUserTestingChildren;
-(id)_accessibilityScrollAncestor;
-(BOOL)_accessibilityCanPerformEscapeAction;
-(BOOL)_accessibilitySupportsActivateAction;
-(id)_accessibilityUserTestingParent;
-(id)_accessibilityLineNumberAndColumnForPoint:(CGPoint)arg1 ;
-(NSRange)_accessibilityRangeForLineNumberAndColumn:(id)arg1 ;
-(CGRect)_accessibilityBoundsForRange:(NSRange)arg1 ;
-(NSRange)_accessibilityLineRangeForPosition:(unsigned long long)arg1 ;
-(unsigned long long)_accessibilityPositionInDirection:(long long)arg1 offset:(unsigned long long)arg2 forPosition:(unsigned long long)arg3 ;
-(CGPoint)_accessibilityMinScrubberPosition;
-(CGPoint)_accessibilityMaxScrubberPosition;
-(id)_accessibilityAbsoluteValue;
-(id)_accessibilityUserTestingElementType;
-(long long)_accessibilityPageIndex;
-(long long)_accessibilityPageCount;
-(long long)subviewIndex;
-(void)setSubviewIndex:(long long)arg1 ;
-(void)revalidate;
@end

