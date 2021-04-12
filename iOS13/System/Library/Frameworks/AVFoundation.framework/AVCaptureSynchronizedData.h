/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureSynchronizedDataInternal;

@interface AVCaptureSynchronizedData : NSObject {

	AVCaptureSynchronizedDataInternal* _synchronizedDataInternal;

}

@property (readonly) SCD_Struct_AV7 timestamp; 
-(void)dealloc;
-(SCD_Struct_AV7)timestamp;
-(id)_initWithTimestamp:(SCD_Struct_AV7)arg1 ;
-(SCD_Struct_AV7)adjustedTimestamp;
-(void)setAdjustedTimestamp:(SCD_Struct_AV7)arg1 ;
-(BOOL)hasCorrespondingDepthData;
-(BOOL)hasCorrespondingVisionData;
-(int)constituentDeviceCaptureID;
@end

