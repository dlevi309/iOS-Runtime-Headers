/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@protocol SKUIIndexBarControlDataSource <NSObject>
@optional
-(id)combinedEntryForIndexBarControl:(id)arg1;
-(long long)numberOfSectionsInIndexBarControl:(id)arg1;

@required
-(long long)indexBarControl:(id)arg1 numberOfEntriesInSection:(long long)arg2;
-(id)indexBarControl:(id)arg1 entryAtIndexPath:(id)arg2;

@end

