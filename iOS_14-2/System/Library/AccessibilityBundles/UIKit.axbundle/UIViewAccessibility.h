/*
* Generated on Thursday, January 14, 2021 at 2:29:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIViewAccessibility_super.h>

@interface UIViewAccessibility : __UIViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(BOOL)_isSerializableAccessibilityElement;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
+(void)_axTriggerNextContextMenuInteractionInQueue:(id)arg1 forElement:(id)arg2 targetPointValue:(id)arg3 ;
+(id)_axFocusedWindowSubviews;
-(BOOL)canBecomeFocused;
-(id)preferredFocusEnvironments;
-(id)_accessibilityProxyView;
-(BOOL)isAccessibilityElement;
-(BOOL)_accessibilityViewIsActive;
-(void)setHidden:(BOOL)arg1 ;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_accessibilityViewController;
-(id)_systemDefaultFocusGroupDescriptor;
-(BOOL)accessibilityElementsHidden;
-(BOOL)accessibilityRespondsToUserInteraction;
-(id)_accessibilityObscuredScreenAllowedViews;
-(BOOL)accessibilityIsWindow;
-(void)setBackgroundColor:(id)arg1 ;
-(id)_accessibilityUserTestingChildren;
-(unsigned long long)accessibilityTraits;
-(BOOL)_accessibilityShowContextMenuForElement:(id)arg1 targetPointValue:(id)arg2 ;
-(BOOL)_accessibilityServesAsContainingParentForOrdering;
-(BOOL)_isEligibleForFocusInteraction;
-(BOOL)accessibilityElementIsFocused;
-(double)_accessibilityViewAlpha;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)_accessibilityAuditIssuesWithOptions:(id)arg1 ;
-(BOOL)_accessibilityIsUserInteractionEnabled;
-(BOOL)_accessibilityIsInCollectionCell;
-(BOOL)accessibilityViewIsModal;
-(id)_accessibilitySupportGesturesAttributes;
-(CGRect)accessibilityFrame;
-(id)_accessibilityCapturedImages;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_notifyReferenceViewSizeChange;
-(void)setIsAccessibilityElement:(BOOL)arg1 ;
-(id)_accessibilityAutomaticIdentifier;
-(long long)_accessibilityHorizontalSizeClass;
-(long long)_accessibilityVerticalSizeClass;
-(BOOL)_accessibilityHasDragSources;
-(BOOL)_accessibilityHasDragDestinations;
-(id)_accessibilitySortedElementsWithin;
-(id)_accessibilitySortedElementsWithinWithOptions:(id)arg1 ;
-(id)accessibilityContainer;
-(void)_accessibilityFinalize;
-(BOOL)_accessibilityOnlyComparesByXAxis;
-(id)_accessibilityAllDragSourceDescriptors;
-(id)_accessibilityAllDropPointDescriptors;
-(id)_accessibilityImageData;
-(void)setAlpha:(double)arg1 ;
-(id)_childFocusRegionsInRect:(CGRect)arg1 inCoordinateSpace:(id)arg2 ;
-(BOOL)_accessibilityIsInTableCell;
-(BOOL)_accessibilityIsFKARunningForFocusItem;
-(id)_accessibilityCirclePathBasedOnBoundsWidth;
-(BOOL)_accessibilityFKAShouldBeProcessed;
-(id)_accessibilityFocusRingTintColor;
-(id)accessibilityPath;
-(BOOL)_accessibilityInTopLevelTabLoop;
-(id)_accessibilityHitTestSubviews;
-(CGRect)_accessibilityBounds;
-(id)_axSubviews;
-(id)__accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_accessibilityUserTestingSubviewsSorted:(BOOL)arg1 ;
-(id)_accessibilityRetrieveIvarText;
-(double)_accessibilityMaxFuzzyHitTestDistance;
-(BOOL)_accessibilityHasButtonLikeGestureRecognizer;
-(BOOL)_accessibilityBlocksInteraction;
-(BOOL)_accessibilityObscuredScreenAllowsView:(id)arg1 ;
-(id)_accessibilityRetrieveLabelFromTableViewCell;
-(id)_accessibilityLastFocusedChild;
-(BOOL)_accessibilityAvoidsMockViewContainers;
-(BOOL)_axHasSingleFocusableSubview;
-(id)_accessibilitySubviewMatchingFKAView:(id)arg1 ;
-(BOOL)_accessibilityViewIsProbablyDimmingView;
-(id)_axBackgroundViewForCornerRadius;
-(CGRect)_accessibilityFrameForView:(id)arg1 ;
-(BOOL)_accessibilityIsSiblingOfModalizingBlocker;
-(BOOL)_axHasNoVisibleAxElements;
-(BOOL)_axViewIsOffScreen:(id)arg1 ;
-(id)_axViewIsProbablyDimmingViewCachedValue;
-(void)_axSetViewIsProbablyDimmingView:(id)arg1 ;
-(BOOL)_accessibilityUseAccessibilityFrameForHittest;
-(BOOL)_accessibilityPointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_accessibilityIsIgnored;
-(BOOL)_accessibilityViewIsBeingHitTested:(id)arg1 ;
-(BOOL)_accessibilityIsUserInteractionEnabledChain;
-(BOOL)_accessibilityModalViewBlocksView:(id)arg1 blockerView:(id*)arg2 ;
-(id)_accessibilityCheckForAllowedModalView:(CGPoint)arg1 event:(id)arg2 ;
-(BOOL)_accessibilityShouldHitTestLayers;
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

