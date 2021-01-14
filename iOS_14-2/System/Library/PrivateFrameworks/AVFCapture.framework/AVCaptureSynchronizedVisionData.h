/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVCaptureSynchronizedData.h>

@class AVCaptureSynchronizedVisionDataInternal;

@interface AVCaptureSynchronizedVisionData : AVCaptureSynchronizedData {

	AVCaptureSynchronizedVisionDataInternal* _internal;

}

@property (readonly) CVBufferRef visionDataPixelBuffer; 
@property (readonly) BOOL visionDataWasDropped; 
@property (readonly) long long droppedReason; 
-(id)_initWithVisionDataPixelBuffer:(CVBufferRef)arg1 timestamp:(SCD_Struct_AV0)arg2 visionDataWasDropped:(BOOL)arg3 droppedReason:(long long)arg4 ;
-(CVBufferRef)visionDataPixelBuffer;
-(long long)droppedReason;
-(BOOL)visionDataWasDropped;
-(void)dealloc;
@end

