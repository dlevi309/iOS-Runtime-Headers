/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

@class VNImageHomographicAlignmentObservation;


@protocol PILongExposureRegistrationResult <NURenderResult>
@property (copy,readonly) VNImageHomographicAlignmentObservation * observation; 
@property (nonatomic,readonly) SCD_Struct_PI6 extent; 
@required
-(SCD_Struct_PI6)extent;
-(VNImageHomographicAlignmentObservation *)observation;

@end

