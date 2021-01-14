/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

