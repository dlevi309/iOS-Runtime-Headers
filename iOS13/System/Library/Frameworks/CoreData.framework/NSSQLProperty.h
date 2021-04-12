/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)name;
-(id)entity;
-(BOOL)isConstrained;
-(void)setConstrained:(BOOL)arg1 ;
-(id)propertyDescription;
-(BOOL)isToMany;
-(BOOL)isToOne;
-(BOOL)isManyToMany;
-(id)columnName;
-(unsigned char)propertyType;
-(BOOL)isAttribute;
-(unsigned char)sqlType;
-(unsigned)slot;
-(id)externalName;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(BOOL)isColumn;
-(BOOL)isRelationship;
-(void)setEntityForReadOnlyFetch:(id)arg1 ;
-(BOOL)isUnique;
-(BOOL)isPrimaryKey;
-(void)setPropertyDescription:(id)arg1 ;
-(BOOL)isForeignKey;
-(BOOL)isForeignEntityKey;
-(BOOL)isForeignOrderKey;
-(BOOL)isEntityKey;
-(BOOL)isOptLockKey;
@end

