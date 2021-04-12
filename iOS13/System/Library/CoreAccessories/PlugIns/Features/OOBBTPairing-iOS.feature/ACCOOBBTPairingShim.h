/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/OOBBTPairing-iOS.feature/OOBBTPairing-iOS
*/

#import <libobjc.A.dylib/ACCiAP2ShimServerDelegate.h>

@protocol ACCOOBBTPairingShimProtocol;
@class NSString;

@interface ACCOOBBTPairingShim : NSObject <ACCiAP2ShimServerDelegate> {

	id<ACCOOBBTPairingShimProtocol> _delegate;
	NSString* _uid;

}

@property (readonly) NSString * uid;                                                       //@synthesize uid=_uid - In the implementation block
@property (assign,nonatomic,__weak) id<ACCOOBBTPairingShimProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id)description;
-(id<ACCOOBBTPairingShimProtocol>)delegate;
-(void)setDelegate:(id<ACCOOBBTPairingShimProtocol>)arg1 ;
-(NSString *)uid;
-(id)initWithDelegate:(id)arg1 ;
-(id)getUID;
-(BOOL)tryProcessXPCMessage:(id)arg1 connection:(id)arg2 server:(id)arg3 ;
-(void)accessoryDetached:(id)arg1 ;
-(void)beginPairingWithCurrentAccessory:(id)arg1 ;
-(void)accessoryAttached:(id)arg1 accInfoDict:(id)arg2 ;
-(void)accessoryInfo:(id)arg1 oobBtPairingUID:(id)arg2 accessoryMacAddr:(id)arg3 deviceClass:(unsigned)arg4 ;
-(void)accessoryPairingCompletion:(id)arg1 oobBtPairingUID:(id)arg2 result:(unsigned char)arg3 ;
@end

