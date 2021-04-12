/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/NURenderRequest.h>

@class NSError, NSArray, VNSaliencyImageObservation;

@interface PICompositionFinalizer : NURenderRequest {

	unsigned long long _candidacy;
	NSError* _finalizerError;
	unsigned long long _performedActions;
	double _rollAngleDegrees;
	double _pitchAngleDegrees;
	double _yawAngleDegrees;
	NSArray* _keyframes;
	VNSaliencyImageObservation* _saliencyObservation;
	NSArray* _ANODSubjects;
	CGRect _reframeRect;
	SCD_Struct_PI6 _stabCropRect;

}

@property (nonatomic,retain) NSError * finalizerError;                                      //@synthesize finalizerError=_finalizerError - In the implementation block
@property (assign,nonatomic) unsigned long long performedActions;                           //@synthesize performedActions=_performedActions - In the implementation block
@property (assign,nonatomic) CGRect reframeRect;                                            //@synthesize reframeRect=_reframeRect - In the implementation block
@property (assign,nonatomic) double rollAngleDegrees;                                       //@synthesize rollAngleDegrees=_rollAngleDegrees - In the implementation block
@property (assign,nonatomic) double pitchAngleDegrees;                                      //@synthesize pitchAngleDegrees=_pitchAngleDegrees - In the implementation block
@property (assign,nonatomic) double yawAngleDegrees;                                        //@synthesize yawAngleDegrees=_yawAngleDegrees - In the implementation block
@property (nonatomic,copy) NSArray * keyframes;                                             //@synthesize keyframes=_keyframes - In the implementation block
@property (assign,nonatomic) SCD_Struct_PI6 stabCropRect;                                   //@synthesize stabCropRect=_stabCropRect - In the implementation block
@property (nonatomic,retain) VNSaliencyImageObservation * saliencyObservation;              //@synthesize saliencyObservation=_saliencyObservation - In the implementation block
@property (nonatomic,copy) NSArray * ANODSubjects;                                          //@synthesize ANODSubjects=_ANODSubjects - In the implementation block
@property (nonatomic,readonly) BOOL shouldAllowPerspectiveCorrection; 
@property (assign,nonatomic) unsigned long long candidacy;                                  //@synthesize candidacy=_candidacy - In the implementation block
+(id)descriptionForCandidacy:(unsigned long long)arg1 ;
-(NSArray *)keyframes;
-(id)initWithComposition:(id)arg1 ;
-(void)submit:(/*^block*/id)arg1 ;
-(SCD_Struct_PI6)stabCropRect;
-(void)setStabCropRect:(SCD_Struct_PI6)arg1 ;
-(void)setKeyframes:(NSArray *)arg1 ;
-(VNSaliencyImageObservation *)saliencyObservation;
-(void)setSaliencyObservation:(VNSaliencyImageObservation *)arg1 ;
-(void)setANODSubjects:(NSArray *)arg1 ;
-(NSArray *)ANODSubjects;
-(void)performNextActionWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)shouldPerformAction:(unsigned long long)arg1 ;
-(BOOL)hasPerformedAction:(unsigned long long)arg1 ;
-(void)markActionAsPerformed:(unsigned long long)arg1 ;
-(void)performReframeWithCompletion:(/*^block*/id)arg1 ;
-(void)performHorizonCorrectionWithCompletion:(/*^block*/id)arg1 ;
-(void)performPerspectiveCorrectionWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)shouldAllowPerspectiveCorrection;
-(void)processStillReframeResult:(id)arg1 ;
-(void)processVideoReframeResult:(id)arg1 ;
-(void)processHorizonResult:(id)arg1 ;
-(void)processPerspectiveResult:(id)arg1 ;
-(unsigned long long)candidacy;
-(void)setCandidacy:(unsigned long long)arg1 ;
-(NSError *)finalizerError;
-(void)setFinalizerError:(NSError *)arg1 ;
-(unsigned long long)performedActions;
-(void)setPerformedActions:(unsigned long long)arg1 ;
-(CGRect)reframeRect;
-(void)setReframeRect:(CGRect)arg1 ;
-(double)rollAngleDegrees;
-(void)setRollAngleDegrees:(double)arg1 ;
-(double)pitchAngleDegrees;
-(void)setPitchAngleDegrees:(double)arg1 ;
-(double)yawAngleDegrees;
-(void)setYawAngleDegrees:(double)arg1 ;
@end

