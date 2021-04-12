/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIPageControl.h>

@protocol SBIconListPageControlDelegate;
@class SBIconPageIndicatorImageSetResult, _UILegibilitySettings, SBIconPageIndicatorImageSetCache, NSArray;

@interface SBIconListPageControl : UIPageControl {

	BOOL _hasSetLegibility;
	double _cachedDefaultHeight;
	SBIconPageIndicatorImageSetResult* _pageIndicatorImageSets;
	SBIconPageIndicatorImageSetResult* _searchIndicatorImageSets;
	BOOL _shouldShowSearchIndicator;
	BOOL _legibilityEnabled;
	_UILegibilitySettings* _legibilitySettings;
	id<SBIconListPageControlDelegate> _delegate;
	SBIconPageIndicatorImageSetCache* _imageSetCache;
	NSArray* _touchIgnoreRects;

}

@property (assign,nonatomic) BOOL shouldShowSearchIndicator;                                 //@synthesize shouldShowSearchIndicator=_shouldShowSearchIndicator - In the implementation block
@property (assign,getter=isLegibilityEnabled,nonatomic) BOOL legibilityEnabled;              //@synthesize legibilityEnabled=_legibilityEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<SBIconListPageControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SBIconPageIndicatorImageSetCache * imageSetCache;               //@synthesize imageSetCache=_imageSetCache - In the implementation block
@property (nonatomic,readonly) double defaultHeight; 
@property (nonatomic,readonly) double defaultIndicatorHeight; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                     //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,copy) NSArray * touchIgnoreRects;                                       //@synthesize touchIgnoreRects=_touchIgnoreRects - In the implementation block
-(id<SBIconListPageControlDelegate>)delegate;
-(void)setDelegate:(id<SBIconListPageControlDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(double)defaultHeight;
-(void)_invalidateIndicators;
-(id)_indicatorViewEnabled:(BOOL)arg1 index:(long long)arg2 ;
-(void)_transitionIndicator:(id)arg1 toEnabled:(BOOL)arg2 index:(long long)arg3 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(NSArray *)touchIgnoreRects;
-(id)_searchIndicatorImage:(BOOL)arg1 ;
-(id)_iconListIndicatorImage:(BOOL)arg1 ;
-(void)_setIndicatorImage:(id)arg1 toEnabled:(BOOL)arg2 index:(long long)arg3 ;
-(double)defaultIndicatorHeight;
-(void)setImageSetCache:(SBIconPageIndicatorImageSetCache *)arg1 ;
-(BOOL)shouldShowSearchIndicator;
-(void)setShouldShowSearchIndicator:(BOOL)arg1 ;
-(BOOL)isLegibilityEnabled;
-(void)setLegibilityEnabled:(BOOL)arg1 ;
-(SBIconPageIndicatorImageSetCache *)imageSetCache;
-(void)setTouchIgnoreRects:(NSArray *)arg1 ;
@end

