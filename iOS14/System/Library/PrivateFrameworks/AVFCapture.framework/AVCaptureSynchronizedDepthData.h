/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureSynchronizedData.h>

@class AVCaptureSynchronizedDepthDataInternal, AVDepthData;

@interface AVCaptureSynchronizedDepthData : AVCaptureSynchronizedData {

	AVCaptureSynchronizedDepthDataInternal* _internal;

}

@property (readonly) AVDepthData * depthData; 
@property (readonly) BOOL depthDataWasDropped; 
@property (readonly) long long droppedReason; 
+(void)initialize;
-(AVDepthData *)depthData;
-(id)_initWithDepthData:(id)arg1 timestamp:(SCD_Struct_AV0)arg2 depthDataWasDropped:(BOOL)arg3 droppedReason:(long long)arg4 ;
-(id)debugDescription;
-(id)description;
-(long long)droppedReason;
-(BOOL)depthDataWasDropped;
-(void)dealloc;
@end

