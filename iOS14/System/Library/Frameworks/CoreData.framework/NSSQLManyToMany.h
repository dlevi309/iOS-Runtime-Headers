/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLRelationship.h>

@class NSString;

@interface NSSQLManyToMany : NSSQLRelationship {

	NSString* _correlationTableName;
	NSString* _columnName;
	NSString* _orderColumnName;

}
-(id)correlationTableName;
-(id)columnName;
-(BOOL)isMaster;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(BOOL)isReflexive;
-(void)_setColumnName:(id)arg1 ;
-(id)inverseManyToMany;
-(unsigned char)columnSQLType;
-(id)inverseOrderColumnName;
-(void)_setInverseManyToMany:(id)arg1 ;
-(id)orderColumnName;
-(void)_setOrderColumnName:(id)arg1 ;
-(unsigned char)orderColumnSQLType;
-(BOOL)isTableSchemaEqual:(id)arg1 ;
-(id)inverseColumnName;
-(void)_setCorrelationTableName:(id)arg1 ;
-(void)dealloc;
@end

