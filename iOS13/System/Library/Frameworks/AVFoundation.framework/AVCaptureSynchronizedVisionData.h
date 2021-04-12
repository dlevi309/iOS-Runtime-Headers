/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureSynchronizedData.h>

@class AVCaptureSynchronizedVisionDataInternal;

@interface AVCaptureSynchronizedVisionData : AVCaptureSynchronizedData {

	AVCaptureSynchronizedVisionDataInternal* _internal;

}

@property (readonly) CVBufferRef visionDataPixelBuffer; 
@property (readonly) BOOL visionDataWasDropped; 
@property (readonly) long long droppedReason; 
-(void)dealloc;
-(long long)droppedReason;
-(BOOL)visionDataWasDropped;
-(CVBufferRef)visionDataPixelBuffer;
-(id)_initWithVisionDataPixelBuffer:(CVBufferRef)arg1 timestamp:(SCD_Struct_AV7)arg2 visionDataWasDropped:(BOOL)arg3 droppedReason:(long long)arg4 ;
@end

