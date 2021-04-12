/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _DUIClientSessionSource <_DUIClientSessionCommon>
@required
-(oneway void)checkCanHandOffCancelledItemsWithReply:(/*^block*/id)arg1;
-(oneway void)handOffCancelledItems:(id)arg1 withFence:(id)arg2;
-(oneway void)dragEndedWithOperation:(unsigned long long)arg1;
-(oneway void)dragFailed;
-(oneway void)dataTransferSessionFinished;

@end

