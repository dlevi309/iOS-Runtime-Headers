/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/HID.feature/HID
*/


@protocol AccessoryHIDClientProtocol <NSObject>
@required
-(id)createHIDDescriptor:(id)arg1;
-(BOOL)deleteHIDDescriptor:(id)arg1;
-(BOOL)processInReport:(id)arg1 forUUID:(id)arg2;
-(BOOL)processGetReportResponse:(id)arg1 reportType:(unsigned char)arg2 reportID:(unsigned char)arg3 forUUID:(id)arg4;

@end

