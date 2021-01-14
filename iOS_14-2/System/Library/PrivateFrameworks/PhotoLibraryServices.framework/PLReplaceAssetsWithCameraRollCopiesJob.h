/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)assets;
-(PLManagedObjectContext *)managedObjectContext;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(void)run;
-(void)runDaemonSide;
-(PLPhotoLibrary *)photoLibrary;
-(void)setPhotoLibrary:(PLPhotoLibrary *)arg1 ;
-(id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2 ;
-(void)setAssets:(NSArray *)arg1 ;
-(void)setAlbum:(PLManagedAlbum *)arg1 ;
-(PLManagedAlbum *)album;
-(id)_cameraRollAssetDerivedFromAsset:(id)arg1 ;
-(void)encodeToXPCObject:(id)arg1 ;
-(long long)daemonOperation;
-(void)dealloc;
-(NSPersistentStoreCoordinator *)coordinator;
@end

