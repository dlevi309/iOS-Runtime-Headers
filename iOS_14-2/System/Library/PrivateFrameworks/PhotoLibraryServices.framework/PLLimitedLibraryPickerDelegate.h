/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class PLAssetsdClient;

@interface PLLimitedLibraryPickerDelegate : NSObject {

	/*^block*/id _dismissalBlock;
	PLAssetsdClient* _assetsdClient;

}

@property (nonatomic,copy) id dismissalBlock;                              //@synthesize dismissalBlock=_dismissalBlock - In the implementation block
@property (nonatomic,retain) PLAssetsdClient * assetsdClient;              //@synthesize assetsdClient=_assetsdClient - In the implementation block
-(PLAssetsdClient *)assetsdClient;
-(void)imagePickerController:(id)arg1 didFinishPickingMultipleMediaWithInfo:(id)arg2 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)setDismissalBlock:(id)arg1 ;
-(id)dismissalBlock;
-(void)_dismissImagePickerController:(id)arg1 ;
-(void)setAssetsdClient:(PLAssetsdClient *)arg1 ;
-(void)dismissImagePickerController:(id)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
@end

