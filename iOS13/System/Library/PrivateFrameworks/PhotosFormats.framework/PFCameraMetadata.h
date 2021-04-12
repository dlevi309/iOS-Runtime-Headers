/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/


@class NSArray, VNImageAestheticsObservation, VNSaliencyImageObservation, VNSceneObservation, VNObservation, NSString;

@interface PFCameraMetadata : NSObject {

	BOOL _horizonLinePresent;
	float _horizonLineAngleInDegrees;
	NSArray* _junkImageClassificationObservations;
	VNImageAestheticsObservation* _imageAestheticsObservation;
	VNSaliencyImageObservation* _saliencyObservation;
	VNSceneObservation* _scenePrintObservation;
	VNSceneObservation* _compressedScenePrintObservation;
	VNObservation* _imageCorrectionNeedObservation;
	NSArray* _detectedHumanFaces;
	NSArray* _detectedHumanBodies;
	NSArray* _detectedCatBodies;
	NSArray* _detectedDogBodies;
	NSArray* _detectedSalientObjects;
	unsigned long long _stitchConfidence;
	NSString* _captureFolderPath;

}

@property (nonatomic,readonly) NSArray * junkImageClassificationObservations;                          //@synthesize junkImageClassificationObservations=_junkImageClassificationObservations - In the implementation block
@property (nonatomic,readonly) VNImageAestheticsObservation * imageAestheticsObservation;              //@synthesize imageAestheticsObservation=_imageAestheticsObservation - In the implementation block
@property (nonatomic,readonly) VNSaliencyImageObservation * saliencyObservation;                       //@synthesize saliencyObservation=_saliencyObservation - In the implementation block
@property (nonatomic,readonly) VNSceneObservation * scenePrintObservation;                             //@synthesize scenePrintObservation=_scenePrintObservation - In the implementation block
@property (nonatomic,readonly) VNSceneObservation * compressedScenePrintObservation;                   //@synthesize compressedScenePrintObservation=_compressedScenePrintObservation - In the implementation block
@property (nonatomic,readonly) VNObservation * imageCorrectionNeedObservation;                         //@synthesize imageCorrectionNeedObservation=_imageCorrectionNeedObservation - In the implementation block
@property (nonatomic,readonly) NSArray * detectedHumanFaces;                                           //@synthesize detectedHumanFaces=_detectedHumanFaces - In the implementation block
@property (nonatomic,readonly) NSArray * detectedHumanBodies;                                          //@synthesize detectedHumanBodies=_detectedHumanBodies - In the implementation block
@property (nonatomic,readonly) NSArray * detectedCatBodies;                                            //@synthesize detectedCatBodies=_detectedCatBodies - In the implementation block
@property (nonatomic,readonly) NSArray * detectedDogBodies;                                            //@synthesize detectedDogBodies=_detectedDogBodies - In the implementation block
@property (nonatomic,readonly) NSArray * detectedSalientObjects;                                       //@synthesize detectedSalientObjects=_detectedSalientObjects - In the implementation block
@property (nonatomic,readonly) unsigned long long stitchConfidence;                                    //@synthesize stitchConfidence=_stitchConfidence - In the implementation block
@property (nonatomic,readonly) BOOL horizonLinePresent;                                                //@synthesize horizonLinePresent=_horizonLinePresent - In the implementation block
@property (nonatomic,readonly) float horizonLineAngleInDegrees;                                        //@synthesize horizonLineAngleInDegrees=_horizonLineAngleInDegrees - In the implementation block
@property (nonatomic,readonly) NSString * captureFolderPath;                                           //@synthesize captureFolderPath=_captureFolderPath - In the implementation block
-(VNSaliencyImageObservation *)saliencyObservation;
-(NSArray *)junkImageClassificationObservations;
-(VNSceneObservation *)scenePrintObservation;
-(VNImageAestheticsObservation *)imageAestheticsObservation;
-(id)initWithSpatialOverCapturePrivateClientMetadata:(id)arg1 ;
-(BOOL)horizonLinePresent;
-(float)horizonLineAngleInDegrees;
-(id)initWithJunkImageClassificationObservations:(id)arg1 imageAestheticsObservation:(id)arg2 saliencyObservation:(id)arg3 scenePrintObservation:(id)arg4 compressedScenePrintObservation:(id)arg5 imageCorrectionNeedObservation:(id)arg6 detectedObjectsInfoHumanFaces:(id)arg7 detectedObjectsInfoHumanBodies:(id)arg8 detectedObjectsInfoCatBodies:(id)arg9 detectedObjectsInfoDogBodies:(id)arg10 detectedObjectsSalientObjects:(id)arg11 stitchConfidence:(unsigned long long)arg12 horizonLinePresent:(BOOL)arg13 horizonLineAngleInDegrees:(float)arg14 captureFolderPath:(id)arg15 ;
-(VNSceneObservation *)compressedScenePrintObservation;
-(VNObservation *)imageCorrectionNeedObservation;
-(NSArray *)detectedHumanFaces;
-(NSArray *)detectedHumanBodies;
-(NSArray *)detectedCatBodies;
-(NSArray *)detectedDogBodies;
-(NSArray *)detectedSalientObjects;
-(unsigned long long)stitchConfidence;
-(NSString *)captureFolderPath;
@end

