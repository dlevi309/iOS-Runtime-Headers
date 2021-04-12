/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWInferenceConfiguration.h>

@class NSNumber;

@interface BWLandmarksInferenceConfiguration : BWInferenceConfiguration {

	BOOL _refinesMouthLandmarks;
	BOOL _refinesLeftEyeLandmarks;
	BOOL _refinesRightEyeLandmarks;
	BOOL _detectsBlinking;
	BOOL _detectLandmarksInFullSizeInput;
	NSNumber* _cascadeStepCount;
	unsigned long long _maximumNumberOfFaces;
	BOOL _alwaysExecuteForRedEyeReduction;
	unsigned long long _constellationPointCount;

}

@property (assign,nonatomic) BOOL refinesMouthLandmarks;                              //@synthesize refinesMouthLandmarks=_refinesMouthLandmarks - In the implementation block
@property (assign,nonatomic) BOOL refinesLeftEyeLandmarks;                            //@synthesize refinesLeftEyeLandmarks=_refinesLeftEyeLandmarks - In the implementation block
@property (assign,nonatomic) BOOL refinesRightEyeLandmarks;                           //@synthesize refinesRightEyeLandmarks=_refinesRightEyeLandmarks - In the implementation block
@property (assign,nonatomic) BOOL detectsBlinking;                                    //@synthesize detectsBlinking=_detectsBlinking - In the implementation block
@property (nonatomic,retain) NSNumber * cascadeStepCount;                             //@synthesize cascadeStepCount=_cascadeStepCount - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfFaces;                 //@synthesize maximumNumberOfFaces=_maximumNumberOfFaces - In the implementation block
@property (assign,nonatomic) BOOL alwaysExecuteForRedEyeReduction;                    //@synthesize alwaysExecuteForRedEyeReduction=_alwaysExecuteForRedEyeReduction - In the implementation block
@property (assign,nonatomic) BOOL detectLandmarksInFullSizeInput;                     //@synthesize detectLandmarksInFullSizeInput=_detectLandmarksInFullSizeInput - In the implementation block
@property (assign,nonatomic) unsigned long long constellationPointCount;              //@synthesize constellationPointCount=_constellationPointCount - In the implementation block
+(id)configuration;
+(SCD_Struct_BW75)portraitVersion;
+(unsigned long long)portraitMaximumNumberOfFaces;
+(BOOL)isPortraitPrewarmingRequired;
-(void)dealloc;
-(NSNumber *)cascadeStepCount;
-(void)setCascadeStepCount:(NSNumber *)arg1 ;
-(unsigned long long)maximumNumberOfFaces;
-(BOOL)alwaysExecuteForRedEyeReduction;
-(id)initWithInferenceType:(int)arg1 ;
-(BOOL)refinesMouthLandmarks;
-(void)setRefinesMouthLandmarks:(BOOL)arg1 ;
-(BOOL)refinesLeftEyeLandmarks;
-(void)setRefinesLeftEyeLandmarks:(BOOL)arg1 ;
-(BOOL)refinesRightEyeLandmarks;
-(void)setRefinesRightEyeLandmarks:(BOOL)arg1 ;
-(BOOL)detectsBlinking;
-(void)setDetectsBlinking:(BOOL)arg1 ;
-(void)setMaximumNumberOfFaces:(unsigned long long)arg1 ;
-(void)setAlwaysExecuteForRedEyeReduction:(BOOL)arg1 ;
-(BOOL)detectLandmarksInFullSizeInput;
-(void)setDetectLandmarksInFullSizeInput:(BOOL)arg1 ;
-(unsigned long long)constellationPointCount;
-(void)setConstellationPointCount:(unsigned long long)arg1 ;
@end

