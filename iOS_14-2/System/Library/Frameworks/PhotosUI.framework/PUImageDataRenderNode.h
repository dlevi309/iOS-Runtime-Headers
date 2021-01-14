/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUICore/PXRunNode.h>
#import <libobjc.A.dylib/PUImageDataRenderNode.h>

@protocol PUImageDataRenderNode <PUImageDataNode>
@property (nonatomic,readonly) CGSize baseImageSize; 
@property (nonatomic,readonly) CGSize renderedImageSize; 
@required
-(CGSize)baseImageSize;
-(CGSize)renderedImageSize;

@end


@protocol PUImageInfoNode, PUVideoURLNode;
@class NSData, PICompositionController, NSString, NSArray;

@interface PUImageDataRenderNode : PXRunNode <PUImageDataRenderNode> {

	NSData* _imageData;
	id<PUImageInfoNode> _imageDataNode;
	id<PUVideoURLNode> _videoURLNode;
	PICompositionController* _compositionController;
	double _jpegCompression;
	NSString* _livePhotoPairingIdentifier;
	CGSize _baseImageSize;
	CGSize _renderedImageSize;

}

@property (nonatomic,readonly) id<PUImageInfoNode> imageDataNode;                                 //@synthesize imageDataNode=_imageDataNode - In the implementation block
@property (nonatomic,readonly) id<PUVideoURLNode> videoURLNode;                                   //@synthesize videoURLNode=_videoURLNode - In the implementation block
@property (nonatomic,copy,readonly) PICompositionController * compositionController;              //@synthesize compositionController=_compositionController - In the implementation block
@property (nonatomic,readonly) double jpegCompression;                                            //@synthesize jpegCompression=_jpegCompression - In the implementation block
@property (nonatomic,copy,readonly) NSString * livePhotoPairingIdentifier;                        //@synthesize livePhotoPairingIdentifier=_livePhotoPairingIdentifier - In the implementation block
@property (nonatomic,readonly) CGSize baseImageSize;                                              //@synthesize baseImageSize=_baseImageSize - In the implementation block
@property (nonatomic,readonly) CGSize renderedImageSize;                                          //@synthesize renderedImageSize=_renderedImageSize - In the implementation block
@property (nonatomic,readonly) NSData * imageData;                                                //@synthesize imageData=_imageData - In the implementation block
@property (readonly) unsigned long long state; 
@property (getter=isWaiting,readonly) BOOL waiting; 
@property (getter=isRunning,readonly) BOOL running; 
@property (getter=isComplete,readonly) BOOL complete; 
@property (getter=isCanceled,readonly) BOOL canceled; 
@property (assign,nonatomic,__weak) id<PXRunNodeDelegate> delegate; 
@property (nonatomic,copy,readonly) NSArray * dependencies; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)run;
-(CGSize)baseImageSize;
-(CGSize)renderedImageSize;
-(id)initWithImageInfoNode:(id)arg1 videoURLNode:(id)arg2 compositionController:(id)arg3 livePhotoPairingIdentifier:(id)arg4 jpegCompression:(double)arg5 ;
-(BOOL)_isInputValid;
-(id<PUVideoURLNode>)videoURLNode;
-(void)_handleRenderCompletedWithJpegData:(id)arg1 baseSize:(CGSize)arg2 editedSize:(CGSize)arg3 ;
-(id<PUImageInfoNode>)imageDataNode;
-(double)jpegCompression;
-(NSString *)livePhotoPairingIdentifier;
-(NSData *)imageData;
-(id)_editSource;
-(PICompositionController *)compositionController;
@end

