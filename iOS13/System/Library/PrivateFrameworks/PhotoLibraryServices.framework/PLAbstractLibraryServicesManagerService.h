/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class PLLibraryServicesManager, PLPhotoLibrary;

@interface PLAbstractLibraryServicesManagerService : NSObject {

	PLLibraryServicesManager* _libraryServicesManager;

}

@property (nonatomic,readonly) PLLibraryServicesManager * libraryServicesManager;              //@synthesize libraryServicesManager=_libraryServicesManager - In the implementation block
@property (nonatomic,readonly) PLPhotoLibrary * photoLibrary; 
-(PLPhotoLibrary *)photoLibrary;
-(PLLibraryServicesManager *)libraryServicesManager;
-(id)initWithLibraryServicesManager:(id)arg1 ;
@end

