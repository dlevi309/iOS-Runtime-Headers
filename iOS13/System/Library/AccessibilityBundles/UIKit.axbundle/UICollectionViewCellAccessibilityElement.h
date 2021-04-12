/*
* Generated on Monday, March 1, 2021 at 2:35:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSIndexPath *)indexPath;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(id)accessibilityLanguage;
-(BOOL)shouldGroupAccessibilityChildren;
-(BOOL)accessibilityRespondsToUserInteraction;
-(void)accessibilityElementDidBecomeFocused;
-(void)accessibilityElementDidLoseFocus;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(BOOL)accessibilityActivate;
-(id)accessibilityIdentifier;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(UICollectionViewCell *)cell;
-(void)setCell:(UICollectionViewCell *)arg1 ;
-(NSRange)accessibilityRowRange;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(id)_accessibilityTextOperations;
-(id)_accessibilityTextViewTextOperationResponder;
-(BOOL)_accessibilitySetNativeFocus;
-(unsigned long long)_accessibilityAutomationType;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_accessibilityIsSpeakThisElement;
-(BOOL)_accessibilityIsScannerGroup;
-(id)_accessibilityUserTestingChildren;
-(BOOL)accessibilityScrollToVisibleWithChild:(id)arg1 ;
-(BOOL)_accessibilityShouldAttemptScrollToFrameOnParentView;
-(BOOL)_accessibilitySupportsActivateAction;
-(id)_accessibilityUserTestingVisibleAncestor;
-(id)_accessibilityDataDetectorScheme:(CGPoint)arg1 ;
-(BOOL)_accessibilityHasNativeFocus;
-(BOOL)_accessibilityCanBecomeNativeFocused;
-(BOOL)_accessibilityViewHierarchyHasNativeFocus;
-(BOOL)_accessibilityHasTextOperations;
-(BOOL)_accessibilityShouldIncludeRowRangeInElementDescription;
-(BOOL)_accessibilityIsAwayAlertElement;
-(BOOL)_accessibilityBackingElementIsValid;
-(long long)_accessibilityScannerActivateBehavior;
-(void)_accessibilityCopy;
-(void)_accessibilityCut;
-(void)_accessibilityPaste;
-(void)_accessibilitySelectAll;
-(void)_accessibilitySelect;
-(void)_accessibilityUndo;
-(void)_accessibilityRedo;
-(id)_accessibilitySemanticContextForElement:(id)arg1 ;
-(id)_accessibilityCollectionViewCellContentSubviews;
-(BOOL)_accessibilityUserTestingIsDefaultButton;
-(BOOL)_accessibilityUserTestingIsCancelButton;
-(BOOL)_accessibilityUserTestingIsDestructiveButton;
-(BOOL)_accessibilityUserTestingIsPreferredButton;
-(BOOL)_accessibilityIsOutsideParentBounds;
-(id)realCell;
@end

