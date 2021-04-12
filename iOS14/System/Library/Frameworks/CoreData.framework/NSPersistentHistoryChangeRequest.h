/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
		unsigned _percentageDeleteHistoryRequest : 1;
		unsigned _reservedPersistentHistoryChangeRequestDescription : 28;
	}  _persistentHistoryChangeRequestDescriptionFlags;
	id* _additionalPrivateIvars;
	unsigned long long _percentageOfDB;

}

@property (assign) long long resultType;                                 //@synthesize resultType=_resultType - In the implementation block
@property (readonly) NSPersistentHistoryToken * token;                   //@synthesize token=_token - In the implementation block
@property (nonatomic,retain) NSFetchRequest * fetchRequest; 
+(id)fetchHistoryAfterToken:(id)arg1 ;
+(id)deleteHistoryBeforeToken:(id)arg1 ;
+(id)deleteHistoryBeforeToken:(id)arg1 whenHistoryPercentageOfStoreIsGreaterThan:(unsigned long long)arg2 ;
+(id)deleteHistoryBeforeDate:(id)arg1 whenHistoryPercentageOfStoreIsGreaterThan:(unsigned long long)arg2 ;
+(id)decodeFromXPCArchive:(id)arg1 withContext:(id)arg2 ;
+(id)fetchHistoryAfterDate:(id)arg1 ;
+(id)deleteHistoryBeforeDate:(id)arg1 ;
+(id)fetchHistoryWithFetchRequest:(id)arg1 ;
+(id)fetchHistoryTransactionForToken:(id)arg1 ;
+(id)fetchHistoryAfterTransaction:(id)arg1 ;
+(id)deleteHistoryBeforeTransaction:(id)arg1 ;
-(id)encodeForXPC;
-(void)setResultType:(long long)arg1 ;
-(id)initWithTransactionID:(id)arg1 delete:(BOOL)arg2 transactionOnly:(BOOL)arg3 ;
-(id)entityNameToFetch;
-(id)initWithDate:(id)arg1 ;
-(BOOL)includesSubentities;
-(unsigned long long)fetchLimit;
-(id)predicate;
-(id)predicateForStoreIdentifier:(id)arg1 ;
-(BOOL)useQueryGenerationToken;
-(id)init;
-(NSFetchRequest *)fetchRequest;
-(unsigned long long)requestType;
-(void)setUseQueryGenerationToken:(BOOL)arg1 ;
-(BOOL)isFetchTransactionForToken;
-(unsigned long long)fetchBatchSize;
-(id)debugDescription;
-(id)initWithDate:(id)arg1 delete:(BOOL)arg2 percentageOfDB:(unsigned long long)arg3 ;
-(long long)resultType;
-(void)setFetchBatchSize:(unsigned long long)arg1 ;
-(id)sortDescriptors;
-(id)propertiesToFetchForEntity:(id)arg1 ;
-(unsigned long long)percentageOfDB;
-(BOOL)returnsDistinctResults;
-(id)description;
-(void)setFetchRequest:(NSFetchRequest *)arg1 ;
-(void)setFetchLimit:(unsigned long long)arg1 ;
-(id)propertiesToGroupBy;
-(BOOL)isDelete;
-(void)setFetchOffset:(unsigned long long)arg1 ;
-(unsigned long long)fetchOffset;
-(id)initWithTransactionIDs:(id)arg1 ;
-(id)initWithTransactionToken:(id)arg1 ;
-(id)transactionNumber;
-(id)propertiesToFetch;
-(id)date;
-(BOOL)isPercentageDelete;
-(NSPersistentHistoryToken *)token;
-(id)initWithToken:(id)arg1 ;
-(id)initWithDate:(id)arg1 delete:(BOOL)arg2 ;
-(id)initWithTransactionID:(id)arg1 delete:(BOOL)arg2 transactionOnly:(BOOL)arg3 percentageOfDB:(unsigned long long)arg4 ;
-(id)initWithToken:(id)arg1 delete:(BOOL)arg2 percentageOfDB:(unsigned long long)arg3 ;
-(id)initWithFetchRequest:(id)arg1 ;
-(BOOL)includesPropertyValues;
-(id)propertiesToFetchForEntity:(id)arg1 includeTransactionStrings:(BOOL)arg2 ;
-(void)dealloc;
-(id)initWithToken:(id)arg1 delete:(BOOL)arg2 ;
@end

