/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BluetoothManager.framework/BluetoothManager
*/


#import <BluetoothManager/BluetoothManager-Structs.h>
@class NSString, SiriBluetoothDeviceSource;

@interface BluetoothDevice : NSObject {

	NSString* _name;
	NSString* _productName;
	NSString* _address;
	BTDeviceImplRef _device;
	unsigned _connectingServiceMask;

}

@property (setter=sb_setSiriBluetoothDeviceSource:,getter=sb_siriBluetoothDeviceSource,nonatomic,retain) SiriBluetoothDeviceSource * sb_siriBluetoothDeviceSource; 
-(SiriBluetoothDeviceSource *)sb_siriBluetoothDeviceSource;
-(void)sb_setSiriBluetoothDeviceSource:(id)arg1 ;
-(BOOL)ac_isEyesFree;
-(BOOL)connected;
-(void)disconnect;
-(id)productName;
-(long long)compare:(id)arg1 ;
-(id)syncGroups;
-(unsigned long long)connectedServices;
-(BOOL)paired;
-(BOOL)magicPaired;
-(void)unpair;
-(int)batteryLevel;
-(void)connect;
-(SCD_Struct_Bl1)syncSettings;
-(BOOL)setListeningMode:(unsigned)arg1 ;
-(unsigned)listeningMode;
-(void)setSyncSettings:(SCD_Struct_Bl1)arg1 ;
-(BTDeviceImplRef)device;
-(BOOL)setListeningModeConfigs:(unsigned)arg1 ;
-(unsigned)vendorId;
-(BOOL)setUserName:(id)arg1 ;
-(id)name;
-(unsigned)doubleTapAction;
-(id)description;
-(id)scoUID;
-(id)aclUID;
-(id)address;
-(BOOL)setDoubleTapAction:(unsigned)arg1 ;
-(BOOL)setDoubleClickMode:(int)arg1 ;
-(unsigned)micMode;
-(BOOL)setSingleClickMode:(int)arg1 ;
-(int)type;
-(unsigned)doubleTapCapability;
-(unsigned)productId;
-(void)setPIN:(id)arg1 ;
-(BOOL)isAppleAudioDevice;
-(void)setDevice:(BTDeviceImplRef)arg1 ;
-(int)doubleClickMode;
-(BOOL)featureCapability:(int)arg1 ;
-(BOOL)isAccessory;
-(unsigned)listeningModeConfigs;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isServiceSupported:(unsigned)arg1 ;
-(void)dealloc;
-(BOOL)setMicMode:(unsigned)arg1 ;
-(int)singleClickMode;
-(id)getServiceSetting:(unsigned)arg1 key:(id)arg2 ;
-(BOOL)supportsBatteryLevel;
-(BOOL)inEarDetectEnabled;
-(BOOL)inEarStatusPrimary:(int*)arg1 secondary:(int*)arg2 ;
-(id)accessoryInfo;
-(BOOL)isTemporaryPaired;
-(unsigned)majorClass;
-(BOOL)cloudPaired;
-(BOOL)isProController;
-(void)setServiceSetting:(unsigned)arg1 key:(id)arg2 value:(id)arg3 ;
-(int)autoAnswerMode;
-(BOOL)setAutoAnswerMode:(int)arg1 ;
-(unsigned)doubleTapActionEx:(unsigned*)arg1 rightAction:(unsigned*)arg2 ;
-(BOOL)setDoubleTapActionEx:(unsigned)arg1 rightAction:(unsigned)arg2 ;
-(BOOL)setInEarDetectEnabled:(BOOL)arg1 ;
-(unsigned char)smartRouteMode;
-(BOOL)setSmartRouteMode:(unsigned char)arg1 ;
-(unsigned)clickHoldMode:(int*)arg1 rightAction:(int*)arg2 ;
-(BOOL)setClickHoldMode:(int)arg1 rightMode:(int)arg2 ;
-(void)setSyncGroup:(int)arg1 enabled:(BOOL)arg2 ;
-(int)accessorySettingFeatureBitMask;
-(int)getLowSecurityStatus;
-(BOOL)getAACPCapabilityBit:(int)arg1 ;
-(unsigned char)getSpatialAudioPlatformSupport;
-(void)acceptSSP:(long long)arg1 ;
-(int)getBehaviorForHIDDevice;
-(unsigned)SendSetupCommand:(unsigned char)arg1 ;
-(id)initWithDevice:(BTDeviceImplRef)arg1 address:(id)arg2 ;
-(void)_clearName;
-(BOOL)_isNameCached;
-(unsigned)minorClass;
-(unsigned long long)connectedServicesCount;
-(BOOL)pairedDeviceNameUpdated;
-(id)getAACPCapabilityBits;
-(void)connectWithServices:(unsigned)arg1 ;
-(void)startVoiceCommand;
-(void)endVoiceCommand;
-(BOOL)supportsHS;
-(void)setConnectingServicemask:(unsigned)arg1 ;
-(unsigned)getConnectingServiceMask;
@end

