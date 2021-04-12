/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
*/

@class NSUUID;


@protocol PRProximityDeviceProtocol
@property (readonly) NSUUID * peer; 
@required
-(id)init;
-(NSUUID *)peer;
-(void)addSample:(BtProxData)arg1;
-(id)initWithPeer:(id)arg1 andPeerModel:(id)arg2 withError:(id*)arg3;
-(BOOL)proxReady;
-(long long)deviceProximity;

@end

