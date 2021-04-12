/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
*/

@class NSManagedObjectContext;


@protocol ICLegacyContext
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext; 
@required
+(id)newLegacyContext;
-(NSManagedObjectContext *)managedObjectContext;
-(void)performBlock:(/*^block*/id)arg1;
-(id)allVisibleNotesForAccountWithObjectID:(id)arg1;
-(BOOL)nonEmptyNoteExistsForLegacyAccountWithObjectID:(id)arg1;
-(id)existingObjectWithID:(id)arg1 error:(id*)arg2;
-(void)reset;
-(void)performBlockAndWait:(/*^block*/id)arg1;
-(unsigned long long)countOfVisibleNotesForAccountWithObjectID:(id)arg1;
-(id)allVisibleNoteObjectIDsForAccountWithObjectID:(id)arg1;

@end

