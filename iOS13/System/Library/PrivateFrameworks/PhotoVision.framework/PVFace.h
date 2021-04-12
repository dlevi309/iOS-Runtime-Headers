/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
*/

#import <PhotoVision/PhotoVision-Structs.h>
#import <PhotoVision/PVObject.h>
#import <libobjc.A.dylib/PFPhotosFaceRepresentation.h>

@class NSString, PVFaceprint;

@interface PVFace : PVObject <PFPhotosFaceRepresentation> {

	BOOL _hidden;
	BOOL _isInTrash;
	BOOL _manual;
	BOOL _isTooSmall;
	BOOL _hasSmile;
	BOOL _isLeftEyeClosed;
	BOOL _isRightEyeClosed;
	int _trainingType;
	unsigned _faceAlgorithmVersion;
	NSString* _personLocalIdentifier;
	long long _sourceWidth;
	long long _sourceHeight;
	double _centerX;
	double _centerY;
	double _size;
	double _leftEyeX;
	double _leftEyeY;
	double _rightEyeX;
	double _rightEyeY;
	double _mouthX;
	double _mouthY;
	double _blurScore;
	double _exposureScore;
	NSString* _adjustmentVersion;
	long long _nameSource;
	double _poseYaw;
	long long _clusterSequenceNumber;
	long long _qualityMeasure;
	NSString* _ageType;
	NSString* _genderType;
	NSString* _eyesState;
	NSString* _smileType;
	NSString* _facialHairType;
	NSString* _hairColorType;
	NSString* _baldType;
	NSString* _glassesType;
	NSString* _eyeMakeupType;
	NSString* _lipMakeupType;
	NSString* _groupingIdentifier;
	PVFaceprint* _faceprint;
	double _roll;
	double _quality;

}

