/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@protocol NSFileProviderChangeObserver <NSObject>
@required
-(void)didUpdateItems:(id)arg1;
-(void)didDeleteItemsWithIdentifiers:(id)arg1;
-(void)finishEnumeratingChangesUpToSyncAnchor:(id)arg1 moreComing:(BOOL)arg2;
-(void)finishEnumeratingWithError:(id)arg1;

@end

