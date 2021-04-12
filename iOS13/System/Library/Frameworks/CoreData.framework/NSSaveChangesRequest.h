/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSPersistentStoreRequest.h>

@class NSSet, NSNotification;

@interface NSSaveChangesRequest : NSPersistentStoreRequest {

	NSSet* _insertedObjects;
	NSSet* _updatedObjects;
	NSSet* _deletedObjects;
	NSSet* _optimisticallyLockedObjects;
	unsigned long long _flags;
	NSNotification* _mutatedObjectIDsNotification;

}

@property (readonly) NSSet * insertedObjects; 
@property (readonly) NSSet * updatedObjects; 
@property (readonly) NSSet * deletedObjects; 
@property (readonly) NSSet * lockedObjects; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id)description;
-(BOOL)hasChanges;
-(NSSet *)insertedObjects;
-(unsigned long long)requestType;
-(BOOL)_secureOperation;
-(void)_setSecureOperation:(BOOL)arg1 ;
-(NSSet *)updatedObjects;
-(NSSet *)lockedObjects;
-(NSSet *)deletedObjects;
-(void)_setChangedObjectIDsNotification:(id)arg1 ;
-(id)initWithInsertedObjects:(id)arg1 updatedObjects:(id)arg2 deletedObjects:(id)arg3 lockedObjects:(id)arg4 ;
-(char)_retryHandlerCount;
-(void)_setRetryHandlerCount:(char)arg1 ;
-(id)_changedObjectIDsNotification;
-(void)setDeletedObjects:(NSSet *)arg1 ;
@end

