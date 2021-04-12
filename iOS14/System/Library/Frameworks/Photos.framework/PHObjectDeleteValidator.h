/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@class NSMutableSet, NSEntityDescription, NSManagedObjectContext;

@interface PHObjectDeleteValidator : NSObject {

	NSMutableSet* _deletedObjectIDs;
	NSEntityDescription* _entity;
	NSManagedObjectContext* _context;

}
-(BOOL)validateForDeleteWithRequestsByObjectID:(id)arg1 error:(id*)arg2 ;
-(id)initWithEntityName:(id)arg1 managedObjectContext:(id)arg2 ;
-(BOOL)recordObjectID:(id)arg1 ;
@end

