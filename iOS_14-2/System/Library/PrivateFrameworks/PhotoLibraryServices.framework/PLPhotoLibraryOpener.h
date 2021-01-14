/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class PLLibraryServicesManager;

@interface PLPhotoLibraryOpener : NSObject {

	BOOL _reportInProgressUpgrades;
	PLLibraryServicesManager* _libraryServicesManager;

}

@property (readonly) PLLibraryServicesManager * libraryServicesManager;              //@synthesize libraryServicesManager=_libraryServicesManager - In the implementation block
+(BOOL)canAutomaticallyCreateLibrary;
-(PLLibraryServicesManager *)libraryServicesManager;
-(BOOL)lightweightPermissionCheckWithError:(id*)arg1 ;
-(BOOL)openPhotoLibraryDatabase:(id*)arg1 ;
-(id)initWithLibraryServicesManager:(id)arg1 reportInProgressUpgrades:(BOOL)arg2 ;
-(BOOL)lightweightPermissionCheckWithPath:(id)arg1 isDir:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)createPhotoLibraryDatabaseWithOptions:(id)arg1 error:(id*)arg2 ;
@end

