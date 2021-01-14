/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLRelationship.h>

@class NSSQLForeignKey, NSSQLForeignEntityKey, NSSQLForeignOrderKey;

@interface NSSQLToOne : NSSQLRelationship {

	NSSQLForeignKey* _foreignKey;
	NSSQLForeignEntityKey* _foreignEntityKey;
	NSSQLForeignOrderKey* _foreignOrderKey;
	BOOL _isVirtual;

}
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(id)columnName;
-(id)initForReadOnlyFetchWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(BOOL)isOptional;
-(id)foreignKey;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)_setForeignOrderKey:(id)arg1 ;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 virtualForToMany:(id)arg3 ;
-(BOOL)isVirtual;
-(id)description;
-(id)initWithEntity:(id)arg1 inverseToMany:(id)arg2 ;
-(id)foreignEntityKey;
-(id)foreignOrderKey;
-(unsigned)slot;
-(void)dealloc;
@end

