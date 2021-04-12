/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/PLExpandableView.h>

@class PLImageView, PLManagedAsset, NSString, PLVideoView;

@interface PLExpandableImageView : PLExpandableView {

	PLImageView* _imageView;
	int _imageID;
	CGSize _originalSize;
	double _originalWidth;
	double _originalAngle;
	CGPoint _anchorPoint;
	double _imageRotationAngle;
	double _pinchWidth;
	double _pinchAngle;
	double _pinchScale;
	CGRect _initialExpandingFrame;
	CGRect _originalBounds;
	float _currentAngle;
	CGSize _centerOffset;
	PLManagedAsset* _photo;
	struct {
		unsigned isRotating : 1;
		unsigned didTrack : 1;
		unsigned updateFrame : 1;
		unsigned didLayout : 1;
		unsigned alwaysDoLayout : 1;
		unsigned didComputeCenterOffset : 1;
		unsigned imageIsFullScreen : 1;
	}  _exImageFlags;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,readonly) CGSize imageSize; 
@property (nonatomic,retain) PLVideoView * videoView; 
@property (nonatomic,readonly) BOOL showsPlaceholder; 
@property (assign,getter=isBorderAndAccessoriesVisible,nonatomic) BOOL borderAndAccessoriesVisible; 
@property (nonatomic,retain) PLManagedAsset * photo;                                                             //@synthesize photo=_photo - In the implementation block
+(double)imageBorderWidth;
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)image;
-(void)setImage:(id)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_contentView;
-(void)layoutSubviews;
-(id)imageView;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setShadowEnabled:(BOOL)arg1 ;
-(BOOL)isShadowEnabled;
-(CGSize)imageSize;
-(void)setTransitionProgress:(double)arg1 ;
-(double)transitionProgress;
-(void)finishTransition;
-(PLManagedAsset *)photo;
-(void)setPhoto:(PLManagedAsset *)arg1 ;
-(void)setVideoView:(PLVideoView *)arg1 ;
-(PLVideoView *)videoView;
-(float)_currentScale;
-(id)initWithFrame:(CGRect)arg1 frameStyle:(int)arg2 withBorder:(BOOL)arg3 ;
-(id)initWithFrame:(CGRect)arg1 frameStyle:(int)arg2 ;
-(float)_expandedScale;
-(float)_expansionFraction;
-(CGRect)_snappedExpandedFrame;
-(void)stateDidChangeFrom:(int)arg1 ;
-(void)_setOriginalSize:(CGSize)arg1 ;
-(void)beginTrackingPinch:(id)arg1 ;
-(void)setSize:(CGSize)arg1 angle:(float)arg2 ;
-(float)_borderAlphaForExpansionFraction:(float)arg1 ;
-(void)_updateBorderAndAccessoriesAlpha;
-(void)_updatePinchWidthAndScaleWithLeftPoint:(CGPoint)arg1 rightPoint:(CGPoint)arg2 ;
-(float)continueTrackingPinch:(id)arg1 ;
-(CGSize)_newSizeFromSize:(CGSize)arg1 ;
-(void)setTransformAndCenterForFrame:(CGRect)arg1 ;
-(float)completeTrackingPinch:(id)arg1 toState:(int)arg2 duration:(double)arg3 ;
-(void)_bounceBack:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)_bounceToPlace:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)setBorderAndAccessoriesVisible:(BOOL)arg1 ;
-(BOOL)isBorderAndAccessoriesVisible;
-(void)setImage:(id)arg1 isFullscreen:(BOOL)arg2 ;
-(void)setFullSizeImageJPEGData:(id)arg1 size:(CGSize)arg2 orientation:(long long)arg3 ;
-(BOOL)showsPlaceholder;
-(void)setShowsPlaceholder:(BOOL)arg1 ;
-(CGRect)frameOfImage;
-(double)imageRotationAngle;
-(BOOL)isBeingManipulated;
-(void)setTextBadgeString:(id)arg1 ;
-(void)renderSnapshotInContext:(CGContextRef)arg1 ;
@end

