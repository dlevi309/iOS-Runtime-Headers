/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PUCropTransformedImageViewDelegate;
@class UIImage, PHLivePhoto, NUMediaView, NUComposition;

@interface PUCropTransformedImageView : UIView {

	BOOL _tracking;
	BOOL _decelerating;
	UIImage* _image;
	PHLivePhoto* _livePhoto;
	NUMediaView* _videoMediaView;
	NUComposition* _autoloopComposition;
	NUComposition* _videoComposition;
	id<PUCropTransformedImageViewDelegate> _delegate;
	double _straightenAngle;
	double _pitchAngle;
	double _yawAngle;
	long long _orientation;
	CGSize _imageSize;
	SCD_Struct_PU24 _imageModulationOptions;
	CGRect _cropRect;
	CGRect _canvasFrame;

}

@property (nonatomic,retain) UIImage * image;                                                     //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                                                    //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,retain) PHLivePhoto * livePhoto;                                             //@synthesize livePhoto=_livePhoto - In the implementation block
@property (nonatomic,retain) NUMediaView * videoMediaView;                                        //@synthesize videoMediaView=_videoMediaView - In the implementation block
@property (nonatomic,retain) NUComposition * autoloopComposition;                                 //@synthesize autoloopComposition=_autoloopComposition - In the implementation block
@property (nonatomic,readonly) NUComposition * videoComposition;                                  //@synthesize videoComposition=_videoComposition - In the implementation block
@property (assign,nonatomic) SCD_Struct_PU24 imageModulationOptions;                              //@synthesize imageModulationOptions=_imageModulationOptions - In the implementation block
@property (assign,nonatomic,__weak) id<PUCropTransformedImageViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double straightenAngle;                                              //@synthesize straightenAngle=_straightenAngle - In the implementation block
@property (assign,nonatomic) double pitchAngle;                                                   //@synthesize pitchAngle=_pitchAngle - In the implementation block
@property (assign,nonatomic) double yawAngle;                                                     //@synthesize yawAngle=_yawAngle - In the implementation block
@property (assign,nonatomic) long long orientation;                                               //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) CGRect cropRect;                                                   //@synthesize cropRect=_cropRect - In the implementation block
@property (assign,nonatomic) CGRect canvasFrame;                                                  //@synthesize canvasFrame=_canvasFrame - In the implementation block
@property (assign,getter=isMuted,nonatomic) BOOL muted; 
@property (getter=isTracking,nonatomic,readonly) BOOL tracking;                                   //@synthesize tracking=_tracking - In the implementation block
@property (getter=isDecelerating,nonatomic,readonly) BOOL decelerating;                           //@synthesize decelerating=_decelerating - In the implementation block
-(CGRect)cropRect;
-(CGSize)imageSize;
-(void)setLivePhoto:(PHLivePhoto *)arg1 ;
-(PHLivePhoto *)livePhoto;
-(void)setImage:(UIImage *)arg1 ;
-(BOOL)isTracking;
-(id<PUCropTransformedImageViewDelegate>)delegate;
-(double)yawAngle;
-(void)setVideoComposition:(id)arg1 withSeekTime:(SCD_Struct_PH4)arg2 ;
-(void)setModelCropRect:(CGRect)arg1 viewCropRect:(CGRect)arg2 ;
-(void)setImageCropRectFromViewCropRect:(CGRect)arg1 animated:(BOOL)arg2 ;
-(void)setAutoloopComposition:(NUComposition *)arg1 ;
-(NUMediaView *)videoMediaView;
-(CGRect)validateViewCropRectAgainstModelCropRect:(CGRect)arg1 ;
-(void)setPitchAngle:(double)arg1 ;
-(void)setStraightenAngle:(double)arg1 ;
-(void)_resetCropRect;
-(void)setNeedsLayerTransformsUpdateAnimated:(BOOL)arg1 ;
-(void)_setCropModel:(id)arg1 ;
-(void)setCanvasFrame:(CGRect)arg1 ;
-(void)setImageModulationOptions:(SCD_Struct_PU24)arg1 ;
-(void)_setTracking:(BOOL)arg1 ;
-(BOOL)isDecelerating;
-(UIImage *)image;
-(void)setDelegate:(id<PUCropTransformedImageViewDelegate>)arg1 ;
-(double)pitchAngle;
-(void)setMuted:(BOOL)arg1 ;
-(NUComposition *)autoloopComposition;
-(CGRect)viewCropRectForImageRect:(CGRect)arg1 ;
-(CGRect)imageCropRectForViewRect:(CGRect)arg1 ;
-(CGRect)canvasFrame;
-(SCD_Struct_PU24)imageModulationOptions;
-(void)setVideoMediaView:(NUMediaView *)arg1 ;
-(double)straightenAngle;
-(long long)orientation;
-(NUComposition *)videoComposition;
-(void)setYawAngle:(double)arg1 ;
-(CGRect)_imageBounds;
-(BOOL)isMuted;
-(void)setImageSize:(CGSize)arg1 ;
-(id)cropModel;
-(void)setOrientation:(long long)arg1 ;
@end

