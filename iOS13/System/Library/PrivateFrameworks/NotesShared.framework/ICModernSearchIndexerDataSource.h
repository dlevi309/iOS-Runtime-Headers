/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <Notes/ICBaseSearchIndexerDataSource.h>

@interface ICModernSearchIndexerDataSource : ICBaseSearchIndexerDataSource
-(id)persistentStoreCoordinator;
-(id)dataSourceIdentifier;
-(id)newManagedObjectContext;
-(void)contextWillSave:(id)arg1 ;
-(id)allIndexableObjectIDsInReversedReindexingOrder;
-(unsigned long long)indexingPriority;
@end
