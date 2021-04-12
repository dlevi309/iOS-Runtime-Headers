/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/


@protocol FPXEnumerator <NSObject>
@required
-(void)invalidate;
-(void)currentSyncAnchorWithCompletion:(/*^block*/id)arg1;
-(void)enumerateItemsFromPage:(id)arg1 reply:(/*^block*/id)arg2;
-(void)enumerateChangesFromToken:(id)arg1 reply:(/*^block*/id)arg2;
-(void)keepAliveConnectionForRegisteredObserver:(/*^block*/id)arg1;

@end

