/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNTrackingRequest.h>

@interface VNTrackRectangleRequest : VNTrackingRequest
+(const SCD_Struct_VN2*)revisionAvailability;
+(id)trackerTypeForRequestRevision:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)initWithRectangleObservation:(id)arg1 ;
-(id)initWithRectangleObservation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

