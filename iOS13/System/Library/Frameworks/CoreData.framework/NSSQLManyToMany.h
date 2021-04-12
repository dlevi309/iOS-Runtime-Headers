/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLRelationship.h>

@class NSString;

@interface NSSQLManyToMany : NSSQLRelationship {

	NSString* _correlationTableName;
	NSString* _columnName;
	NSString* _orderColumnName;

}
-(void)dealloc;
-(id)inverseManyToMany;
-(id)columnName;
-(id)correlationTableName;
-(BOOL)isReflexive;
-(id)inverseColumnName;
-(id)inverseOrderColumnName;
-(id)orderColumnName;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)_setColumnName:(id)arg1 ;
-(void)_setInverseManyToMany:(id)arg1 ;
-(BOOL)isMaster;
-(unsigned char)columnSQLType;
-(unsigned char)orderColumnSQLType;
-(void)_setCorrelationTableName:(id)arg1 ;
-(void)_setOrderColumnName:(id)arg1 ;
-(BOOL)isTableSchemaEqual:(id)arg1 ;
@end

