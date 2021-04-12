/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPersistentStoreRequest.h>

@class NSPersistentHistoryToken, NSArray, NSNumber, NSFetchRequest;

@interface NSPersistentHistoryChangeRequest : NSPersistentStoreRequest {

	NSPersistentHistoryToken* _token;
	long long _resultType;
	NSArray* _transactionIDs;
	NSNumber* _transactionNumber;
	struct {
		unsigned _useQueryGenerationToken : 1;
		unsigned _deleteHistoryRequest : 1;
		unsigned _fetchTransactionForToken : 1;
		unsigned _reservedPersistentHistoryChangeRequestDescription : 29;
	}  _persistentHistoryChangeRequestDescriptionFlags;
	id* _additionalPrivateIvars;

}

@property (assign) long long resultType;                                 //@synthesize resultType=_resultType - In the implementation block
@property (readonly) NSPersistentHistoryToken * token;                   //@synthesize token=_token - In the implementation block
@property (nonatomic,retain) NSFetchRequest * fetchRequest; 
+(id)fetchHistoryAfterDate:(id)arg1 ;
+(id)decodeFromXPCArchive:(id)arg1 withContext:(id)arg2 ;
+(id)deleteHistoryBeforeToken:(id)arg1 ;
+(id)fetchHistoryAfterToken:(id)arg1 ;
+(id)fetchHistoryTransactionForToken:(id)arg1 ;
+(id)deleteHistoryBeforeDate:(id)arg1 ;
+(id)fetchHistoryAfterTransaction:(id)arg1 ;
+(id)fetchHistoryWithFetchRequest:(id)arg1 ;
+(id)deleteHistoryBeforeTransaction:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(NSPersistentHistoryToken *)token;
-(id)date;
-(id)initWithDate:(id)arg1 ;
-(id)predicate;
-(id)sortDescriptors;
-(long long)resultType;
-(NSFetchRequest *)fetchRequest;
-(void)setResultType:(long long)arg1 ;
-(unsigned long long)fetchOffset;
-(unsigned long long)fetchLimit;
-(id)propertiesToFetch;
-(void)setFetchLimit:(unsigned long long)arg1 ;
-(id)initWithFetchRequest:(id)arg1 ;
-(void)setFetchBatchSize:(unsigned long long)arg1 ;
-(id)initWithToken:(id)arg1 ;
-(unsigned long long)requestType;
-(BOOL)isDelete;
-(unsigned long long)fetchBatchSize;
-(id)propertiesToGroupBy;
-(id)encodeForXPC;
-(BOOL)includesSubentities;
-(BOOL)isFetchTransactionForToken;
-(id)transactionNumber;
-(id)initWithTransactionToken:(id)arg1 ;
-(id)initWithDate:(id)arg1 delete:(BOOL)arg2 ;
-(id)initWithToken:(id)arg1 delete:(BOOL)arg2 ;
-(id)propertiesToFetchForEntity:(id)arg1 includeTransactionStrings:(BOOL)arg2 ;
-(id)initWithTransactionIDs:(id)arg1 ;
-(id)initWithTransactionID:(id)arg1 delete:(BOOL)arg2 transactionOnly:(BOOL)arg3 ;
-(BOOL)includesPropertyValues;
-(id)propertiesToFetchForEntity:(id)arg1 ;
-(id)entityNameToFetch;
-(BOOL)useQueryGenerationToken;
-(void)setUseQueryGenerationToken:(BOOL)arg1 ;
-(void)setFetchRequest:(NSFetchRequest *)arg1 ;
-(BOOL)returnsDistinctResults;
-(id)predicateForStoreIdentifier:(id)arg1 ;
@end

