/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/APTransport.framework/APTransport
*/


#import <APTransport/APTransport-Structs.h>
@class NSUUID;

@interface APTargetBTLEDevice : NSObject {

	BOOL _isSoloCapable;
	BOOL _supportsMediaControlPort;
	BOOL _isFirmwareTracked;
	BOOL _requestedTracking;
	int _lastRSSI;
	SCD_Struct_AP0 _lastData;
	NSUUID* _deviceID;
	unsigned long long _lastBeaconTicks;

}

@property (nonatomic,retain) NSUUID * deviceID;                               //@synthesize deviceID=_deviceID - In the implementation block
@property (assign,nonatomic) BOOL isSoloCapable;                              //@synthesize isSoloCapable=_isSoloCapable - In the implementation block
@property (assign,nonatomic) BOOL supportsMediaControlPort;                   //@synthesize supportsMediaControlPort=_supportsMediaControlPort - In the implementation block
@property (assign,nonatomic) SCD_Struct_AP0 lastData;                         //@synthesize lastData=_lastData - In the implementation block
@property (assign,nonatomic) unsigned long long lastBeaconTicks;              //@synthesize lastBeaconTicks=_lastBeaconTicks - In the implementation block
@property (assign,nonatomic) int lastRSSI;                                    //@synthesize lastRSSI=_lastRSSI - In the implementation block
@property (assign,nonatomic) BOOL isFirmwareTracked;                          //@synthesize isFirmwareTracked=_isFirmwareTracked - In the implementation block
@property (assign,nonatomic) BOOL requestedTracking;                          //@synthesize requestedTracking=_requestedTracking - In the implementation block
-(void)setDeviceID:(NSUUID *)arg1 ;
-(NSUUID *)deviceID;
-(void)setLastBeaconTicks:(unsigned long long)arg1 ;
-(int)lastRSSI;
-(SCD_Struct_AP0)lastData;
-(BOOL)isFirmwareTracked;
-(BOOL)requestedTracking;
-(void)setRequestedTracking:(BOOL)arg1 ;
-(void)setLastData:(SCD_Struct_AP0)arg1 ;
-(void)setSupportsMediaControlPort:(BOOL)arg1 ;
-(void)setLastRSSI:(int)arg1 ;
-(void)setIsSoloCapable:(BOOL)arg1 ;
-(unsigned long long)lastBeaconTicks;
-(BOOL)supportsMediaControlPort;
-(void)setIsFirmwareTracked:(BOOL)arg1 ;
-(BOOL)isSoloCapable;
-(void)dealloc;
@end

