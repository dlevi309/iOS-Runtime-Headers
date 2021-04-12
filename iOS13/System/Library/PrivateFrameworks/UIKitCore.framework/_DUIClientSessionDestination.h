/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _DUIClientSessionDestination <_DUIClientSessionCommon>
@required
-(oneway void)addedItemCollection:(id)arg1;
-(oneway void)performDropWithItemCollection:(id)arg1 dataProviderEndpoint:(id)arg2 visibleDroppedItems:(id)arg3 reply:(/*^block*/id)arg4;
-(oneway void)handOffDroppedItems:(id)arg1 withFence:(id)arg2;
-(oneway void)dragEnded;

@end

