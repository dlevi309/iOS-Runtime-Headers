/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LiveFSFPHelper.framework/LiveFSFPHelper
*/


@protocol NSFileProviderEnumerator <NSObject>
@optional
-(void)currentSyncAnchorWithCompletionHandler:(/*^block*/id)arg1;
-(void)enumerateChangesForObserver:(id)arg1 fromSyncAnchor:(id)arg2;

@required
-(void)invalidate;
-(void)enumerateItemsForObserver:(id)arg1 startingAtPage:(id)arg2;

@end

