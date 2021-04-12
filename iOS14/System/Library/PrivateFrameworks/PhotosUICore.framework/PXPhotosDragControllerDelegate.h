/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXPhotosDragControllerDelegate <NSObject>
@required
-(id)dragControllerAssetReferenceForBeginningSession:(id)arg1;
-(id)dragController:(id)arg1 scrollViewForAssetReference:(id)arg2;
-(id)dragController:(id)arg1 draggableAssetReferenceAtLocation:(CGPoint)arg2;
-(id)dragController:(id)arg1 regionOfInterestForAssetReference:(id)arg2 image:(id*)arg3;
-(id)dragController:(id)arg1 dropTargetAssetReferenceForLocation:(CGPoint)arg2;
-(id)dragControllerViewControllerForPresentation:(id)arg1;
-(BOOL)dragController:(id)arg1 shouldSelectRearrangedAssetReferences:(id)arg2;
-(BOOL)dragController:(id)arg1 shouldResizeCancelledPreviewForAssetReference:(id)arg2;
-(void)dragController:(id)arg1 draggedAssetReferencesDidChange:(id)arg2;
-(void)dragController:(id)arg1 dropTargetAssetReferenceDidChange:(id)arg2;
-(void)dragController:(id)arg1 isDragSessionActiveDidChange:(BOOL)arg2;

@end

