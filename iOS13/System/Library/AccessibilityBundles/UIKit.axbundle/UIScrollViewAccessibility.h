/*
* Generated on Monday, March 1, 2021 at 2:35:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CGRect)accessibilityFrame;
-(id)accessibilityPath;
-(long long)accessibilityContainerType;
-(void)_notifyDidScroll;
-(CGRect)_defaultFocusRegionFrame;
-(void)_scrollViewAnimationEnded:(id)arg1 finished:(BOOL)arg2 ;
-(void)_scrollViewDidEndDeceleratingForDelegate;
-(void)_scrollToTopFromTouchAtScreenLocation:(CGPoint)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id)_staticScrollBar;
-(void)_adjustScrollerIndicators:(BOOL)arg1 alwaysShowingThem:(BOOL)arg2 ;
-(void)_hideScrollIndicators;
-(CGPoint)_newScrollOffsetForScrubReturningAnimated:(BOOL*)arg1 ;
-(void)_didEndDirectManipulationWithScrubbingDirection:(long long)arg1 ;
-(unsigned long long)_accessibilityAutomationType;
-(BOOL)_accessibilityIsScannerGroup;
-(id)_accessibilitySubviews;
-(id)_accessibilityUserTestingChildren;
-(CGPoint)_accessibilityVisibleScrollArea:(BOOL)arg1 ;
-(id)_accessibilityScrollStatus;
-(BOOL)_accessibilityIsScrollAncestor;
-(BOOL)accessibilityScrollUpPage;
-(CGPoint)_accessibilityContentOffset;
-(BOOL)_accessibilityScrollingEnabled;
-(BOOL)_accessibilityScrollToFrame:(CGRect)arg1 forView:(id)arg2 ;
-(void)accessibilityApplyScrollContent:(CGPoint)arg1 sendScrollStatus:(BOOL)arg2 animateWithDuration:(double)arg3 ;
-(BOOL)accessibilityScrollLeftPage;
-(BOOL)accessibilityScrollRightPage;
-(BOOL)accessibilityScrollDownPage;
-(double)_accessibilityZoomScale;
-(id)_accessibilityVerticalScrollBarElement;
-(id)_accessibilityHorizontalScrollBarElement;
-(long long)_accessibilityPageIndex;
-(long long)_accessibilityPageCount;
-(BOOL)_accessibilityDrawsFocusRingWhenChildrenFocused;
-(id)_accessibilityFirstOpaqueElement;
-(void)accessibilityApplyScrollContent:(CGPoint)arg1 sendScrollStatus:(BOOL)arg2 animated:(BOOL)arg3 ;
-(id)_accessibilityLastOpaqueElement;
-(CGRect)_accessibilityContentFrame;
-(UIEdgeInsets)_accessibilityVisibleContentInset;
-(BOOL)_accessibilityIsSortPriorityContainer;
-(CGRect)_accessibilityUIViewAccessibilityFrame;
-(void)accessibilityZoomInAtPoint:(CGPoint)arg1 ;
-(void)accessibilityZoomOutAtPoint:(CGPoint)arg1 ;
-(BOOL)accessibilityScrollLeftPageSupported;
-(BOOL)accessibilityScrollRightPageSupported;
-(BOOL)accessibilityScrollDownPageSupported;
-(BOOL)accessibilityScrollUpPageSupported;
-(BOOL)_accessibilityShouldUseFallbackForVisibleContentInset;
-(void)_accessibilitySetShouldUseFallbackForVisibleContentInset:(BOOL)arg1 ;
-(void)_accessibilitySetVisibleContentInset:(UIEdgeInsets)arg1 ;
-(void)_accessibilityLoadAccessibilityInformation;
-(void)_accessibilitySetNavigationControllerInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)_accessibilityNavigationControllerInset;
-(BOOL)_accessibilityRemembersLastFocusedChild;
-(id)_accessibilityStoredVisibleContentInset;
-(id)_accessibilityStoredShouldUseFallbackForVisibleContentInset;
-(BOOL)accessibilityShouldEnableScrollIndicator:(id)arg1 ;
-(long long)accessibilityNumberOfPagesForScrollIndicator:(id)arg1 ;
-(double)accessibilityProgressForScrollIndicator:(id)arg1 ;
-(CGRect)accessibilityFrameForScrollIndicator:(id)arg1 ;
-(void)accessibilityScrollIndicator:(id)arg1 addProgress:(double)arg2 ;
-(void)accessibilityScrollIndicator:(id)arg1 didBecomeFocused:(BOOL)arg2 ;
-(id)_accessibilityDelegateScrollStatus;
-(void)_axAnnotateScrollBars;
-(id)_axVerticalScrollBar;
-(BOOL)_axShowsVerticalScrollBar;
-(void)_axSetVerticalScrollBar:(id)arg1 ;
-(id)_axHorizontalScrollBar;
-(BOOL)_axShowsHorizontalScrollBar;
-(void)_axSetHorizontalScrollBar:(id)arg1 ;
-(void)_announceDelayedStatus;
-(void)_accessibilityScrollToTopWithAnnouncement:(BOOL)arg1 touchLocation:(CGPoint)arg2 originalHandler:(/*^block*/id)arg3 ;
-(id)_accessibilityFirstLastOpaqueElement:(BOOL)arg1 ;
-(BOOL)_axScrollViewPagingEnabled;
-(BOOL)_axShouldScrollToAlignWithPage;
-(BOOL)_accessibilityShouldAnimateScrollToVisible;
-(void)_accessibilityCurrentPage:(long long*)arg1 totalPages:(long long*)arg2 type:(int)arg3 ;
-(BOOL)_accessibilityScrollStatusPrefersVertical;
-(void)_accessibilityCurrentPage:(long long*)arg1 totalPages:(long long*)arg2 forVerticalDirection:(BOOL)arg3 ;
-(double)_accessibilityScrollHeightDistance;
-(double)_accessibilityScrollWidthDistance;
-(id)_accessibilityFindRefreshControl;
-(BOOL)_accessibilityUseContentInset;
-(UIEdgeInsets)_accessibilityContentInset;
-(id)_accessibilityRetrieveDelegate;
-(double)_axAllowedPagingOverlap;
-(id)_accessibilityScrollStatusFormatString;
-(void)_accessibilityZoomAtPoint:(CGPoint)arg1 zoomIn:(BOOL)arg2 ;
-(void)_manipulateWithRefreshControl:(id)arg1 ;
-(BOOL)_accessibilityCanHandleContentPullDown;
-(void)_handleScrollViewPullDown;
-(BOOL)_accessibilityContentOffsetForScrollDirection:(int)arg1 newContentOffset:(CGPoint*)arg2 distanceMultiplier:(double)arg3 ;
-(BOOL)_accessibilityShouldAnimateScroll;
-(void)accessibilityApplyScrollContent:(CGPoint)arg1 sendScrollStatus:(BOOL)arg2 animateWithDuration:(double)arg3 animationCurve:(int)arg4 ;
-(CGPoint)accessibilityValidateScrollContentOffset:(CGPoint)arg1 ;
-(double)_accessibilityScrollAnimationDurationDelay;
-(void)_accessibilitySendScrollStatus;
-(BOOL)_accessibilityScrollPageInDirection:(int)arg1 ;
-(void)_accessibilitySetStoredShouldUseFallbackForVisibleContentInset:(id)arg1 ;
-(void)_accessibilitySetStoredVisibleContentInset:(id)arg1 ;
-(id)_axVerticalScrollIndicator;
-(id)_axHorizontalScrollIndicator;
-(CGPoint)_axContentOffsetForAddedProgress:(double)arg1 inDirection:(long long)arg2 ;
-(double)_axProgressForDirection:(long long)arg1 ;
-(id)_axLastScrubAnnouncementDate;
-(void)_axSetLastScrubAnnouncementDate:(id)arg1 ;
-(void)_axAnnounceScrubForDirection:(long long)arg1 ;
-(CGRect)_accessibilityScrollViewVisibleFrame;
-(void)_accessibilityCurrentPage:(long long*)arg1 totalPages:(long long*)arg2 ;
-(void)_accessibilitySetScrollStatus:(id)arg1 ;
@end

