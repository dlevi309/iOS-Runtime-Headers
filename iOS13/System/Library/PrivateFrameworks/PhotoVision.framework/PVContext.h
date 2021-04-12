/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
*/

#import <PhotoVision/PhotoVision-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PVContext : NSObject <NSSecureCoding, NSCopying> {

	BOOL _quarantineTwinsOnAssetEnabled;
	BOOL _faceClusteringDisabled;
	BOOL _personBuildingDisabled;
	BOOL _personBuilderMergeCandidatesDisabled;
	float _faceClusteringThreshold;
	float _faceClusteringJunkThreshold;
	float _faceClusteringAgeThreshold;
	float _faceMergeFaceprintDistanceThreshold;
	float _facePrimarySuggestionsThreshold;
	unsigned _faceAlgorithmUmbrellaVersion;
	unsigned _sceneAlgorithmUmbrellaVersion;
	unsigned long long _minimumSuggestionSize;
	unsigned long long _minFaceCountToTriggerClustering;
	unsigned long long _maxFaceCountForClustering;
	unsigned long long _minimumFaceGroupSizeForCreatingMergeCandidates;

}

@property (assign,nonatomic) float faceClusteringThreshold;                                                  //@synthesize faceClusteringThreshold=_faceClusteringThreshold - In the implementation block
@property (assign,nonatomic) float faceClusteringJunkThreshold;                                              //@synthesize faceClusteringJunkThreshold=_faceClusteringJunkThreshold - In the implementation block
@property (assign,nonatomic) float faceClusteringAgeThreshold;                                               //@synthesize faceClusteringAgeThreshold=_faceClusteringAgeThreshold - In the implementation block
@property (assign,nonatomic) float faceMergeFaceprintDistanceThreshold;                                      //@synthesize faceMergeFaceprintDistanceThreshold=_faceMergeFaceprintDistanceThreshold - In the implementation block
@property (assign,nonatomic) float facePrimarySuggestionsThreshold;                                          //@synthesize facePrimarySuggestionsThreshold=_facePrimarySuggestionsThreshold - In the implementation block
@property (assign,nonatomic) unsigned long long minimumSuggestionSize;                                       //@synthesize minimumSuggestionSize=_minimumSuggestionSize - In the implementation block
@property (assign,nonatomic) BOOL quarantineTwinsOnAssetEnabled;                                             //@synthesize quarantineTwinsOnAssetEnabled=_quarantineTwinsOnAssetEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long minFaceCountToTriggerClustering;                             //@synthesize minFaceCountToTriggerClustering=_minFaceCountToTriggerClustering - In the implementation block
@property (assign,nonatomic) unsigned long long maxFaceCountForClustering;                                   //@synthesize maxFaceCountForClustering=_maxFaceCountForClustering - In the implementation block
@property (assign,nonatomic) BOOL faceClusteringDisabled;                                                    //@synthesize faceClusteringDisabled=_faceClusteringDisabled - In the implementation block
@property (assign,nonatomic) BOOL personBuildingDisabled;                                                    //@synthesize personBuildingDisabled=_personBuildingDisabled - In the implementation block
@property (assign,nonatomic) BOOL personBuilderMergeCandidatesDisabled;                                      //@synthesize personBuilderMergeCandidatesDisabled=_personBuilderMergeCandidatesDisabled - In the implementation block
@property (assign,nonatomic) unsigned long long minimumFaceGroupSizeForCreatingMergeCandidates;              //@synthesize minimumFaceGroupSizeForCreatingMergeCandidates=_minimumFaceGroupSizeForCreatingMergeCandidates - In the implementation block
@property (assign,nonatomic) unsigned faceAlgorithmUmbrellaVersion;                                          //@synthesize faceAlgorithmUmbrellaVersion=_faceAlgorithmUmbrellaVersion - In the implementation block
@property (assign,nonatomic) unsigned sceneAlgorithmUmbrellaVersion;                                         //@synthesize sceneAlgorithmUmbrellaVersion=_sceneAlgorithmUmbrellaVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)faceAlgorithmUmbrellaVersion;
-(void)setFaceAlgorithmUmbrellaVersion:(unsigned)arg1 ;
-(unsigned)sceneAlgorithmUmbrellaVersion;
-(void)setSceneAlgorithmUmbrellaVersion:(unsigned)arg1 ;
-(BOOL)personBuilderMergeCandidatesDisabled;
-(void)setPersonBuilderMergeCandidatesDisabled:(BOOL)arg1 ;
-(BOOL)personBuildingDisabled;
-(BOOL)quarantineTwinsOnAssetEnabled;
-(unsigned long long)minimumFaceGroupSizeForCreatingMergeCandidates;
-(unsigned long long)minimumSuggestionSize;
-(float)faceClusteringThreshold;
-(void)setFaceClusteringThreshold:(float)arg1 ;
-(float)faceClusteringJunkThreshold;
-(void)setFaceClusteringJunkThreshold:(float)arg1 ;
-(float)faceClusteringAgeThreshold;
-(void)setFaceClusteringAgeThreshold:(float)arg1 ;
-(float)faceMergeFaceprintDistanceThreshold;
-(void)setFaceMergeFaceprintDistanceThreshold:(float)arg1 ;
-(float)facePrimarySuggestionsThreshold;
-(void)setFacePrimarySuggestionsThreshold:(float)arg1 ;
-(void)setMinimumSuggestionSize:(unsigned long long)arg1 ;
-(void)setQuarantineTwinsOnAssetEnabled:(BOOL)arg1 ;
-(unsigned long long)minFaceCountToTriggerClustering;
-(void)setMinFaceCountToTriggerClustering:(unsigned long long)arg1 ;
-(unsigned long long)maxFaceCountForClustering;
-(void)setMaxFaceCountForClustering:(unsigned long long)arg1 ;
-(BOOL)faceClusteringDisabled;
-(void)setFaceClusteringDisabled:(BOOL)arg1 ;
-(void)setPersonBuildingDisabled:(BOOL)arg1 ;
-(void)setMinimumFaceGroupSizeForCreatingMergeCandidates:(unsigned long long)arg1 ;
@end

