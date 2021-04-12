/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <SpringBoardFoundation/SBFStaticWallpaperView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol SBFCancelable;
@class UIImageView, UIScrollView, SBFWallpaperParallaxSettings, SBFSubject, NSString;

@interface SBFScrollableStaticWallpaperView : SBFStaticWallpaperView <UIScrollViewDelegate> {

	UIImageView* _imageView;
	UIScrollView* _scrollView;
	SBFWallpaperParallaxSettings* _parallaxSettings;
	SBFSubject* _scrollViewObserver;
	id<SBFCancelable> _colorBoxCancelToken;
	id<SBFCancelable> _parallaxCancelToken;
	double _minimumZoomScaleForParallax;
	double _minimumZoomScale;
	BOOL _automaticallyEnablesParallax;

}

@property (assign,nonatomic) BOOL automaticallyEnablesParallax;              //@synthesize automaticallyEnablesParallax=_automaticallyEnablesParallax - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldScaleForParallax;
+(BOOL)_canCacheImages;
+(BOOL)_canDownscaleSampleImage;
-(void)dealloc;
-(void)setContentView:(id)arg1 ;
-(void)layoutSubviews;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(void)scrollViewDidChangeAdjustedContentInset:(id)arg1 ;
-(void)didMoveToWindow;
-(id)_scrollView;
-(CGRect)_cropRect;
-(CGSize)_imageSize;
-(double)_throttleDuration;
-(CGRect)cropRect;
-(void)_setupScrollView;
-(void)setParallaxEnabled:(BOOL)arg1 ;
-(id)_newImageView;
-(double)parallaxFactor;
-(BOOL)supportsCropping;
-(id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 variant:(long long)arg3 cacheGroup:(id)arg4 delegate:(id)arg5 options:(unsigned long long)arg6 ;
-(void)_setupContentViewWithOptions:(unsigned long long)arg1 ;
-(void)setCropRect:(CGRect)arg1 zoomScale:(double)arg2 ;
-(double)cropZoomScale;
-(CGPoint)_boundedContentOffsetForOverhang;
-(double)_parallaxFactorWithZoomScale:(double)arg1 contentOffset:(CGPoint)arg2 ;
-(double)_scrollViewParallaxFactor;
-(CGPoint)_minimumContentOffsetForOverhang;
-(CGPoint)_maximumContentOffsetForOverhang;
-(void)_resetColorBoxes;
-(void)_setupScrollViewObserver;
-(void)_setupColorBoxObserver;
-(void)_setupParallaxObserver;
-(void)_updateParallaxForScroll;
-(void)_updateScrollViewZoomScales;
-(id)_wallpaperImageForAnalysis;
-(BOOL)automaticallyEnablesParallax;
-(void)setAutomaticallyEnablesParallax:(BOOL)arg1 ;
@end

