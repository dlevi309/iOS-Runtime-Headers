/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Transports/IOAccessoryManager.transport/IOAccessoryManager
*/

#import <IOAccessoryManager/ACCTransportIOAccessoryBase.h>

@protocol ACCTransportIOAccessoryEAProtocol;
@class NSString;

@interface ACCTransportIOAccessoryEA : ACCTransportIOAccessoryBase {

	char* _eaDataReadBuffer;
	unsigned long long _eaDataReadBufferDataLength;
	BOOL _sessionOpen;
	id<ACCTransportIOAccessoryEAProtocol> _delegate;
	NSString* _endpointUUID;
	NSString* _parentConnectionUUID;
	NSString* _eaProtocol;
	NSString* _deviceVendorName;
	NSString* _deviceName;
	NSString* _deviceModelNumber;
	NSString* _deviceHardwareRevision;
	NSString* _deviceFirmwareRevision;
	NSString* _deviceSerialNumber;
	NSString* _deviceDockType;

}

@property (nonatomic,retain) NSString * eaProtocol;                                              //@synthesize eaProtocol=_eaProtocol - In the implementation block
@property (nonatomic,retain) NSString * deviceVendorName;                                        //@synthesize deviceVendorName=_deviceVendorName - In the implementation block
@property (nonatomic,retain) NSString * deviceName;                                              //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,retain) NSString * deviceModelNumber;                                       //@synthesize deviceModelNumber=_deviceModelNumber - In the implementation block
@property (nonatomic,retain) NSString * deviceHardwareRevision;                                  //@synthesize deviceHardwareRevision=_deviceHardwareRevision - In the implementation block
@property (nonatomic,retain) NSString * deviceFirmwareRevision;                                  //@synthesize deviceFirmwareRevision=_deviceFirmwareRevision - In the implementation block
@property (nonatomic,retain) NSString * deviceSerialNumber;                                      //@synthesize deviceSerialNumber=_deviceSerialNumber - In the implementation block
@property (nonatomic,retain) NSString * deviceDockType;                                          //@synthesize deviceDockType=_deviceDockType - In the implementation block
@property (assign,nonatomic,__weak) id<ACCTransportIOAccessoryEAProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * endpointUUID;                                            //@synthesize endpointUUID=_endpointUUID - In the implementation block
@property (assign,nonatomic,__weak) NSString * parentConnectionUUID;                             //@synthesize parentConnectionUUID=_parentConnectionUUID - In the implementation block
@property (nonatomic,readonly) BOOL sessionOpen;                                                 //@synthesize sessionOpen=_sessionOpen - In the implementation block
-(NSString *)deviceName;
-(id<ACCTransportIOAccessoryEAProtocol>)delegate;
-(BOOL)transmitData:(id)arg1 ;
-(NSString *)deviceVendorName;
-(id)initWithDelegate:(id)arg1 andIOService:(unsigned)arg2 ;
-(void)setDelegate:(id<ACCTransportIOAccessoryEAProtocol>)arg1 ;
-(id)description;
-(void)setDeviceVendorName:(NSString *)arg1 ;
-(void)setDeviceSerialNumber:(NSString *)arg1 ;
-(NSString *)deviceFirmwareRevision;
-(void)setDeviceHardwareRevision:(NSString *)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSString *)deviceSerialNumber;
-(NSString *)deviceModelNumber;
-(NSString *)deviceHardwareRevision;
-(void)setDeviceFirmwareRevision:(NSString *)arg1 ;
-(void)setDeviceModelNumber:(NSString *)arg1 ;
-(NSString *)endpointUUID;
-(void)dealloc;
-(NSString *)parentConnectionUUID;
-(NSString *)deviceDockType;
-(void)setEndpointUUID:(NSString *)arg1 ;
-(void)setParentConnectionUUID:(NSString *)arg1 ;
-(void)setDeviceDockType:(NSString *)arg1 ;
-(NSString *)eaProtocol;
-(BOOL)openEAServiceSession;
-(void)closeEAServiceSession;
-(void)_checkEAInfo;
-(BOOL)sessionOpen;
-(void)_registerEAReadCallback;
-(BOOL)_handleIncomingEAData;
-(void)setEaProtocol:(NSString *)arg1 ;
@end

