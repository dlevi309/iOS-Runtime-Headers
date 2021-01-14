/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSString, PLModelMigrator, NSManagedObjectContext, PLPhotoLibraryBundle, NSFetchRequest, NSOperationQueue, NSError;

@interface PLMigrationEnumerateAndSaveController : NSObject {

	BOOL _succeeded;
	NSString* _operationName;
	PLModelMigrator* _migrator;
	NSManagedObjectContext* _originalContext;
	PLPhotoLibraryBundle* _migrationBundle;
	NSFetchRequest* _originalFetchRequest;
	NSOperationQueue* _operationQueue;
	/*^block*/id _processResultsBlock;
	NSError* _firstError;

}

@property (nonatomic,retain) NSString * operationName;                              //@synthesize operationName=_operationName - In the implementation block
@property (nonatomic,retain) PLModelMigrator * migrator;                            //@synthesize migrator=_migrator - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * originalContext;              //@synthesize originalContext=_originalContext - In the implementation block
@property (nonatomic,retain) PLPhotoLibraryBundle * migrationBundle;                //@synthesize migrationBundle=_migrationBundle - In the implementation block
@property (nonatomic,retain) NSFetchRequest * originalFetchRequest;                 //@synthesize originalFetchRequest=_originalFetchRequest - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                     //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,copy) id processResultsBlock;                                  //@synthesize processResultsBlock=_processResultsBlock - In the implementation block
@property (assign,nonatomic) BOOL succeeded;                                        //@synthesize succeeded=_succeeded - In the implementation block
@property (nonatomic,retain) NSError * firstError;                                  //@synthesize firstError=_firstError - In the implementation block
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(BOOL)succeeded;
-(void)setMigrator:(PLModelMigrator *)arg1 ;
-(PLModelMigrator *)migrator;
-(BOOL)processObjectsWithError:(id*)arg1 ;
-(id)initWithName:(id)arg1 fetchRequest:(id)arg2 context:(id)arg3 modelMigrator:(id)arg4 concurrent:(BOOL)arg5 processResultBlock:(/*^block*/id)arg6 ;
-(NSError *)firstError;
-(void)_runOperationWithObjectIDs:(id)arg1 ;
-(NSString *)operationName;
-(void)setOperationName:(NSString *)arg1 ;
-(NSManagedObjectContext *)originalContext;
-(void)setOriginalContext:(NSManagedObjectContext *)arg1 ;
-(PLPhotoLibraryBundle *)migrationBundle;
-(void)setMigrationBundle:(PLPhotoLibraryBundle *)arg1 ;
-(NSFetchRequest *)originalFetchRequest;
-(void)setOriginalFetchRequest:(NSFetchRequest *)arg1 ;
-(id)processResultsBlock;
-(void)setProcessResultsBlock:(id)arg1 ;
-(void)setFirstError:(NSError *)arg1 ;
-(void)setSucceeded:(BOOL)arg1 ;
@end

