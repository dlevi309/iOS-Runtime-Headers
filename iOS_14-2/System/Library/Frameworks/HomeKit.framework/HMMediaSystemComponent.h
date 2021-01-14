/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class HMFUnfairLock, HMMediaProfile, HMMediaSystemRole, NSUUID, HMAccessory, NSString;

@interface HMMediaSystemComponent : NSObject <HMFLogging, NSSecureCoding, HMObjectMerge, NSCopying, NSMutableCopying> {

	HMFUnfairLock* _lock;
	HMMediaProfile* _mediaProfile;
	HMMediaSystemRole* _role;
	NSUUID* _uniqueIdentifier;
	HMAccessory* _accessory;
	NSUUID* _uuid;

}

@property (nonatomic,readonly) NSUUID * uuid;                                     //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic,__weak) HMAccessory * accessory;                      //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,__weak,readonly) HMMediaProfile * mediaProfile;              //@synthesize mediaProfile=_mediaProfile - In the implementation block
@property (nonatomic,readonly) HMMediaSystemRole * role;                          //@synthesize role=_role - In the implementation block
@property (nonatomic,readonly) NSUUID * uniqueIdentifier;                         //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(id)mediaSystemComponentWithDictionary:(id)arg1 home:(id)arg2 ;
-(id)serialize;
-(NSUUID *)uuid;
-(void)_updateAccessoryReference:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRole:(HMMediaSystemRole *)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(HMAccessory *)accessory;
-(id)logIdentifier;
-(HMMediaProfile *)mediaProfile;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)initWithMediaProfile:(id)arg1 role:(id)arg2 ;
-(void)setAccessory:(HMAccessory *)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(unsigned long long)hash;
-(void)_unconfigure;
-(id)initWithCoder:(id)arg1 ;
-(HMMediaSystemRole *)role;
-(id)initWithUUID:(id)arg1 mediaProfile:(id)arg2 role:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

