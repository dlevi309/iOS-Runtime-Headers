/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/

#import <libobjc.A.dylib/SSScreenshotAssetManagerBackend.h>

@class PHPhotoLibrary, NSString;

@interface SSScreenshotAssetManagerPhotoLibraryBackend : NSObject <SSScreenshotAssetManagerBackend> {

	PHPhotoLibrary* _photoLibrary;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)photoLibrary;
-(void)_registerEntryWithImage:(id)arg1 options:(id)arg2 retry:(BOOL)arg3 identifierHandler:(/*^block*/id)arg4 ;
-(id)_ARKitImageDataFromImage:(id)arg1 ;
-(void)registerEntryWithImage:(id)arg1 options:(id)arg2 identifierHandler:(/*^block*/id)arg3 ;
-(void)imageForPreviouslyRegisteredIdentifier:(id)arg1 imageHandler:(/*^block*/id)arg2 ;
-(void)updateImage:(id)arg1 withModificationData:(id)arg2 forEntryWithIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)saveImageToTemporaryLocation:(id)arg1 withName:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeEntryWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

