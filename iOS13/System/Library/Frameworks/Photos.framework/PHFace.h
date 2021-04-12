/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHObject.h>

@class NSString;

@interface PHFace : PHObject {

	BOOL _hidden;
	BOOL _inTrash;
	BOOL _manual;
	BOOL _hasSmile;
	BOOL _leftEyeClosed;
	BOOL _rightEyeClosed;
	short _confirmedFaceCropGenerationState;
	unsigned short _ageType;
	unsigned short _genderType;
	unsigned short _eyesState;
	unsigned short _smileType;
	unsigned short _facialHairType;
	unsigned short _hairColorType;
	unsigned short _baldType;
	unsigned short _glassesType;
	unsigned short _eyeMakeupType;
	unsigned short _lipMakeupType;
	int _trainingType;
	double _size;
	double _centerX;
	double _centerY;
	long long _clusterSequenceNumber;
	long long _qualityMeasure;
	double _quality;
	NSString* _personUUID;
	long long _sourceWidth;
	long long _sourceHeight;
	double _leftEyeX;
	double _leftEyeY;
	double _rightEyeX;
	double _rightEyeY;
	double _mouthX;
	double _mouthY;
	double _roll;
	double _yaw;
	double _blurScore;
	id _adjustmentVersion;
	long long _nameSource;
	double _poseYaw;
	long long _faceAlgorithmVersion;

}

