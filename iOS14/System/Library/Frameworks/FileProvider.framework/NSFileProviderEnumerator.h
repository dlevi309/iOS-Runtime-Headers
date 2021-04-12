/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@protocol NSFileProviderEnumerator <NSObject>
@optional
-(void)currentSyncAnchorWithCompletionHandler:(/*^block*/id)arg1;
-(void)enumerateChangesForObserver:(id)arg1 fromSyncAnchor:(id)arg2;

@required
-(void)enumerateItemsForObserver:(id)arg1 startingAtPage:(id)arg2;
-(void)invalidate;

@end

