/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned _RESERVED : 15;
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
+(BOOL)accessInstanceVariablesDirectly;
+(id)fetchRequestWithEntityName:(id)arg1 ;
+(id)_newDenormalizedFetchProperties:(id)arg1 ;
+(id)decodeFromXPCArchive:(id)arg1 withContext:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(NSArray *)sortDescriptors;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(BOOL)hasChanges;
-(unsigned long long)resultType;
-(id)initWithEntityName:(id)arg1 ;
-(void)setResultType:(unsigned long long)arg1 ;
-(unsigned long long)fetchOffset;
-(unsigned long long)fetchLimit;
-(NSArray *)propertiesToFetch;
-(void)setEntity:(NSEntityDescription *)arg1 ;
-(void)setReturnsObjectsAsFaults:(BOOL)arg1 ;
-(void)setRelationshipKeyPathsForPrefetching:(NSArray *)arg1 ;
-(void)setFetchLimit:(unsigned long long)arg1 ;
-(void)setFetchOffset:(unsigned long long)arg1 ;
-(NSString *)entityName;
-(void)setPropertiesToFetch:(NSArray *)arg1 ;
-(NSEntityDescription *)entity;
-(void)setAllocationType:(unsigned long long)arg1 ;
-(void)setIncludesSubentities:(BOOL)arg1 ;
-(void)setIncludesPendingChanges:(BOOL)arg1 ;
-(void)setPropertiesToGroupBy:(NSArray *)arg1 ;
-(void)setGroupByProperties:(id)arg1 ;
-(void)setFetchBatchSize:(unsigned long long)arg1 ;
-(void)setIncludesPropertyValues:(BOOL)arg1 ;
-(id)groupByProperties;
-(unsigned long long)requestType;
-(id)execute:(id*)arg1 ;
-(unsigned long long)allocationSize;
-(BOOL)_isEditable;
-(void)_setFlagsFromXPCEncoding:(id)arg1 ;
-(void)setHavingPredicate:(NSPredicate *)arg1 ;
-(id)_XPCEncodedFlags;
-(NSPredicate *)havingPredicate;
-(NSArray *)relationshipKeyPathsForPrefetching;
-(unsigned long long)fetchBatchSize;
-(id)_newNormalizedFetchProperties:(id)arg1 ;
-(NSArray *)propertiesToGroupBy;
-(id)encodeForXPC;
-(BOOL)includesSubentities;
-(BOOL)_disablePersistentStoreResultCaching;
-(unsigned long long)allocationType;
-(void)_resolveEntityWithContext:(id)arg1 ;
-(void)setShouldRefreshRefetchedObjects:(BOOL)arg1 ;
-(BOOL)includesPropertyValues;
-(BOOL)returnsDistinctResults;
-(void)setAffectedStores:(NSArray *)arg1 ;
-(NSArray *)affectedStores;
-(BOOL)returnsObjectsAsFaults;
-(void)setReturnsDistinctResults:(BOOL)arg1 ;
-(BOOL)shouldRefreshRefetchedObjects;
-(void)_setDisablePersistentStoreResultCaching:(BOOL)arg1 ;
-(void)_throwIfNotEditable;
-(void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 uniquedMappings:(id)arg6 entities:(id)arg7 ;
-(BOOL)includesPendingChanges;
-(id)_newValidatedProperties:(id)arg1 groupBy:(BOOL)arg2 error:(id*)arg3 ;
-(void)setAllocationSize:(unsigned long long)arg1 ;
-(void)_bindExpressionDescriptionProperties:(id)arg1 ;
-(BOOL)_isCachingFetchRequest;
-(void)_setAsyncResultHandle:(id)arg1 ;
-(id)_asyncResultHandle;
-(id)_copyForDirtyContext;
-(void)_incrementInUseCounter;
-(id)stores;
@end

