/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>
#import <libobjc.A.dylib/PLAssetsdResourceWriteOnlyServiceProtocol.h>

@class PLAssetsdConnectionAuthorization, NSString;

@interface PLAssetsdResourceWriteOnlyService : PLAbstractLibraryServicesManagerService <PLAssetsdResourceWriteOnlyServiceProtocol> {

	PLAssetsdConnectionAuthorization* _connectionAuthorization;

}

@property (nonatomic,readonly) PLAssetsdConnectionAuthorization * connectionAuthorization;              //@synthesize connectionAuthorization=_connectionAuthorization - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)saveAssetWithDataAndPorts:(id)arg1 imageSurface:(id)arg2 previewImageSurface:(id)arg3 reply:(/*^block*/id)arg4 ;
-(PLAssetsdConnectionAuthorization *)connectionAuthorization;
-(void)saveAssetWithDataAndPorts:(id)arg1 clientConnection:(id)arg2 imageSurface:(id)arg3 previewImageSurface:(id)arg4 reply:(/*^block*/id)arg5 ;
-(id)initWithLibraryServicesManager:(id)arg1 connectionAuthorization:(id)arg2 ;
@end

