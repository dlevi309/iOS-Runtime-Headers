/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLColumn.h>

@class NSString, NSSQLToOne;

@interface NSSQLForeignKey : NSSQLColumn {

	NSString* _name;
	NSSQLToOne* _toOne;

}
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(void)_setName:(id)arg1 ;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(id)name;
-(id)toOneRelationship;
-(id)initForReadOnlyFetchingOfEntity:(id)arg1 toOneRelationship:(id)arg2 ;
-(void)dealloc;
-(id)initWithEntity:(id)arg1 toOneRelationship:(id)arg2 ;
@end

