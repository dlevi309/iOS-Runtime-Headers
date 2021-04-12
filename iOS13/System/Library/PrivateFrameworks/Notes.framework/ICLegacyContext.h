/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
*/


@protocol ICLegacyContext
@required
+(id)newLegacyContext;
-(void)performBlock:(/*^block*/id)arg1;
-(void)reset;
-(id)existingObjectWithID:(id)arg1 error:(id*)arg2;
-(void)performBlockAndWait:(/*^block*/id)arg1;
-(id)managedObjectContext;
-(id)allVisibleNotesForAccountWithObjectID:(id)arg1;
-(BOOL)nonEmptyNoteExistsForLegacyAccountWithObjectID:(id)arg1;
-(unsigned long long)countOfVisibleNotesForAccountWithObjectID:(id)arg1;
-(id)allVisibleNoteObjectIDsForAccountWithObjectID:(id)arg1;

@end

