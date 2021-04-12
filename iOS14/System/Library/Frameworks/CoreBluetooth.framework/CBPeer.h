/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
*/

#import <CoreBluetooth/CoreBluetooth-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, CBManager;

@interface CBPeer : NSObject <NSCopying> {

	BOOL _isLinkEncrypted;
	unsigned char _connectedTransport;
	NSUUID* _identifier;
	unsigned long long _mtuLength;
	long long _pairingState;
	long long _hostState;
	long long _role;
	CBManager* _manager;

}

@property (assign,nonatomic) unsigned long long mtuLength;                  //@synthesize mtuLength=_mtuLength - In the implementation block
@property (assign,nonatomic) long long pairingState;                        //@synthesize pairingState=_pairingState - In the implementation block
@property (assign,nonatomic) long long hostState;                           //@synthesize hostState=_hostState - In the implementation block
@property (assign,nonatomic) BOOL isLinkEncrypted;                          //@synthesize isLinkEncrypted=_isLinkEncrypted - In the implementation block
@property (assign,nonatomic) long long role;                                //@synthesize role=_role - In the implementation block
@property (assign,nonatomic,__weak) CBManager * manager;                    //@synthesize manager=_manager - In the implementation block
@property (assign,nonatomic) unsigned char connectedTransport;              //@synthesize connectedTransport=_connectedTransport - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                         //@synthesize identifier=_identifier - In the implementation block
-(BOOL)isLinkEncrypted;
-(unsigned long long)mtuLength;
-(unsigned char)connectedTransport;
-(long long)pairingState;
-(void)setIsLinkEncrypted:(BOOL)arg1 ;
-(id)sendInternalSyncMsg:(int)arg1 args:(id)arg2 ;
-(long long)hostState;
-(void)untag:(id)arg1 ;
-(void)setConnectedTransport:(unsigned char)arg1 ;
-(void)handleLinkEncryptionChanged:(id)arg1 ;
-(void)tag:(id)arg1 ;
-(id)initWithInfo:(id)arg1 manager:(id)arg2 ;
-(void)handleMTUChanged:(id)arg1 ;
-(BOOL)hasTag:(id)arg1 ;
-(void)setHostState:(long long)arg1 ;
-(void)setManager:(CBManager *)arg1 ;
-(void)setRole:(long long)arg1 ;
-(void)setPairingState:(long long)arg1 ;
-(void)sendInternalMsg:(int)arg1 args:(id)arg2 ;
-(id)peerStateToString:(long long)arg1 ;
-(CBManager *)manager;
-(unsigned long long)hash;
-(NSUUID *)identifier;
-(void)handleMsg:(int)arg1 args:(id)arg2 ;
-(long long)role;
-(void)setMtuLength:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)handleHostStateUpdated:(id)arg1 ;
@end

