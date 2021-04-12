/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDHomePresenceCheck.h>

@class NSDictionary;

@interface HMDHomePresenceRemote : HMFObject <HMDHomePresenceCheck> {

	NSDictionary* _userPresenceMap;

}

@property (nonatomic,readonly) NSDictionary * userPresenceMap;              //@synthesize userPresenceMap=_userPresenceMap - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithPresenceByPairingIdentity:(id)arg1 ;
-(id)initWithPresenceByUserId:(id)arg1 ;
-(BOOL)isUserAtHome:(id)arg1 ;
-(BOOL)isUserNotAtHome:(id)arg1 ;
-(BOOL)isAnyUserAtHome;
-(BOOL)isNoUserAtHome;
-(BOOL)areUsersAtHome:(id)arg1 ;
-(BOOL)areUsersNotAtHome:(id)arg1 ;
-(NSDictionary *)userPresenceMap;
-(id)regionForUser:(id)arg1 ;
@end

