/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class PLLibraryServicesManager, PLPhotoLibrary;

@interface PLAbstractLibraryServicesManagerService : NSObject {

	PLLibraryServicesManager* _libraryServicesManager;

}

@property (nonatomic,readonly) PLLibraryServicesManager * libraryServicesManager;              //@synthesize libraryServicesManager=_libraryServicesManager - In the implementation block
@property (nonatomic,readonly) PLPhotoLibrary * photoLibrary; 
-(PLLibraryServicesManager *)libraryServicesManager;
-(PLPhotoLibrary *)photoLibrary;
-(id)initWithLibraryServicesManager:(id)arg1 ;
@end

