/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>
#import <libobjc.A.dylib/PLAssetsdMigrationServiceProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface PLAssetsdMigrationService : PLAbstractLibraryServicesManagerService <PLAssetsdMigrationServiceProtocol> {

	NSObject*<OS_dispatch_queue> _backgroundQueue;
	NSObject*<OS_dispatch_queue> _dataMigratordQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithLibraryServicesManager:(id)arg1 ;
-(void)cleanupModelForDataMigrationForRestoreType:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)dataMigrationWillFinishWithReply:(/*^block*/id)arg1 ;
-(void)moveiPhotoLibraryMediaWithReply:(/*^block*/id)arg1 ;
@end

