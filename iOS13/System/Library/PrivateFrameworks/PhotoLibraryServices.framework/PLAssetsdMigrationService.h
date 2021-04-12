/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>
#import <libobjc.A.dylib/PLAssetsdMigrationServiceProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface PLAssetsdMigrationService : PLAbstractLibraryServicesManagerService <PLAssetsdMigrationServiceProtocol> {

	NSObject*<OS_dispatch_queue> _backgroundQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> backgroundQueue;              //@synthesize backgroundQueue=_backgroundQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithLibraryServicesManager:(id)arg1 ;
-(void)cleanupModelForDataMigrationForRestoreType:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)dataMigrationWillFinishWithReply:(/*^block*/id)arg1 ;
-(void)moveiPhotoLibraryMediaWithReply:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)backgroundQueue;
@end

