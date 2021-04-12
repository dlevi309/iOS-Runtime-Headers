/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIScrollView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <VideosUI/VideosExtrasZoomingImageTransitionParticipant.h>

@class UIImage, UIImageView, NSString;

@interface VideosExtrasZoomableImageView : UIScrollView <UIScrollViewDelegate, VideosExtrasZoomingImageTransitionParticipant> {

	UIImage* _image;
	double _scaleToRestoreAfterResize;
	UIImageView* _zoomView;
	CGSize _imageSize;
	CGPoint _pointToCenterAfterResize;

}

@property (assign,nonatomic) CGSize imageSize;                              //@synthesize imageSize=_imageSize - In the implementation block
@property (assign,nonatomic) CGPoint pointToCenterAfterResize;              //@synthesize pointToCenterAfterResize=_pointToCenterAfterResize - In the implementation block
@property (assign,nonatomic) double scaleToRestoreAfterResize;              //@synthesize scaleToRestoreAfterResize=_scaleToRestoreAfterResize - In the implementation block
@property (nonatomic,retain) UIImageView * zoomView;                        //@synthesize zoomView=_zoomView - In the implementation block
@property (nonatomic,retain) UIImage * image;                               //@synthesize image=_image - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)imageSize;
-(UIImageView *)zoomView;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(UIImage *)image;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(CGPoint)_minimumContentOffset;
-(void)setImageSize:(CGSize)arg1 ;
-(CGPoint)_maximumContentOffset;
-(void)dealloc;
-(void)prepareZoomingImageTransitionWithContext:(id)arg1 ;
-(void)performZoomingImageTransitionWithContext:(id)arg1 ;
-(void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(BOOL)arg2 ;
-(void)zoomToPoint:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)_prepareToResize;
-(void)_recoverFromResizing;
-(void)setZoomView:(UIImageView *)arg1 ;
-(void)_updateMinimumAndMaximumZoomScalesForCurrentBounds;
-(void)setPointToCenterAfterResize:(CGPoint)arg1 ;
-(void)setScaleToRestoreAfterResize:(double)arg1 ;
-(double)scaleToRestoreAfterResize;
-(CGPoint)pointToCenterAfterResize;
@end

