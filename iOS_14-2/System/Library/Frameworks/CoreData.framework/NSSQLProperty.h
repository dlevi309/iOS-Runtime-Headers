/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


#import <CoreData/CoreData-Structs.h>
@class NSPropertyDescription, NSSQLEntity;

@interface NSSQLProperty : NSObject {

	NSPropertyDescription* _propertyDescription;
	NSSQLEntity* _entity;
	unsigned char _propertyType;
	unsigned char _sqlType;
	unsigned short _fetchIndex;
	unsigned short _slot;
	struct {
		unsigned _allowAliasing : 1;
		unsigned _unique : 1;
		unsigned _constrained : 1;
		unsigned _backedByTrigger : 1;
		unsigned _isDerivedAttribute : 1;
		unsigned _reservedFlags : 11;
	}  _flags;

}

@property (assign,getter=isConstrained,nonatomic) BOOL constrained; 
-(BOOL)isToMany;
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(id)columnName;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(id)entity;
-(BOOL)isColumn;
-(BOOL)isRelationship;
-(void)setConstrained:(BOOL)arg1 ;
-(void)setEntityForReadOnlyFetch:(id)arg1 ;
-(BOOL)isForeignKey;
-(BOOL)isForeignEntityKey;
-(BOOL)isForeignOrderKey;
-(BOOL)isEntityKey;
-(BOOL)isOptLockKey;
-(void)setPropertyDescription:(id)arg1 ;
-(BOOL)isToOne;
-(unsigned char)sqlType;
-(id)name;
-(BOOL)isPrimaryKey;
-(id)description;
-(BOOL)isUnique;
-(unsigned char)propertyType;
-(BOOL)isManyToMany;
-(BOOL)isAttribute;
-(id)propertyDescription;
-(BOOL)isConstrained;
-(id)externalName;
-(unsigned)slot;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

