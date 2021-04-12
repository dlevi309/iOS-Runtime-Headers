/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLColumn.h>

@class NSString, NSSQLForeignKey;

@interface NSSQLForeignEntityKey : NSSQLColumn {

	NSString* _name;
	NSSQLForeignKey* _foreignKey;

}
-(void)dealloc;
-(id)name;
-(void)_setName:(id)arg1 ;
-(id)toOneRelationship;
-(id)foreignKey;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(id)initWithEntity:(id)arg1 foreignKey:(id)arg2 ;
-(id)initForReadOnlyFetchingOfEntity:(id)arg1 toOneRelationship:(id)arg2 ;
-(void)setFKForReadOnlyFetch:(id)arg1 ;
@end

