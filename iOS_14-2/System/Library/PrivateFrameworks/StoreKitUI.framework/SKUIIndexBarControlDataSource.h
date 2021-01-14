/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

