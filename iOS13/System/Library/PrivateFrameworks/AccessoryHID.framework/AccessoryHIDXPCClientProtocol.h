/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessoryHID.framework/AccessoryHID
*/


@protocol AccessoryHIDXPCClientProtocol <NSObject>
@required
-(void)registerHIDDescriptor:(id)arg1 componentID:(unsigned short)arg2 dictionary:(id)arg3 withReply:(/*^block*/id)arg4;
-(void)unregisterHIDDescriptor:(id)arg1 componentID:(unsigned short)arg2 withReply:(/*^block*/id)arg3;
-(void)unregisterAllDescriptors:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)inReport:(id)arg1 componentID:(unsigned short)arg2 report:(id)arg3 withReply:(/*^block*/id)arg4;
-(void)getReportResponse:(id)arg1 componentID:(unsigned short)arg2 reportType:(unsigned char)arg3 reportID:(unsigned char)arg4 report:(id)arg5 withReply:(/*^block*/id)arg6;

@end

