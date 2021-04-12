/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLProperty.h>

@class NSString, NSSQLEntity;

@interface NSSQLRelationship : NSSQLProperty {

	NSString* _name;
	NSSQLEntity* _destinationEntity;
	NSSQLRelationship* _inverse;

}
-(id)sourceEntity;
-(id)correlationTableName;
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(id)inverseRelationship;
-(id)initForReadOnlyFetchWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(BOOL)isOrdered;
-(id)destinationEntity;
-(void)_setName:(id)arg1 ;
-(id)relationshipDescription;
-(id)foreignKey;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)_setForeignOrderKey:(id)arg1 ;
-(void)_setInverseRelationship:(id)arg1 ;
-(id)name;
-(void)dealloc;
@end

