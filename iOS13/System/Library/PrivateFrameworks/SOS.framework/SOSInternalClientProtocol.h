/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SOS.framework/SOS
*/


@protocol SOSInternalClientProtocol <SOSClientProtocol>
@required
-(void)updateClientCurrentSOSInitiationState:(long long)arg1;
-(void)updateClientCurrentSOSInteractiveState:(long long)arg1;
-(void)dismissClientSOSWithCompletion:(/*^block*/id)arg1;
-(void)didDismissClientSOSBeforeSOSCall:(long long)arg1;

@end

