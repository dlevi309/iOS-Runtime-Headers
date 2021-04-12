/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>

@class HAPAccessoryServerBTLE;

@interface HAPDiscoveredBTLEAccessoryServerTuple : HMFObject {

	HAPAccessoryServerBTLE* _accessoryServer;
	double _lastSeen;

}

@property (nonatomic,readonly) HAPAccessoryServerBTLE * accessoryServer;              //@synthesize accessoryServer=_accessoryServer - In the implementation block
@property (assign,nonatomic) double lastSeen;                                         //@synthesize lastSeen=_lastSeen - In the implementation block
+(id)discoveredAccessoryServerTupleWithAccessoryServer:(id)arg1 ;
-(double)lastSeen;
-(void)setLastSeen:(double)arg1 ;
-(HAPAccessoryServerBTLE *)accessoryServer;
@end

