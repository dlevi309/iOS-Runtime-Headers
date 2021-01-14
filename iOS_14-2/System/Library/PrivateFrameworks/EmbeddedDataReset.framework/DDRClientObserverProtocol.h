/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedDataReset.framework/EmbeddedDataReset
*/


@protocol DDRClientObserverProtocol <NSObject>
@required
-(void)didCompleteDataResetMode:(long long)arg1 withError:(id)arg2 completion:(/*^block*/id)arg3;
-(void)didBeginDataResetWithMode:(long long)arg1;
-(void)willBeginDataResetWithMode:(long long)arg1;

@end

