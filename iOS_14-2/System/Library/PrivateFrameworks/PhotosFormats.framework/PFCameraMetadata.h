/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, VNImageAestheticsObservation, VNSaliencyImageObservation, VNSceneObservation, NSString, NSData;

@interface PFCameraMetadata : NSObject <NSSecureCoding> {

	BOOL _horizonLinePresent;
	float _horizonLineAngleInDegrees;
	NSArray* _junkImageClassificationObservations;
	VNImageAestheticsObservation* _imageAestheticsObservation;
	VNSaliencyImageObservation* _saliencyObservation;
	VNSceneObservation* _scenePrintObservation;
	VNSceneObservation* _compressedScenePrintObservation;
	NSArray* _detectedHumanFaces;
	NSArray* _detectedHumanBodies;
	NSArray* _detectedCatBodies;
	NSArray* _detectedDogBodies;
	NSArray* _detectedSalientObjects;
	unsigned long long _stitchConfidence;
	NSArray* _semanticDevelopmentGatingObservations;
	NSArray* _faceObservations;
	NSArray* _foodAndDrinkObservations;
	long long _semanticEnhanceScene;
	double _semanticEnhanceSceneConfidence;
	NSString* _captureFolderPath;

}

@property (nonatomic,readonly) NSArray * junkImageClassificationObservations;                          //@synthesize junkImageClassificationObservations=_junkImageClassificationObservations - In the implementation block
@property (nonatomic,readonly) VNImageAestheticsObservation * imageAestheticsObservation;              //@synthesize imageAestheticsObservation=_imageAestheticsObservation - In the implementation block
@property (nonatomic,readonly) VNSaliencyImageObservation * saliencyObservation;                       //@synthesize saliencyObservation=_saliencyObservation - In the implementation block
@property (nonatomic,readonly) VNSceneObservation * scenePrintObservation;                             //@synthesize scenePrintObservation=_scenePrintObservation - In the implementation block
@property (nonatomic,readonly) VNSceneObservation * compressedScenePrintObservation;                   //@synthesize compressedScenePrintObservation=_compressedScenePrintObservation - In the implementation block
@property (nonatomic,readonly) NSArray * detectedHumanFaces;                                           //@synthesize detectedHumanFaces=_detectedHumanFaces - In the implementation block
@property (nonatomic,readonly) NSArray * detectedHumanBodies;                                          //@synthesize detectedHumanBodies=_detectedHumanBodies - In the implementation block
@property (nonatomic,readonly) NSArray * detectedCatBodies;                                            //@synthesize detectedCatBodies=_detectedCatBodies - In the implementation block
@property (nonatomic,readonly) NSArray * detectedDogBodies;                                            //@synthesize detectedDogBodies=_detectedDogBodies - In the implementation block
@property (nonatomic,readonly) NSArray * detectedSalientObjects;                                       //@synthesize detectedSalientObjects=_detectedSalientObjects - In the implementation block
@property (nonatomic,readonly) unsigned long long stitchConfidence;                                    //@synthesize stitchConfidence=_stitchConfidence - In the implementation block
@property (nonatomic,readonly) BOOL horizonLinePresent;                                                //@synthesize horizonLinePresent=_horizonLinePresent - In the implementation block
@property (nonatomic,readonly) float horizonLineAngleInDegrees;                                        //@synthesize horizonLineAngleInDegrees=_horizonLineAngleInDegrees - In the implementation block
@property (nonatomic,readonly) NSArray * semanticDevelopmentGatingObservations;                        //@synthesize semanticDevelopmentGatingObservations=_semanticDevelopmentGatingObservations - In the implementation block
@property (nonatomic,readonly) NSArray * faceObservations;                                             //@synthesize faceObservations=_faceObservations - In the implementation block
@property (nonatomic,readonly) NSArray * foodAndDrinkObservations;                                     //@synthesize foodAndDrinkObservations=_foodAndDrinkObservations - In the implementation block
@property (assign,nonatomic) long long semanticEnhanceScene;                                           //@synthesize semanticEnhanceScene=_semanticEnhanceScene - In the implementation block
@property (assign,nonatomic) double semanticEnhanceSceneConfidence;                                    //@synthesize semanticEnhanceSceneConfidence=_semanticEnhanceSceneConfidence - In the implementation block
@property (nonatomic,readonly) NSString * captureFolderPath;                                           //@synthesize captureFolderPath=_captureFolderPath - In the implementation block
@property (readonly) NSData * JSONDebugDescription; 
+(BOOL)supportsSecureCoding;
-(long long)semanticEnhanceScene;
-(NSArray *)semanticDevelopmentGatingObservations;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSpatialOverCapturePrivateClientMetadata:(id)arg1 ;
-(NSArray *)faceObservations;
-(NSArray *)foodAndDrinkObservations;
-(double)semanticEnhanceSceneConfidence;
-(id)initWithCoder:(id)arg1 ;
-(VNSaliencyImageObservation *)saliencyObservation;
-(NSArray *)junkImageClassificationObservations;
-(VNSceneObservation *)scenePrintObservation;
-(VNImageAestheticsObservation *)imageAestheticsObservation;
-(void)setSemanticEnhanceSceneConfidence:(double)arg1 ;
-(void)setSemanticEnhanceScene:(long long)arg1 ;
-(id)initWithJunkImageClassificationObservations:(id)arg1 imageAestheticsObservation:(id)arg2 saliencyObservation:(id)arg3 scenePrintObservation:(id)arg4 compressedScenePrintObservation:(id)arg5 detectedObjectsInfoHumanFaces:(id)arg6 detectedObjectsInfoHumanBodies:(id)arg7 detectedObjectsInfoCatBodies:(id)arg8 detectedObjectsInfoDogBodies:(id)arg9 detectedObjectsSalientObjects:(id)arg10 stitchConfidence:(unsigned long long)arg11 horizonLinePresent:(BOOL)arg12 horizonLineAngleInDegrees:(float)arg13 captureFolderPath:(id)arg14 semanticDevelopmentGatingObservations:(id)arg15 faceObservations:(id)arg16 foodAndDrinkObservations:(id)arg17 semanticEnhanceScene:(long long)arg18 ;
-(NSData *)JSONDebugDescription;
-(VNSceneObservation *)compressedScenePrintObservation;
-(NSArray *)detectedHumanFaces;
-(NSArray *)detectedHumanBodies;
-(NSArray *)detectedCatBodies;
-(NSArray *)detectedDogBodies;
-(NSArray *)detectedSalientObjects;
-(unsigned long long)stitchConfidence;
-(BOOL)horizonLinePresent;
-(float)horizonLineAngleInDegrees;
-(NSString *)captureFolderPath;
@end

