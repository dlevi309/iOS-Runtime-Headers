/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
*/

#import <Proximity/Proximity-Structs.h>
#import <libobjc.A.dylib/PRProximityDeviceProtocol.h>

@protocol OS_os_log;
@class NSObject, NSString, PRProximityDeviceParameters, NSUUID;

@interface PRProximityDevice : NSObject <PRProximityDeviceProtocol> {

	NSObject*<OS_os_log> _logger;
	NSString* _model;
	PRProximityDeviceParameters* _proximityParameters;
	deque<BtProxData, std::__1::allocator<BtProxData> >* _samples;
	long long _proximity;
	NSUUID* _peer;

}

@property (readonly) NSUUID * peer;              //@synthesize peer=_peer - In the implementation block
-(id)init;
-(void)addSample:(BtProxData)arg1 ;
-(NSUUID *)peer;
-(id)initWithPeer:(id)arg1 andPeerModel:(id)arg2 withError:(id*)arg3 ;
-(BOOL)proxReady;
-(long long)deviceProximity;
-(void)estimateProximity;
@end

