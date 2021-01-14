/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWVisionInferenceConfiguration.h>

@class NSNumber;

@interface BWLandmarksInferenceConfiguration : BWVisionInferenceConfiguration {

	BOOL _refinesMouthLandmarks;
	BOOL _refinesLeftEyeLandmarks;
	BOOL _refinesRightEyeLandmarks;
	BOOL _detectsBlinking;
	BOOL _detectLandmarksInFullSizeInput;
	NSNumber* _cascadeStepCount;
	unsigned long long _maximumNumberOfFaces;
	BOOL _alwaysExecuteForRedEyeReduction;
	unsigned long long _constellationPointCount;
	SCD_Struct_BW57 _landmarksInferenceVersion;

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
@property (assign,nonatomic) SCD_Struct_BW57 landmarksInferenceVersion;               //@synthesize landmarksInferenceVersion=_landmarksInferenceVersion - In the implementation block
+(void)initialize;
+(unsigned long long)portraitMaximumNumberOfFaces;
+(BOOL)isPortraitPrewarmingRequired;
+(id)configuration;
-(void)setRefinesMouthLandmarks:(BOOL)arg1 ;
-(void)setRefinesLeftEyeLandmarks:(BOOL)arg1 ;
-(void)setRefinesRightEyeLandmarks:(BOOL)arg1 ;
-(unsigned long long)maximumNumberOfFaces;
-(BOOL)alwaysExecuteForRedEyeReduction;
-(void)setConstellationPointCount:(unsigned long long)arg1 ;
-(void)setLandmarksInferenceVersion:(SCD_Struct_BW57)arg1 ;
-(void)setMaximumNumberOfFaces:(unsigned long long)arg1 ;
-(void)setAlwaysExecuteForRedEyeReduction:(BOOL)arg1 ;
-(void)setDetectLandmarksInFullSizeInput:(BOOL)arg1 ;
-(SCD_Struct_BW57)landmarksInferenceVersion;
-(NSNumber *)cascadeStepCount;
-(void)setCascadeStepCount:(NSNumber *)arg1 ;
-(unsigned long long)constellationPointCount;
-(BOOL)refinesMouthLandmarks;
-(BOOL)refinesLeftEyeLandmarks;
-(BOOL)refinesRightEyeLandmarks;
-(BOOL)detectsBlinking;
-(BOOL)detectLandmarksInFullSizeInput;
-(id)initWithInferenceType:(int)arg1 ;
-(void)setDetectsBlinking:(BOOL)arg1 ;
-(void)dealloc;
@end

