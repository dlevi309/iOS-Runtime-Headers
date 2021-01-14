/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	NSData* _advertisingAddress;
	long long _advertisingAddressType;
	NSData* _nonConnectableAdvertisingAddress;
	long long _nonConnectableAdvertisingAddressType;
	NSString* _localAddressString;
	NSString* _localName;

}

@property (assign,nonatomic) long long state;                                               //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL tccComplete;                                              //@synthesize tccComplete=_tccComplete - In the implementation block
@property (nonatomic,retain,readonly) CBPairingAgent * sharedPairingAgent; 
@property (nonatomic,copy) NSData * advertisingAddress;                                     //@synthesize advertisingAddress=_advertisingAddress - In the implementation block
@property (nonatomic,readonly) long long advertisingAddressType;                            //@synthesize advertisingAddressType=_advertisingAddressType - In the implementation block
@property (nonatomic,copy) NSData * nonConnectableAdvertisingAddress;                       //@synthesize nonConnectableAdvertisingAddress=_nonConnectableAdvertisingAddress - In the implementation block
@property (nonatomic,readonly) long long nonConnectableAdvertisingAddressType;              //@synthesize nonConnectableAdvertisingAddressType=_nonConnectableAdvertisingAddressType - In the implementation block
@property (readonly) NSString * localAddressString;                                         //@synthesize localAddressString=_localAddressString - In the implementation block
@property (readonly) NSString * localName;                                                  //@synthesize localName=_localName - In the implementation block
@property (nonatomic,readonly) long long authorization; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)authorization;
+(BOOL)tccAvailable;
-(void)setConnectionTargetQueue:(id)arg1 ;
-(NSString *)localAddressString;
-(BOOL)sendDebugMsg:(unsigned short)arg1 args:(id)arg2 ;
-(id)sendSyncMsg:(unsigned short)arg1 args:(id)arg2 ;
-(NSData *)advertisingAddress;
-(void)triggerBTErrorReport:(long long)arg1 ;
-(id)peerWithInfo:(id)arg1 ;
-(NSData *)nonConnectableAdvertisingAddress;
-(void)performTCCCheck:(id)arg1 ;
-(void)setNonConnectableAdvertisingAddress:(NSData *)arg1 ;
-(void)startWithQueue:(id)arg1 options:(id)arg2 sessionType:(int)arg3 ;
-(id)sendDebugSyncMsg:(unsigned short)arg1 args:(id)arg2 ;
-(BOOL)isMsgAllowedWhenOff:(unsigned short)arg1 ;
-(BOOL)tccComplete;
-(BOOL)sendRawCommand:(unsigned short)arg1 data:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)xpcConnectionDidReset;
-(void)doneWithTCC;
-(void)setAdvertisingAddress:(NSData *)arg1 ;
-(void)handlePairingAgentMsg:(unsigned short)arg1 args:(id)arg2 ;
-(id)initInternal;
-(void)handleLocalDeviceStateUpdatedMsg:(id)arg1 ;
-(long long)authorization;
-(unsigned)getAppSDKVersion;
-(long long)advertisingAddressType;
-(NSString *)localName;
-(CBPairingAgent *)sharedPairingAgent;
-(BOOL)sendMsg:(unsigned short)arg1 args:(id)arg2 ;
-(long long)nonConnectableAdvertisingAddressType;
-(void)xpcConnectionDidReceiveMsg:(unsigned short)arg1 args:(id)arg2 ;
-(void)setState:(long long)arg1 ;
-(void)closeL2CAPChannelForPeerUUID:(id)arg1 withPsm:(unsigned short)arg2 ;
-(long long)state;
-(void)_handleAdvertisingAddressChanged:(id)arg1 ;
-(void)handleMsg:(unsigned short)arg1 args:(id)arg2 ;
-(void)extractLocalDeviceStatesDictionary:(id)arg1 ;
-(void)xpcConnectionIsInvalid;
-(void)handleStateUpdatedMsg:(id)arg1 ;
-(void)setTccComplete:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)isMsgAllowedAlways:(unsigned short)arg1 ;
@end