@property (nonatomic,copy) NSString * personLocalIdentifier;               //@synthesize personLocalIdentifier=_personLocalIdentifier - In the implementation block
@property (assign,nonatomic) long long sourceWidth;                        //@synthesize sourceWidth=_sourceWidth - In the implementation block
@property (assign,nonatomic) long long sourceHeight;                       //@synthesize sourceHeight=_sourceHeight - In the implementation block
@property (assign,nonatomic) double centerX;                               //@synthesize centerX=_centerX - In the implementation block
@property (assign,nonatomic) double centerY;                               //@synthesize centerY=_centerY - In the implementation block
@property (assign,nonatomic) double size;                                  //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double leftEyeX;                              //@synthesize leftEyeX=_leftEyeX - In the implementation block
@property (assign,nonatomic) double leftEyeY;                              //@synthesize leftEyeY=_leftEyeY - In the implementation block
@property (assign,nonatomic) double rightEyeX;                             //@synthesize rightEyeX=_rightEyeX - In the implementation block
@property (assign,nonatomic) double rightEyeY;                             //@synthesize rightEyeY=_rightEyeY - In the implementation block
@property (assign,nonatomic) double mouthX;                                //@synthesize mouthX=_mouthX - In the implementation block
@property (assign,nonatomic) double mouthY;                                //@synthesize mouthY=_mouthY - In the implementation block
@property (assign,nonatomic) BOOL hidden;                                  //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) BOOL isInTrash;                               //@synthesize isInTrash=_isInTrash - In the implementation block
@property (assign,nonatomic) BOOL manual;                                  //@synthesize manual=_manual - In the implementation block
@property (assign,nonatomic) BOOL isTooSmall;                              //@synthesize isTooSmall=_isTooSmall - In the implementation block
@property (assign,nonatomic) BOOL hasSmile;                                //@synthesize hasSmile=_hasSmile - In the implementation block
@property (assign,nonatomic) double blurScore;                             //@synthesize blurScore=_blurScore - In the implementation block
@property (assign,nonatomic) double exposureScore;                         //@synthesize exposureScore=_exposureScore - In the implementation block
@property (assign,nonatomic) BOOL isLeftEyeClosed;                         //@synthesize isLeftEyeClosed=_isLeftEyeClosed - In the implementation block
@property (assign,nonatomic) BOOL isRightEyeClosed;                        //@synthesize isRightEyeClosed=_isRightEyeClosed - In the implementation block
@property (nonatomic,copy) NSString * adjustmentVersion;                   //@synthesize adjustmentVersion=_adjustmentVersion - In the implementation block
@property (assign,nonatomic) long long nameSource;                         //@synthesize nameSource=_nameSource - In the implementation block
@property (assign,nonatomic) int trainingType;                             //@synthesize trainingType=_trainingType - In the implementation block
@property (assign,nonatomic) double poseYaw;                               //@synthesize poseYaw=_poseYaw - In the implementation block
@property (assign,nonatomic) unsigned faceAlgorithmVersion;                //@synthesize faceAlgorithmVersion=_faceAlgorithmVersion - In the implementation block
@property (assign,nonatomic) long long clusterSequenceNumber;              //@synthesize clusterSequenceNumber=_clusterSequenceNumber - In the implementation block
@property (assign,nonatomic) long long qualityMeasure;                     //@synthesize qualityMeasure=_qualityMeasure - In the implementation block
@property (assign,nonatomic) NSString * ageType;                           //@synthesize ageType=_ageType - In the implementation block
@property (assign,nonatomic) NSString * genderType;                        //@synthesize genderType=_genderType - In the implementation block
@property (assign,nonatomic) NSString * eyesState;                         //@synthesize eyesState=_eyesState - In the implementation block
@property (assign,nonatomic) NSString * smileType;                         //@synthesize smileType=_smileType - In the implementation block
@property (assign,nonatomic) NSString * facialHairType;                    //@synthesize facialHairType=_facialHairType - In the implementation block
@property (assign,nonatomic) NSString * hairColorType;                     //@synthesize hairColorType=_hairColorType - In the implementation block
@property (assign,nonatomic) NSString * baldType;                          //@synthesize baldType=_baldType - In the implementation block
@property (assign,nonatomic) NSString * glassesType;                       //@synthesize glassesType=_glassesType - In the implementation block
@property (assign,nonatomic) NSString * eyeMakeupType;                     //@synthesize eyeMakeupType=_eyeMakeupType - In the implementation block
@property (assign,nonatomic) NSString * lipMakeupType;                     //@synthesize lipMakeupType=_lipMakeupType - In the implementation block
@property (nonatomic,copy) NSString * groupingIdentifier;                  //@synthesize groupingIdentifier=_groupingIdentifier - In the implementation block
@property (nonatomic,retain) PVFaceprint * faceprint;                      //@synthesize faceprint=_faceprint - In the implementation block
@property (assign,nonatomic) double roll;                                  //@synthesize roll=_roll - In the implementation block
@property (assign,nonatomic) double quality;                               //@synthesize quality=_quality - In the implementation block
+(id)faceWithFace:(id)arg1 copyPropertiesOption:(long long)arg2 ;
+(id)faceFromVNFaceObservation:(id)arg1 fromImageWithPixelWidth:(unsigned long long)arg2 pixelHeight:(unsigned long long)arg3 additionalVisionRequests:(id)arg4 faceAlgorithmUmbrellaVersion:(unsigned)arg5 error:(id*)arg6 ;
+(id)faceFromVNFaceObservation:(id)arg1 fromImage:(id)arg2 additionalVisionRequests:(id)arg3 faceAlgorithmUmbrellaVersion:(unsigned)arg4 error:(id*)arg5 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)size;
-(CGRect)normalizedFaceRect;
-(BOOL)hasSmile;
-(void)setSize:(double)arg1 ;
-(double)roll;
-(void)setRoll:(double)arg1 ;
-(double)centerX;
-(double)centerY;
-(void)setHidden:(BOOL)arg1 ;
-(double)quality;
-(BOOL)hidden;
-(PVFaceprint *)faceprint;
-(void)setFaceprint:(PVFaceprint *)arg1 ;
-(double)blurScore;
-(void)setBlurScore:(double)arg1 ;
-(double)exposureScore;
-(void)setExposureScore:(double)arg1 ;
-(BOOL)isInTrash;
-(void)setQuality:(double)arg1 ;
-(NSString *)personLocalIdentifier;
-(long long)nameSource;
-(void)setNameSource:(long long)arg1 ;
-(BOOL)manual;
-(long long)sourceHeight;
-(long long)sourceWidth;
-(int)trainingType;
-(void)setManual:(BOOL)arg1 ;
-(void)setCenterY:(double)arg1 ;
-(void)setCenterX:(double)arg1 ;
-(unsigned)faceAlgorithmVersion;
-(void)setTrainingType:(int)arg1 ;
-(void)setSourceHeight:(long long)arg1 ;
-(void)setSourceWidth:(long long)arg1 ;
-(void)setFaceAlgorithmVersion:(unsigned)arg1 ;
-(long long)photosFaceRepresentationSourceWidth;
-(long long)photosFaceRepresentationSourceHeight;
-(double)photosFaceRepresentationCenterX;
-(double)photosFaceRepresentationCenterY;
-(double)photosFaceRepresentationSize;
-(double)photosFaceRepresentationBlurScore;
-(BOOL)photosFaceRepresentationHasSmile;
-(BOOL)photosFaceRepresentationIsLeftEyeClosed;
-(BOOL)photosFaceRepresentationIsRightEyeClosed;
-(long long)photosFaceRepresentationQualityMeasure;
-(long long)photosFaceRepresentationClusterSequenceNumber;
-(id)photosFaceRepresentationLocalIdentifier;
-(double)photosFaceRepresentationRoll;
-(NSString *)adjustmentVersion;
-(void)setAdjustmentVersion:(NSString *)arg1 ;
-(BOOL)isLeftEyeClosed;
-(BOOL)isRightEyeClosed;
-(long long)qualityMeasure;
-(long long)clusterSequenceNumber;
-(double)photosFaceRepresentationQuality;
-(void)setClusterSequenceNumber:(long long)arg1 ;
-(void)setGenderType:(NSString *)arg1 ;
-(NSString *)genderType;
-(void)setAgeType:(NSString *)arg1 ;
-(NSString *)ageType;
-(double)leftEyeX;
-(void)setLeftEyeX:(double)arg1 ;
-(double)leftEyeY;
-(void)setLeftEyeY:(double)arg1 ;
-(double)rightEyeX;
-(void)setRightEyeX:(double)arg1 ;
-(double)rightEyeY;
-(void)setRightEyeY:(double)arg1 ;
-(double)mouthX;
-(void)setMouthX:(double)arg1 ;
-(double)mouthY;
-(void)setMouthY:(double)arg1 ;
-(void)setHasSmile:(BOOL)arg1 ;
-(double)poseYaw;
-(void)setPoseYaw:(double)arg1 ;
-(void)setQualityMeasure:(long long)arg1 ;
-(NSString *)eyesState;
-(void)setEyesState:(NSString *)arg1 ;
-(NSString *)smileType;
-(void)setSmileType:(NSString *)arg1 ;
-(NSString *)facialHairType;
-(void)setFacialHairType:(NSString *)arg1 ;
-(NSString *)hairColorType;
-(void)setHairColorType:(NSString *)arg1 ;
-(NSString *)baldType;
-(void)setBaldType:(NSString *)arg1 ;
-(NSString *)glassesType;
-(void)setGlassesType:(NSString *)arg1 ;
-(NSString *)eyeMakeupType;
-(void)setEyeMakeupType:(NSString *)arg1 ;
-(NSString *)lipMakeupType;
-(void)setLipMakeupType:(NSString *)arg1 ;
-(NSString *)groupingIdentifier;
-(void)setGroupingIdentifier:(NSString *)arg1 ;
-(void)setPersonLocalIdentifier:(NSString *)arg1 ;
-(void)setIsInTrash:(BOOL)arg1 ;
-(void)setIsRightEyeClosed:(BOOL)arg1 ;
-(void)setIsLeftEyeClosed:(BOOL)arg1 ;
-(void)_copyPropertiesFrom:(id)arg1 copyPropertiesOption:(long long)arg2 ;
-(void)setCoordinatesAndFeaturesFromFace:(id)arg1 ;
-(BOOL)setCenterAndSizeFromNormalizedFaceRect:(CGRect)arg1 ;
-(CGRect)absoluteFaceRect;
-(CGRect)absoluteFaceRectForImageSize:(CGSize)arg1 ;
-(BOOL)isTooSmall;
-(void)setIsTooSmall:(BOOL)arg1 ;
@end

