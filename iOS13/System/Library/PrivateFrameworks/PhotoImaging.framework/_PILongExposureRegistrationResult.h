/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/_NURenderResult.h>
#import <libobjc.A.dylib/PILongExposureRegistrationResult.h>

@class VNImageHomographicAlignmentObservation, NSString;

@interface _PILongExposureRegistrationResult : _NURenderResult <PILongExposureRegistrationResult> {

	VNImageHomographicAlignmentObservation* _observation;
	SCD_Struct_PI6 _extent;

}

@property (nonatomic,copy) VNImageHomographicAlignmentObservation * observation;              //@synthesize observation=_observation - In the implementation block
@property (assign,nonatomic) SCD_Struct_PI6 extent;                                           //@synthesize extent=_extent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<NURenderStatistics> statistics; 
-(void)setObservation:(VNImageHomographicAlignmentObservation *)arg1 ;
-(SCD_Struct_PI6)extent;
-(VNImageHomographicAlignmentObservation *)observation;
-(void)setExtent:(SCD_Struct_PI6)arg1 ;
@end

