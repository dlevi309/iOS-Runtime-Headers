/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLProperty.h>

@class NSString, NSSQLEntity;

@interface NSSQLRelationship : NSSQLProperty {

	NSString* _name;
	NSSQLEntity* _destinationEntity;
	NSSQLRelationship* _inverse;

}
-(void)dealloc;
-(id)name;
-(BOOL)isOrdered;
-(void)_setName:(id)arg1 ;
-(id)destinationEntity;
-(id)inverseRelationship;
-(id)correlationTableName;
-(id)relationshipDescription;
-(id)foreignKey;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(id)sourceEntity;
-(void)_setInverseRelationship:(id)arg1 ;
-(id)initForReadOnlyFetchWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)_setForeignOrderKey:(id)arg1 ;
@end

