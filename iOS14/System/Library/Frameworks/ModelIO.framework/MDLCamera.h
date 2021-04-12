/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLObject.h>

@class CAAnimation;

@interface MDLCamera : MDLObject {

	RTCamera* _camera;
	float _worldToMetersConversionScale;
	CAAnimation* _focalDistanceAnimation;
	CAAnimation* _fStopAnimation;
	CAAnimation* _focalLengthAnimation;
	CAAnimation* _apertureAnimation;
	CAAnimation* _apertureAspectAnimation;
	float _barrelDistortion;
	float _fisheyeDistortion;
	float _opticalVignetting;
	float _chromaticAberration;
	float _fStop;
	float _maximumCircleOfConfusion;
	unsigned long long _projection;
	unsigned long long _apertureBladeCount;
	double _shutterOpenInterval;
	 _flash;

}

@property (nonatomic,copy) CAAnimation * focalLengthAnimation;                   //@synthesize focalLengthAnimation=_focalLengthAnimation - In the implementation block
@property (nonatomic,copy) CAAnimation * focalDistanceAnimation;                 //@synthesize focalDistanceAnimation=_focalDistanceAnimation - In the implementation block
@property (nonatomic,copy) CAAnimation * fStopAnimation;                         //@synthesize fStopAnimation=_fStopAnimation - In the implementation block
@property (nonatomic,copy) CAAnimation * apertureAnimation;                      //@synthesize apertureAnimation=_apertureAnimation - In the implementation block
@property (nonatomic,copy) CAAnimation * apertureAspectAnimation;                //@synthesize apertureAspectAnimation=_apertureAspectAnimation - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MD1 projectionMatrix; 
@property (assign,nonatomic) unsigned long long projection;                      //@synthesize projection=_projection - In the implementation block
@property (assign,nonatomic) float nearVisibilityDistance; 
@property (assign,nonatomic) float farVisibilityDistance; 
@property (assign,nonatomic) float worldToMetersConversionScale;                 //@synthesize worldToMetersConversionScale=_worldToMetersConversionScale - In the implementation block
@property (assign,nonatomic) float barrelDistortion;                             //@synthesize barrelDistortion=_barrelDistortion - In the implementation block
@property (assign,nonatomic) float fisheyeDistortion;                            //@synthesize fisheyeDistortion=_fisheyeDistortion - In the implementation block
@property (assign,nonatomic) float opticalVignetting;                            //@synthesize opticalVignetting=_opticalVignetting - In the implementation block
@property (assign,nonatomic) float chromaticAberration;                          //@synthesize chromaticAberration=_chromaticAberration - In the implementation block
@property (assign,nonatomic) float focalLength; 
@property (assign,nonatomic) float focusDistance; 
@property (assign,nonatomic) float fieldOfView; 
@property (assign,nonatomic) float fStop;                                        //@synthesize fStop=_fStop - In the implementation block
@property (assign,nonatomic) unsigned long long apertureBladeCount;              //@synthesize apertureBladeCount=_apertureBladeCount - In the implementation block
@property (assign,nonatomic) float maximumCircleOfConfusion;                     //@synthesize maximumCircleOfConfusion=_maximumCircleOfConfusion - In the implementation block
@property (assign,nonatomic) double shutterOpenInterval;                         //@synthesize shutterOpenInterval=_shutterOpenInterval - In the implementation block
@property (assign,nonatomic) float sensorVerticalAperture; 
@property (assign,nonatomic) float sensorAspect; 
@property (assign,nonatomic)  sensorEnlargement; 
@property (assign,nonatomic)  sensorShift; 
@property (assign,nonatomic)  flash;                                             //@synthesize flash=_flash - In the implementation block
@property (assign,nonatomic)  exposureCompression; 
@property (assign,nonatomic)  exposure; 
+(id)cameraWithSCNCamera:(id)arg1 ;
-()flash;
-(float)aspect;
-(void)setExposure:;
-(float)fov;
-(id)init;
-(float)zFar;
-(void)setFocalLength:(float)arg1 ;
-(float)zNear;
-(float)fStop;
-()exposure;
-(void)setFieldOfView:(float)arg1 ;
-(void)setAspect:(float)arg1 ;
-(void)setAperture:(float)arg1 ;
-(float)aperture;
-(float)focalLength;
-(void)lookAt:;
-(float)fieldOfView;
-(void)setFov:(float)arg1 ;
-(float)focusDistance;
-(long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)projection;
-(void)dealloc;
-(SCD_Struct_MD1)projectionMatrix;
-(void)setZNear:(float)arg1 ;
-(void)setZFar:(float)arg1 ;
-(unsigned long long)apertureBladeCount;
-(RTCamera*)rtCamera;
-(SCD_Struct_MD1)getViewMatrixAtTime:(double)arg1 ;
-(SCD_Struct_MD1)getProjectionMatrixAtTime:(double)arg1 ;
-(3)rayTo:forViewPort:;
-(void)setFocusDistance:(float)arg1 ;
-(float)sensorVerticalAperture;
-(void)setSensorVerticalAperture:(float)arg1 ;
-()sensorEnlargement;
-(void)setSensorEnlargement:;
-()sensorShift;
-(void)setSensorShift:;
-(float)sensorAspect;
-(void)setSensorAspect:(float)arg1 ;
-(float)circleOfConfusionForDistance:(float)arg1 ;
-(float)nearVisibilityDistance;
-(void)setNearVisibilityDistance:(float)arg1 ;
-(float)farVisibilityDistance;
-(void)setFarVisibilityDistance:(float)arg1 ;
-(id)bokehKernelWithSize:;
-()exposureCompression;
-(void)setExposureCompression:;
-(void)frameBoundingBox:({?=})arg1 setNearAndFar:(BOOL)arg2 ;
-(void)lookAt:from:;
-(float)worldToMetersConversionScale;
-(void)setWorldToMetersConversionScale:(float)arg1 ;
-(CAAnimation *)focalDistanceAnimation;
-(void)setFocalDistanceAnimation:(CAAnimation *)arg1 ;
-(CAAnimation *)fStopAnimation;
-(void)setFStopAnimation:(CAAnimation *)arg1 ;
-(CAAnimation *)focalLengthAnimation;
-(void)setFocalLengthAnimation:(CAAnimation *)arg1 ;
-(CAAnimation *)apertureAnimation;
-(void)setApertureAnimation:(CAAnimation *)arg1 ;
-(CAAnimation *)apertureAspectAnimation;
-(void)setApertureAspectAnimation:(CAAnimation *)arg1 ;
-(void)setProjection:(unsigned long long)arg1 ;
-(float)barrelDistortion;
-(void)setBarrelDistortion:(float)arg1 ;
-(float)fisheyeDistortion;
-(void)setFisheyeDistortion:(float)arg1 ;
-(float)opticalVignetting;
-(void)setOpticalVignetting:(float)arg1 ;
-(float)chromaticAberration;
-(void)setChromaticAberration:(float)arg1 ;
-(void)setFStop:(float)arg1 ;
-(void)setApertureBladeCount:(unsigned long long)arg1 ;
-(float)maximumCircleOfConfusion;
-(void)setMaximumCircleOfConfusion:(float)arg1 ;
-(double)shutterOpenInterval;
-(void)setShutterOpenInterval:(double)arg1 ;
-(void)setFlash:;
@end

