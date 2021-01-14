/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXRunNode.h>
#import <libobjc.A.dylib/PUReviewAssetNode.h>

@protocol PUReviewImageURLNode, PUImageInfoNode, PUImageDataRenderNode, PUReviewVideoURLNode, PUVideoAssetNode, PUVideoURLExportNode, PUAdjustmentURLNode;
@class PUReviewAsset, NSArray, NSString;

@interface PUReviewCreateAssetNode : PXRunNode <PUReviewAssetNode> {

	PUReviewAsset* _reviewAsset;
	PUReviewAsset* _inputAsset;
	id<PUReviewImageURLNode> _imageInfoNode;
	id<PUImageInfoNode> _renderImageInfoNode;
	id<PUImageDataRenderNode> _renderImageDataNode;
	id<PUReviewVideoURLNode> _videoURLNode;
	id<PUVideoAssetNode> _videoAssetNode;
	id<PUVideoURLExportNode> _renderVideoURLNode;
	id<PUVideoAssetNode> _renderVideoAssetNode;
	id<PUAdjustmentURLNode> _adjustmentURLNode;

}

@property (nonatomic,readonly) PUReviewAsset * inputAsset;                                 //@synthesize inputAsset=_inputAsset - In the implementation block
@property (nonatomic,readonly) id<PUReviewImageURLNode> imageInfoNode;                     //@synthesize imageInfoNode=_imageInfoNode - In the implementation block
@property (nonatomic,readonly) id<PUImageInfoNode> renderImageInfoNode;                    //@synthesize renderImageInfoNode=_renderImageInfoNode - In the implementation block
@property (nonatomic,readonly) id<PUImageDataRenderNode> renderImageDataNode;              //@synthesize renderImageDataNode=_renderImageDataNode - In the implementation block
@property (nonatomic,readonly) id<PUReviewVideoURLNode> videoURLNode;                      //@synthesize videoURLNode=_videoURLNode - In the implementation block
@property (nonatomic,readonly) id<PUVideoAssetNode> videoAssetNode;                        //@synthesize videoAssetNode=_videoAssetNode - In the implementation block
@property (nonatomic,readonly) id<PUVideoURLExportNode> renderVideoURLNode;                //@synthesize renderVideoURLNode=_renderVideoURLNode - In the implementation block
@property (nonatomic,readonly) id<PUVideoAssetNode> renderVideoAssetNode;                  //@synthesize renderVideoAssetNode=_renderVideoAssetNode - In the implementation block
@property (nonatomic,readonly) id<PUAdjustmentURLNode> adjustmentURLNode;                  //@synthesize adjustmentURLNode=_adjustmentURLNode - In the implementation block
@property (nonatomic,readonly) PUReviewAsset * reviewAsset;                                //@synthesize reviewAsset=_reviewAsset - In the implementation block
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
-(PUReviewAsset *)inputAsset;
-(id)initWithInputAsset:(id)arg1 imageInfoNode:(id)arg2 renderImageInfoNode:(id)arg3 renderImageDataNode:(id)arg4 videoURLNode:(id)arg5 videoAssetNode:(id)arg6 renderVideoURLNode:(id)arg7 renderVideoAssetNode:(id)arg8 adjustmentURLNode:(id)arg9 ;
-(id<PUReviewImageURLNode>)imageInfoNode;
-(id<PUImageInfoNode>)renderImageInfoNode;
-(id<PUVideoAssetNode>)videoAssetNode;
-(id<PUImageDataRenderNode>)renderImageDataNode;
-(id<PUVideoURLExportNode>)renderVideoURLNode;
-(id<PUVideoAssetNode>)renderVideoAssetNode;
-(id<PUAdjustmentURLNode>)adjustmentURLNode;
-(PUReviewAsset *)reviewAsset;
-(id<PUReviewVideoURLNode>)videoURLNode;
@end

