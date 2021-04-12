/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@protocol FPCollectionDataSourceDelegate
@required
-(void)dataSource:(id)arg1 replaceContentsWithItems:(id)arg2 hasMoreChanges:(BOOL)arg3;
-(void)dataSource:(id)arg1 receivedUpdatedItems:(id)arg2 deletedItems:(id)arg3 hasMoreChanges:(BOOL)arg4;
-(void)dataSource:(id)arg1 wasInvalidatedWithError:(id)arg2;
-(BOOL)dataSourceShouldAlwaysReplaceContents:(id)arg1;

@end

