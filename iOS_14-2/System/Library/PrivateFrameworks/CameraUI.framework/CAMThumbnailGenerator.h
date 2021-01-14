/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol OS_dispatch_queue;
#import <CameraUI/CameraUI-Structs.h>
@class NSObject, NSMapTable;

@interface CAMThumbnailGenerator : NSObject {

	NSObject*<OS_dispatch_queue> __generationQueue;
	OpaqueVTPixelTransferSessionRef __generationQueuePixelTransferSession;
	NSMapTable* __generationQueueRotationSessionsMapTable;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _generationQueue;                                     //@synthesize _generationQueue=__generationQueue - In the implementation block
@property (nonatomic,readonly) OpaqueVTPixelTransferSessionRef _generationQueuePixelTransferSession;              //@synthesize _generationQueuePixelTransferSession=__generationQueuePixelTransferSession - In the implementation block
@property (nonatomic,readonly) NSMapTable * _generationQueueRotationSessionsMapTable;                             //@synthesize _generationQueueRotationSessionsMapTable=__generationQueueRotationSessionsMapTable - In the implementation block
-(id)init;
-(CGImageRef)newBGRAImageInOrientation:(long long)arg1 usingPixelBuffer:(CVBufferRef)arg2 ;
-(CGImageRef)newBGRAImageOfFormat:(long long)arg1 inOrientation:(long long)arg2 usingSurface:(void*)arg3 ;
-(CVBufferRef)_newRotatedPixelBuffer:(CVBufferRef)arg1 withOrientation:(long long)arg2 ;
-(NSObject*<OS_dispatch_queue>)_generationQueue;
-(OpaqueVTPixelTransferSessionRef)_generationQueuePixelTransferSession;
-(id)newJPEGDataOfFormat:(long long)arg1 inOrientation:(long long)arg2 usingSurface:(void*)arg3 withMetadata:(id)arg4 ;
-(CVBufferRef)_newThumbnailOfFormat:(long long)arg1 inOrientation:(long long)arg2 withPixelFormat:(unsigned)arg3 usingPixelBuffer:(CVBufferRef)arg4 ;
-(id)newJPEGDataInOrientation:(long long)arg1 usingPixelBuffer:(CVBufferRef)arg2 ;
-(CGImageRef)newBGRAImageInOrientation:(long long)arg1 usingSurface:(void*)arg2 ;
-(CVBufferRef)_newThumbnailOfSize:(CGSize)arg1 inOrientation:(long long)arg2 withPixelFormat:(unsigned)arg3 usingPixelBuffer:(CVBufferRef)arg4 ;
-(NSMapTable *)_generationQueueRotationSessionsMapTable;
-(CGImageRef)newBGRAImageOfFormat:(long long)arg1 inOrientation:(long long)arg2 usingPixelBuffer:(CVBufferRef)arg3 ;
-(id)newJPEGDataInOrientation:(long long)arg1 usingSurface:(void*)arg2 withMetadata:(id)arg3 ;
-(id)_neededColorspacePropertiesFromMetadata:(id)arg1 ;
-(void)dealloc;
@end

