/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPersistentStoreRequest.h>
#import <libobjc.A.dylib/NSPredicatedStoreRequest.h>

@class NSPredicate, NSDictionary, NSString, NSEntityDescription;

@interface NSBatchUpdateRequest : NSPersistentStoreRequest <NSPredicatedStoreRequest> {

	id _entity;
	NSPredicate* _predicate;
	struct {
		unsigned includesSubentities : 1;
		unsigned resultType : 2;
		unsigned entityIsName : 1;
		unsigned secureOperation : 1;
		unsigned _RESERVED : 27;
	}  _flags;
	NSDictionary* _columnsToUpdate;

}

@property (assign,setter=_setSecureOperation:,getter=_secureOperation,nonatomic) BOOL shouldPerformSecureOperation; 
@property (copy,readonly) NSString * entityName; 
@property (readonly) NSEntityDescription * entity;                                                                               //@synthesize entity=_entity - In the implementation block
@property (retain) NSPredicate * predicate;                                                                                      //@synthesize predicate=_predicate - In the implementation block
@property (assign) BOOL includesSubentities; 
@property (assign) unsigned long long resultType; 
@property (copy) NSDictionary * propertiesToUpdate;                                                                              //@synthesize columnsToUpdate=_columnsToUpdate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)decodeFromXPCArchive:(id)arg1 withContext:(id)arg2 ;
+(id)batchUpdateRequestWithEntityName:(id)arg1 ;
-(id)initWithEntity:(id)arg1 ;
-(id)encodeForXPC;
-(void)setResultType:(unsigned long long)arg1 ;
-(NSString *)entityName;
-(void)setIncludesSubentities:(BOOL)arg1 ;
-(void)_resolveEntityWithContext:(id)arg1 ;
-(NSEntityDescription *)entity;
-(BOOL)_secureOperation;
-(BOOL)includesSubentities;
-(id)initWithEntityName:(id)arg1 ;
-(NSPredicate *)predicate;
-(void)setShouldPerformSecureOperation:(BOOL)arg1 ;
-(id)init;
-(NSDictionary *)propertiesToUpdate;
-(unsigned long long)requestType;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(unsigned long long)resultType;
-(void)setPropertiesToUpdate:(NSDictionary *)arg1 ;
-(NSString *)description;
-(BOOL)shouldPerformSecureOperation;
-(void)_setSecureOperation:(BOOL)arg1 ;
-(void)dealloc;
@end

