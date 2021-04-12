/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setResult:(id)arg1 ;
-(id)newObjectIDForEntity:(id)arg1 pk:(long long)arg2 ;
-(NSSQLCore *)sqlCore;
-(id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3 ;
-(unsigned long long)requestType;
-(BOOL)isWritingRequest;
-(void)executeEpilogue;
-(BOOL)useConcurrentFetching;
-(BOOL)forConflictAnalysis;
-(NSManagedObjectContext *)context;
-(BOOL)hasHistoryTracking;
-(id)exception;
-(void)executePrologue;
-(BOOL)executeRequestCore:(id*)arg1 ;
-(NSSQLiteConnection *)connection;
-(void)setLocalError:(NSError *)arg1 ;
-(NSError *)localError;
-(void)setException:(id)arg1 ;
-(id)result;
-(int)debugLogLevel;
-(void)setQueryGenerationToken:(NSQueryGenerationToken *)arg1 ;
-(NSQueryGenerationToken *)queryGenerationToken;
-(id)createNestedObjectFaultContextForObjectWithID:(id)arg1 ;
-(id)notificationSourceObject;
-(BOOL)shouldRegisterQueryGeneration;
-(BOOL)useColoredLogging;
-(BOOL)storeIsInMemory;
-(NSPersistentStoreRequest *)persistentStoreRequest;
-(BOOL)executeRequestUsingConnection:(id)arg1 ;
-(void)setTransactionID:(NSNumber *)arg1 ;
-(void)setConnection:(NSSQLiteConnection *)arg1 ;
-(NSNumber *)transactionID;
-(id)newStatementWithSQLString:(id)arg1 ;
-(void)dealloc;
-(NSSQLRowCache *)rowCache;
@end

