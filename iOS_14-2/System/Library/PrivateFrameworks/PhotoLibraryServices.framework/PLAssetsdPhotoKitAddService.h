/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>
#import <libobjc.A.dylib/PLPerformChangesRequestService.h>
#import <libobjc.A.dylib/PLAssetsdPhotoKitAddServiceProtocol.h>

@class PLAssetsdConnectionAuthorization, NSPersistentStoreCoordinator, NSString;

@interface PLAssetsdPhotoKitAddService : PLAbstractLibraryServicesManagerService <PLPerformChangesRequestService, PLAssetsdPhotoKitAddServiceProtocol> {

	PLAssetsdConnectionAuthorization* _connectionAuthorization;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)persistentStoreCoordinator;
-(id)clientDescription;
-(void)applyChangesRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)commitRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithLibraryServicesManager:(id)arg1 connectionAuthorization:(id)arg2 ;
-(BOOL)validatePhotosAccessScopeForChangesRequest:(id)arg1 ;
@end

