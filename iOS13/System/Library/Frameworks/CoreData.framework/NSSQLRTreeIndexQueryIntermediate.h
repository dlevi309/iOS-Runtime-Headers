/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLIntermediate.h>

@class NSSQLEntity, NSExpression, NSArray;

@interface NSSQLRTreeIndexQueryIntermediate : NSSQLIntermediate {

	NSSQLEntity* _entity;
	NSExpression* _indexName;
	NSArray* _properties;
	NSArray* _ranges;

}
-(void)dealloc;
-(id)generateSQLStringInContext:(id)arg1 ;
-(BOOL)_validateCollection:(id)arg1 context:(id)arg2 ;
-(BOOL)_validateExpression:(id)arg1 context:(id)arg2 ;
-(id)initForIndexNamed:(id)arg1 onEntity:(id)arg2 properties:(id)arg3 ranges:(id)arg4 inScope:(id)arg5 ;
@end

