/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <Notes/ICBaseSearchIndexerDataSource.h>

@interface ICModernSearchIndexerDataSource : ICBaseSearchIndexerDataSource
-(id)persistentStoreCoordinator;
-(unsigned long long)indexingPriority;
-(id)dataSourceIdentifier;
-(id)allIndexableObjectIDsInReversedReindexingOrderWithContext:(id)arg1 ;
-(BOOL)isFolderWithServerShareChanged:(id)arg1 ;
-(id)newManagedObjectContext;
-(id)addNotesFromSubtree:(id)arg1 ;
-(id)searchableItemForObject:(id)arg1 ;
-(void)contextWillSave:(id)arg1 ;
@end

