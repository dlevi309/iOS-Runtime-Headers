/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSUUID;

@interface HMDAccessoryReachabilityElectionParameter : HMFObject {

	BOOL _reachable;
	NSUUID* _identifier;

}

@property (copy,readonly) NSUUID * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (getter=isReachable,readonly) BOOL reachable;              //@synthesize reachable=_reachable - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSUUID *)identifier;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(BOOL)isReachable;
@end

