/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/


@protocol SSScreenshotAssetManagerBackend <NSObject>
@required
-(void)registerEntryWithImage:(id)arg1 options:(id)arg2 identifierHandler:(/*^block*/id)arg3;
-(void)imageForPreviouslyRegisteredIdentifier:(id)arg1 imageHandler:(/*^block*/id)arg2;
-(void)updateImage:(id)arg1 withModificationData:(id)arg2 forEntryWithIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)saveImageToTemporaryLocation:(id)arg1 withName:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)removeEntryWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

