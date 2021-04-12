/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
*/


@protocol BUNetworkMonitoring <NSObject>
@required
-(BOOL)isConnected;
-(BOOL)isAirplaneModeEnabled;
-(BOOL)hasWAPICapability;
-(void)start;
-(void)stop;
-(BOOL)hasCellularCapability;
-(BOOL)hasCellularConnection;
-(BOOL)hasWifiConnection;

@end

