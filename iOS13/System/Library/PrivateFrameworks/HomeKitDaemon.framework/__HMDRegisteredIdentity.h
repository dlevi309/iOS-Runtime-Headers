/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class HMFPairingIdentity, NSMutableArray;

@interface __HMDRegisteredIdentity : HMFObject {

	HMFPairingIdentity* _identity;
	NSMutableArray* _registeredObjects;

}

@property (copy,readonly) HMFPairingIdentity * identity;              //@synthesize identity=_identity - In the implementation block
@property (readonly) NSMutableArray * registeredObjects;              //@synthesize registeredObjects=_registeredObjects - In the implementation block
-(id)init;
-(id)description;
-(id)debugDescription;
-(HMFPairingIdentity *)identity;
-(id)initWithIdentity:(id)arg1 ;
-(NSMutableArray *)registeredObjects;
@end

