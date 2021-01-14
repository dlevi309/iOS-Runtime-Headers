/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/


@protocol NSObject, CSPowerStatusProviding;
@interface CSPowerChangeObserver : NSObject {

	id<NSObject> _notificationToken;
	id<CSPowerStatusProviding> _statusProvider;
	BOOL _connectedToPower;
	BOOL _isConnectedToQiPower;
	BOOL _isConnectedToWirelessInternalChargingAccessory;
	/*^block*/id _block;

}

@property (nonatomic,copy) id block;                                                           //@synthesize block=_block - In the implementation block
@property (assign,getter=isConnectedToPower,nonatomic) BOOL connectedToPower;                  //@synthesize connectedToPower=_connectedToPower - In the implementation block
@property (assign,nonatomic) BOOL isConnectedToQiPower;                                        //@synthesize isConnectedToQiPower=_isConnectedToQiPower - In the implementation block
@property (assign,nonatomic) BOOL isConnectedToWirelessInternalChargingAccessory;              //@synthesize isConnectedToWirelessInternalChargingAccessory=_isConnectedToWirelessInternalChargingAccessory - In the implementation block
-(void)setIsConnectedToQiPower:(BOOL)arg1 ;
-(id)block;
-(void)setConnectedToPower:(BOOL)arg1 ;
-(void)setBlock:(id)arg1 ;
-(BOOL)isConnectedToPower;
-(void)update;
-(BOOL)isConnectedToQiPower;
-(void)setIsConnectedToWirelessInternalChargingAccessory:(BOOL)arg1 ;
-(BOOL)isConnectedToWirelessInternalChargingAccessory;
-(void)setIsConnectedToPower:(BOOL)arg1 ;
-(id)initWithStatusProvider:(id)arg1 notificationName:(id)arg2 updateBlock:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

