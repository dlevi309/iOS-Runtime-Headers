/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLIntermediate.h>

@class NSArray;

@interface NSSQLUpdateColumnsIntermediate : NSSQLIntermediate {

	NSArray* _propertiesToUpdate;
	NSArray* _valuesToUpdateTo;

}
-(id)_generateSQLToUpdateProperty:(id)arg1 fromSubquery:(id)arg2 inContext:(id)arg3 ;
-(BOOL)isUpdateColumnsScoped;
-(id)_generateSQLForAttributeUpdate:(id)arg1 value:(id)arg2 inContext:(id)arg3 ;
-(id)initWithProperties:(id)arg1 values:(id)arg2 inScope:(id)arg3 ;
-(id)_generateSQLToUpdateProperty:(id)arg1 fromSingleStepKeypath:(id)arg2 inContext:(id)arg3 ;
-(id)_generateSQLToUpdateProperty:(id)arg1 fromKeypath:(id)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForRelationshipUpdate:(id)arg1 destination:(id)arg2 inContext:(id)arg3 ;
-(id)_generateSQLForRelationshipUpdate:(id)arg1 sourceRelationship:(id)arg2 inContext:(id)arg3 ;
-(BOOL)isDestination:(id)arg1 compatibleDestinationFor:(id)arg2 ;
-(id)_generateSQLToUpdateProperty:(id)arg1 fromMultiStepKeypathComponents:(id)arg2 inContext:(id)arg3 ;
-(id)governingAliasForKeypathExpression:(id)arg1 ;
-(id)_generateSQLForAttributeUpdate:(id)arg1 sourceAttribute:(id)arg2 inContext:(id)arg3 ;
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)_generateSQLForKeypathWithComponents:(id)arg1 onSQLEntity:(id)arg2 inContext:(id)arg3 ;
-(id)_subqueryIntermediateForToManyKeypathWithComponents:(id)arg1 withFunction:(BOOL)arg2 inContext:(id)arg3 ;
-(BOOL)isRelationship:(id)arg1 compatibleWith:(id)arg2 ;
-(void)dealloc;
@end

