/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@class NSMutableSet, NSEntityDescription, NSManagedObjectContext;

@interface PHObjectDeleteValidator : NSObject {

	NSMutableSet* _deletedObjectIDs;
	NSEntityDescription* _entity;
	NSManagedObjectContext* _context;

}
-(id)initWithEntityName:(id)arg1 managedObjectContext:(id)arg2 ;
-(BOOL)recordObjectID:(id)arg1 ;
-(BOOL)validateForDeleteWithRequestsByObjectID:(id)arg1 error:(id*)arg2 ;
@end

