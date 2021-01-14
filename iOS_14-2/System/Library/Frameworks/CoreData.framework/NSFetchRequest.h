/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPersistentStoreRequest.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSArray, NSPredicate, NSEntityDescription, NSString;

@interface NSFetchRequest : NSPersistentStoreRequest <NSSecureCoding, NSCoding> {

	NSArray* _groupByProperties;
	NSPredicate* _havingPredicate;
	id* _additionalPrivateIvars;
	NSArray* _valuesToFetch;
	NSEntityDescription* _entity;
	NSPredicate* _predicate;
	NSArray* _sortDescriptors;
	unsigned long long _batchSize;
	unsigned long long _fetchLimit;
	unsigned long long _allocationSize;
	NSArray* _relationshipKeyPathsForPrefetching;
	struct {
		unsigned distinctValuesOnly : 1;
		unsigned includesSubentities : 1;
		unsigned includesPropertyValues : 1;
		unsigned resultType : 3;
		unsigned returnsObjectsAsFaults : 1;
		unsigned excludePendingChanges : 1;
		unsigned isInUse : 1;
		unsigned entityIsName : 1;
		unsigned refreshesRefetched : 1;
		unsigned propertiesValidated : 1;
		unsigned expressionsValidated : 1;
		unsigned disableCaching : 1;
		unsigned allocationType : 3;
		unsigned batchLRUEntries : 4;
		unsigned asyncRequest : 1;
		unsigned _RESERVED : 10;
	}  _flags;

}

@property (nonatomic,retain) NSEntityDescription * entity; 
@property (nonatomic,readonly) NSString * entityName; 
@property (nonatomic,retain) NSPredicate * predicate; 
@property (nonatomic,retain) NSArray * sortDescriptors; 
@property (assign,nonatomic) unsigned long long fetchLimit; 
@property (nonatomic,retain) NSArray * affectedStores; 
@property (assign,nonatomic) unsigned long long resultType; 
@property (assign,nonatomic) BOOL includesSubentities; 
@property (assign,nonatomic) BOOL includesPropertyValues; 
@property (assign,nonatomic) BOOL returnsObjectsAsFaults; 
@property (nonatomic,copy) NSArray * relationshipKeyPathsForPrefetching; 
@property (assign,nonatomic) BOOL includesPendingChanges; 
@property (assign,nonatomic) BOOL returnsDistinctResults; 
@property (nonatomic,copy) NSArray * propertiesToFetch; 
@property (assign,nonatomic) unsigned long long fetchOffset; 
@property (assign,nonatomic) unsigned long long fetchBatchSize; 
@property (assign,nonatomic) BOOL shouldRefreshRefetchedObjects; 
@property (nonatomic,copy) NSArray * propertiesToGroupBy; 
@property (nonatomic,retain) NSPredicate * havingPredicate; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)fetchRequestWithEntityName:(id)arg1 ;
+(id)decodeFromXPCArchive:(id)arg1 withContext:(id)arg2 ;
+(id)_newDenormalizedFetchProperties:(id)arg1 ;
+(BOOL)accessInstanceVariablesDirectly;
-(id)encodeForXPC;
-(id)execute:(id*)arg1 ;
-(void)setResultType:(unsigned long long)arg1 ;
-(void)setEntity:(NSEntityDescription *)arg1 ;
-(NSString *)entityName;
-(void)setIncludesSubentities:(BOOL)arg1 ;
-(BOOL)_isEditable;
-(void)_setFetchBatchLRUEntriesLimit:(unsigned long long)arg1 ;
-(void)_resolveEntityWithContext:(id)arg1 ;
-(NSEntityDescription *)entity;
-(BOOL)includesSubentities;
-(id)initWithEntityName:(id)arg1 ;
-(unsigned long long)fetchLimit;
-(NSPredicate *)predicate;
-(void)setPropertiesToFetch:(NSArray *)arg1 ;
-(id)init;
-(BOOL)returnsObjectsAsFaults;
-(unsigned long long)requestType;
-(unsigned long long)fetchBatchSize;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(BOOL)_isAsyncRequest;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_copyForDirtyContext;
-(unsigned long long)resultType;
-(BOOL)_isCachingFetchRequest;
-(unsigned long long)allocationSize;
-(NSArray *)affectedStores;
-(void)setFetchBatchSize:(unsigned long long)arg1 ;
-(void)_setAsyncResultHandle:(id)arg1 ;
-(NSArray *)sortDescriptors;
-(void)setRelationshipKeyPathsForPrefetching:(NSArray *)arg1 ;
-(BOOL)returnsDistinctResults;
-(id)description;
-(unsigned long long)_fetchBatchLRUEntriesLimit;
-(void)setFetchLimit:(unsigned long long)arg1 ;
-(void)setAffectedStores:(NSArray *)arg1 ;
-(void)setShouldRefreshRefetchedObjects:(BOOL)arg1 ;
-(NSArray *)propertiesToGroupBy;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(BOOL)shouldRefreshRefetchedObjects;
-(void)setFetchOffset:(unsigned long long)arg1 ;
-(void)setPropertiesToGroupBy:(NSArray *)arg1 ;
-(void)setHavingPredicate:(NSPredicate *)arg1 ;
-(unsigned long long)fetchOffset;
-(void)setIncludesPendingChanges:(BOOL)arg1 ;
-(id)_asyncResultHandle;
-(void)setAllocationType:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)_incrementInUseCounter;
-(NSArray *)propertiesToFetch;
-(NSArray *)relationshipKeyPathsForPrefetching;
-(void)setReturnsDistinctResults:(BOOL)arg1 ;
-(void)setReturnsObjectsAsFaults:(BOOL)arg1 ;
-(void)setIncludesPropertyValues:(BOOL)arg1 ;
-(unsigned long long)allocationType;
-(NSPredicate *)havingPredicate;
-(void)_throwIfNotEditable;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAllocationSize:(unsigned long long)arg1 ;
-(void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 uniquedMappings:(id)arg6 entities:(id)arg7 ;
-(BOOL)includesPendingChanges;
-(BOOL)includesPropertyValues;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

