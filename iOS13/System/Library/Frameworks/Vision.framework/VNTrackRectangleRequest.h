/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

