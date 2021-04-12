/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLIntermediate.h>

@class NSSQLEntity, NSString, NSArray;

@interface NSSQLSelectIntermediate : NSSQLIntermediate {

	NSSQLEntity* _entity;
	NSString* _entityAlias;
	NSString* _correlationTarget;
	NSArray* _fetchColumns;
	BOOL _useDistinct;
	NSString* _columnAlias;
	BOOL _isCount;

}
-(BOOL)onlyFetchesAggregates;
-(void)setColumnAlias:(id)arg1 ;
-(void)setFetchEntity:(id)arg1 ;
-(id)resolveVariableExpression:(id)arg1 inContext:(id)arg2 ;
-(void)setUseDistinct:(BOOL)arg1 ;
-(void)setFetchColumns:(id)arg1 ;
-(BOOL)isTargetColumnsScoped;
-(id)initForCorrelationTarget:(id)arg1 alias:(id)arg2 fetchColumns:(id)arg3 inScope:(id)arg4 ;
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)initWithEntity:(id)arg1 alias:(id)arg2 fetchColumns:(id)arg3 inScope:(id)arg4 ;
-(void)setIsCount:(BOOL)arg1 ;
-(void)dealloc;
@end

