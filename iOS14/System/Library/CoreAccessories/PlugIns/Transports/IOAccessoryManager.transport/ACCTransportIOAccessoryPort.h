/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Transports/IOAccessoryManager.transport/IOAccessoryManager
*/

#import <IOAccessoryManager/IOAccessoryManager-Structs.h>
#import <IOAccessoryManager/ACCTransportIOAccessoryBase.h>

@protocol ACCTransportIOAccessoryPortProtocol;
@class NSString;

@interface ACCTransportIOAccessoryPort : ACCTransportIOAccessoryBase {

	CFRunLoopSourceRef _notificationRunLoopSource;
	BOOL _isAuthenticated;
	int _portIDNumber;
	int _portTransportType;
	int _resistorID;
	int _portStreamType;
	id<ACCTransportIOAccessoryPortProtocol> _delegate;
	NSString* _ioAccPortEndpointUUID;
	NSString* _ioAccPortParentConnectionUUID;

}

@property (assign,nonatomic,__weak) id<ACCTransportIOAccessoryPortProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isAuthenticated;                                                 //@synthesize isAuthenticated=_isAuthenticated - In the implementation block
@property (nonatomic,readonly) int portIDNumber;                                                   //@synthesize portIDNumber=_portIDNumber - In the implementation block
@property (nonatomic,readonly) int portTransportType;                                              //@synthesize portTransportType=_portTransportType - In the implementation block
@property (nonatomic,readonly) int resistorID;                                                     //@synthesize resistorID=_resistorID - In the implementation block
@property (nonatomic,readonly) int portStreamType;                                                 //@synthesize portStreamType=_portStreamType - In the implementation block
@property (nonatomic,retain) NSString * ioAccPortEndpointUUID;                                     //@synthesize ioAccPortEndpointUUID=_ioAccPortEndpointUUID - In the implementation block
@property (assign,nonatomic,__weak) NSString * ioAccPortParentConnectionUUID;                      //@synthesize ioAccPortParentConnectionUUID=_ioAccPortParentConnectionUUID - In the implementation block
-(BOOL)isAuthenticated;
-(NSString *)ioAccPortParentConnectionUUID;
-(void)_handleResistorIDChange:(int)arg1 ;
-(void)_registerForIOAccessoryPortInterestNotifications;
-(id<ACCTransportIOAccessoryPortProtocol>)delegate;
-(void)setIoAccPortParentConnectionUUID:(NSString *)arg1 ;
-(BOOL)transmitData:(id)arg1 ;
-(void)_handleAccessoryPortDetach;
-(int)portStreamType;
-(int)resistorID;
-(id)initWithDelegate:(id)arg1 andIOService:(unsigned)arg2 ;
-(void)_handleIncomingData:(id)arg1 ;
-(void)portServiceRegistrationComplete;
-(void)setDelegate:(id<ACCTransportIOAccessoryPortProtocol>)arg1 ;
-(int)portIDNumber;
-(void)_handlePropertyChange;
-(void)setIoAccPortEndpointUUID:(NSString *)arg1 ;
-(void)setIsAuthenticated:(BOOL)arg1 ;
-(NSString *)ioAccPortEndpointUUID;
-(int)portTransportType;
-(void)dealloc;
@end

