/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class _PFModelMap, NSArray;

@interface NSConstraintValidator : NSObject {

	_PFModelMap* _modelMap;
	NSArray* _entities;
	id* _cachesByEntity;

}
-(void)dealloc;
-(void)reset;
-(id)initWithManagedObjectContext:(id)arg1 ;
-(void)registerObjects:(id)arg1 ;
-(id)validateForSave;
-(void)registerObject:(id)arg1 ;
-(id)validateCaches;
-(void)_addConstraintRoot:(id)arg1 forEntity:(id)arg2 ;
@end

