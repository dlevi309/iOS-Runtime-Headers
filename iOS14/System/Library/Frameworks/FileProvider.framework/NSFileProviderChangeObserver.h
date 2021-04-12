/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@protocol NSFileProviderChangeObserver <NSObject>
@required
-(void)didUpdateItems:(id)arg1;
-(void)didDeleteItemsWithIdentifiers:(id)arg1;
-(void)finishEnumeratingChangesUpToSyncAnchor:(id)arg1 moreComing:(BOOL)arg2;
-(void)finishEnumeratingWithError:(id)arg1;

@end

