/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@protocol FPCollectionDataSourceDelegate
@required
-(void)dataSource:(id)arg1 replaceContentsWithItems:(id)arg2 hasMoreChanges:(BOOL)arg3;
-(void)dataSource:(id)arg1 receivedUpdatedItems:(id)arg2 deletedItems:(id)arg3 hasMoreChanges:(BOOL)arg4;
-(void)dataSource:(id)arg1 wasInvalidatedWithError:(id)arg2;
-(BOOL)dataSourceShouldAlwaysReplaceContents:(id)arg1;

@end

