/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
*/

#import <Notes/ICBaseSearchIndexerDataSource.h>

@interface ICHTMLSearchIndexerDataSource : ICBaseSearchIndexerDataSource
-(id)persistentStoreCoordinator;
-(id)dataSourceIdentifier;
-(id)newManagedObjectContext;
-(void)contextWillSave:(id)arg1 ;
-(id)allIndexableObjectIDsInReversedReindexingOrder;
-(unsigned long long)indexingPriority;
-(id)indexableObjectIDsMatchingPredicate:(id)arg1 sortByReversedReindexingOrder:(BOOL)arg2 ;
@end

