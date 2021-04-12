/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

