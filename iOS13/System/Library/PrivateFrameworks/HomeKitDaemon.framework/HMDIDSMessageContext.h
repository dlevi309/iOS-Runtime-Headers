/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSUUID, HMFMessageDestination, NSDictionary;

@interface HMDIDSMessageContext : HMFObject {

	NSUUID* _identifier;
	HMFMessageDestination* _destination;
	NSDictionary* _userInfo;

}

@property (copy,readonly) NSUUID * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (readonly) HMFMessageDestination * destination;              //@synthesize destination=_destination - In the implementation block
@property (copy,readonly) NSDictionary * userInfo;                     //@synthesize userInfo=_userInfo - In the implementation block
-(id)init;
-(NSDictionary *)userInfo;
-(NSUUID *)identifier;
-(HMFMessageDestination *)destination;
-(id)initWithIdentifier:(id)arg1 destination:(id)arg2 userInfo:(id)arg3 ;
@end

