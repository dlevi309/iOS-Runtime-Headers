/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <libobjc.A.dylib/NSSQLAttributeExtension.h>

@class NSArray, NSPredicate, NSString, NSSQLEntity, NSSQLAttribute, NSSQLRelationship, NSMutableString, NSMutableArray;

@interface NSSQLAttributeTrigger : NSObject <NSSQLAttributeExtension> {

	NSPredicate* _predicate;
	NSString* _predicateString;
	NSSQLEntity* _entity;
	NSSQLAttribute* _attribute;
	NSSQLRelationship* _relationship;
	NSSQLEntity* _destinationEntity;
	NSArray* _destinationAttributes;
	NSMutableString* _mToManyInnerFetchWhereClause;
	NSMutableString* _mToManyDecrementWhenClause;
	NSMutableString* _mToManyIncrementWhenClause;
	NSMutableString* _mOfClause;
	NSMutableString* _mOldMatchingClause;
	NSMutableString* _mNewMatchingClause;
	NSMutableString* _mColumnChangedClause;
	NSMutableArray* _mSqlDropStrings;
	NSMutableArray* _mBulkChangeStrings;
	NSArray* _insertSQLStrings;

}

@property (readonly) NSSQLEntity * entity;                                  //@synthesize entity=_entity - In the implementation block
@property (readonly) NSSQLAttribute * attribute;                            //@synthesize attribute=_attribute - In the implementation block
@property (readonly) NSString * predicateString;                            //@synthesize predicateString=_predicateString - In the implementation block
@property (readonly) NSPredicate * predicate;                               //@synthesize predicate=_predicate - In the implementation block
@property (readonly) NSSQLRelationship * relationship;                      //@synthesize relationship=_relationship - In the implementation block
@property (readonly) NSSQLEntity * destinationEntity;                       //@synthesize destinationEntity=_destinationEntity - In the implementation block
@property (readonly) NSArray * destinationAttributes;                       //@synthesize destinationAttributes=_destinationAttributes - In the implementation block
@property (readonly) NSString * toManyInnerFetchWhereClause; 
@property (readonly) NSString * toManyDecrementWhenClause; 
@property (readonly) NSString * toManyIncrementWhenClause; 
@property (readonly) NSString * ofClause; 
@property (readonly) NSString * oldMatchingClause; 
@property (readonly) NSString * newMatchingClause; 
@property (readonly) NSString * columnChangedClause; 
@property (nonatomic,readonly) NSArray * insertSQLStrings;                  //@synthesize insertSQLStrings=_insertSQLStrings - In the implementation block
@property (nonatomic,readonly) NSArray * dropSQLStrings; 
@property (nonatomic,readonly) NSArray * bulkUpdateSQLStrings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)validate:(id*)arg1 ;
-(NSSQLEntity *)destinationEntity;
-(NSSQLEntity *)entity;
-(NSPredicate *)predicate;
-(NSSQLRelationship *)relationship;
-(NSArray *)insertSQLStrings;
-(NSString *)columnChangedClause;
-(BOOL)isEqualToExtension:(id)arg1 ;
-(NSSQLAttribute *)attribute;
-(BOOL)validateComparisonPredicate:(id)arg1 error:(id*)arg2 ;
-(BOOL)isSupportedOperatorType:(unsigned long long)arg1 ;
-(BOOL)validatePredicate:(id)arg1 error:(id*)arg2 ;
-(NSArray *)bulkUpdateSQLStrings;
-(NSString *)ofClause;
-(id)initWithObjectFromUserInfo:(id)arg1 onAttributeNamed:(id)arg2 onEntity:(id)arg3 ;
-(id)createSQLStrings:(id*)arg1 ;
-(NSString *)newMatchingClause;
-(NSArray *)dropSQLStrings;
-(id)inverseOperatorSymbolForOperator:(id)arg1 ;
-(NSArray *)destinationAttributes;
-(NSString *)predicateString;
-(NSString *)toManyIncrementWhenClause;
-(BOOL)parseTriggerPredicateError:(id*)arg1 ;
-(NSString *)toManyInnerFetchWhereClause;
-(NSString *)oldMatchingClause;
-(void)dealloc;
-(NSString *)toManyDecrementWhenClause;
@end

