/*
* Generated on Thursday, January 14, 2021 at 2:29:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@class UICollectionViewCell, NSIndexPath;

@interface UICollectionViewCellAccessibilityElement : UIAccessibilityElement {

	UICollectionViewCell* _cell;
	BOOL _usingRealCell;
	NSIndexPath* _indexPath;

}

@property (nonatomic,retain) UICollectionViewCell * cell;              //@synthesize cell=_cell - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPath;                  //@synthesize indexPath=_indexPath - In the implementation block
-(UICollectionViewCell *)cell;
-(id)accessibilityLabel;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(void)setCell:(UICollectionViewCell *)arg1 ;
-(BOOL)isAccessibilityElement;
-(NSIndexPath *)indexPath;
-(BOOL)_accessibilityUserTestingIsDefaultButton;
-(BOOL)_accessibilityUserTestingIsCancelButton;
-(BOOL)_accessibilityUserTestingIsDestructiveButton;
-(BOOL)_accessibilityUserTestingIsPreferredButton;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_accessibilityIsSpeakThisElement;
-(void)accessibilityElementDidBecomeFocused;
-(BOOL)_accessibilityIsScannerGroup;
-(BOOL)shouldGroupAccessibilityChildren;
-(BOOL)accessibilityRespondsToUserInteraction;
-(void)accessibilityElementDidLoseFocus;
-(id)_accessibilityUserTestingChildren;
-(unsigned long long)accessibilityTraits;
-(BOOL)accessibilityScrollToVisibleWithChild:(id)arg1 ;
-(BOOL)_accessibilityShouldAttemptScrollToFrameOnParentView;
-(BOOL)_accessibilitySupportsActivateAction;
-(id)_accessibilityUserTestingProxyView;
-(id)_accessibilityUserTestingVisibleAncestor;
-(id)accessibilityValue;
-(id)_accessibilityDataDetectorScheme:(CGPoint)arg1 ;
-(BOOL)_accessibilityHasNativeFocus;
-(BOOL)_accessibilityCanBecomeNativeFocused;
-(BOOL)_accessibilityViewHierarchyHasNativeFocus;
-(BOOL)_accessibilityHasTextOperations;
-(void)_accessibilityCopy;
-(void)_accessibilityCut;
-(id)_accessibilityTextOperations;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(id)_accessibilityTextViewTextOperationResponder;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(BOOL)_accessibilityShouldIncludeRowRangeInElementDescription;
-(void)_accessibilityPaste;
-(CGRect)accessibilityFrame;
-(BOOL)_accessibilityIsAwayAlertElement;
-(long long)accessibilityElementCount;
-(BOOL)_accessibilityBackingElementIsValid;
-(id)accessibilityHint;
-(id)accessibilityLanguage;
-(BOOL)accessibilityActivate;
-(void)_accessibilitySelectAll;
-(long long)_accessibilityScannerActivateBehavior;
-(BOOL)_accessibilityImplementsDefaultRowRange;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(CGPoint)accessibilityActivationPoint;
-(void)_accessibilitySelect;
-(void)_accessibilityUndo;
-(void)_accessibilityRedo;
-(id)_accessibilitySemanticContextForElement:(id)arg1 ;
-(id)accessibilityIdentifier;
-(id)_accessibilityCollectionViewCellContentSubviews;
-(NSRange)accessibilityRowRange;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(unsigned long long)_accessibilityAutomationType;
-(void)dealloc;
-(BOOL)_accessibilitySetNativeFocus;
-(BOOL)_accessibilityIsOutsideParentBounds;
-(id)realCell;
@end

