/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/NUAutoCalculator.h>
#import <libobjc.A.dylib/NUTimeBased.h>
#import <libobjc.A.dylib/PIFaceObservingAutoCalculator.h>

@class PIFaceObservationCache, NSNumber, VNSaliencyImageObservation, NSArray, NSString, NSMutableDictionary, CIImage;

@interface PIPerspectiveAutoCalculator : NUAutoCalculator <NUTimeBased, PIFaceObservingAutoCalculator> {

	BOOL _disableOnPanos;
	BOOL _disableOnFrontFacingCameraImages;
	BOOL _shouldRunDetectorsIfNecessary;
	BOOL _shouldRunBuildingCheck;
	BOOL _debugFilesEnabled;
	PIFaceObservationCache* _faceObservationCache;
	NSNumber* _maxAutoYaw;
	NSNumber* _maxAutoPitch;
	NSNumber* _maxAutoAngle;
	double _minimumPitchCorrection;
	double _minimumYawCorrection;
	double _minimumAngleCorrection;
	double _minimumConfidence;
	double _maxFaceSize;
	double _minimumPitchCorrectionArea;
	double _minimumYawCorrectionArea;
	double _minSalientArea;
	double _maxSalientSubjectArea;
	VNSaliencyImageObservation* _saliencyObservation;
	double _angleSeedDegreesCCW;
	NSArray* _ANODSubjects;
	NSString* _debugFilesPrefix;
	NSMutableDictionary* _debugDiagnostics;
	CIImage* _debugLineDetectionImage;

}

