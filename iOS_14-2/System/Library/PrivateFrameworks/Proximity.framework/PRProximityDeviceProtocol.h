/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
*/

@class NSUUID;


@protocol PRProximityDeviceProtocol
@property (readonly) NSUUID * peer; 
@required
-(id)init;
-(void)addSample:(BtProxData)arg1;
-(NSUUID *)peer;
-(id)initWithPeer:(id)arg1 andPeerModel:(id)arg2 withError:(id*)arg3;
-(BOOL)proxReady;
-(long long)deviceProximity;

@end

