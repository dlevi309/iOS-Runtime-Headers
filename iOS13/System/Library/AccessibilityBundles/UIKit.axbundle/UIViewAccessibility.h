/*
* Generated on Monday, March 1, 2021 at 2:35:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIViewAccessibility_super.h>

@interface UIViewAccessibility : __UIViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(BOOL)_isSerializableAccessibilityElement;
+(Class)safeCategoryBaseClass;
+(void)_axTriggerNextContextMenuInteractionInQueue:(id)arg1 forElement:(id)arg2 targetPointValue:(id)arg3 ;
+(id)_axFocusedWindowSubviews;
-(void)setHidden:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(CGRect)accessibilityFrame;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(id)accessibilityContainer;
-(id)accessibilityPath;
-(BOOL)accessibilityViewIsModal;
-(BOOL)accessibilityElementsHidden;
-(BOOL)accessibilityRespondsToUserInteraction;
-(void)setIsAccessibilityElement:(BOOL)arg1 ;
-(BOOL)accessibilityElementIsFocused;
-(void)_accessibilityFinalize;
-(id)preferredFocusEnvironments;
-(BOOL)canBecomeFocused;
-(BOOL)_isEligibleForFocusInteraction;
-(void)setAlpha:(double)arg1 ;
-(id)_systemDefaultFocusGroupDescriptor;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)willMoveToWindow:(id)arg1 ;
-(id)_childFocusRegionsInRect:(CGRect)arg1 inCoordinateSpace:(id)arg2 ;
-(void)_notifyReferenceViewSizeChange;
-(BOOL)_accessibilityIsInTableCell;
-(id)_accessibilitySortedElementsWithin;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_accessibilityViewController;
-(id)_accessibilityObscuredScreenAllowedViews;
-(BOOL)accessibilityIsWindow;
-(id)_accessibilityUserTestingChildren;
-(BOOL)_accessibilityShowContextMenuForElement:(id)arg1 targetPointValue:(id)arg2 ;
-(BOOL)_accessibilityServesAsContainingParentForOrdering;
-(id)_accessibilityAuditIssuesWithOptions:(id)arg1 ;
-(double)_accessibilityViewAlpha;
-(BOOL)_accessibilityIsUserInteractionEnabled;
-(BOOL)_accessibilityIsInCollectionCell;
-(id)_accessibilitySupportGesturesAttributes;
-(id)_accessibilityCapturedImages;
-(id)_accessibilityAutomaticIdentifier;
-(long long)_accessibilityHorizontalSizeClass;
-(long long)_accessibilityVerticalSizeClass;
-(BOOL)_accessibilityHasDragSources;
-(BOOL)_accessibilityHasDragDestinations;
-(BOOL)_accessibilityOnlyComparesByXAxis;
-(id)_accessibilityAllDragSourceDescriptors;
-(id)_accessibilityAllDropPointDescriptors;
-(id)_accessibilityImageData;
-(BOOL)_accessibilityIsFKARunningForFocusItem;
-(id)_accessibilityCirclePathBasedOnBoundsWidth;
-(BOOL)_accessibilityFKAShouldBeProcessed;
-(id)_accessibilityProxyView;
-(BOOL)_accessibilityViewIsActive;
-(BOOL)_accessibilityInTopLevelTabLoop;
-(BOOL)_accessibilityUseAccessibilityFrameForHittest;
-(id)_axSubviews;
-(BOOL)_accessibilityHasButtonLikeGestureRecognizer;
-(id)_accessibilityRetrieveLabelFromTableViewCell;
-(BOOL)_accessibilityAvoidsMockViewContainers;
-(id)__accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_accessibilityLastFocusedChild;
-(id)_accessibilityRetrieveIvarText;
-(BOOL)_axHasSingleFocusableSubview;
-(id)_accessibilitySubviewMatchingFKAView:(id)arg1 ;
-(BOOL)_accessibilityViewIsProbablyDimmingView;
-(CGRect)_accessibilityBounds;
-(id)_axBackgroundViewForCornerRadius;
-(CGRect)_accessibilityFrameForView:(id)arg1 ;
-(BOOL)_accessibilityIsSiblingOfModalizingBlocker;
-(BOOL)_axHasNoVisibleAxElements;
-(BOOL)_axViewIsOffScreen:(id)arg1 ;
-(BOOL)_accessibilityObscuredScreenAllowsView:(id)arg1 ;
-(id)_axViewIsProbablyDimmingViewCachedValue;
-(void)_axSetViewIsProbablyDimmingView:(id)arg1 ;
-(BOOL)_accessibilityPointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_accessibilityBlocksInteraction;
-(id)_accessibilityHitTestSubviews;
-(BOOL)_accessibilityIsIgnored;
-(BOOL)_accessibilityViewIsBeingHitTested:(id)arg1 ;
-(BOOL)_accessibilityIsUserInteractionEnabledChain;
-(BOOL)_accessibilityModalViewBlocksView:(id)arg1 blockerView:(id*)arg2 ;
-(double)_accessibilityMaxFuzzyHitTestDistance;
-(id)_accessibilityCheckForAllowedModalView:(CGPoint)arg1 event:(id)arg2 ;
-(BOOL)_accessibilityShouldHitTestLayers;
-(id)_accessibilityUserTestingSubviewsSorted:(BOOL)arg1 ;
-(void)_axPrintSubviews:(long long)arg1 string:(id)arg2 ;
-(id)_axWindowSubviews;
-(BOOL)_accessibilityDidLoadAccessibilityInformation;
-(void)_setAccessibilityDidLoadAccessibilityInformation:(BOOL)arg1 ;
-(void)_accessibilityCapturedImagesWithDepth:(unsigned long long*)arg1 capturedImages:(id)arg2 ;
-(void)_accessibilityPostNotification:(id)arg1 ;
-(id)_superAccessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_accessibilityChildVendingParent;
-(id)_axResponderChain;
@end

