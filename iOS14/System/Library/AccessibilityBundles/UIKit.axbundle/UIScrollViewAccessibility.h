/*
* Generated on Thursday, January 14, 2021 at 2:29:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIScrollViewAccessibility_super.h>
#import <libobjc.A.dylib/AXScrollIndicatorDelegate.h>

@class NSString;

@interface UIScrollViewAccessibility : __UIScrollViewAccessibility_super <AXScrollIndicatorDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)_didEndDirectManipulationWithScrubbingDirection:(long long)arg1 ;
-(BOOL)_accessibilityRemembersLastFocusedChild;
-(BOOL)_accessibilityIsScannerGroup;
-(id)_accessibilitySubviews;
-(id)_accessibilityScrollStatus;
-(id)_accessibilityUserTestingChildren;
-(BOOL)_accessibilityIsScrollAncestor;
-(CGPoint)_accessibilityVisibleScrollArea:(BOOL)arg1 ;
-(BOOL)accessibilityScrollUpPage;
-(CGPoint)_accessibilityContentOffset;
-(BOOL)_accessibilityScrollToFrame:(CGRect)arg1 forView:(id)arg2 ;
-(void)accessibilityApplyScrollContent:(CGPoint)arg1 sendScrollStatus:(BOOL)arg2 animateWithDuration:(double)arg3 ;
-(BOOL)accessibilityScrollLeftPage;
-(BOOL)accessibilityScrollRightPage;
-(BOOL)accessibilityScrollDownPage;
-(void)_scrollToTopFromTouchAtScreenLocation:(CGPoint)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id)_accessibilityFirstOpaqueElement;
-(id)_accessibilityFocusAbsoluteFirstLastOpaqueElement:(BOOL)arg1 technology:(id)arg2 honorsGroups:(BOOL)arg3 shouldAlwaysScroll:(BOOL)arg4 ;
-(double)_accessibilityZoomScale;
-(BOOL)_accessibilityScrollingEnabled;
-(void)_notifyDidScroll;
-(id)_staticScrollBar;
-(id)_accessibilityVerticalScrollBarElement;
-(id)_accessibilityHorizontalScrollBarElement;
-(CGRect)accessibilityFrame;
-(long long)_accessibilityPageIndex;
-(long long)_accessibilityPageCount;
-(BOOL)_accessibilityDrawsFocusRingWhenChildrenFocused;
-(id)_accessibilityFirstOpaqueElementWithOptions:(id)arg1 ;
-(id)_accessibilityLastOpaqueElement;
-(id)_accessibilityLastOpaqueElementWithOptions:(id)arg1 ;
-(void)accessibilityApplyScrollContent:(CGPoint)arg1 sendScrollStatus:(BOOL)arg2 animated:(BOOL)arg3 ;
-(long long)accessibilityContainerType;
-(CGRect)_accessibilityContentFrame;
-(UIEdgeInsets)_accessibilityVisibleContentInset;
-(BOOL)_accessibilityIsSortPriorityContainer;
-(id)_accessibilityUIViewAccessibilityFrame;
-(void)accessibilityZoomInAtPoint:(CGPoint)arg1 ;
-(void)accessibilityZoomOutAtPoint:(CGPoint)arg1 ;
-(CGRect)_defaultFocusRegionFrame;
-(BOOL)accessibilityScrollLeftPageSupported;
-(BOOL)accessibilityScrollRightPageSupported;
-(BOOL)accessibilityScrollDownPageSupported;
-(BOOL)accessibilityScrollUpPageSupported;
-(void)_scrollViewAnimationEnded:(id)arg1 finished:(BOOL)arg2 ;
-(void)_adjustScrollerIndicators:(BOOL)arg1 alwaysShowingThem:(BOOL)arg2 ;
-(void)_hideScrollIndicators;
-(void)_accessibilitySetVisibleContentInset:(UIEdgeInsets)arg1 ;
-(BOOL)_accessibilityShouldUseFallbackForVisibleContentInset;
-(void)_accessibilitySetShouldUseFallbackForVisibleContentInset:(BOOL)arg1 ;
-(void)_accessibilityLoadAccessibilityInformation;
-(void)_accessibilitySetNavigationControllerInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)_accessibilityNavigationControllerInset;
-(unsigned long long)_accessibilityAutomationType;
-(void)_scrollViewDidEndDeceleratingForDelegate;
-(id)accessibilityPath;
-(CGPoint)_newScrollOffsetForScrubReturningAnimated:(BOOL*)arg1 ;
-(double)_accessibilityScrollWidthDistance;
-(void)_accessibilityZoomAtPoint:(CGPoint)arg1 zoomIn:(BOOL)arg2 ;
-(BOOL)_accessibilityScrollPageInDirection:(int)arg1 ;
-(double)_accessibilityScrollAnimationDurationDelay;
-(void)_accessibilitySendScrollStatus;
-(double)_accessibilityScrollHeightDistance;
-(void)_axAnnotateScrollBars;
-(id)_axOverrideShowsVerticalScrollBars;
-(id)_axOverrideShowsHorizontallScrollBars;
-(id)_axVerticalScrollBar;
-(BOOL)_axShowsVerticalScrollBar;
-(void)_axSetVerticalScrollBar:(id)arg1 ;
-(id)_axHorizontalScrollBar;
-(BOOL)_axShowsHorizontalScrollBar;
-(void)_axSetHorizontalScrollBar:(id)arg1 ;
-(void)_announceDelayedStatus;
-(void)_accessibilityScrollToTopWithAnnouncement:(BOOL)arg1 touchLocation:(CGPoint)arg2 originalHandler:(/*^block*/id)arg3 ;
-(id)_accessibilityFirstLastOpaqueElement:(BOOL)arg1 options:(id)arg2 ;
-(void)_axSetAlwaysScrollsContentIntoView:(BOOL)arg1 ;
-(BOOL)_axAlwaysScrollsContentIntoView;
-(BOOL)_axScrollViewPagingEnabled;
-(BOOL)_axShouldScrollToAlignWithPage;
-(CGPoint)_axPageAlignedContentOffsetForPoint:(CGPoint)arg1 ;
-(BOOL)_accessibilityShouldAnimateScrollToVisible;
-(void)_accessibilityCurrentPage:(long long*)arg1 totalPages:(long long*)arg2 type:(int)arg3 ;
-(BOOL)_accessibilityScrollStatusPrefersVertical;
-(void)_accessibilityCurrentPage:(long long*)arg1 totalPages:(long long*)arg2 forVerticalDirection:(BOOL)arg3 ;
-(CGPoint)_axMaximumContentOffset;
-(CGPoint)_axMinimumContentOffset;
-(id)_accessibilityFindRefreshControl;
-(BOOL)_accessibilityUseContentInset;
-(UIEdgeInsets)_accessibilityContentInset;
-(id)_accessibilityRetrieveDelegate;
-(double)_axAllowedPagingOverlap;
-(id)_accessibilityElementsFilteredByPagingScrollView:(id)arg1 ;
-(id)_accessibilityDelegateScrollStatus;
-(id)_accessibilityScrollStatusFormatString;
-(void)_manipulateWithRefreshControl:(id)arg1 ;
-(BOOL)_accessibilityCanHandleContentPullDown;
-(void)_handleScrollViewPullDown;
-(BOOL)_accessibilityContentOffsetForScrollDirection:(int)arg1 newContentOffset:(CGPoint*)arg2 distanceMultiplier:(double)arg3 ;
-(BOOL)_accessibilityShouldAnimateScroll;
-(CGSize)_axPageSize;
-(void)accessibilityApplyScrollContent:(CGPoint)arg1 sendScrollStatus:(BOOL)arg2 animateWithDuration:(double)arg3 animationCurve:(int)arg4 ;
-(CGPoint)accessibilityValidateScrollContentOffset:(CGPoint)arg1 ;
-(id)_accessibilityStoredShouldUseFallbackForVisibleContentInset;
-(void)_accessibilitySetStoredShouldUseFallbackForVisibleContentInset:(id)arg1 ;
-(id)_accessibilityStoredVisibleContentInset;
-(void)_accessibilitySetStoredVisibleContentInset:(id)arg1 ;
-(id)_axVerticalScrollIndicator;
-(id)_axHorizontalScrollIndicator;
-(long long)accessibilityNumberOfPagesForScrollIndicator:(id)arg1 ;
-(CGPoint)_axContentOffsetForAddedProgress:(double)arg1 inDirection:(long long)arg2 ;
-(double)_axProgressForDirection:(long long)arg1 ;
-(id)_axLastScrubAnnouncementDate;
-(void)_axSetLastScrubAnnouncementDate:(id)arg1 ;
-(void)_axAnnounceScrubForDirection:(long long)arg1 ;
-(BOOL)accessibilityShouldEnableScrollIndicator:(id)arg1 ;
-(void)accessibilityScrollIndicator:(id)arg1 didBecomeFocused:(BOOL)arg2 ;
-(void)accessibilityScrollIndicator:(id)arg1 addProgress:(double)arg2 ;
-(double)accessibilityProgressForScrollIndicator:(id)arg1 ;
-(CGRect)accessibilityFrameForScrollIndicator:(id)arg1 ;
-(void)_axSetOverrideShowsVerticalScrollBars:(id)arg1 ;
-(void)_axSetOverrideShowsHorizontallScrollBars:(id)arg1 ;
-(CGRect)_accessibilityScrollViewVisibleFrame;
-(void)_accessibilityCurrentPage:(long long*)arg1 totalPages:(long long*)arg2 ;
-(void)_accessibilitySetScrollStatus:(id)arg1 ;
@end

