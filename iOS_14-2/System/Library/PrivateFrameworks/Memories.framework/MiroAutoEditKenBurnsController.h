/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


#import <Memories/Memories-Structs.h>
@class Project, NSDictionary, KenBurnsClip, NSArray;

@interface MiroAutoEditKenBurnsController : NSObject {

	BOOL _disableCroppingWithoutPet;
	BOOL _kbReassignment;
	BOOL _interestingRegionsEstablished;
	BOOL _hasAreasOfInterest;
	Project* _project;
	NSDictionary* _memoryFeaturesPersonInAsset;
	NSDictionary* _featuredPersonsInMemoryAsFaceRanges;
	unsigned long long _memoryCategory;
	unsigned long long _memorySubcategory;
	double _targetAspect;
	KenBurnsClip* _kbClip;
	unsigned long long _panStyle;
	unsigned long long _kbStyle;
	double _maximumZoomValue;
	NSArray* _featuredPersonsDetectedFaces;
	NSArray* _allPersonsAndPetsDetectedFaces;
	double _projectAspect;
	CGRect _unionOfAllInterestingRegions;
	CGRect _unionOfAllFaceRegions;
	CGRect _unionOfAllSaliencyRegions;
	CGRect _titleSafeInterestingRegions;
	CGRect _finishAreaOfInterest;
	CGRect _startRect;
	CGRect _endRect;

}

