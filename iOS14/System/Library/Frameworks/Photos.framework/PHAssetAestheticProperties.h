/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHAssetPropertySet.h>

@interface PHAssetAestheticProperties : PHAssetPropertySet {

	float _wellFramedSubjectScore;
	float _wellChosenSubjectScore;
	float _tastefullyBlurredScore;
	float _sharplyFocusedSubjectScore;
	float _wellTimedShotScore;
	float _pleasantLightingScore;
	float _pleasantReflectionsScore;
	float _harmoniousColorScore;
	float _livelyColorScore;
	float _pleasantSymmetryScore;
	float _pleasantPatternScore;
	float _immersivenessScore;
	float _pleasantPerspectiveScore;
	float _pleasantPostProcessingScore;
	float _noiseScore;
	float _failureScore;
	float _pleasantCompositionScore;
	float _interestingSubjectScore;
	float _intrusiveObjectPresenceScore;
	float _pleasantCameraTiltScore;
	float _lowLight;

}

@property (nonatomic,readonly) float wellFramedSubjectScore;                    //@synthesize wellFramedSubjectScore=_wellFramedSubjectScore - In the implementation block
@property (nonatomic,readonly) float wellChosenSubjectScore;                    //@synthesize wellChosenSubjectScore=_wellChosenSubjectScore - In the implementation block
@property (nonatomic,readonly) float tastefullyBlurredScore;                    //@synthesize tastefullyBlurredScore=_tastefullyBlurredScore - In the implementation block
@property (nonatomic,readonly) float sharplyFocusedSubjectScore;                //@synthesize sharplyFocusedSubjectScore=_sharplyFocusedSubjectScore - In the implementation block
@property (nonatomic,readonly) float wellTimedShotScore;                        //@synthesize wellTimedShotScore=_wellTimedShotScore - In the implementation block
@property (nonatomic,readonly) float pleasantLightingScore;                     //@synthesize pleasantLightingScore=_pleasantLightingScore - In the implementation block
@property (nonatomic,readonly) float pleasantReflectionsScore;                  //@synthesize pleasantReflectionsScore=_pleasantReflectionsScore - In the implementation block
@property (nonatomic,readonly) float harmoniousColorScore;                      //@synthesize harmoniousColorScore=_harmoniousColorScore - In the implementation block
@property (nonatomic,readonly) float livelyColorScore;                          //@synthesize livelyColorScore=_livelyColorScore - In the implementation block
@property (nonatomic,readonly) float pleasantSymmetryScore;                     //@synthesize pleasantSymmetryScore=_pleasantSymmetryScore - In the implementation block
@property (nonatomic,readonly) float pleasantPatternScore;                      //@synthesize pleasantPatternScore=_pleasantPatternScore - In the implementation block
@property (nonatomic,readonly) float immersivenessScore;                        //@synthesize immersivenessScore=_immersivenessScore - In the implementation block
@property (nonatomic,readonly) float pleasantPerspectiveScore;                  //@synthesize pleasantPerspectiveScore=_pleasantPerspectiveScore - In the implementation block
@property (nonatomic,readonly) float pleasantPostProcessingScore;               //@synthesize pleasantPostProcessingScore=_pleasantPostProcessingScore - In the implementation block
@property (nonatomic,readonly) float noiseScore;                                //@synthesize noiseScore=_noiseScore - In the implementation block
@property (nonatomic,readonly) float failureScore;                              //@synthesize failureScore=_failureScore - In the implementation block
@property (nonatomic,readonly) float pleasantCompositionScore;                  //@synthesize pleasantCompositionScore=_pleasantCompositionScore - In the implementation block
@property (nonatomic,readonly) float interestingSubjectScore;                   //@synthesize interestingSubjectScore=_interestingSubjectScore - In the implementation block
@property (nonatomic,readonly) float intrusiveObjectPresenceScore;              //@synthesize intrusiveObjectPresenceScore=_intrusiveObjectPresenceScore - In the implementation block
@property (nonatomic,readonly) float pleasantCameraTiltScore;                   //@synthesize pleasantCameraTiltScore=_pleasantCameraTiltScore - In the implementation block
@property (nonatomic,readonly) float lowLight;                                  //@synthesize lowLight=_lowLight - In the implementation block
+(id)entityName;
+(id)keyPathFromPrimaryObject;
+(id)propertySetName;
+(id)propertiesToFetch;
-(float)noiseScore;
-(float)pleasantCompositionScore;
-(float)pleasantSymmetryScore;
-(float)pleasantCameraTiltScore;
-(float)immersivenessScore;
-(float)wellTimedShotScore;
-(float)tastefullyBlurredScore;
-(float)lowLight;
-(float)wellFramedSubjectScore;
-(float)wellChosenSubjectScore;
-(float)pleasantReflectionsScore;
-(float)pleasantPatternScore;
-(float)harmoniousColorScore;
-(float)pleasantLightingScore;
-(float)sharplyFocusedSubjectScore;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(float)failureScore;
-(float)intrusiveObjectPresenceScore;
-(float)interestingSubjectScore;
-(float)pleasantPerspectiveScore;
-(float)pleasantPostProcessingScore;
-(float)livelyColorScore;
-(void)initWithDefaultValues;
@end

