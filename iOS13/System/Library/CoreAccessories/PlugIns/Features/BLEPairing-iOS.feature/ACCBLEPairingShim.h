/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/BLEPairing-iOS.feature/BLEPairing-iOS
*/

#import <libobjc.A.dylib/ACCiAP2ShimServerDelegate.h>

@protocol ACCBLEPairingShimProtocol;
@class NSString;

@interface ACCBLEPairingShim : NSObject <ACCiAP2ShimServerDelegate> {

	id<ACCBLEPairingShimProtocol> _delegate;
	NSString* _uid;

}

@property (readonly) NSString * uid;                                                     //@synthesize uid=_uid - In the implementation block
@property (assign,nonatomic,__weak) id<ACCBLEPairingShimProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id)description;
-(id<ACCBLEPairingShimProtocol>)delegate;
-(void)setDelegate:(id<ACCBLEPairingShimProtocol>)arg1 ;
-(NSString *)uid;
-(id)initWithDelegate:(id)arg1 ;
-(id)getUID;
-(BOOL)tryProcessXPCMessage:(id)arg1 connection:(id)arg2 server:(id)arg3 ;
-(void)accessoryAttached:(id)arg1 blePairingUUID:(id)arg2 accInfoDict:(id)arg3 supportedPairTypes:(id)arg4 ;
-(void)accessoryDetached:(id)arg1 blePairingUUID:(id)arg2 ;
-(void)stateUpdate:(id)arg1 blePairingUUID:(id)arg2 validMask:(unsigned)arg3 btRadioOn:(BOOL)arg4 pairingState:(int)arg5 pairingModeOn:(BOOL)arg6 ;
-(void)stateUpdate:(id)arg1 blePairingUUID:(id)arg2 pairType:(int)arg3 pairInfoList:(id)arg4 ;
-(void)dataUpdate:(id)arg1 blePairingUUID:(id)arg2 pairType:(int)arg3 pairData:(id)arg4 ;
@end

