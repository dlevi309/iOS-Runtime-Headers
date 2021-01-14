/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXRunNode.h>

@class PUEditableMediaProviderAdjustmentDataNode, PUPhotoEditBaseMediaNode, PUEditableMediaProviderImageDataNode, PUEditableMediaProviderVideoAssetNode;

@interface PUPhotoEditSnapshotFinishingNode : PXRunNode {

	PUEditableMediaProviderAdjustmentDataNode* _adjustmentNode;
	PUPhotoEditBaseMediaNode* _baseMediaNode;
	PUEditableMediaProviderImageDataNode* _currentImageNode;
	PUEditableMediaProviderVideoAssetNode* _currentVideoNode;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) PUEditableMediaProviderAdjustmentDataNode * adjustmentNode;              //@synthesize adjustmentNode=_adjustmentNode - In the implementation block
@property (nonatomic,readonly) PUPhotoEditBaseMediaNode * baseMediaNode;                                //@synthesize baseMediaNode=_baseMediaNode - In the implementation block
@property (nonatomic,readonly) PUEditableMediaProviderImageDataNode * currentImageNode;                 //@synthesize currentImageNode=_currentImageNode - In the implementation block
@property (nonatomic,readonly) PUEditableMediaProviderVideoAssetNode * currentVideoNode;                //@synthesize currentVideoNode=_currentVideoNode - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;                                               //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)run;
-(id)completionHandler;
-(PUPhotoEditBaseMediaNode *)baseMediaNode;
-(PUEditableMediaProviderAdjustmentDataNode *)adjustmentNode;
-(PUEditableMediaProviderImageDataNode *)currentImageNode;
-(PUEditableMediaProviderVideoAssetNode *)currentVideoNode;
-(id)initWithAdjustmentNode:(id)arg1 baseMediaNode:(id)arg2 currentImageNode:(id)arg3 currentVideoNode:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
@end

