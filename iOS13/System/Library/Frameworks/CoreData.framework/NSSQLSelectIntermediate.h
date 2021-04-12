/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)generateSQLStringInContext:(id)arg1 ;
-(BOOL)isTargetColumnsScoped;
-(void)setFetchColumns:(id)arg1 ;
-(void)setUseDistinct:(BOOL)arg1 ;
-(void)setIsCount:(BOOL)arg1 ;
-(BOOL)onlyFetchesAggregates;
-(id)initWithEntity:(id)arg1 alias:(id)arg2 fetchColumns:(id)arg3 inScope:(id)arg4 ;
-(id)resolveVariableExpression:(id)arg1 inContext:(id)arg2 ;
-(id)initForCorrelationTarget:(id)arg1 alias:(id)arg2 fetchColumns:(id)arg3 inScope:(id)arg4 ;
-(void)setColumnAlias:(id)arg1 ;
-(void)setFetchEntity:(id)arg1 ;
@end

