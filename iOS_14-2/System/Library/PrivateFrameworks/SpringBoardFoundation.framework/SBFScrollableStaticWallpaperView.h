/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGRect)cropRect;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(id)_scrollView;
-(void)_updateScrollViewZoomScales;
-(void)_setupScrollViewObserver;
-(void)_setupContentViewWithOptions:(unsigned long long)arg1 ;
-(double)parallaxFactor;
-(void)_updateParallaxForScroll;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(void)setParallaxEnabled:(BOOL)arg1 ;
-(double)_scrollViewParallaxFactor;
-(id)_newImageView;
-(void)_setupParallaxObserver;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)_setupScrollView;
-(BOOL)automaticallyEnablesParallax;
-(void)setAutomaticallyEnablesParallax:(BOOL)arg1 ;
-(BOOL)supportsCropping;
-(CGPoint)_minimumContentOffsetForOverhang;
-(CGPoint)_boundedContentOffsetForOverhang;
-(void)_setupColorBoxObserver;
-(id)_wallpaperImageForAnalysis;
-(CGSize)_imageSize;
-(double)cropZoomScale;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 variant:(long long)arg3 cacheGroup:(id)arg4 delegate:(id)arg5 options:(unsigned long long)arg6 ;
-(CGPoint)_maximumContentOffsetForOverhang;
-(void)layoutSubviews;
-(double)_throttleDuration;
-(CGRect)_cropRect;
-(void)_resetColorBoxes;
-(void)scrollViewDidChangeAdjustedContentInset:(id)arg1 ;
-(void)didMoveToWindow;
-(void)setCropRect:(CGRect)arg1 zoomScale:(double)arg2 ;
-(void)setContentView:(id)arg1 ;
-(void)dealloc;
-(double)_parallaxFactorWithZoomScale:(double)arg1 contentOffset:(CGPoint)arg2 ;
@end