@property (nonatomic,retain) CIImage * debugLineDetectionImage;                             //@synthesize debugLineDetectionImage=_debugLineDetectionImage - In the implementation block
@property (copy) NSNumber * maxAutoYaw;                                                     //@synthesize maxAutoYaw=_maxAutoYaw - In the implementation block
@property (copy) NSNumber * maxAutoPitch;                                                   //@synthesize maxAutoPitch=_maxAutoPitch - In the implementation block
@property (copy) NSNumber * maxAutoAngle;                                                   //@synthesize maxAutoAngle=_maxAutoAngle - In the implementation block
@property (assign) double minimumPitchCorrection;                                           //@synthesize minimumPitchCorrection=_minimumPitchCorrection - In the implementation block
@property (assign) double minimumYawCorrection;                                             //@synthesize minimumYawCorrection=_minimumYawCorrection - In the implementation block
@property (assign) double minimumAngleCorrection;                                           //@synthesize minimumAngleCorrection=_minimumAngleCorrection - In the implementation block
@property (assign) double minimumConfidence;                                                //@synthesize minimumConfidence=_minimumConfidence - In the implementation block
@property (assign) double maxFaceSize;                                                      //@synthesize maxFaceSize=_maxFaceSize - In the implementation block
@property (assign) double minimumPitchCorrectionArea;                                       //@synthesize minimumPitchCorrectionArea=_minimumPitchCorrectionArea - In the implementation block
@property (assign) double minimumYawCorrectionArea;                                         //@synthesize minimumYawCorrectionArea=_minimumYawCorrectionArea - In the implementation block
@property (assign) BOOL disableOnPanos;                                                     //@synthesize disableOnPanos=_disableOnPanos - In the implementation block
@property (assign) BOOL disableOnFrontFacingCameraImages;                                   //@synthesize disableOnFrontFacingCameraImages=_disableOnFrontFacingCameraImages - In the implementation block
@property (assign) BOOL shouldRunDetectorsIfNecessary;                                      //@synthesize shouldRunDetectorsIfNecessary=_shouldRunDetectorsIfNecessary - In the implementation block
@property (assign) BOOL shouldRunBuildingCheck;                                             //@synthesize shouldRunBuildingCheck=_shouldRunBuildingCheck - In the implementation block
@property (assign,nonatomic) double minSalientArea;                                         //@synthesize minSalientArea=_minSalientArea - In the implementation block
@property (assign,nonatomic) double maxSalientSubjectArea;                                  //@synthesize maxSalientSubjectArea=_maxSalientSubjectArea - In the implementation block
@property (nonatomic,retain) VNSaliencyImageObservation * saliencyObservation;              //@synthesize saliencyObservation=_saliencyObservation - In the implementation block
@property (assign) double angleSeedDegreesCCW;                                              //@synthesize angleSeedDegreesCCW=_angleSeedDegreesCCW - In the implementation block
@property (nonatomic,copy) NSArray * ANODSubjects;                                          //@synthesize ANODSubjects=_ANODSubjects - In the implementation block
@property (assign) BOOL debugFilesEnabled;                                                  //@synthesize debugFilesEnabled=_debugFilesEnabled - In the implementation block
@property (copy) NSString * debugFilesPrefix;                                               //@synthesize debugFilesPrefix=_debugFilesPrefix - In the implementation block
@property (readonly) NSMutableDictionary * debugDiagnostics;                                //@synthesize debugDiagnostics=_debugDiagnostics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) SCD_Struct_PI8 time; 
@property (nonatomic,retain) PIFaceObservationCache * faceObservationCache;                 //@synthesize faceObservationCache=_faceObservationCache - In the implementation block
+(void)requestVisionCleanUp;
+(void)undoOrientation:(long long)arg1 forPitch:(double*)arg2 yaw:(double*)arg3 angle:(double*)arg4 ;
-(double)minimumConfidence;
-(void)setMinimumConfidence:(double)arg1 ;
-(VNSaliencyImageObservation *)saliencyObservation;
-(id)initWithComposition:(id)arg1 ;
-(void)submit:(/*^block*/id)arg1 ;
-(void)setDebugFilesPrefix:(NSString *)arg1 ;
-(void)setDebugFilesEnabled:(BOOL)arg1 ;
-(void)setShouldRunBuildingCheck:(BOOL)arg1 ;
-(void)setMaxFaceSize:(double)arg1 ;
-(void)setDisableOnFrontFacingCameraImages:(BOOL)arg1 ;
-(void)setDisableOnPanos:(BOOL)arg1 ;
-(void)setMaxAutoAngle:(NSNumber *)arg1 ;
-(void)setMaxAutoPitch:(NSNumber *)arg1 ;
-(void)setMaxAutoYaw:(NSNumber *)arg1 ;
-(void)setFaceObservationCache:(PIFaceObservationCache *)arg1 ;
-(void)setSaliencyObservation:(VNSaliencyImageObservation *)arg1 ;
-(void)setANODSubjects:(NSArray *)arg1 ;
-(NSArray *)ANODSubjects;
-(PIFaceObservationCache *)faceObservationCache;
-(id)perspectiveErrorFromCoreImage:(id)arg1 ;
-(void)addMethodDiagnostics:(id)arg1 details:(id)arg2 ;
-(void)addMethodResultToDiagnostics:(id)arg1 error:(id)arg2 setYawPitchError:(BOOL)arg3 ;
-(id)wrapAsUnexpectedError:(id)arg1 ;
-(void)writeDebugDiagnosticsToDisk;
-(float)getSizeOfAllFaces:(id)arg1 ;
-(BOOL)passesFaceCheck:(out id*)arg1 ;
-(BOOL)hasFrontFacingCameraDimentions:(SCD_Struct_PI5)arg1 ;
-(BOOL)isFrontFacingCameraImage:(id)arg1 pixelSize:(SCD_Struct_PI5)arg2 ;
-(BOOL)passesImagePropertiesCheck:(out id*)arg1 ;
-(BOOL)passesBuildingCheck:(out id*)arg1 ;
-(BOOL)passesSaliencyCheck:(out id*)arg1 ;
-(id)overcaptureImageProperties:(out id*)arg1 ;
-(id)primaryImageProperties:(out id*)arg1 ;
-(BOOL)canGenerateNewCropRect:(out id*)arg1 ;
-(BOOL)passesConfidenceCheck:(id)arg1 error:(out id*)arg2 ;
-(BOOL)passesMinimumCorrectionCheck:(id)arg1 error:(out id*)arg2 ;
-(void)submitVerified:(/*^block*/id)arg1 ;
-(NSNumber *)maxAutoYaw;
-(NSNumber *)maxAutoPitch;
-(NSNumber *)maxAutoAngle;
-(double)minimumPitchCorrection;
-(void)setMinimumPitchCorrection:(double)arg1 ;
-(double)minimumYawCorrection;
-(void)setMinimumYawCorrection:(double)arg1 ;
-(double)minimumAngleCorrection;
-(void)setMinimumAngleCorrection:(double)arg1 ;
-(double)maxFaceSize;
-(double)minimumPitchCorrectionArea;
-(void)setMinimumPitchCorrectionArea:(double)arg1 ;
-(double)minimumYawCorrectionArea;
-(void)setMinimumYawCorrectionArea:(double)arg1 ;
-(BOOL)disableOnPanos;
-(BOOL)disableOnFrontFacingCameraImages;
-(BOOL)shouldRunDetectorsIfNecessary;
-(void)setShouldRunDetectorsIfNecessary:(BOOL)arg1 ;
-(BOOL)shouldRunBuildingCheck;
-(double)minSalientArea;
-(void)setMinSalientArea:(double)arg1 ;
-(double)maxSalientSubjectArea;
-(void)setMaxSalientSubjectArea:(double)arg1 ;
-(double)angleSeedDegreesCCW;
-(void)setAngleSeedDegreesCCW:(double)arg1 ;
-(BOOL)debugFilesEnabled;
-(NSString *)debugFilesPrefix;
-(NSMutableDictionary *)debugDiagnostics;
-(CIImage *)debugLineDetectionImage;
-(void)setDebugLineDetectionImage:(CIImage *)arg1 ;
@end
