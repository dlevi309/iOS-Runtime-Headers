/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


#import <Memories/Memories-Structs.h>
@class Project, MiroMemory, KenBurnsClip, NSArray;

@interface MiroAutoEditKenBurnsController : NSObject {

	BOOL _disableCroppingWithoutPet;
	BOOL _kbReassignment;
	BOOL _targetSpecificPerson;
	BOOL _interestingRegionsEstablished;
	BOOL _hasAreasOfInterest;
	Project* _project;
	MiroMemory* _memory;
	double _targetAspect;
	KenBurnsClip* _kbClip;
	unsigned long long _panStyle;
	unsigned long long _kbStyle;
	double _maximumZoomValue;
	NSArray* _featuredPersonsDetectedFaces;
	double _projectAspect;
	CGRect _unionOfAllInterestingRegions;
	CGRect _unionOfAllFaceRegions;
	CGRect _unionOfAllSaliencyRegions;
	CGRect _titleSafeInterestingRegions;
	CGRect _finishAreaOfInterest;
	CGRect _startRect;
	CGRect _endRect;

}

@property (nonatomic,retain) KenBurnsClip * kbClip;                               //@synthesize kbClip=_kbClip - In the implementation block
@property (assign,nonatomic) unsigned long long panStyle;                         //@synthesize panStyle=_panStyle - In the implementation block
@property (assign,nonatomic) unsigned long long kbStyle;                          //@synthesize kbStyle=_kbStyle - In the implementation block
@property (assign,nonatomic) BOOL kbReassignment;                                 //@synthesize kbReassignment=_kbReassignment - In the implementation block
@property (assign,nonatomic) double maximumZoomValue;                             //@synthesize maximumZoomValue=_maximumZoomValue - In the implementation block
@property (assign,nonatomic) BOOL targetSpecificPerson;                           //@synthesize targetSpecificPerson=_targetSpecificPerson - In the implementation block
@property (assign,nonatomic) BOOL interestingRegionsEstablished;                  //@synthesize interestingRegionsEstablished=_interestingRegionsEstablished - In the implementation block
@property (assign,nonatomic) BOOL hasAreasOfInterest;                             //@synthesize hasAreasOfInterest=_hasAreasOfInterest - In the implementation block
@property (assign,nonatomic) CGRect unionOfAllInterestingRegions;                 //@synthesize unionOfAllInterestingRegions=_unionOfAllInterestingRegions - In the implementation block
@property (assign,nonatomic) CGRect unionOfAllFaceRegions;                        //@synthesize unionOfAllFaceRegions=_unionOfAllFaceRegions - In the implementation block
@property (assign,nonatomic) CGRect unionOfAllSaliencyRegions;                    //@synthesize unionOfAllSaliencyRegions=_unionOfAllSaliencyRegions - In the implementation block
@property (assign,nonatomic) CGRect titleSafeInterestingRegions;                  //@synthesize titleSafeInterestingRegions=_titleSafeInterestingRegions - In the implementation block
@property (assign,nonatomic) CGRect finishAreaOfInterest;                         //@synthesize finishAreaOfInterest=_finishAreaOfInterest - In the implementation block
@property (nonatomic,retain) NSArray * featuredPersonsDetectedFaces;              //@synthesize featuredPersonsDetectedFaces=_featuredPersonsDetectedFaces - In the implementation block
@property (assign,nonatomic) CGRect startRect;                                    //@synthesize startRect=_startRect - In the implementation block
@property (assign,nonatomic) CGRect endRect;                                      //@synthesize endRect=_endRect - In the implementation block
@property (nonatomic,readonly) double horizonNormalizedFromTop; 
@property (assign,nonatomic) double projectAspect;                                //@synthesize projectAspect=_projectAspect - In the implementation block
@property (nonatomic,retain) Project * project;                                   //@synthesize project=_project - In the implementation block
@property (nonatomic,retain) MiroMemory * memory;                                 //@synthesize memory=_memory - In the implementation block
@property (assign,nonatomic) double targetAspect;                                 //@synthesize targetAspect=_targetAspect - In the implementation block
@property (assign,nonatomic) BOOL disableCroppingWithoutPet;                      //@synthesize disableCroppingWithoutPet=_disableCroppingWithoutPet - In the implementation block
+(CGRect)titleRectForAsset:(id)arg1 targetAspect:(double)arg2 memory:(id)arg3 ;
+(void)prepareKBClip:(id)arg1 project:(id)arg2 ;
-(MiroMemory *)memory;
-(CGRect)startRect;
-(CGRect)endRect;
-(void)setStartRect:(CGRect)arg1 ;
-(void)setEndRect:(CGRect)arg1 ;
-(void)setMemory:(MiroMemory *)arg1 ;
-(Project *)project;
-(void)setProject:(Project *)arg1 ;
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
-(void)setPanStyle:(unsigned long long)arg1 ;
-(KenBurnsClip *)kbClip;
-(void)setTargetSpecificPerson:(BOOL)arg1 ;
-(void)setKbReassignment:(BOOL)arg1 ;
-(void)finishConfiguringKBInfo;
-(void)setFeaturedPersonsDetectedFaces:(NSArray *)arg1 ;
-(BOOL)disableCroppingWithoutPet;
-(void)setUnionOfAllFaceRegions:(CGRect)arg1 ;
-(CGRect)unionOfAllFaceRegions;
-(CGRect)roundValuesInRect:(CGRect)arg1 ;
-(void)setUnionOfAllInterestingRegions:(CGRect)arg1 ;
-(void)setUnionOfAllSaliencyRegions:(CGRect)arg1 ;
-(CGRect)unionOfAllSaliencyRegions;
-(CGRect)unionOfAllInterestingRegions;
-(BOOL)canCropRectSafelyFillFrame:(CGRect)arg1 ;
-(CGRect)forceFeaturedPersonZoomCrop;
-(BOOL)isTitle;
-(unsigned long long)kbStyle;
-(void)prepareInterestingRegions;
-(void)setHasAreasOfInterest:(BOOL)arg1 ;
-(BOOL)hasAreasOfInterest;
-(CGRect)noInformationCrop;
-(CGRect)forceTitleZoomCrop;
-(BOOL)interestingRegionsEstablished;
-(void)establishInterestingRegions;
-(CGRect)extendAllTheThings:(CGRect)arg1 ;
-(NSArray *)featuredPersonsDetectedFaces;
-(CGRect)finishAreaOfInterest;
-(double)projectAspect;
-(CGRect)titleSafeInterestingRegions;
-(CGRect)extendAllTheThings:(CGRect)arg1 alignment:(long long)arg2 ;
-(double)maximumZoomValue;
-(CGRect)interestingRegionsAdjusted;
-(BOOL)kbReassignment;
-(BOOL)targetSpecificPerson;
-(void)_adjustZoomSpeedOfKenBurnsClip;
-(void)_customizePanOnlyKenBurnsClip;
-(double)horizonNormalizedFromTop;
-(void)_customizePortraitKB:(id)arg1 normalizedVerticalCenter:(double)arg2 ;
-(CGRect)_panFrameForStart:(BOOL)arg1 ;
-(double)_scaleToPanOffsetFromScale:(double)arg1 ;
-(unsigned long long)panStyle;
-(void)setTitleSafeInterestingRegions:(CGRect)arg1 ;
-(BOOL)clipRequiresOneUp:(id)arg1 ;
-(void)setTargetAspect:(double)arg1 ;
-(BOOL)clipEligibleForNUpFraming:(id)arg1 ;
-(void)setDisableCroppingWithoutPet:(BOOL)arg1 ;
-(void)applyKenBurnsForClip:(id)arg1 kenBurnsStyle:(unsigned long long)arg2 panStyle:(unsigned long long)arg3 kenBurnsPace:(unsigned long long)arg4 maxiumumZoomValue:(double)arg5 ;
@end

