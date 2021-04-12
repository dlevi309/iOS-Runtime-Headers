/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)_generationQueue;
-(id)newJPEGDataOfFormat:(long long)arg1 inOrientation:(long long)arg2 usingSurface:(void*)arg3 withMetadata:(id)arg4 ;
-(id)newJPEGDataInOrientation:(long long)arg1 usingSurface:(void*)arg2 withMetadata:(id)arg3 ;
-(id)newJPEGDataInOrientation:(long long)arg1 usingPixelBuffer:(CVBufferRef)arg2 ;
-(CGImageRef)newBGRAImageOfFormat:(long long)arg1 inOrientation:(long long)arg2 usingSurface:(void*)arg3 ;
-(CGImageRef)newBGRAImageOfFormat:(long long)arg1 inOrientation:(long long)arg2 usingPixelBuffer:(CVBufferRef)arg3 ;
-(OpaqueVTPixelTransferSessionRef)_generationQueuePixelTransferSession;
-(NSMapTable *)_generationQueueRotationSessionsMapTable;
-(CVBufferRef)_newThumbnailOfSize:(CGSize)arg1 inOrientation:(long long)arg2 withPixelFormat:(unsigned)arg3 usingPixelBuffer:(CVBufferRef)arg4 ;
-(CVBufferRef)_newThumbnailOfFormat:(long long)arg1 inOrientation:(long long)arg2 withPixelFormat:(unsigned)arg3 usingPixelBuffer:(CVBufferRef)arg4 ;
-(id)_neededColorspacePropertiesFromMetadata:(id)arg1 ;
-(CVBufferRef)_newRotatedPixelBuffer:(CVBufferRef)arg1 withOrientation:(long long)arg2 ;
-(CGImageRef)newBGRAImageInOrientation:(long long)arg1 usingSurface:(void*)arg2 ;
-(CGImageRef)newBGRAImageInOrientation:(long long)arg1 usingPixelBuffer:(CVBufferRef)arg2 ;
@end

