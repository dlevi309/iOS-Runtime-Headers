/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLPhotoLibraryBundle.h>

@class PLLazyObject;

@interface PLClientPhotoLibraryBundle : PLPhotoLibraryBundle {

	PLLazyObject* _lazyClientSandboxExtensionCache;

}
-(void)_invalidateClientSandboxExtensionCache;
-(id)clientSandboxExtensionCache;
-(void)close;
-(id)newLibraryServicesManager;
-(void)setPhotoStreamEnabled:(BOOL)arg1 ;
-(void)setSharedAlbumEnabled:(BOOL)arg1 ;
-(void)resetClientSandboxExtensionCache;
-(id)newBoundAssetsdServicesTable;
-(id)initWithLibraryURL:(id)arg1 bundleController:(id)arg2 ;
-(id)newAssetsdClient;
-(void)setCloudPhotoLibraryEnabled:(BOOL)arg1 ;
-(void)_initClientSandboxExtensionCache;
-(id)newChangePublisher;
@end

