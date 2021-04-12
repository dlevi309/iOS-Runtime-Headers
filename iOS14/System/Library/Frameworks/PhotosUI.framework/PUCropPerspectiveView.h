/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUCropTransformedImageView.h>
#import <libobjc.A.dylib/NUMediaViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PUCropGestureHandlerDelegate.h>

@class PLImageGeometry, PHLivePhotoView, PXImageModulationManager, PXImageLayerModulator, PUCropGestureHandler, CALayer, CAShapeLayer, NUCropModel, NSString;

@interface PUCropPerspectiveView : PUCropTransformedImageView <NUMediaViewDelegate, UIGestureRecognizerDelegate, PUCropGestureHandlerDelegate> {

	PLImageGeometry* _imageGeometry;
	PHLivePhotoView* _livePhotoView;
	PXImageModulationManager* _imageModulationManager;
	PXImageLayerModulator* _imageLayerModulator;
	SCD_Struct_PH4 _cachedVideoSeekTime;
	PUCropGestureHandler* _gestureHandler;
	BOOL _muted;
	BOOL _needsLayerTransformUpdate;
	BOOL _layerTransformUpdateAnimated;
	BOOL _needsUpdateLayerTransforms;
	BOOL _needsUpdateLayerTransformsAnimated;
	BOOL _isDebugging;
	CALayer* _imageLayer;
	CALayer* _mediaSuperlayer;
	CALayer* _liveImageLayer;
	CALayer* _mediaLayer;
	CALayer* _debugLayer;
	CAShapeLayer* _debugViewRectLayer;
	CAShapeLayer* _debugCropRectLayer;
	CAShapeLayer* _debugQuadLayer;
	NUCropModel* _cropModel;
	double _lastPitchRadians;
	double _lastYawRadians;
	double _lastRollRadians;
	double _lastImageZoomScale;
	CGVector _lastPanRubberBandOffset;
	CGPoint _lastModelCropCenter;
	CGPoint _lastViewCropCenter;
	double _lastUICroppingRectToImageScale;
	float _gainMapValue;
	CGImageRef _gainMapImage;
	CGRect _imageCropRect;

}

@property (nonatomic,readonly) CGRect imageCropRect;                //@synthesize imageCropRect=_imageCropRect - In the implementation block
@property (nonatomic,retain) CGImageRef gainMapImage;               //@synthesize gainMapImage=_gainMapImage - In the implementation block
@property (assign,nonatomic) float gainMapValue;                    //@synthesize gainMapValue=_gainMapValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setGainMapImage:(CGImageRef)arg1 ;
-(void)_invalidateImageLayerModulator;
-(CGImageRef)gainMapImage;
-(float)gainMapValue;
-(void)setLivePhoto:(id)arg1 ;
-(void)setImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_animateValueFromValue:(double)arg1 toValue:(double)arg2 interpolation:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(CGSize)masterImageSize;
-(void)updateLayerTransformsAnimated:(BOOL)arg1 ;
-(void)setVideoComposition:(id)arg1 withSeekTime:(SCD_Struct_PH4)arg2 ;
-(void)setModelCropRect:(CGRect)arg1 viewCropRect:(CGRect)arg2 ;
-(void)setImageCropRectFromViewCropRect:(CGRect)arg1 animated:(BOOL)arg2 ;
-(void)setAutoloopComposition:(id)arg1 ;
-(void)tearDownMediaViewAndLayers;
-(CGRect)imageCropRect;
-(CGRect)validateViewCropRectAgainstModelCropRect:(CGRect)arg1 ;
-(void)setPitchAngle:(double)arg1 ;
-(void)setStraightenAngle:(double)arg1 ;
-(void)_resetCropRect;
-(void)setNeedsLayerTransformsUpdateAnimated:(BOOL)arg1 ;
-(void)_setCropModel:(id)arg1 ;
-(void)setCanvasFrame:(CGRect)arg1 ;
-(void)setImageModulationOptions:(SCD_Struct_PU22)arg1 ;
-(void)handlePanGesture:(id)arg1 ;
-(void)setGainMapValue:(float)arg1 ;
-(void)layoutSubviews;
-(void)willBeginTrackingWithCropGestureHandler:(id)arg1 ;
-(void)didTrackWithCropGestureHandler:(id)arg1 ;
-(void)didBeginTrackingWithCropGestureHandler:(id)arg1 ;
-(void)didEndTrackingWithCropGestureHandler:(id)arg1 ;
-(void)mediaViewDidFinishRendering:(id)arg1 ;
-(CATransform3D)_imageOrientationTransform;
-(CATransform3D)_imageOrientationTransformWithoutTranslation;
-(void)updateLayerTransformsAnimated:(BOOL)arg1 viewCropRect:(CGRect)arg2 modelCropRect:(CGRect)arg3 ;
-(void)_setupMediaWithComposition:(id)arg1 ;
-(CGSize)_sizeRotatedIfNeeded:(CGSize)arg1 ;
-(void)_invalidateImageModulationManager;
-(CGRect)_fullCropRect;
-(void)setMuted:(BOOL)arg1 ;
-(void)_updateImageModulation;
-(double)_zoomScaleForModelCropRect:(CGRect)arg1 ;
-(double)_zoomScaleForCurrentCropRectAndModelRect;
-(double)_viewScaleWithModelCropRect:(CGRect)arg1 ;
-(CGAffineTransform)_modelSpaceToViewSpaceTransformWithModelCropRect:(CGRect)arg1 currentViewCropRect:(CGRect)arg2 ;
-(CGRect)_croppingRect;
-(CGAffineTransform)imageOrientedViewCropTransform;
-(CGRect)viewOrientedViewCropRect:(CGRect)arg1 ;
-(CGRect)imageOrientedViewCropRect:(CGRect)arg1 ;
-(CGRect)viewCropRectForImageRect:(CGRect)arg1 ;
-(CGRect)imageCropRectForViewRect:(CGRect)arg1 ;
-(CGPoint)imagePointForViewPoint:(CGPoint)arg1 ;
-(CGRect)_modelCropRectUnorientedInUICoords;
-(void)handlePinchGesture:(id)arg1 ;
-(void)setYawAngle:(double)arg1 ;
-(BOOL)isMuted;
-(void)setImageSize:(CGSize)arg1 ;
-(id)cropModel;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)dealloc;
-(void)setOrientation:(long long)arg1 ;
@end

