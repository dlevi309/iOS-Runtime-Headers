/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)openPhotoLibraryDatabase:(id*)arg1 ;
-(id)initWithLibraryServicesManager:(id)arg1 reportInProgressUpgrades:(BOOL)arg2 ;
-(BOOL)createPhotoLibraryDatabase:(id*)arg1 ;
-(BOOL)lightweightPermissionCheckWithError:(id*)arg1 ;
-(BOOL)lightweightPermissionCheckWithPath:(id)arg1 isDir:(BOOL)arg2 error:(id*)arg3 ;
@end

