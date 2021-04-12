/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLDaemonJob.h>

@class NSArray, PLManagedAlbum, PLPhotoLibrary, PLManagedObjectContext, NSPersistentStoreCoordinator;

@interface PLReplaceAssetsWithCameraRollCopiesJob : PLDaemonJob {

	NSArray* _assets;
	PLManagedAlbum* _album;
	PLPhotoLibrary* _photoLibrary;

}

@property (nonatomic,copy) NSArray * assets;                                               //@synthesize assets=_assets - In the implementation block
@property (nonatomic,retain) PLManagedAlbum * album;                                       //@synthesize album=_album - In the implementation block
@property (nonatomic,retain) PLPhotoLibrary * photoLibrary;                                //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,readonly) PLManagedObjectContext * managedObjectContext; 
@property (nonatomic,readonly) NSPersistentStoreCoordinator * coordinator; 
+(void)replaceAssets:(id)arg1 withCameraRollCopiesInAlbum:(id)arg2 ;
-(void)dealloc;
-(void)run;
-(PLManagedAlbum *)album;
-(PLManagedObjectContext *)managedObjectContext;
-(NSPersistentStoreCoordinator *)coordinator;
-(NSArray *)assets;
-(void)setAssets:(NSArray *)arg1 ;
-(PLPhotoLibrary *)photoLibrary;
-(void)runDaemonSide;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(void)setPhotoLibrary:(PLPhotoLibrary *)arg1 ;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2 ;
-(long long)daemonOperation;
-(id)_cameraRollAssetDerivedFromAsset:(id)arg1 ;
-(void)setAlbum:(PLManagedAlbum *)arg1 ;
@end

