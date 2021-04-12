/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/HID.feature/HID
*/


@protocol AccessoryHIDClientProtocol <NSObject>
@required
-(id)createHIDDescriptor:(id)arg1;
-(BOOL)deleteHIDDescriptor:(id)arg1;
-(BOOL)processInReport:(id)arg1 forUUID:(id)arg2;
-(BOOL)processGetReportResponse:(id)arg1 reportType:(unsigned char)arg2 reportID:(unsigned char)arg3 forUUID:(id)arg4;

@end

