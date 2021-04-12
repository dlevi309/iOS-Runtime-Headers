/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLAssetsdLibraryManagementServiceProtocol.h>

@class PLAssetsdConnectionAuthorization, PLPhotoLibraryBundleController, NSString;

@interface PLAssetsdLibraryManagementService : NSObject <PLAssetsdLibraryManagementServiceProtocol> {

	PLAssetsdConnectionAuthorization* _connectionAuthorization;
	PLPhotoLibraryBundleController* _bundleController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConnectionAuthorization:(id)arg1 bundleController:(id)arg2 ;
-(void)setSystemPhotoLibraryURL:(id)arg1 sandboxExtension:(id)arg2 options:(unsigned short)arg3 reply:(/*^block*/id)arg4 ;
-(void)getActivePhotoLibrariesWithReply:(/*^block*/id)arg1 ;
-(void)getPhotoLibraryURLsWithReply:(/*^block*/id)arg1 ;
-(void)closeAndDeletePhotoLibraryAtURL:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_disableCloudServicesInPhotoLibraryBundle:(id)arg1 withReason:(id)arg2 ;
@end