@property (nonatomic,retain) KenBurnsClip * kbClip;                                           //@synthesize kbClip=_kbClip - In the implementation block
@property (assign,nonatomic) unsigned long long panStyle;                                     //@synthesize panStyle=_panStyle - In the implementation block
@property (assign,nonatomic) unsigned long long kbStyle;                                      //@synthesize kbStyle=_kbStyle - In the implementation block
@property (assign,nonatomic) BOOL kbReassignment;                                             //@synthesize kbReassignment=_kbReassignment - In the implementation block
@property (assign,nonatomic) double maximumZoomValue;                                         //@synthesize maximumZoomValue=_maximumZoomValue - In the implementation block
@property (assign,nonatomic) BOOL interestingRegionsEstablished;                              //@synthesize interestingRegionsEstablished=_interestingRegionsEstablished - In the implementation block
@property (assign,nonatomic) BOOL hasAreasOfInterest;                                         //@synthesize hasAreasOfInterest=_hasAreasOfInterest - In the implementation block
@property (assign,nonatomic) CGRect unionOfAllInterestingRegions;                             //@synthesize unionOfAllInterestingRegions=_unionOfAllInterestingRegions - In the implementation block
@property (assign,nonatomic) CGRect unionOfAllFaceRegions;                                    //@synthesize unionOfAllFaceRegions=_unionOfAllFaceRegions - In the implementation block
@property (assign,nonatomic) CGRect unionOfAllSaliencyRegions;                                //@synthesize unionOfAllSaliencyRegions=_unionOfAllSaliencyRegions - In the implementation block
@property (assign,nonatomic) CGRect titleSafeInterestingRegions;                              //@synthesize titleSafeInterestingRegions=_titleSafeInterestingRegions - In the implementation block
@property (assign,nonatomic) CGRect finishAreaOfInterest;                                     //@synthesize finishAreaOfInterest=_finishAreaOfInterest - In the implementation block
@property (nonatomic,retain) NSArray * featuredPersonsDetectedFaces;                          //@synthesize featuredPersonsDetectedFaces=_featuredPersonsDetectedFaces - In the implementation block
@property (nonatomic,retain) NSArray * allPersonsAndPetsDetectedFaces;                        //@synthesize allPersonsAndPetsDetectedFaces=_allPersonsAndPetsDetectedFaces - In the implementation block
@property (assign,nonatomic) CGRect startRect;                                                //@synthesize startRect=_startRect - In the implementation block
@property (assign,nonatomic) CGRect endRect;                                                  //@synthesize endRect=_endRect - In the implementation block
@property (nonatomic,readonly) double horizonNormalizedFromTop; 
@property (assign,nonatomic) double projectAspect;                                            //@synthesize projectAspect=_projectAspect - In the implementation block
@property (nonatomic,retain) Project * project;                                               //@synthesize project=_project - In the implementation block
@property (nonatomic,retain) NSDictionary * memoryFeaturesPersonInAsset;                      //@synthesize memoryFeaturesPersonInAsset=_memoryFeaturesPersonInAsset - In the implementation block
@property (nonatomic,retain) NSDictionary * featuredPersonsInMemoryAsFaceRanges;              //@synthesize featuredPersonsInMemoryAsFaceRanges=_featuredPersonsInMemoryAsFaceRanges - In the implementation block
@property (assign,nonatomic) unsigned long long memoryCategory;                               //@synthesize memoryCategory=_memoryCategory - In the implementation block
@property (assign,nonatomic) unsigned long long memorySubcategory;                            //@synthesize memorySubcategory=_memorySubcategory - In the implementation block
@property (assign,nonatomic) double targetAspect;                                             //@synthesize targetAspect=_targetAspect - In the implementation block
@property (assign,nonatomic) BOOL disableCroppingWithoutPet;                                  //@synthesize disableCroppingWithoutPet=_disableCroppingWithoutPet - In the implementation block
+(CGRect)unionOfAllInterestingRegionsRectForAsset:(id)arg1 ;
+(CGRect)rectForAsset:(id)arg1 targetAspect:(double)arg2 style:(unsigned long long)arg3 ;
+(CGRect)titleRectForAsset:(id)arg1 targetAspect:(double)arg2 memoryTypeDisablesCropping:(BOOL)arg3 memoryCategory:(unsigned long long)arg4 memorySubcategory:(unsigned long long)arg5 memoryFeaturesPersonInAsset:(id)arg6 featuredPersonsInMemoryAsFaceRanges:(id)arg7 ;
+(BOOL)shouldHeroSubjectForCategory:(unsigned long long)arg1 subcategory:(unsigned long long)arg2 ;
+(BOOL)shouldTryToFitAllFaces:(unsigned long long)arg1 subcategory:(unsigned long long)arg2 ;
+(void)prepareKBClip:(id)arg1 project:(id)arg2 ;
-(void)setStartRect:(CGRect)arg1 ;
-(KenBurnsClip *)kbClip;
-(BOOL)isTitle;
-(void)setEndRect:(CGRect)arg1 ;
-(CGRect)endRect;
-(Project *)project;
-(unsigned long long)kbStyle;
-(CGRect)startRect;
-(unsigned long long)memoryCategory;
-(void)setMemoryCategory:(unsigned long long)arg1 ;
-(unsigned long long)memorySubcategory;
-(void)setMemorySubcategory:(unsigned long long)arg1 ;
-(CGRect)roundValuesInRect:(CGRect)arg1 ;
-(void)setProject:(Project *)arg1 ;
-(NSDictionary *)memoryFeaturesPersonInAsset;
-(void)setMemoryFeaturesPersonInAsset:(NSDictionary *)arg1 ;
-(NSDictionary *)featuredPersonsInMemoryAsFaceRanges;
-(void)setFeaturedPersonsInMemoryAsFaceRanges:(NSDictionary *)arg1 ;
-(void)setKbClip:(KenBurnsClip *)arg1 ;
-(double)targetAspect;
-(void)setProjectAspect:(double)arg1 ;
-(BOOL)canSupportKB;
-(void)setInterestingRegionsEstablished:(BOOL)arg1 ;
-(void)setFinishAreaOfInterest:(CGRect)arg1 ;
-(double)clampZoomDifference:(double)arg1 kenBurnsPace:(unsigned long long)arg2 ;
-(void)setMaximumZoomValue:(double)arg1 ;
-(void)setKbStyle:(unsigned long long)arg1 ;
-(void)assignStartAndEndRect;
-(BOOL)backgroundTreatmentRequiredForStartEndRect;
-(void)setFeaturedPersonsDetectedFaces:(NSArray *)arg1 ;
-(void)setAllPersonsAndPetsDetectedFaces:(NSArray *)arg1 ;
-(void)setPanStyle:(unsigned long long)arg1 ;
-(void)setKbReassignment:(BOOL)arg1 ;
-(void)finishConfiguringKBInfo;
-(BOOL)shouldFeatureSpecificPerson;
-(BOOL)assetIsFalsePositiveCandidateMADPets;
-(NSArray *)allPersonsAndPetsDetectedFaces;
-(void)setUnionOfAllFaceRegions:(CGRect)arg1 ;
-(CGRect)unionOfAllFaceRegions;
-(void)setUnionOfAllInterestingRegions:(CGRect)arg1 ;
-(void)setUnionOfAllSaliencyRegions:(CGRect)arg1 ;
-(CGRect)unionOfAllSaliencyRegions;
-(CGRect)unionOfAllInterestingRegions;
-(BOOL)disableCroppingWithoutPet;
-(BOOL)assetHasFeaturedPeople;
-(double)rectIntersectionAmount:(CGRect)arg1 rect2:(CGRect)arg2 ;
-(BOOL)isPartialFaceFramingAcceptable:(id)arg1 unionOfAllFaceRegionsRect:(CGRect)arg2 minFaceAreaIntersectingAmount:(double)arg3 ;
-(BOOL)shouldTryToFitAllFaces;
-(CGRect)forceFeaturedPersonZoomCrop;
-(BOOL)canCropRectSafelyFillFrame:(CGRect)arg1 ;
-(BOOL)isAttemptingToFrameAllFacesAcceptable:(CGRect)arg1 minFaceAreaIntersectingAmount:(double)arg2 ;
-(CGRect)finishAreaOfInterest;
-(BOOL)isAttemptingToFrameAllFeaturedFacesAcceptable:(CGRect)arg1 minFaceAreaIntersectingAmount:(double)arg2 ;
-(CGRect)rectInCorrectAspectRatioInsideRect:(CGRect)arg1 rectToInclude:(CGRect)arg2 targetAspectRatio:(float)arg3 ;
-(CGRect)extendAllTheThings:(CGRect)arg1 ;
-(CGRect)maxRectICanExtendTo:(id)arg1 rect:(CGRect)arg2 ;
-(CGRect)extendAsMuchAsPossibleWithoutIncludingOtherFaces:(id)arg1 rect:(CGRect)arg2 ;
-(CGRect)centerAroundAllFacesIncluded:(id)arg1 framingRect:(CGRect)arg2 minFaceAreaIntersectingAmount:(double)arg3 ;
-(void)prepareInterestingRegionsUsingMLFraming;
-(void)prepareInterestingRegions;
-(void)setHasAreasOfInterest:(BOOL)arg1 ;
-(BOOL)hasAreasOfInterest;
-(CGRect)noInformationCrop;
-(CGRect)forceTitleZoomCrop;
-(BOOL)interestingRegionsEstablished;
-(void)establishInterestingRegions;
-(double)projectAspect;
-(NSArray *)featuredPersonsDetectedFaces;
-(CGRect)titleSafeInterestingRegions;
-(CGRect)interestingRegionsAdjusted;
-(CGRect)extendAllTheThings:(CGRect)arg1 alignment:(long long)arg2 ;
-(double)maximumZoomValue;
-(BOOL)kbReassignment;
-(void)_adjustZoomSpeedOfKenBurnsClip;
-(void)_customizePanOnlyKenBurnsClip;
-(CGRect)zoomToPeopleInterestingRegion:(CGRect)arg1 ;
-(double)horizonNormalizedFromTop;
-(void)_customizePortraitKB:(id)arg1 normalizedVerticalCenter:(double)arg2 ;
-(CGRect)_panFrameForStart:(BOOL)arg1 ;
-(double)_scaleToPanOffsetFromScale:(double)arg1 ;
-(unsigned long long)panStyle;
-(void)setTitleSafeInterestingRegions:(CGRect)arg1 ;
-(void)setDisableCroppingWithoutPet:(BOOL)arg1 ;
-(BOOL)clipRequiresOneUp:(id)arg1 ;
-(void)setTargetAspect:(double)arg1 ;
-(BOOL)clipEligibleForNUpFraming:(id)arg1 ;
-(BOOL)shouldFeatureSpecificPersonForClip:(id)arg1 ;
-(void)applyKenBurnsForClip:(id)arg1 kenBurnsStyle:(unsigned long long)arg2 panStyle:(unsigned long long)arg3 kenBurnsPace:(unsigned long long)arg4 maxiumumZoomValue:(double)arg5 ;
@end
