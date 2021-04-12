/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_validateCollection:(id)arg1 context:(id)arg2 ;
-(BOOL)_validateExpression:(id)arg1 context:(id)arg2 ;
-(id)initForIndexNamed:(id)arg1 onEntity:(id)arg2 properties:(id)arg3 ranges:(id)arg4 inScope:(id)arg5 ;
-(id)generateSQLStringInContext:(id)arg1 ;
-(void)dealloc;
@end

