/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/


@class NSManagedObjectModel, NSManagedObjectContext, NSURL, NSString;

@interface TDPersistentDocument : NSObject {

	NSManagedObjectModel* _managedObjectModel;
	NSManagedObjectContext* _managedObjectContext;
	NSURL* _fileURL;
	NSString* _fileType;
	NSURL* _temporaryFileURL;

}

@property (nonatomic,copy) NSURL * temporaryFileURL;              //@synthesize temporaryFileURL=_temporaryFileURL - In the implementation block
@property (nonatomic,copy) NSURL * fileURL;                       //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy) NSString * fileType;                   //@synthesize fileType=_fileType - In the implementation block
+(id)_fileModificationDateForURL:(id)arg1 ;
-(id)_persistentStoreCoordinator;
-(void)setFileURL:(NSURL *)arg1 ;
-(id)managedObjectContext;
-(BOOL)configurePersistentStoreCoordinatorForURL:(id)arg1 ofType:(id)arg2 modelConfiguration:(id)arg3 storeOptions:(id)arg4 error:(id*)arg5 ;
-(id)undoManager;
-(void)close;
-(void)setFileType:(NSString *)arg1 ;
-(id)persistentStoreTypeForFileType:(id)arg1 ;
-(void)setManagedObjectContext:(id)arg1 ;
-(NSURL *)fileURL;
-(id)managedObjectModel;
-(id)displayName;
-(void)dealloc;
-(NSString *)fileType;
-(id)initWithType:(id)arg1 error:(id*)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(void)saveDocument:(id)arg1 ;
-(NSURL *)temporaryFileURL;
-(void)setTemporaryFileURL:(NSURL *)arg1 ;
@end

