/*
* Generated on Monday, March 1, 2021 at 2:35:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@class NSIndexPath, UITableViewCell, NSMutableArray;

@interface UITableViewCellAccessibilityElement : UIAccessibilityElement {

	NSIndexPath* _indexPath;
	UITableViewCell* _tableViewCell;
	NSMutableArray* _mockChildren;
	BOOL _usingRealTableViewCell;

}

@property (nonatomic,retain) NSIndexPath * indexPath;                                //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,retain) UITableViewCell * tableViewCell;                        //@synthesize tableViewCell=_tableViewCell - In the implementation block
@property (nonatomic,readonly) UITableViewCell * realTableViewCell; 
@property (nonatomic,readonly) UITableViewCell * existingTableViewCell; 
@property (assign,nonatomic) BOOL usingRealTableViewCell;                            //@synthesize usingRealTableViewCell=_usingRealTableViewCell - In the implementation block
-(void)dealloc;
-(id)description;
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
-(id)accessibilityUserInputLabels;
-(id)accessibilityHeaderElements;
-(void)accessibilityElementDidBecomeFocused;
-(void)accessibilityElementDidLoseFocus;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(BOOL)accessibilityPerformEscape;
-(BOOL)accessibilityPerformMagicTap;
-(BOOL)accessibilityActivate;
-(id)accessibilityCustomActions;
-(id)accessibilityIdentifier;
-(id)accessibilityLocalizedStringKey;
-(id)accessibilityDragSourceDescriptors;
-(id)accessibilityDropPointDescriptors;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(UITableViewCell *)tableViewCell;
-(void)setTableViewCell:(UITableViewCell *)arg1 ;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(BOOL)_accessibilityIsInTableCell;
-(NSRange)accessibilityRowRange;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(id)_accessibilityTextOperations;
-(id)_accessibilityTextViewTextOperationResponder;
-(BOOL)_accessibilitySetNativeFocus;
-(unsigned long long)_accessibilityAutomationType;
-(id)accessibilityLocalizationBundleID;
-(id)accessibilityLocalizationBundlePath;
-(id)accessibilityLocalizedStringTableName;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_accessibilityIsSpeakThisElement;
-(BOOL)_accessibilityIsScannerGroup;
-(unsigned long long)_accessibilityScanningBehaviorTraits;
-(id)_accessibilityUserTestingChildren;
-(UITableViewCell *)realTableViewCell;
-(BOOL)_accessibilityCanPerformEscapeAction;
-(BOOL)accessibilityScrollToVisibleWithChild:(id)arg1 ;
-(BOOL)_accessibilitySupportsActivateAction;
-(id)_privateAccessibilityCustomActions;
-(void)_accessibilityMarkElementForVisiblePointHitTest:(BOOL)arg1 ;
-(id)_accessibilityUserTestingVisibleAncestor;
-(id)_accessibilityLineNumberAndColumnForPoint:(CGPoint)arg1 ;
-(NSRange)_accessibilityRangeForLineNumberAndColumn:(id)arg1 ;
-(CGRect)_accessibilityBoundsForRange:(NSRange)arg1 ;
-(id)_accessibilityDataDetectorScheme:(CGPoint)arg1 ;
-(BOOL)_accessibilityHasNativeFocus;
-(BOOL)_accessibilityCanBecomeNativeFocused;
-(BOOL)_accessibilityViewHierarchyHasNativeFocus;
-(BOOL)_accessibilityHasTextOperations;
-(BOOL)_accessibilityRetainsCustomRotorActionSetting;
-(BOOL)_allowCustomActionHintSpeakOverride;
-(BOOL)_accessibilityIsTableCell;
-(NSRange)_accessibilityIndexPathAsRange;
-(BOOL)_accessibilityShouldIncludeRowRangeInElementDescription;
-(long long)_accessibilityUserTestingChildrenCount;
-(CGPoint)_accessibilityMinScrubberPosition;
-(CGPoint)_accessibilityMaxScrubberPosition;
-(id)_accessibilityAbsoluteValue;
-(id)_accessibilityCapturedImages;
-(BOOL)_accessibilityIsAwayAlertElement;
-(BOOL)_accessibilityBackingElementIsValid;
-(long long)_accessibilityScannerActivateBehavior;
-(id)_accessibilityEquivalenceTag;
-(id)_accessibilitySpeakThisString;
-(id)_accessibilityCustomActionGroupIdentifier;
-(long long)_accessibilityCompareElement:(id)arg1 toElement:(id)arg2 ;
-(double)_accessibilityAllowedGeometryOverlap;
-(void)_accessibilityCopy;
-(void)_accessibilityCut;
-(void)_accessibilityPaste;
-(void)_accessibilitySelectAll;
-(void)_accessibilitySelect;
-(void)_accessibilityUndo;
-(void)_accessibilityRedo;
-(id)_accessibilitySemanticContextForElement:(id)arg1 ;
-(id)_accessibilityTableViewCellContentSubviews;
-(id)_accessibilityProxyView;
-(BOOL)_accessibilityUserTestingIsDefaultButton;
-(BOOL)_accessibilityUserTestingIsCancelButton;
-(BOOL)_accessibilityUserTestingIsDestructiveButton;
-(BOOL)_accessibilityUserTestingIsPreferredButton;
-(void)unregisterAllChildren;
-(void)registerMockChild:(id)arg1 ;
-(UITableViewCell *)existingTableViewCell;
-(void)unregisterMockChild:(id)arg1 ;
-(BOOL)usingRealTableViewCell;
-(BOOL)_accessibilityIsOutsideParentBounds;
-(CGRect)_accessibilityChargedLineBoundsForRange:(NSRange)arg1 ;
-(void)setUsingRealTableViewCell:(BOOL)arg1 ;
@end

