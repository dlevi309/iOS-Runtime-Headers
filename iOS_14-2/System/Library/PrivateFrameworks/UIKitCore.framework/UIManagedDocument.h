/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDocument.h>

@class NSManagedObjectContext, NSPersistentStoreCoordinator, NSManagedObjectModel, NSDictionary, NSString;

@interface UIManagedDocument : UIDocument {

	NSManagedObjectContext* _managedObjectContext;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	NSManagedObjectModel* _managedObjectModel;
	NSDictionary* _documentMetadata;
	struct {
		unsigned shouldWriteAdditionalContent : 1;
		unsigned _reserved : 31;
	}  _mdocFlags;
	NSDictionary* persistentStoreOptions;
	NSString* modelConfiguration;

}

@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext; 
@property (nonatomic,readonly) NSManagedObjectModel * managedObjectModel; 
@property (nonatomic,copy) NSDictionary * persistentStoreOptions; 
@property (nonatomic,copy) NSString * modelConfiguration; 
+(void)initialize;
+(BOOL)isPersistentStoreSynchronizedViaUbiquitousContentWithOptions:(id)arg1 ;
+(id)persistentStoreName;
+(id)additionalContentPathComponent;
-(NSManagedObjectContext *)managedObjectContext;
-(BOOL)configurePersistentStoreCoordinatorForURL:(id)arg1 ofType:(id)arg2 modelConfiguration:(id)arg3 storeOptions:(id)arg4 error:(id*)arg5 ;
-(void)_handleRelocatingStoreContentDirectoryFromNonSyncedURL:(id)arg1 toSyncedURL:(id)arg2 ;
-(void)_handleRelocatingStoreContentDirectoryFromSyncedURL:(id)arg1 toNonSyncedURL:(id)arg2 ;
-(BOOL)writeContents:(id)arg1 toURL:(id)arg2 forSaveOperation:(long long)arg3 originalContentsURL:(id)arg4 error:(id*)arg5 ;
-(BOOL)writeContents:(id)arg1 andAttributes:(id)arg2 safelyToURL:(id)arg3 forSaveOperation:(long long)arg4 error:(id*)arg5 ;
-(BOOL)writeAdditionalContent:(id)arg1 toURL:(id)arg2 originalContentsURL:(id)arg3 error:(id*)arg4 ;
-(void)revertToContentsOfURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSDictionary *)persistentStoreOptions;
-(id)persistentStoreTypeForFileType:(id)arg1 ;
-(NSString *)modelConfiguration;
-(id)_readMetadataFromDocumentURL:(id)arg1 ;
-(BOOL)_writeMetadataToDocumentURL:(id)arg1 ;
-(void)setModelConfiguration:(NSString *)arg1 ;
-(BOOL)readAdditionalContentFromURL:(id)arg1 error:(id*)arg2 ;
-(id)additionalContentForURL:(id)arg1 error:(id*)arg2 ;
-(void)setPersistentStoreOptions:(NSDictionary *)arg1 ;
-(id)initWithFileURL:(id)arg1 ;
-(id)contentsForType:(id)arg1 error:(id*)arg2 ;
-(NSManagedObjectModel *)managedObjectModel;
-(BOOL)readFromURL:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
@end

