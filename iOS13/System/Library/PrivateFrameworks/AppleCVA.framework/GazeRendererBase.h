/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleCVA.framework/AppleCVA
*/


#import <AppleCVA/AppleCVA-Structs.h>
@interface GazeRendererBase : NSObject {

	float _fadeoutFactor;
	float _trackingFadeoutPos;
	int _lastTrackingFailed;
	SCD_Struct_Ga28 _faceTransform;
	 _virtualCamPos;
	 _eyeCenterModel;
	 _eyeCenterTransformed;
	 _meshCenter;
	 _eyeAxisModel;
	 _rotationCenter;
	 _rotationCenterTransformed;
	float _correctionFactor;
	float _fadeoutFactorFS;
	BOOL _fullEyeRotationEnabled;
	BOOL _gazeCorrectionEnabled;
	BOOL _autoGazeCorrectionEnabled;
	BOOL _weightsEnabled;
	BOOL _fadeoutEnabled;
	BOOL _foreshorteningCorrectionEnabled;
	float _gazeCorrectionRotationAmount;
	float _gazeCorrectionEyeLookUpAmount;
	float _maxRotationAngle;
	float _maxEyeLookUpAmount;
	float _maxCorrectionAngle;
	float _rotationCenterOffsetZ;
	float _rotationCenterOffsetY;
	float _scale;
	float _angleEyeToCameras;
	float _angleRotCenterToCameras;
	float _foreshorteningCorrectionAmount;

}

@property (assign)  virtualCamPos;                                    //@synthesize virtualCamPos=_virtualCamPos - In the implementation block
@property (assign) BOOL fullEyeRotationEnabled;                       //@synthesize fullEyeRotationEnabled=_fullEyeRotationEnabled - In the implementation block
@property (assign) BOOL gazeCorrectionEnabled;                        //@synthesize gazeCorrectionEnabled=_gazeCorrectionEnabled - In the implementation block
@property (assign) BOOL autoGazeCorrectionEnabled;                    //@synthesize autoGazeCorrectionEnabled=_autoGazeCorrectionEnabled - In the implementation block
@property (assign) float gazeCorrectionRotationAmount;                //@synthesize gazeCorrectionRotationAmount=_gazeCorrectionRotationAmount - In the implementation block
@property (assign) float gazeCorrectionEyeLookUpAmount;               //@synthesize gazeCorrectionEyeLookUpAmount=_gazeCorrectionEyeLookUpAmount - In the implementation block
@property (assign) float maxRotationAngle;                            //@synthesize maxRotationAngle=_maxRotationAngle - In the implementation block
@property (assign) float maxEyeLookUpAmount;                          //@synthesize maxEyeLookUpAmount=_maxEyeLookUpAmount - In the implementation block
@property (assign) float maxCorrectionAngle;                          //@synthesize maxCorrectionAngle=_maxCorrectionAngle - In the implementation block
@property (assign) float rotationCenterOffsetZ;                       //@synthesize rotationCenterOffsetZ=_rotationCenterOffsetZ - In the implementation block
@property (assign) float rotationCenterOffsetY;                       //@synthesize rotationCenterOffsetY=_rotationCenterOffsetY - In the implementation block
@property (assign) float scale;                                       //@synthesize scale=_scale - In the implementation block
@property (assign) BOOL weightsEnabled;                               //@synthesize weightsEnabled=_weightsEnabled - In the implementation block
@property (assign) BOOL fadeoutEnabled;                               //@synthesize fadeoutEnabled=_fadeoutEnabled - In the implementation block
@property (assign) float angleEyeToCameras;                           //@synthesize angleEyeToCameras=_angleEyeToCameras - In the implementation block
@property (assign) float angleRotCenterToCameras;                     //@synthesize angleRotCenterToCameras=_angleRotCenterToCameras - In the implementation block
@property (assign) BOOL foreshorteningCorrectionEnabled;              //@synthesize foreshorteningCorrectionEnabled=_foreshorteningCorrectionEnabled - In the implementation block
@property (assign) float foreshorteningCorrectionAmount;              //@synthesize foreshorteningCorrectionAmount=_foreshorteningCorrectionAmount - In the implementation block
+(BOOL)dumpStoredToFile:(id)arg1 ;
+(BOOL)updateStoredFromFile:(id)arg1 ;
-(id)init;
-(float)scale;
-(void)setScale:(float)arg1 ;
-(void)resetToDefaults;
-(void)resetToStored;
-(void)storeSettings;
-(void)setVirtualCamPos:;
-(BOOL)updateFaceMeshWithfaceKitData:(id)arg1 screenProjectionMatrix:(SCD_Struct_Ga28)arg2 inputImageSize:(SCD_Struct_Ga29)arg3 outputImageSize:(SCD_Struct_Ga29)arg4 inputIntrinsics:(SCD_Struct_Ga30)arg5 outputIntrinsics:(SCD_Struct_Ga30)arg6 extrinsics:(SCD_Struct_Ga28)arg7 correctionEnabled:(BOOL)arg8 groundTruthMode:(BOOL)arg9 gazeMesh:(id)arg10 uniforms:(SCD_Struct_Ga31*)arg11 latest_vertices:(vector<cva::Matrix<float, 3, 1, false>, std::__1::allocator<cva::Matrix<float, 3, 1, false> > >*)arg12 ;
-(float)easeInOutWithCurrentPos:(float)arg1 totalDuration:(float)arg2 ;
-(float)computeAngleToCameras:;
-(void)updateFadeoutFactorWithIsTracked:(BOOL)arg1 ;
-(BOOL)fullEyeRotationEnabled;
-(void)setFullEyeRotationEnabled:(BOOL)arg1 ;
-(BOOL)gazeCorrectionEnabled;
-(void)setGazeCorrectionEnabled:(BOOL)arg1 ;
-(BOOL)autoGazeCorrectionEnabled;
-(void)setAutoGazeCorrectionEnabled:(BOOL)arg1 ;
-(float)gazeCorrectionRotationAmount;
-(void)setGazeCorrectionRotationAmount:(float)arg1 ;
-(float)gazeCorrectionEyeLookUpAmount;
-(void)setGazeCorrectionEyeLookUpAmount:(float)arg1 ;
-(float)maxRotationAngle;
-(void)setMaxRotationAngle:(float)arg1 ;
-(float)maxEyeLookUpAmount;
-(void)setMaxEyeLookUpAmount:(float)arg1 ;
-(float)maxCorrectionAngle;
-(void)setMaxCorrectionAngle:(float)arg1 ;
-(float)rotationCenterOffsetZ;
-(void)setRotationCenterOffsetZ:(float)arg1 ;
-(float)rotationCenterOffsetY;
-(void)setRotationCenterOffsetY:(float)arg1 ;
-(BOOL)weightsEnabled;
-(void)setWeightsEnabled:(BOOL)arg1 ;
-(BOOL)fadeoutEnabled;
-(void)setFadeoutEnabled:(BOOL)arg1 ;
-(float)angleEyeToCameras;
-(void)setAngleEyeToCameras:(float)arg1 ;
-(float)angleRotCenterToCameras;
-(void)setAngleRotCenterToCameras:(float)arg1 ;
-(BOOL)foreshorteningCorrectionEnabled;
-(void)setForeshorteningCorrectionEnabled:(BOOL)arg1 ;
-(float)foreshorteningCorrectionAmount;
-(void)setForeshorteningCorrectionAmount:(float)arg1 ;
-()virtualCamPos;
@end

