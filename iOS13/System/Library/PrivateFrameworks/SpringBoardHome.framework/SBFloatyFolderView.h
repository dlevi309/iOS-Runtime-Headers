/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <SpringBoardHome/SBFolderView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/SBFolderBackgroundViewDelegate.h>

@class SBFloatyFolderBackgroundClipView, NSMutableArray, NSMapTable, UITapGestureRecognizer, UIPinchGestureRecognizer, UILongPressGestureRecognizer, SBHFolderSettings, SBIconView, NSString;

@interface SBFloatyFolderView : SBFolderView <UIGestureRecognizerDelegate, PTSettingsKeyObserver, SBFolderBackgroundViewDelegate> {

	SBFloatyFolderBackgroundClipView* _scrollClipView;
	NSMutableArray* _pageBackgroundViews;
	NSMapTable* _pageBackgroundViewsForIconListViews;
	long long _scalingViewPageIndex;
	UITapGestureRecognizer* _tapGesture;
	UIPinchGestureRecognizer* _pinchGesture;
	UILongPressGestureRecognizer* _longPressGesture;
	SBHFolderSettings* _folderSettings;
	SBIconView* _cachedHiddenIconView;
	BOOL _displayingMultipleIconLists;
	BOOL _displaysMultipleIconListsInLandscapeOrientation;
	BOOL _convertingIconListStyle;
	BOOL _animatingRotation;
	unsigned long long _backgroundEffect;

}

@property (nonatomic,readonly) BOOL displaysMultipleIconListsInLandscapeOrientation;                             //@synthesize displaysMultipleIconListsInLandscapeOrientation=_displaysMultipleIconListsInLandscapeOrientation - In the implementation block
@property (assign,getter=isDisplayingMultipleIconLists,nonatomic) BOOL displayingMultipleIconLists;              //@synthesize displayingMultipleIconLists=_displayingMultipleIconLists - In the implementation block
@property (assign,getter=isConvertingIconListStyle,nonatomic) BOOL convertingIconListStyle;                      //@synthesize convertingIconListStyle=_convertingIconListStyle - In the implementation block
@property (assign,getter=isAnimatingRotation,nonatomic) BOOL animatingRotation;                                  //@synthesize animatingRotation=_animatingRotation - In the implementation block
@property (nonatomic,readonly) double cornerRadius; 
@property (assign,nonatomic) unsigned long long backgroundEffect;                                                //@synthesize backgroundEffect=_backgroundEffect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)defaultCornerRadius;
+(id)defaultIconLocation;
+(Class)_scrollViewClass;
+(unsigned long long)countOfAdditionalPagesToKeepVisibleInOneDirection;
-(void)dealloc;
-(id)initWithConfiguration:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(BOOL)_showsTitle;
-(double)cornerRadius;
-(unsigned long long)backgroundEffect;
-(void)setBackgroundEffect:(unsigned long long)arg1 ;
-(void)setBackgroundAlpha:(double)arg1 ;
-(void)setLegibilitySettings:(id)arg1 ;
-(void)_orientationDidChange:(long long)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(CGPoint)_scrollView:(id)arg1 adjustedOffsetForOffset:(CGPoint)arg2 translation:(CGPoint)arg3 startPoint:(CGPoint)arg4 locationInView:(CGPoint)arg5 horizontalVelocity:(inout double*)arg6 verticalVelocity:(inout double*)arg7 ;
-(void)_layoutSubviews;
-(void)_handleLongPressGesture:(id)arg1 ;
-(void)_handlePinchGesture:(id)arg1 ;
-(double)_titleFontSize;
-(BOOL)isAnimatingRotation;
-(CGPoint)visibleFolderRelativeImageCenterForIcon:(id)arg1 ;
-(id)borrowScalingView;
-(void)returnScalingView;
-(void)updateAccessibilityTintColors;
-(void)willTransitionAnimated:(BOOL)arg1 withSettings:(id)arg2 ;
-(void)fadeContentForMagnificationFraction:(double)arg1 ;
-(void)didTransitionAnimated:(BOOL)arg1 ;
-(void)fadeContentForMinificationFraction:(double)arg1 ;
-(id)iconListViewAtPoint:(CGPoint)arg1 ;
-(void)transitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)displaysMultipleIconListsInLandscapeOrientation;
-(id)accessibilityTintColorForBackgroundView:(id)arg1 ;
-(id)legibilitySettingsForIconListViews;
-(CGRect)_iconListFrameForPageRect:(CGRect)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_updateScrollingState:(BOOL)arg1 ;
-(double)scrollableWidthForVisibleColumnRange;
-(void)_removeIconListView:(id)arg1 ;
-(void)_addIconListView:(id)arg1 ;
-(void)_currentPageIndexDidChange;
-(CGRect)_frameForScalingView;
-(void)_updateScalingViewFrame;
-(void)_updateIconListContainment:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(double)minimumVisibleScrollOffset;
-(long long)iconVisibilityHandling;
-(BOOL)locationCountsAsInsideFolder:(CGPoint)arg1 ;
-(double)_offsetToCenterPageControlInSpaceForPageControl;
-(void)_configureGestures;
-(BOOL)_shouldConvertToMultipleIconListsInLandscapeOrientation;
-(void)_convertToMultipleIconListsAnimated:(BOOL)arg1 ;
-(void)accessibilityReduceTransparencyDidChange:(id)arg1 ;
-(id)floatyFolderConfiguration;
-(void)enumeratePageBackgroundViewsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isDisplayingMultipleIconLists;
-(id)_newPageBackgroundView;
-(void)_convertToSingleIconListAnimated:(BOOL)arg1 ;
-(void)setAnimatingRotation:(BOOL)arg1 ;
-(BOOL)isConvertingIconListStyle;
-(double)_titleVerticalOffsetForOrientation:(long long)arg1 ;
-(CGRect)_pageBackgroundFrameForPageRect:(CGRect)arg1 ;
-(void)_updateScalingViewLocation;
-(void)setConvertingIconListStyle:(BOOL)arg1 ;
-(void)setDisplayingMultipleIconLists:(BOOL)arg1 ;
-(void)findHiddenIconView;
-(void)_setScrollViewNeedsToClipCorners:(BOOL)arg1 ;
-(double)_rubberBandIntervalForOverscroll;
-(void)_handleOutsideTap:(id)arg1 ;
-(BOOL)_tapToCloseGestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
@end

