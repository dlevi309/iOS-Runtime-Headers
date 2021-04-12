/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNTrackingRequest.h>

@interface VNTrackObjectRequest : VNTrackingRequest
+(id)defaultProcessingDeviceForRevision:(unsigned long long)arg1 ;
+(const SCD_Struct_VN2*)revisionAvailability;
+(void)recordDefaultOptionsInDictionary:(id)arg1 ;
+(unsigned)frameCVPixelBufferFormatForRequestRevision:(unsigned long long)arg1 ;
+(id)trackerTypeForRequestRevision:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)_trackingLevelOptionFromTrackingLevelEnum;
-(void)setTrackingLevel:(unsigned long long)arg1 ;
-(id)initWithDetectedObjectObservation:(id)arg1 ;
-(id)initWithDetectedObjectObservation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

