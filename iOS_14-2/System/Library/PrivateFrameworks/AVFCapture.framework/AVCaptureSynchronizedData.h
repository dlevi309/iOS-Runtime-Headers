/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVCaptureSynchronizedDataInternal;

@interface AVCaptureSynchronizedData : NSObject {

	AVCaptureSynchronizedDataInternal* _synchronizedDataInternal;

}

@property (readonly) SCD_Struct_AV0 timestamp; 
+(void)initialize;
-(SCD_Struct_AV0)timestamp;
-(void)setAdjustedTimestamp:(SCD_Struct_AV0)arg1 ;
-(SCD_Struct_AV0)adjustedTimestamp;
-(BOOL)hasCorrespondingDepthData;
-(BOOL)hasCorrespondingVisionData;
-(int)constituentDeviceCaptureID;
-(id)_initWithTimestamp:(SCD_Struct_AV0)arg1 ;
-(void)dealloc;
@end

