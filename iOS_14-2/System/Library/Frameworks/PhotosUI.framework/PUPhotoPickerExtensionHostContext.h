/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUPhotoPickerAbstractExtensionContext.h>
#import <libobjc.A.dylib/PUPhotoPickerHostService.h>

@protocol PUPhotoPickerHostService;
@class NSString, NSNumber, NSUUID;

@interface PUPhotoPickerExtensionHostContext : PUPhotoPickerAbstractExtensionContext <PUPhotoPickerHostService> {

	BOOL _cachedDidDisplayPhotoPickerPreview;
	NSString* _photoPickerViewControllerTitle;
	NSString* _photoPickerViewControllerPrompt;
	NSNumber* _photoPickerNavigationBarHidden;
	id<PUPhotoPickerHostService> _delegate;
	NSUUID* _requestIdentifier;
	NSNumber* _cachedDidDisplayPhotoPickerSourceType;

}

@property (nonatomic,retain) NSNumber * cachedDidDisplayPhotoPickerSourceType;              //@synthesize cachedDidDisplayPhotoPickerSourceType=_cachedDidDisplayPhotoPickerSourceType - In the implementation block
@property (assign,nonatomic) BOOL cachedDidDisplayPhotoPickerPreview;                       //@synthesize cachedDidDisplayPhotoPickerPreview=_cachedDidDisplayPhotoPickerPreview - In the implementation block
@property (nonatomic,copy) NSString * photoPickerViewControllerTitle;                       //@synthesize photoPickerViewControllerTitle=_photoPickerViewControllerTitle - In the implementation block
@property (nonatomic,copy) NSString * photoPickerViewControllerPrompt;                      //@synthesize photoPickerViewControllerPrompt=_photoPickerViewControllerPrompt - In the implementation block
@property (nonatomic,retain) NSNumber * photoPickerNavigationBarHidden;                     //@synthesize photoPickerNavigationBarHidden=_photoPickerNavigationBarHidden - In the implementation block
@property (assign,nonatomic,__weak) id<PUPhotoPickerHostService> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSUUID * requestIdentifier;                                    //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRequestIdentifier:(NSUUID *)arg1 ;
-(id)_remote;
-(NSUUID *)requestIdentifier;
-(id<PUPhotoPickerHostService>)delegate;
-(void)initiatePhotoPickerSelection;
-(void)dismissCurrentViewControllerFromPhotoPickerAnimated:(id)arg1 ;
-(void)performTraitCollectionUpdateUsingData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)invalidatePhotoPickerHostServices;
-(id)_UIImagePickerControllerInfoDictionaryFromPhotoPickerInfoDictionary:(id)arg1 ;
-(id)_createURLFromPath:(id)arg1 token:(id)arg2 ;
-(id)_resizeImage:(id)arg1 toMaximumDimension:(double)arg2 ;
-(BOOL)_isHEIFImageFormatFromData:(id)arg1 url:(id)arg2 ;
-(id)_JPEGDataFromImageData:(id)arg1 ;
-(id)_JPEGDataFromImage:(id)arg1 ;
-(id)_pathExtensionFromData:(id)arg1 url:(id)arg2 ;
-(NSString *)photoPickerViewControllerTitle;
-(NSString *)photoPickerViewControllerPrompt;
-(void)setPhotoPickerViewControllerPrompt:(NSString *)arg1 ;
-(NSNumber *)photoPickerNavigationBarHidden;
-(void)setPhotoPickerNavigationBarHidden:(NSNumber *)arg1 ;
-(NSNumber *)cachedDidDisplayPhotoPickerSourceType;
-(void)setCachedDidDisplayPhotoPickerSourceType:(NSNumber *)arg1 ;
-(BOOL)cachedDidDisplayPhotoPickerPreview;
-(void)setCachedDidDisplayPhotoPickerPreview:(BOOL)arg1 ;
-(void)didSelectMultipleMediaItemsWithInfoDictionaries:(id)arg1 ;
-(void)setDelegate:(id<PUPhotoPickerHostService>)arg1 ;
-(void)cancelPhotoPicker;
-(void)performPhotoPickerPreviewOfFirstAsset;
-(void)completeRequestReturningItems:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setPhotoPickerViewControllerTitle:(NSString *)arg1 ;
-(void)didDisplayPhotoPickerSourceType:(id)arg1 ;
-(void)didDisplayPhotoPickerPreview;
-(void)didSelectMediaWithInfoDictionary:(id)arg1 ;
@end

