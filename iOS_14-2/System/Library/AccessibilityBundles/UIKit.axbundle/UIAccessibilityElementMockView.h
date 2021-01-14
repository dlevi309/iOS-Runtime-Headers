/*
* Generated on Thursday, January 14, 2021 at 2:29:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGPoint)convertPoint:(CGPoint)arg1 fromView:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(id)accessibilityLabel;
-(BOOL)becomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)isAccessibilityElement;
-(id<UIAccessibilityElementMockViewDelegateProtocol>)delegate;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_accessibilityIsSpeakThisElement;
-(void)accessibilityElementDidBecomeFocused;
-(id)accessibilityElements;
-(BOOL)_accessibilityIsScannerGroup;
-(id)_accessibilityScannerGroupElements;
-(unsigned long long)_accessibilityScannerGroupTraits;
-(BOOL)accessibilityRespondsToUserInteraction;
-(void)accessibilityElementDidLoseFocus;
-(id)accessibilityCustomRotors;
-(void)setView:(UIView *)arg1 ;
-(BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
-(id)_accessibilityUserTestingChildren;
-(id)_accessibilityScrollAncestor;
-(unsigned long long)accessibilityTraits;
-(BOOL)_accessibilityCanPerformEscapeAction;
-(BOOL)_accessibilitySupportsActivateAction;
-(void)setDelegate:(id<UIAccessibilityElementMockViewDelegateProtocol>)arg1 ;
-(id)_accessibilityUserTestingProxyView;
-(id)description;
-(UIView *)view;
-(id)accessibilityValue;
-(id)_accessibilityUserTestingParent;
-(id)_accessibilityLineNumberAndColumnForPoint:(CGPoint)arg1 ;
-(NSRange)_accessibilityRangeForLineNumberAndColumn:(id)arg1 ;
-(CGRect)_accessibilityBoundsForRange:(NSRange)arg1 ;
-(NSRange)_accessibilityLineRangeForPosition:(unsigned long long)arg1 ;
-(NSRange)_accessibilityCharacterRangeForPosition:(unsigned long long)arg1 ;
-(unsigned long long)_accessibilityPositionInDirection:(long long)arg1 offset:(unsigned long long)arg2 forPosition:(unsigned long long)arg3 ;
-(NSRange)_accessibilityVisibleTextRange;
-(void)revalidate;
-(BOOL)_accessibilityUpdatesSwitchMenu;
-(BOOL)accessibilityPerformMagicTap;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(id)_accessibilityTextViewTextOperationResponder;
-(long long)accessibilityCompareGeometry:(id)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(id)accessibilityIdentification;
-(CGPoint)_accessibilityMinScrubberPosition;
-(CGPoint)_accessibilityMaxScrubberPosition;
-(id)_accessibilityAbsoluteValue;
-(id)_accessibilityUserTestingElementType;
-(CGRect)accessibilityFrame;
-(long long)accessibilityElementCount;
-(void)setAccessibilityContainer:(id)arg1 ;
-(long long)_accessibilityPageIndex;
-(long long)_accessibilityPageCount;
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(BOOL)accessibilityPerformEscape;
-(id)accessibilityCustomActions;
-(id)accessibilityHint;
-(id)accessibilityLanguage;
-(BOOL)accessibilityActivate;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(CGPoint)accessibilityActivationPoint;
-(id)accessibilityIdentifier;
-(NSRange)accessibilityRowRange;
-(void)_accessibilitySetValue:(id)arg1 ;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(BOOL)_accessibilityScrollToVisible;
-(unsigned long long)_accessibilityAutomationType;
-(double)_accessibilityMinValue;
-(double)_accessibilityMaxValue;
-(void)dealloc;
-(long long)subviewIndex;
-(void)setSubviewIndex:(long long)arg1 ;
@end

