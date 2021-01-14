/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_secureOperation;
-(id)init;
-(unsigned long long)requestType;
-(NSSet *)updatedObjects;
-(NSSet *)lockedObjects;
-(id)_changedObjectIDsNotification;
-(NSSet *)insertedObjects;
-(void)setDeletedObjects:(NSSet *)arg1 ;
-(void)_setChangedObjectIDsNotification:(id)arg1 ;
-(id)initWithInsertedObjects:(id)arg1 updatedObjects:(id)arg2 deletedObjects:(id)arg3 lockedObjects:(id)arg4 ;
-(id)description;
-(BOOL)hasChanges;
-(void)_setSecureOperation:(BOOL)arg1 ;
-(NSSet *)deletedObjects;
-(char)_retryHandlerCount;
-(void)_setRetryHandlerCount:(char)arg1 ;
-(void)dealloc;
@end

