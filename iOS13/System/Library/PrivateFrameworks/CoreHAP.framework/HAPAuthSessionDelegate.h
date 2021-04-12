/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/


@protocol HAPAuthSessionDelegate <NSObject>
@required
-(void)authSession:(id)arg1 sendAuthExchangeData:(id)arg2;
-(void)authSession:(id)arg1 validateUUID:(id)arg2 token:(id)arg3;
-(void)authSession:(id)arg1 authenticateUUID:(id)arg2 token:(id)arg3;
-(void)authSession:(id)arg1 confirmUUID:(id)arg2 token:(id)arg3;
-(void)authSession:(id)arg1 authComplete:(id)arg2;

@end

