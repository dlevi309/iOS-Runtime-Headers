/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLColumn.h>

@class NSString, NSSQLToOne;

@interface NSSQLForeignKey : NSSQLColumn {

	NSString* _name;
	NSSQLToOne* _toOne;

}
-(void)dealloc;
-(id)name;
-(void)_setName:(id)arg1 ;
-(id)toOneRelationship;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(id)initForReadOnlyFetchingOfEntity:(id)arg1 toOneRelationship:(id)arg2 ;
-(id)initWithEntity:(id)arg1 toOneRelationship:(id)arg2 ;
@end

