/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUPhotoPickerAbstractExtensionContext.h>
#import <libobjc.A.dylib/PUPhotoPickerRemoteService.h>
#import <libobjc.A.dylib/PUPhotoPickerHostService.h>

@protocol OS_dispatch_queue;
@class NSObject, NSOperationQueue, NSString;

@interface PUPhotoPickerExtensionContext : PUPhotoPickerAbstractExtensionContext <PUPhotoPickerRemoteService, PUPhotoPickerHostService> {

	NSObject*<OS_dispatch_queue> _multipleMediaIsolationQueue;
	NSOperationQueue* _multipleMediaConversionConcurrentQueue;
	NSString* _temporaryDirectoryInHost;

}

@property (nonatomic,copy) NSString * temporaryDirectoryInHost;                                        //@synthesize temporaryDirectoryInHost=_temporaryDirectoryInHost - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> multipleMediaIsolationQueue; 
@property (nonatomic,readonly) NSOperationQueue * multipleMediaConversionConcurrentQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)configureImageManagerLimit;
-(id)_host;
-(void)initiatePhotoPickerSelection;
-(NSString *)temporaryDirectoryInHost;
-(void)dismissCurrentViewControllerFromPhotoPickerAnimated:(id)arg1 ;
-(void)invalidatePhotoPickerRemoteServices;
-(void)performTraitCollectionUpdateUsingData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)invalidatePhotoPickerHostServices;
-(void)requestedViewControllerOptionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)multipleMediaIsolationQueue;
-(NSOperationQueue *)multipleMediaConversionConcurrentQueue;
-(void)_createPhotoPickerInfoDictionaryFromInfoDictionary:(id)arg1 appendTo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleMutlipleMediaCompletion:(id)arg1 ;
-(void)_photoPickerInfoDictionaryFromUIImagePickerControllerInfoDictionary:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_createSandboxTokenForURL:(id)arg1 ;
-(void)_handleLivePhotoImageUrlFetch:(id)arg1 appendTo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_saveImageURLForLivePhoto:(id)arg1 fileURL:(id)arg2 appendTo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_handleLivePhotoVideoUrlFetch:(id)arg1 appendTo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_createSandboxTokenForPath:(id)arg1 ;
-(void)_saveVideoURLForLivePhoto:(id)arg1 fileURL:(id)arg2 appendTo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setTemporaryDirectoryInHost:(NSString *)arg1 ;
-(void)didSelectMultipleMediaItemsWithInfoDictionaries:(id)arg1 ;
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 ;
-(void)cancelPhotoPicker;
-(void)performPhotoPickerPreviewOfFirstAsset;
-(void)didDisplayPhotoPickerSourceType:(id)arg1 ;
-(void)didDisplayPhotoPickerPreview;
-(void)didSelectMediaWithInfoDictionary:(id)arg1 ;
@end

