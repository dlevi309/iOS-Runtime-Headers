/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (readonly) id<NURenderStatistics> statistics; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SCD_Struct_PI6)extent;
-(void)setObservation:(VNImageHomographicAlignmentObservation *)arg1 ;
-(void)setExtent:(SCD_Struct_PI6)arg1 ;
-(VNImageHomographicAlignmentObservation *)observation;
@end

