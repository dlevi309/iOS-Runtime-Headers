/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedDataReset.framework/EmbeddedDataReset
*/


@protocol DDRClientObserverProtocol <NSObject>
@required
-(void)willBeginDataResetWithMode:(long long)arg1;
-(void)didBeginDataResetWithMode:(long long)arg1;
-(void)didCompleteDataResetMode:(long long)arg1 withError:(id)arg2 completion:(/*^block*/id)arg3;

@end

