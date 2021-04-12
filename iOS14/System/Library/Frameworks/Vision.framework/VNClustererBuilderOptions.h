/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/VNClustererOptions.h>

@interface VNClustererBuilderOptions : VNClustererOptions {

	float _ageClassifierBabyThreshold;
	float _ageClassifierKidThreshold;

}

@property (assign,nonatomic) float ageClassifierBabyThreshold;              //@synthesize ageClassifierBabyThreshold=_ageClassifierBabyThreshold - In the implementation block
@property (assign,nonatomic) float ageClassifierKidThreshold;               //@synthesize ageClassifierKidThreshold=_ageClassifierKidThreshold - In the implementation block
+(BOOL)_defaultAgeClassifierKidThreshold:(float*)arg1 forFaceprintRequestRevision:(unsigned long long)arg2 error:(id*)arg3 ;
+(BOOL)_defaultAgeClassifierBabyThreshold:(float*)arg1 forFaceprintRequestRevision:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 requestRevision:(unsigned long long)arg5 ;
-(id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 torsoThreshold:(float)arg5 requestRevision:(unsigned long long)arg6 ;
-(id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 ;
-(id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 torsoThreshold:(float)arg5 ;
-(float)ageClassifierBabyThreshold;
-(void)setAgeClassifierBabyThreshold:(float)arg1 ;
-(float)ageClassifierKidThreshold;
-(void)setAgeClassifierKidThreshold:(float)arg1 ;
@end

