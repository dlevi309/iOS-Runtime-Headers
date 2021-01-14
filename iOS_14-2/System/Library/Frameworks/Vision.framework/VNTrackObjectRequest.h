/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNTrackingRequest.h>

@interface VNTrackObjectRequest : VNTrackingRequest {

	CGSize _trackingFrameSizeInPixels;

}

@property (assign,nonatomic) CGSize trackingFrameSizeInPixels;              //@synthesize trackingFrameSizeInPixels=_trackingFrameSizeInPixels - In the implementation block
+(id)defaultProcessingDeviceForRevision:(unsigned long long)arg1 ;
+(const SCD_Struct_VN2*)revisionAvailability;
+(void)recordDefaultOptionsInDictionary:(id)arg1 ;
+(id)trackerTypeForRequestRevision:(unsigned long long)arg1 error:(id*)arg2 ;
+(unsigned)frameCVPixelBufferFormatForRequestRevision:(unsigned long long)arg1 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2 ;
-(void)setTrackingFrameSizeInPixels:(CGSize)arg1 ;
-(CGSize)trackingFrameSizeInPixels;
-(id)_trackingLevelOptionFromTrackingLevelEnum;
-(void)setTrackingLevel:(unsigned long long)arg1 ;
-(id)initWithDetectedObjectObservation:(id)arg1 ;
-(id)initWithDetectedObjectObservation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

