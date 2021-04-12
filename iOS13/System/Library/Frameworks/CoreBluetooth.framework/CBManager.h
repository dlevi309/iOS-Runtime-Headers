/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
*/

#import <libobjc.A.dylib/CBXpcConnectionDelegate.h>
#import <libobjc.A.dylib/CBPairingAgentParentDelegate.h>

@class CBXpcConnection, CBPairingAgent, NSData, NSString;

@interface CBManager : NSObject <CBXpcConnectionDelegate, CBPairingAgentParentDelegate> {

	CBXpcConnection* _connection;
	CBPairingAgent* _pairingAgent;
	BOOL _tccComplete;
	long long _state;
	long long _authorization;
	NSData* _advertisingAddress;
	long long _advertisingAddressType;
	NSString* _localAddressString;
	NSString* _localName;

}

@property (assign,nonatomic) long long state;                                           //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long authorization;                                   //@synthesize authorization=_authorization - In the implementation block
@property (assign,nonatomic) BOOL tccComplete;                                          //@synthesize tccComplete=_tccComplete - In the implementation block
@property (nonatomic,retain,readonly) CBPairingAgent * sharedPairingAgent; 
@property (nonatomic,copy) NSData * advertisingAddress;                                 //@synthesize advertisingAddress=_advertisingAddress - In the implementation block
@property (nonatomic,readonly) long long advertisingAddressType;                        //@synthesize advertisingAddressType=_advertisingAddressType - In the implementation block
@property (readonly) NSString * localAddressString;                                     //@synthesize localAddressString=_localAddressString - In the implementation block
@property (readonly) NSString * localName;                                              //@synthesize localName=_localName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)authorization;
-(void)dealloc;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(id)initInternal;
-(NSString *)localName;
-(NSData *)advertisingAddress;
-(CBPairingAgent *)sharedPairingAgent;
-(long long)authorization;
-(BOOL)sendMsg:(unsigned short)arg1 args:(id)arg2 ;
-(void)handleMsg:(unsigned short)arg1 args:(id)arg2 ;
-(void)setTccComplete:(BOOL)arg1 ;
-(unsigned)getAppSDKVersion;
-(void)startWithQueue:(id)arg1 options:(id)arg2 sessionType:(int)arg3 ;
-(id)sendSyncMsg:(unsigned short)arg1 args:(id)arg2 ;
-(void)_handleAdvertisingAddressChanged:(id)arg1 ;
-(BOOL)isMsgAllowedAlways:(unsigned short)arg1 ;
-(id)peerWithInfo:(id)arg1 ;
-(BOOL)isMsgAllowedWhenOff:(unsigned short)arg1 ;
-(void)closeL2CAPChannelForPeerUUID:(id)arg1 withPsm:(unsigned short)arg2 ;
-(void)handleLocalDeviceStateUpdatedMsg:(id)arg1 ;
-(void)xpcConnectionIsInvalid;
-(void)xpcConnectionDidReceiveMsg:(unsigned short)arg1 args:(id)arg2 ;
-(void)xpcConnectionDidReset;
-(void)setAuthorization:(long long)arg1 ;
-(void)extractLocalDeviceStatesDictionary:(id)arg1 ;
-(void)handleStateUpdatedMsg:(id)arg1 ;
-(void)performTCCCheck:(id)arg1 ;
-(BOOL)tccComplete;
-(void)doneWithTCC;
-(void)setConnectionTargetQueue:(id)arg1 ;
-(BOOL)sendRawCommand:(unsigned short)arg1 data:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)sendDebugMsg:(unsigned short)arg1 args:(id)arg2 ;
-(id)sendDebugSyncMsg:(unsigned short)arg1 args:(id)arg2 ;
-(void)handlePairingAgentMsg:(unsigned short)arg1 args:(id)arg2 ;
-(void)triggerBTErrorReport:(long long)arg1 ;
-(void)setAdvertisingAddress:(NSData *)arg1 ;
-(long long)advertisingAddressType;
-(NSString *)localAddressString;
@end

