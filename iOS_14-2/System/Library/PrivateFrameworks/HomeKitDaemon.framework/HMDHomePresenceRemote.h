/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDHomePresenceCheck.h>

@class NSDictionary;

@interface HMDHomePresenceRemote : HMFObject <HMDHomePresenceCheck> {

	NSDictionary* _userPresenceMap;

}

@property (nonatomic,readonly) NSDictionary * userPresenceMap;              //@synthesize userPresenceMap=_userPresenceMap - In the implementation block
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
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

