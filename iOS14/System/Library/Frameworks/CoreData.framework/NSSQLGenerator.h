/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSSQLCore;

@interface NSSQLGenerator : NSObject {

	NSSQLCore* _persistentStore;

}
+(void)initialize;
-(id)initializeContextForFetchRequest:(id)arg1 ignoreInheritance:(BOOL)arg2 nestingLevel:(unsigned)arg3 nestIsWhereScoped:(BOOL)arg4 requestContext:(id)arg5 ;
-(id)generateIntermediatesForUpdateInContext:(id)arg1 ;
-(id)newSQLStatementForFetchRequest:(id)arg1 ignoreInheritance:(BOOL)arg2 countOnly:(BOOL)arg3 nestingLevel:(unsigned)arg4 nestIsWhereScoped:(BOOL)arg5 requestContext:(id)arg6 ;
-(void)generateGroupByIntermediatesForProperties:(id)arg1 inContext:(id)arg2 ;
-(id)newSQLStatementForRequest:(id)arg1 ignoreInheritance:(BOOL)arg2 countOnly:(BOOL)arg3 nestingLevel:(unsigned)arg4 nestIsWhereScoped:(BOOL)arg5 requestContext:(id)arg6 ;
-(void)generateIntermediateForLimit:(unsigned long long)arg1 inContext:(id)arg2 ;
-(id)predicateForRequestInContext:(id)arg1 ;
-(id)initWithPersistentStore:(id)arg1 ;
-(id)_predicateForSpecificEntity:(id)arg1 ;
-(id)generateIntermediatesForFetchInContext:(id)arg1 countOnly:(BOOL)arg2 ;
-(void)generateSelectIntermediateInContext:(id)arg1 ;
-(id)newSQLStatementForUpdateRequest:(id)arg1 ;
-(id)newSQLStatmentForBinaryIndex:(id)arg1 inStore:(id)arg2 ;
-(id)_predicateRestrictingSuperentitiesForEntity:(id)arg1 ;
-(id)initializeContextForIndexGeneration:(id)arg1 inStore:(id)arg2 ;
-(id)newSQLStatementForChangeRequest:(id)arg1 ;
-(void)generateOrderIntermediateInContext:(id)arg1 ;
-(void)generateWhereIntermediatesInContext:(id)arg1 ;
-(void)generateIntermediateForOffset:(unsigned long long)arg1 inContext:(id)arg2 ;
-(void)generateHavingIntermediateForPredicate:(id)arg1 inContext:(id)arg2 ;
-(id)initializeContextForUpdateRequest:(id)arg1 ;
-(id)_predicateRestrictingToSubentitiesForEntity:(id)arg1 ;
-(id)generateUpdateColumnsIntermediateInContext:(id)arg1 ;
-(id)initializeContextForRequest:(id)arg1 ignoreInheritance:(BOOL)arg2 nestingLevel:(unsigned)arg3 ;
@end

