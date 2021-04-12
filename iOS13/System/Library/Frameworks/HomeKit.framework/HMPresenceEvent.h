/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, HMPresenceEventActivation, HMMutableArray;

@interface HMPresenceEvent : HMEvent <NSSecureCoding, NSCopying, NSMutableCopying> {

	NSString* _presenceType;
	HMPresenceEventActivation* _activation;
	unsigned long long _presenceEventType;
	unsigned long long _presenceUserType;
	HMMutableArray* _observedUsers;

}

@property (nonatomic,retain) NSString * presenceType;                                 //@synthesize presenceType=_presenceType - In the implementation block
@property (nonatomic,retain) HMPresenceEventActivation * activation;                  //@synthesize activation=_activation - In the implementation block
@property (nonatomic,readonly) unsigned long long activationGranularity; 
@property (nonatomic,readonly) HMMutableArray * observedUsers;                        //@synthesize observedUsers=_observedUsers - In the implementation block
@property (nonatomic,readonly) unsigned long long presenceEventType;                  //@synthesize presenceEventType=_presenceEventType - In the implementation block
@property (nonatomic,readonly) unsigned long long presenceUserType;                   //@synthesize presenceUserType=_presenceUserType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)createWithDictionary:(id)arg1 home:(id)arg2 ;
+(BOOL)isSupportedForHome:(id)arg1 ;
+(id)users:(id)arg1 home:(id)arg2 presenceType:(id)arg3 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)users;
-(id)_serializeForAdd;
-(void)_handleEventUpdatedNotification:(id)arg1 ;
-(unsigned long long)presenceEventType;
-(void)_update:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithDict:(id)arg1 presenceType:(id)arg2 users:(id)arg3 activation:(id)arg4 ;
-(id)initWithPresenceType:(id)arg1 users:(id)arg2 ;
-(id)initWithDict:(id)arg1 presenceType:(id)arg2 users:(id)arg3 activationGranularity:(unsigned long long)arg4 ;
-(id)initWithPresenceEventType:(unsigned long long)arg1 presenceUserType:(unsigned long long)arg2 users:(id)arg3 ;
-(NSString *)presenceType;
-(HMPresenceEventActivation *)activation;
-(unsigned long long)activationGranularity;
-(unsigned long long)presenceUserType;
-(void)setPresenceType:(NSString *)arg1 ;
-(void)setActivation:(HMPresenceEventActivation *)arg1 ;
-(HMMutableArray *)observedUsers;
-(void)_updatePresenceType:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateUsers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithPresenceType:(id)arg1 ;
-(id)initWithPresenceEventType:(unsigned long long)arg1 presenceUserType:(unsigned long long)arg2 ;
-(void)setPresenceEventType:(unsigned long long)arg1 ;
-(void)setPresenceUserType:(unsigned long long)arg1 ;
-(void)updatePresenceType:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateUsers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

