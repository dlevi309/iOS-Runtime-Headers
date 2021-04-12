/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@protocol IDSLinkDelegate <NSObject>
@optional
-(void)link:(id)arg1 didDisconnectOverCloud:(id)arg2 cbuuid:(id)arg3;
-(void)link:(id)arg1 didAddQREvent:(id)arg2;
-(void)link:(id)arg1 didConnectUnderlyingLink:(char)arg2 linkUUID:(id)arg3 localAttributes:(id)arg4 remoteAttributes:(id)arg5;
-(void)link:(id)arg1 didDisconnectUnderlyingLinkID:(char)arg2 linkUUID:(id)arg3;
-(void)link:(id)arg1 didDefaultUnderlyingLinkChangeSucceeded:(BOOL)arg2 currentDefaultLinkID:(char)arg3;
-(void)link:(id)arg1 didFailToConnectOverCloud:(id)arg2 cbuuid:(id)arg3;
-(void)link:(id)arg1 didConnectOverCloud:(id)arg2 cbuuid:(id)arg3;
-(void)link:(id)arg1 didReceiveSKEData:(id)arg2;
-(void)link:(id)arg1 didRATChange:(unsigned char)arg2;
-(void)link:(id)arg1 didCellularMTUChange:(unsigned short)arg2;
-(void)link:(id)arg1 didReceiveReportEvent:(id)arg2;
-(void)link:(id)arg1 didReceiveSessionInfo:(id)arg2 relayGroupID:(id)arg3 relaySessionID:(id)arg4 success:(BOOL)arg5;
-(void)link:(id)arg1 hostAwakeDidChange:(BOOL)arg2 deviceUniqueID:(id)arg3 cbuuid:(id)arg4;
-(void)link:(id)arg1 hasSpaceAvailable:(BOOL)arg2 deviceUniqueID:(id)arg3 cbuuid:(id)arg4;

@required
-(BOOL)link:(id)arg1 didReceivePacket:(/*function pointer*/void**)arg2 fromDeviceUniqueID:(id)arg3 cbuuid:(id)arg4;
-(void)link:(id)arg1 didConnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;
-(void)link:(id)arg1 didDisconnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;

@end

