/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol CSPowerStatusProviding <NSObject>
@property (getter=isOnAC,nonatomic,readonly) BOOL onAC; 
@property (getter=isConnectedToExternalChargingSource,nonatomic,readonly) BOOL connectedToExternalChargingSource; 
@property (getter=isConnectedToWirelessInternalChargingAccessory,nonatomic,readonly) BOOL connectedToWirelessInternalChargingAccessory; 
@property (getter=isConnectedToQiPower,nonatomic,readonly) BOOL connectedToQiPower; 
@required
-(BOOL)isConnectedToQiPower;
-(BOOL)isConnectedToExternalChargingSource;
-(BOOL)isConnectedToWirelessInternalChargingAccessory;
-(BOOL)isOnAC;

@end

