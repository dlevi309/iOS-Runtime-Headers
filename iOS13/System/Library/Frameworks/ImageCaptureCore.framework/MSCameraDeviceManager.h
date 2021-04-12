/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
*/

#import <ImageCaptureCore/ImageCaptureCore-Structs.h>
#import <ImageCaptureCore/ICDeviceManager.h>

@interface MSCameraDeviceManager : ICDeviceManager
-(void)notifyAddedItems:(id)arg1 ;
-(void)notifyContentCatalogPercentCompleted:(id)arg1 ;
-(void)startDeviceWithHandle:(id)arg1 ;
-(id)deviceManagerConnection;
-(void)getFileThumbnailImp:(id)arg1 ;
-(void)getFileMetadataImp:(id)arg1 ;
-(void)getFileDataImp:(id)arg1 ;
-(void)syncClockImp:(id)arg1 ;
-(void)deleteFileImp:(id)arg1 ;
-(void)downloadFileImp:(id)arg1 ;
-(void)ejectImp:(id)arg1 ;
-(long long)checkFile:(id)arg1 andDevice:(id)arg2 ;
-(void)executeCompletionBlockWithErrorCode:(long long)arg1 info:(id)arg2 file:(id)arg3 completionDict:(id)arg4 completionBlk:(/*^block*/id)arg5 ;
-(CGImageRef)removeLetterboxFromThumbnail:(CGImageRef)arg1 fullSize:(CGSize)arg2 ;
-(CGImageRef)removeLetterboxFromThumbnail:(CGImageRef)arg1 ;
-(void)updateCameraFolder:(id)arg1 withInfo:(id)arg2 ;
-(void)updateCameraFile:(id)arg1 withInfo:(id)arg2 ;
-(CGSize)cropThumbSize:(CGSize)arg1 fullSize:(CGSize)arg2 finalSize:(CGSize)arg3 ;
@end

