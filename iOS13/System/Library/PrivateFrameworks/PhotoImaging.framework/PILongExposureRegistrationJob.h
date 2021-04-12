/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/NURenderJob.h>

@class CIImage, VNImageHomographicAlignmentObservation;

@interface PILongExposureRegistrationJob : NURenderJob {

	CIImage* _stillImage;
	VNImageHomographicAlignmentObservation* _observation;
	SCD_Struct_PI6 _guideExtent;

}

@property (assign,nonatomic) SCD_Struct_PI6 guideExtent;                                        //@synthesize guideExtent=_guideExtent - In the implementation block
@property (nonatomic,retain) CIImage * stillImage;                                              //@synthesize stillImage=_stillImage - In the implementation block
@property (nonatomic,retain) VNImageHomographicAlignmentObservation * observation;              //@synthesize observation=_observation - In the implementation block
-(id)result;
-(void)setObservation:(VNImageHomographicAlignmentObservation *)arg1 ;
-(BOOL)render:(out id*)arg1 ;
-(VNImageHomographicAlignmentObservation *)observation;
-(BOOL)prepare:(out id*)arg1 ;
-(CIImage *)stillImage;
-(void)setStillImage:(CIImage *)arg1 ;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(BOOL)wantsRenderScaleClampedToNativeScale;
-(id)scalePolicy;
-(id)newRenderPipelineStateForEvaluationMode:(long long)arg1 ;
-(id)registrationRequest;
-(SCD_Struct_PI6)guideExtent;
-(void)setGuideExtent:(SCD_Struct_PI6)arg1 ;
@end

