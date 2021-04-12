/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@protocol ICCameraDeviceDelegate <ICDeviceDelegate>
@optional
-(void)cameraDevice:(id)arg1 didCompleteDeleteFilesWithError:(id)arg2;
-(BOOL)cameraDevice:(id)arg1 shouldGetThumbnailOfItem:(id)arg2;
-(BOOL)cameraDevice:(id)arg1 shouldGetMetadataOfItem:(id)arg2;
-(void)cameraDevice:(id)arg1 didAddItem:(id)arg2;
-(void)cameraDevice:(id)arg1 didRemoveItem:(id)arg2;
-(void)cameraDevice:(id)arg1 didReceiveThumbnailForItem:(id)arg2;
-(void)cameraDevice:(id)arg1 didReceiveMetadataForItem:(id)arg2;

@required
-(void)deviceDidBecomeReadyWithCompleteContentCatalog:(id)arg1;
-(void)cameraDevice:(id)arg1 didAddItems:(id)arg2;
-(void)cameraDeviceDidRemoveAccessRestriction:(id)arg1;
-(void)cameraDeviceDidEnableAccessRestriction:(id)arg1;
-(void)cameraDevice:(id)arg1 didRemoveItems:(id)arg2;
-(void)cameraDevice:(id)arg1 didReceivePTPEvent:(id)arg2;
-(void)cameraDevice:(id)arg1 didReceiveThumbnail:(CGImageRef)arg2 forItem:(id)arg3 error:(id)arg4;
-(void)cameraDevice:(id)arg1 didReceiveMetadata:(id)arg2 forItem:(id)arg3 error:(id)arg4;
-(void)cameraDeviceDidChangeCapability:(id)arg1;
-(void)cameraDevice:(id)arg1 didRenameItems:(id)arg2;

@end

