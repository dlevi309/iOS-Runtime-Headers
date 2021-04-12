/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXRunNode.h>
#import <libobjc.A.dylib/PUImageDataNode.h>
#import <libobjc.A.dylib/PUVideoAssetNode.h>
#import <libobjc.A.dylib/PXRunNodeDelegate.h>

@class PUEditableMediaProviderImageDataNode, PUEditableMediaProviderVideoAssetNode, PXRunNode, NSData, AVAsset, PUEditableMediaProviderAdjustmentDataNode, NSArray, NSString;

@interface PUPhotoEditBaseMediaNode : PXRunNode <PUImageDataNode, PUVideoAssetNode, PXRunNodeDelegate> {

	PUEditableMediaProviderImageDataNode* _imageDataNode;
	PUEditableMediaProviderVideoAssetNode* _videoAssetNode;
	PXRunNode* _gatheringNode;
	NSData* _imageData;
	AVAsset* _videoAsset;
	PUEditableMediaProviderAdjustmentDataNode* _adjustmentNode;

}

@property (nonatomic,readonly) PUEditableMediaProviderAdjustmentDataNode * adjustmentNode;              //@synthesize adjustmentNode=_adjustmentNode - In the implementation block
@property (nonatomic,readonly) NSData * imageData;                                                      //@synthesize imageData=_imageData - In the implementation block
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
@property (nonatomic,readonly) AVAsset * videoAsset;                                                    //@synthesize videoAsset=_videoAsset - In the implementation block
-(void)run;
-(NSData *)imageData;
-(void)runNode:(id)arg1 didCompleteWithError:(id)arg2 ;
-(id)initWithAdjustmentNode:(id)arg1 ;
-(PUEditableMediaProviderAdjustmentDataNode *)adjustmentNode;
-(AVAsset *)videoAsset;
@end

