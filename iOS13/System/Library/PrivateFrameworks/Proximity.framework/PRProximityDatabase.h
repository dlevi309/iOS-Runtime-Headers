/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
*/


@interface PRProximityDatabase : NSObject
+(long long)getScannerDeviceModel;
+(long long)getPRDeviceModelFromModelId:(id)arg1 ;
+(id)getDeviceData;
+(BOOL)getProximityDeviceParameters:(id*)arg1 forDeviceModel:(id)arg2 withError:(id*)arg3 ;
+(char)getDeviceBtTxPowerFromModel:(long long)arg1 ;
+(char)getDeviceBtRxOffsetFromModel:(long long)arg1 ;
-(id)init;
@end

