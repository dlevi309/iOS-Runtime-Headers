/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
*/

#import <Notes/ICBaseSearchIndexerDataSource.h>

@interface ICHTMLSearchIndexerDataSource : ICBaseSearchIndexerDataSource
-(id)persistentStoreCoordinator;
-(unsigned long long)indexingPriority;
-(id)dataSourceIdentifier;
-(id)allIndexableObjectIDsInReversedReindexingOrderWithContext:(id)arg1 ;
-(BOOL)isFolderWithServerShareChanged:(id)arg1 ;
-(id)newManagedObjectContext;
-(id)addNotesFromSubtree:(id)arg1 ;
-(id)indexableObjectIDsMatchingPredicate:(id)arg1 sortByReversedReindexingOrder:(BOOL)arg2 context:(id)arg3 ;
-(void)contextWillSave:(id)arg1 ;
@end

