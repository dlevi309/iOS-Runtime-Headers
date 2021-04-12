/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHChangeRequest.h>
#import <libobjc.A.dylib/PHInsertChangeRequest.h>
#import <libobjc.A.dylib/PHUpdateChangeRequest.h>

@class PHFaceprint, PHObjectPlaceholder, NSString, NSManagedObjectID;

@interface PHFaceChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest> {

	PHFaceprint* _faceprint;
	BOOL _didSetFaceprint;
	BOOL _shouldClearFaceCropGenerationState;

}

@property (assign,nonatomic) BOOL shouldClearFaceCropGenerationState;                        //@synthesize shouldClearFaceCropGenerationState=_shouldClearFaceCropGenerationState - In the implementation block
@property (nonatomic,readonly) PHObjectPlaceholder * placeholderForCreatedFace; 
@property (assign,nonatomic) double size; 
@property (assign,nonatomic) double centerX; 
@property (assign,nonatomic) double centerY; 
@property (assign,nonatomic) long long sourceWidth; 
@property (assign,nonatomic) long long sourceHeight; 
@property (assign,nonatomic) double leftEyeX; 
@property (assign,nonatomic) double leftEyeY; 
@property (assign,nonatomic) double rightEyeX; 
@property (assign,nonatomic) double rightEyeY; 
@property (assign,nonatomic) double mouthX; 
@property (assign,nonatomic) double mouthY; 
@property (assign,nonatomic) double roll; 
@property (assign,nonatomic) double yaw; 
@property (assign,nonatomic) BOOL isInVIPModel; 
@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (assign,getter=isInTrash,nonatomic) BOOL inTrash; 
@property (assign,nonatomic) BOOL manual; 
@property (assign,nonatomic) BOOL hasSmile; 
@property (assign,nonatomic) double blurScore; 
@property (assign,getter=isLeftEyeClosed,nonatomic) BOOL leftEyeClosed; 
@property (assign,getter=isRightEyeClosed,nonatomic) BOOL rightEyeClosed; 
@property (nonatomic,copy) id adjustmentVersion; 
@property (assign,nonatomic) long long nameSource; 
@property (assign,nonatomic) long long faceAlgorithmVersion; 
@property (assign,nonatomic) double poseYaw; 
@property (nonatomic,retain) PHFaceprint * faceprint; 
@property (assign,nonatomic) long long clusterSequenceNumber; 
@property (assign,nonatomic) long long qualityMeasure; 
@property (assign,nonatomic) double quality; 
@property (assign,nonatomic) unsigned short ageType; 
@property (assign,nonatomic) unsigned short genderType; 
@property (assign,nonatomic) unsigned short sexType; 
@property (assign,nonatomic) unsigned short eyesState; 
@property (assign,nonatomic) unsigned short smileType; 
@property (assign,nonatomic) unsigned short facialHairType; 
@property (assign,nonatomic) unsigned short hairColorType; 
@property (assign,nonatomic) unsigned short baldType; 
@property (assign,nonatomic) unsigned short glassesType; 
@property (assign,nonatomic) unsigned short eyeMakeupType; 
@property (assign,nonatomic) unsigned short lipMakeupType; 
@property (nonatomic,retain) NSString * groupingIdentifier; 
@property (readonly) BOOL isNewRequest; 
@property (assign,nonatomic) BOOL shouldPerformConcurrentWork; 
@property (getter=isMutated,readonly) BOOL mutated; 
@property (nonatomic,readonly) NSString * managedEntityName; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (getter=isClientEntitled,nonatomic,readonly) BOOL clientEntitled; 
@property (nonatomic,readonly) NSString * clientName; 
@property (nonatomic,readonly) long long accessScopeOptionsRequirement; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)changeRequestForFace:(id)arg1 ;
+(id)creationRequestForFace;
+(void)deleteFaces:(id)arg1 ;
-(double)roll;
-(BOOL)isHidden;
-(id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(double)centerY;
-(double)yaw;
-(double)mouthX;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(double)mouthY;
-(BOOL)manual;
-(void)setHidden:(BOOL)arg1 ;
-(double)size;
-(double)centerX;
-(BOOL)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3 ;
-(void)setSize:(double)arg1 ;
-(double)poseYaw;
-(unsigned short)ageType;
-(double)quality;
-(unsigned short)sexType;
-(id)adjustmentVersion;
-(double)leftEyeX;
-(double)leftEyeY;
-(PHObjectPlaceholder *)placeholderForCreatedFace;
-(void)setCenterX:(double)arg1 ;
-(void)setCenterY:(double)arg1 ;
-(long long)sourceWidth;
-(void)setSourceWidth:(long long)arg1 ;
-(long long)sourceHeight;
-(void)setSourceHeight:(long long)arg1 ;
-(void)setLeftEyeX:(double)arg1 ;
-(void)setLeftEyeY:(double)arg1 ;
-(void)setRightEyeX:(double)arg1 ;
-(void)setRightEyeY:(double)arg1 ;
-(void)setMouthX:(double)arg1 ;
-(void)setMouthY:(double)arg1 ;
-(BOOL)isInVIPModel;
-(void)setIsInVIPModel:(BOOL)arg1 ;
-(void)setInTrash:(BOOL)arg1 ;
-(void)setManual:(BOOL)arg1 ;
-(void)setHasSmile:(BOOL)arg1 ;
-(void)setBlurScore:(double)arg1 ;
-(BOOL)isLeftEyeClosed;
-(void)setLeftEyeClosed:(BOOL)arg1 ;
-(BOOL)isRightEyeClosed;
-(void)setRightEyeClosed:(BOOL)arg1 ;
-(long long)nameSource;
-(void)setNameSource:(long long)arg1 ;
-(void)setPoseYaw:(double)arg1 ;
-(long long)faceAlgorithmVersion;
-(void)setFaceAlgorithmVersion:(long long)arg1 ;
-(long long)clusterSequenceNumber;
-(void)setClusterSequenceNumber:(long long)arg1 ;
-(long long)qualityMeasure;
-(void)setQualityMeasure:(long long)arg1 ;
-(void)setAgeType:(unsigned short)arg1 ;
-(unsigned short)genderType;
-(void)setGenderType:(unsigned short)arg1 ;
-(void)setEyesState:(unsigned short)arg1 ;
-(void)setSmileType:(unsigned short)arg1 ;
-(unsigned short)facialHairType;
-(void)setFacialHairType:(unsigned short)arg1 ;
-(unsigned short)hairColorType;
-(void)setHairColorType:(unsigned short)arg1 ;
-(void)setBaldType:(unsigned short)arg1 ;
-(unsigned short)glassesType;
-(void)setGlassesType:(unsigned short)arg1 ;
-(unsigned short)eyeMakeupType;
-(void)setEyeMakeupType:(unsigned short)arg1 ;
-(unsigned short)lipMakeupType;
-(void)setLipMakeupType:(unsigned short)arg1 ;
-(NSString *)groupingIdentifier;
-(void)setGroupingIdentifier:(NSString *)arg1 ;
-(void)setAdjustmentVersion:(id)arg1 ;
-(void)setSexType:(unsigned short)arg1 ;
-(void)setFaceprint:(PHFaceprint *)arg1 ;
-(void)setShouldClearFaceCropGenerationState:(BOOL)arg1 ;
-(BOOL)shouldClearFaceCropGenerationState;
-(BOOL)hasSmile;
-(void)setYaw:(double)arg1 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(unsigned short)baldType;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 ;
-(void)setQuality:(double)arg1 ;
-(id)initForNewObject;
-(double)rightEyeX;
-(NSString *)managedEntityName;
-(double)rightEyeY;
-(void)setRoll:(double)arg1 ;
-(BOOL)isInTrash;
-(double)blurScore;
-(unsigned short)eyesState;
-(unsigned short)smileType;
-(PHFaceprint *)faceprint;
@end

