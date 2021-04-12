/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	id<ACCTransportIOAccessoryPortProtocol> _delegate;
	NSString* _ioAccPortEndpointUUID;
	NSString* _ioAccPortParentConnectionUUID;

}

@property (assign,nonatomic,__weak) id<ACCTransportIOAccessoryPortProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isAuthenticated;                                                 //@synthesize isAuthenticated=_isAuthenticated - In the implementation block
@property (nonatomic,readonly) int portIDNumber;                                                   //@synthesize portIDNumber=_portIDNumber - In the implementation block
@property (nonatomic,readonly) int portTransportType;                                              //@synthesize portTransportType=_portTransportType - In the implementation block
@property (nonatomic,readonly) int resistorID;                                                     //@synthesize resistorID=_resistorID - In the implementation block
@property (nonatomic,retain) NSString * ioAccPortEndpointUUID;                                     //@synthesize ioAccPortEndpointUUID=_ioAccPortEndpointUUID - In the implementation block
@property (assign,nonatomic,__weak) NSString * ioAccPortParentConnectionUUID;                      //@synthesize ioAccPortParentConnectionUUID=_ioAccPortParentConnectionUUID - In the implementation block
-(void)dealloc;
-(id<ACCTransportIOAccessoryPortProtocol>)delegate;
-(void)setDelegate:(id<ACCTransportIOAccessoryPortProtocol>)arg1 ;
-(BOOL)isAuthenticated;
-(void)setIsAuthenticated:(BOOL)arg1 ;
-(void)_handleIncomingData:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 andIOService:(unsigned)arg2 ;
-(BOOL)transmitData:(id)arg1 ;
-(void)_registerForIOAccessoryPortInterestNotifications;
-(NSString *)ioAccPortEndpointUUID;
-(void)setIoAccPortEndpointUUID:(NSString *)arg1 ;
-(void)setIoAccPortParentConnectionUUID:(NSString *)arg1 ;
-(int)resistorID;
-(int)portIDNumber;
-(void)_handleAccessoryPortDetach;
-(void)_handleResistorIDChange:(int)arg1 ;
-(void)_handlePropertyChange;
-(NSString *)ioAccPortParentConnectionUUID;
-(int)portTransportType;
@end