@property (nonatomic,readonly) NSString * personUUID;                                                                            //@synthesize personUUID=_personUUID - In the implementation block
@property (nonatomic,readonly) short confirmedFaceCropGenerationState;                                                           //@synthesize confirmedFaceCropGenerationState=_confirmedFaceCropGenerationState - In the implementation block
@property (nonatomic,readonly) long long sourceWidth;                                                                            //@synthesize sourceWidth=_sourceWidth - In the implementation block
@property (nonatomic,readonly) long long sourceHeight;                                                                           //@synthesize sourceHeight=_sourceHeight - In the implementation block
@property (nonatomic,readonly) double leftEyeX;                                                                                  //@synthesize leftEyeX=_leftEyeX - In the implementation block
@property (nonatomic,readonly) double leftEyeY;                                                                                  //@synthesize leftEyeY=_leftEyeY - In the implementation block
@property (nonatomic,readonly) double rightEyeX;                                                                                 //@synthesize rightEyeX=_rightEyeX - In the implementation block
@property (nonatomic,readonly) double rightEyeY;                                                                                 //@synthesize rightEyeY=_rightEyeY - In the implementation block
@property (nonatomic,readonly) double mouthX;                                                                                    //@synthesize mouthX=_mouthX - In the implementation block
@property (nonatomic,readonly) double mouthY;                                                                                    //@synthesize mouthY=_mouthY - In the implementation block
@property (nonatomic,readonly) double roll;                                                                                      //@synthesize roll=_roll - In the implementation block
@property (nonatomic,readonly) double yaw;                                                                                       //@synthesize yaw=_yaw - In the implementation block
@property (getter=isHidden,nonatomic,readonly) BOOL hidden;                                                                      //@synthesize hidden=_hidden - In the implementation block
@property (getter=isInTrash,nonatomic,readonly) BOOL inTrash;                                                                    //@synthesize inTrash=_inTrash - In the implementation block
@property (nonatomic,readonly) BOOL manual;                                                                                      //@synthesize manual=_manual - In the implementation block
@property (nonatomic,readonly) BOOL hasSmile;                                                                                    //@synthesize hasSmile=_hasSmile - In the implementation block
@property (nonatomic,readonly) double blurScore;                                                                                 //@synthesize blurScore=_blurScore - In the implementation block
@property (getter=isLeftEyeClosed,nonatomic,readonly) BOOL leftEyeClosed;                                                        //@synthesize leftEyeClosed=_leftEyeClosed - In the implementation block
@property (getter=isRightEyeClosed,nonatomic,readonly) BOOL rightEyeClosed;                                                      //@synthesize rightEyeClosed=_rightEyeClosed - In the implementation block
@property (nonatomic,copy,readonly) id adjustmentVersion;                                                                        //@synthesize adjustmentVersion=_adjustmentVersion - In the implementation block
@property (nonatomic,readonly) long long nameSource;                                                                             //@synthesize nameSource=_nameSource - In the implementation block
@property (nonatomic,readonly) int trainingType;                                                                                 //@synthesize trainingType=_trainingType - In the implementation block
@property (getter=isConfirmedFaceCropGenerationPending,nonatomic,readonly) BOOL confirmedFaceCropGenerationPending; 
@property (assign,nonatomic) double poseYaw;                                                                                     //@synthesize poseYaw=_poseYaw - In the implementation block
@property (assign,nonatomic) long long faceAlgorithmVersion;                                                                     //@synthesize faceAlgorithmVersion=_faceAlgorithmVersion - In the implementation block
@property (nonatomic,readonly) NSString * personLocalIdentifier; 
@property (nonatomic,readonly) unsigned short ageType;                                                                           //@synthesize ageType=_ageType - In the implementation block
@property (nonatomic,readonly) unsigned short genderType;                                                                        //@synthesize genderType=_genderType - In the implementation block
@property (nonatomic,readonly) unsigned short eyesState;                                                                         //@synthesize eyesState=_eyesState - In the implementation block
@property (nonatomic,readonly) unsigned short smileType;                                                                         //@synthesize smileType=_smileType - In the implementation block
@property (nonatomic,readonly) unsigned short facialHairType;                                                                    //@synthesize facialHairType=_facialHairType - In the implementation block
@property (nonatomic,readonly) unsigned short hairColorType;                                                                     //@synthesize hairColorType=_hairColorType - In the implementation block
@property (nonatomic,readonly) unsigned short baldType;                                                                          //@synthesize baldType=_baldType - In the implementation block
@property (nonatomic,readonly) unsigned short glassesType;                                                                       //@synthesize glassesType=_glassesType - In the implementation block
@property (nonatomic,readonly) unsigned short eyeMakeupType;                                                                     //@synthesize eyeMakeupType=_eyeMakeupType - In the implementation block
@property (nonatomic,readonly) unsigned short lipMakeupType;                                                                     //@synthesize lipMakeupType=_lipMakeupType - In the implementation block
@property (nonatomic,readonly) double size;                                                                                      //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) double centerX;                                                                                   //@synthesize centerX=_centerX - In the implementation block
@property (nonatomic,readonly) double centerY;                                                                                   //@synthesize centerY=_centerY - In the implementation block
@property (nonatomic,readonly) long long clusterSequenceNumber;                                                                  //@synthesize clusterSequenceNumber=_clusterSequenceNumber - In the implementation block
@property (nonatomic,readonly) long long qualityMeasure;                                                                         //@synthesize qualityMeasure=_qualityMeasure - In the implementation block
@property (nonatomic,readonly) double quality;                                                                                   //@synthesize quality=_quality - In the implementation block
+(id)fetchSuggestedFacesForPerson:(id)arg1 options:(id)arg2 ;
+(id)managedEntityName;
+(id)fetchType;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)identifierCode;
+(id)entityKeyMap;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(id)corePropertiesToFetch;
+(id)_composePropertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)propertySetsForPropertyFetchHints:(unsigned long long)arg1 ;
+(unsigned long long)propertyFetchHintsForPropertySets:(id)arg1 ;
+(Class)propertySetClassForPropertySet:(id)arg1 ;
+(id)propertySetAccessorsByPropertySet;
+(BOOL)managedObjectSupportsFaceState;
+(id)croppingPropertiesToFetch;
+(id)personBuilderPropertiesToFetch;
+(id)fetchFacesWithOptions:(id)arg1 ;
+(id)fetchFacesWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchFacesInAsset:(id)arg1 options:(id)arg2 ;
+(id)fetchFacesInAssets:(id)arg1 options:(id)arg2 ;
+(id)fetchFacesForPerson:(id)arg1 options:(id)arg2 ;
+(id)fetchKeyFaceForPerson:(id)arg1 options:(id)arg2 ;
+(id)fetchFacesOnAssetWithFace:(id)arg1 options:(id)arg2 ;
+(id)fetchFacesInFaceGroup:(id)arg1 options:(id)arg2 ;
+(id)fetchKeyFaceForFaceGroup:(id)arg1 options:(id)arg2 ;
+(id)fetchSingletonFacesWithOptions:(id)arg1 ;
+(id)fetchRejectedFacesForPerson:(id)arg1 options:(id)arg2 ;
+(id)fetchFacesForFaceCrop:(id)arg1 options:(id)arg2 ;
+(id)fetchFacesForPersonsAssociatedWithFaceGroupsContainingFacesWithClusterSequenceNumbers:(id)arg1 options:(id)arg2 ;
+(id)fetchKeyFacesGroupedByPersonLocalIdentifierForPersonLocalIdentifiers:(id)arg1 fetchOptions:(id)arg2 ;
+(id)fetchFacesGroupedByAssetLocalIdentifierForAssets:(id)arg1 options:(id)arg2 ;
+(id)fetchKeyFacesGroupedByPersons:(id)arg1 ;
-(double)size;
-(BOOL)isHidden;
-(BOOL)hasSmile;
-(double)yaw;
-(double)roll;
-(double)centerX;
-(double)centerY;
-(double)quality;
-(double)blurScore;
-(BOOL)isInTrash;
-(NSString *)personUUID;
-(NSString *)personLocalIdentifier;
-(long long)nameSource;
-(short)confirmedFaceCropGenerationState;
-(BOOL)manual;
-(long long)sourceHeight;
-(long long)sourceWidth;
-(int)trainingType;
-(long long)faceAlgorithmVersion;
-(void)setFaceAlgorithmVersion:(long long)arg1 ;
-(id)adjustmentVersion;
-(BOOL)isLeftEyeClosed;
-(BOOL)isRightEyeClosed;
-(long long)qualityMeasure;
-(long long)clusterSequenceNumber;
-(unsigned short)genderType;
-(unsigned short)ageType;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(Class)changeRequestClass;
-(void)fetchPropertySetsIfNeeded;
-(id)_createPropertyObjectOfClass:(Class)arg1 preFetchedProperties:(id)arg2 ;
-(id)_createPropertyObjectOfClass:(Class)arg1 ;
-(double)leftEyeX;
-(double)leftEyeY;
-(double)rightEyeX;
-(double)rightEyeY;
-(double)mouthX;
-(double)mouthY;
-(double)poseYaw;
-(void)setPoseYaw:(double)arg1 ;
-(unsigned short)eyesState;
-(unsigned short)smileType;
-(unsigned short)facialHairType;
-(unsigned short)hairColorType;
-(unsigned short)baldType;
-(unsigned short)glassesType;
-(unsigned short)eyeMakeupType;
-(unsigned short)lipMakeupType;
-(id)faceClusteringProperties;
-(BOOL)isConfirmedFaceCropGenerationPending;
@end

