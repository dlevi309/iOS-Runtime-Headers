/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSSQLCore, NSPersistentStoreRequest, NSSQLiteConnection, NSManagedObjectContext, NSError, NSException, NSQueryGenerationToken, NSNumber, NSSQLRowCache;

@interface NSSQLStoreRequestContext : NSObject {

	NSSQLCore* _sqlCore;
	NSPersistentStoreRequest* _persistentStoreRequest;
	NSSQLiteConnection* _connection;
	NSManagedObjectContext* _context;
	NSError* _error;
	NSException* _exception;
	id _result;
	NSQueryGenerationToken* _queryGeneration;
	NSNumber* _transactionID;
	BOOL _useColoredLogging;
	BOOL _useConcurrentFetching;
	BOOL _hasHistoryTracking;
	BOOL _storeIsInMemory;

}

@property (nonatomic,readonly) NSSQLCore * sqlCore; 
@property (nonatomic,retain) NSSQLiteConnection * connection;                                  //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) unsigned long long requestType; 
@property (nonatomic,readonly) BOOL storeIsInMemory;                                           //@synthesize storeIsInMemory=_storeIsInMemory - In the implementation block
@property (nonatomic,readonly) NSNumber * transactionID;                                       //@synthesize transactionID=_transactionID - In the implementation block
@property (nonatomic,readonly) NSPersistentStoreRequest * persistentStoreRequest;              //@synthesize persistentStoreRequest=_persistentStoreRequest - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * context;                               //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSError * localError;                                             //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) int debugLogLevel; 
@property (nonatomic,readonly) BOOL useColoredLogging;                                         //@synthesize useColoredLogging=_useColoredLogging - In the implementation block
@property (nonatomic,readonly) BOOL useConcurrentFetching;                                     //@synthesize useConcurrentFetching=_useConcurrentFetching - In the implementation block
@property (nonatomic,retain) id result;                                                        //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) id exception;                                                     //@synthesize exception=_exception - In the implementation block
@property (nonatomic,readonly) NSSQLRowCache * rowCache; 
@property (nonatomic,readonly) BOOL isWritingRequest; 
@property (nonatomic,retain) NSQueryGenerationToken * queryGenerationToken; 
@property (nonatomic,readonly) BOOL shouldRegisterQueryGeneration; 
-(void)dealloc;
-(id)result;
-(NSManagedObjectContext *)context;
-(NSSQLiteConnection *)connection;
-(void)setResult:(id)arg1 ;
-(void)setConnection:(NSSQLiteConnection *)arg1 ;
-(unsigned long long)requestType;
-(NSNumber *)transactionID;
-(NSSQLCore *)sqlCore;
-(id)newObjectIDForEntity:(id)arg1 pk:(long long)arg2 ;
-(id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3 ;
-(void)setLocalError:(NSError *)arg1 ;
-(id)exception;
-(NSError *)localError;
-(BOOL)isWritingRequest;
-(BOOL)executeRequestCore:(id*)arg1 ;
-(NSPersistentStoreRequest *)persistentStoreRequest;
-(void)setException:(id)arg1 ;
-(void)executePrologue;
-(BOOL)useConcurrentFetching;
-(BOOL)hasHistoryTracking;
-(void)setQueryGenerationToken:(NSQueryGenerationToken *)arg1 ;
-(id)newStatementWithSQLString:(id)arg1 ;
-(NSQueryGenerationToken *)queryGenerationToken;
-(BOOL)forConflictAnalysis;
-(id)createNestedObjectFaultContextForObjectWithID:(id)arg1 ;
-(id)notificationSourceObject;
-(NSSQLRowCache *)rowCache;
-(int)debugLogLevel;
-(void)setTransactionID:(NSNumber *)arg1 ;
-(BOOL)executeRequestUsingConnection:(id)arg1 ;
-(void)executeEpilogue;
-(BOOL)shouldRegisterQueryGeneration;
-(BOOL)useColoredLogging;
-(BOOL)storeIsInMemory;
@end

