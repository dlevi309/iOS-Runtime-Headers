/*
* Generated on Thursday, January 14, 2021 at 2:29:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)accessibilityLabel;
-(id)accessibilityUserInputLabels;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(id)_accessibilityProxyView;
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
-(unsigned long long)_accessibilityScanningBehaviorTraits;
-(BOOL)accessibilityRespondsToUserInteraction;
-(id)accessibilityDragSourceDescriptors;
-(void)accessibilityElementDidLoseFocus;
-(UITableViewCell *)realTableViewCell;
-(id)accessibilityDropPointDescriptors;
-(id)_accessibilityUserTestingChildren;
-(unsigned long long)accessibilityTraits;
-(BOOL)_accessibilityCanPerformEscapeAction;
-(BOOL)accessibilityScrollToVisibleWithChild:(id)arg1 ;
-(BOOL)_accessibilitySupportsActivateAction;
-(UITableViewCell *)tableViewCell;
-(id)_privateAccessibilityCustomActions;
-(void)_accessibilityMarkElementForVisiblePointHitTest:(BOOL)arg1 ;
-(id)_accessibilityUserTestingProxyView;
-(id)_accessibilityUserTestingVisibleAncestor;
-(id)description;
-(id)accessibilityValue;
-(id)accessibilityLocalizedStringKey;
-(id)_accessibilityLineNumberAndColumnForPoint:(CGPoint)arg1 ;
-(NSRange)_accessibilityRangeForLineNumberAndColumn:(id)arg1 ;
-(CGRect)_accessibilityBoundsForRange:(NSRange)arg1 ;
-(id)_accessibilityDataDetectorScheme:(CGPoint)arg1 ;
-(BOOL)_accessibilityHasNativeFocus;
-(BOOL)_accessibilityCanBecomeNativeFocused;
-(BOOL)_accessibilityViewHierarchyHasNativeFocus;
-(id)accessibilityLocalizationBundleID;
-(id)accessibilityLocalizationBundlePath;
-(id)accessibilityLocalizedStringTableName;
-(BOOL)_accessibilityHasTextOperations;
-(void)_accessibilityCopy;
-(BOOL)_accessibilityRetainsCustomRotorActionSetting;
-(void)_accessibilityCut;
-(BOOL)_allowCustomActionHintSpeakOverride;
-(BOOL)_accessibilityIsTableCell;
-(NSRange)_accessibilityIndexPathAsRange;
-(id)_accessibilityTextOperations;
-(BOOL)accessibilityPerformMagicTap;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(id)_accessibilityTextViewTextOperationResponder;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(BOOL)_accessibilityShouldIncludeRowRangeInElementDescription;
-(id)accessibilityHeaderElements;
-(long long)_accessibilityUserTestingChildrenCount;
-(CGPoint)_accessibilityMinScrubberPosition;
-(void)_accessibilityPaste;
-(CGPoint)_accessibilityMaxScrubberPosition;
-(id)_accessibilityAbsoluteValue;
-(CGRect)accessibilityFrame;
-(id)_accessibilityCapturedImages;
-(BOOL)_accessibilityIsAwayAlertElement;
-(long long)accessibilityElementCount;
-(BOOL)_accessibilityBackingElementIsValid;
-(BOOL)accessibilityPerformEscape;
-(id)accessibilityCustomActions;
-(id)accessibilityHint;
-(id)accessibilityLanguage;
-(BOOL)accessibilityActivate;
-(void)_accessibilitySelectAll;
-(long long)_accessibilityScannerActivateBehavior;
-(id)_accessibilityEquivalenceTag;
-(id)_accessibilitySpeakThisString;
-(id)_accessibilityCustomActionGroupIdentifier;
-(BOOL)_accessibilityImplementsDefaultRowRange;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(CGPoint)accessibilityActivationPoint;
-(void)_accessibilitySelect;
-(long long)_accessibilityCompareElement:(id)arg1 toElement:(id)arg2 ;
-(double)_accessibilityAllowedGeometryOverlap;
-(void)_accessibilityUndo;
-(void)_accessibilityRedo;
-(id)_accessibilitySemanticContextForElement:(id)arg1 ;
-(void)setTableViewCell:(UITableViewCell *)arg1 ;
-(id)accessibilityIdentifier;
-(id)_accessibilityTableViewCellContentSubviews;
-(BOOL)_accessibilityIsInTableCell;
-(NSRange)accessibilityRowRange;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(unsigned long long)_accessibilityAutomationType;
-(void)dealloc;
-(BOOL)_accessibilitySetNativeFocus;
-(BOOL)_accessibilityIsOutsideParentBounds;
-(void)unregisterAllChildren;
-(void)registerMockChild:(id)arg1 ;
-(UITableViewCell *)existingTableViewCell;
-(void)unregisterMockChild:(id)arg1 ;
-(BOOL)usingRealTableViewCell;
-(CGRect)_accessibilityChargedLineBoundsForRange:(NSRange)arg1 ;
-(void)setUsingRealTableViewCell:(BOOL)arg1 ;
@end

