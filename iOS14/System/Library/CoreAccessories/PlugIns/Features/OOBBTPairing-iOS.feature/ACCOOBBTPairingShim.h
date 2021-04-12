/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)uid;
-(id<ACCOOBBTPairingShimProtocol>)delegate;
-(id)getUID;
-(void)setDelegate:(id<ACCOOBBTPairingShimProtocol>)arg1 ;
-(id)description;
-(id)initWithDelegate:(id)arg1 ;
-(void)accessoryDetached:(id)arg1 ;
-(void)dealloc;
-(void)beginPairingWithCurrentAccessory:(id)arg1 ;
-(BOOL)tryProcessXPCMessage:(id)arg1 connection:(id)arg2 server:(id)arg3 ;
-(void)accessoryAttached:(id)arg1 accInfoDict:(id)arg2 ;
-(void)accessoryInfo:(id)arg1 oobBtPairingUID:(id)arg2 accessoryMacAddr:(id)arg3 deviceClass:(unsigned)arg4 ;
-(void)accessoryPairingCompletion:(id)arg1 oobBtPairingUID:(id)arg2 result:(unsigned char)arg3 ;
@end

