/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMFUnfairLock, HMHome, NSUUID, NSString, HMAccessoryCategory, NSArray;

@interface HMAccessoryNetworkProtectionGroup : NSObject <HMObjectMerge, NSSecureCoding> {

	HMFUnfairLock* _lock;
	HMHome* _home;
	NSUUID* _uniqueIdentifier;
	NSString* _manufacturer;
	HMAccessoryCategory* _category;
	long long _targetProtectionMode;
	NSUUID* _uuid;

}

@property (__weak) HMHome * home;                                   //@synthesize home=_home - In the implementation block
@property (readonly) NSUUID * uuid;                                 //@synthesize uuid=_uuid - In the implementation block
@property (copy) NSString * manufacturer;                           //@synthesize manufacturer=_manufacturer - In the implementation block
@property (retain) HMAccessoryCategory * category;                  //@synthesize category=_category - In the implementation block
@property (assign) long long targetProtectionMode;                  //@synthesize targetProtectionMode=_targetProtectionMode - In the implementation block
@property (readonly) NSUUID * uniqueIdentifier;                     //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (copy,readonly) NSArray * accessories; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HMAccessoryCategory *)category;
-(void)setCategory:(HMAccessoryCategory *)arg1 ;
-(NSUUID *)uuid;
-(NSUUID *)uniqueIdentifier;
-(HMHome *)home;
-(NSString *)manufacturer;
-(void)setManufacturer:(NSString *)arg1 ;
-(void)setHome:(HMHome *)arg1 ;
-(NSArray *)accessories;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(long long)targetProtectionMode;
-(void)setTargetProtectionMode:(long long)arg1 ;
-(void)_configureWithHome:(id)arg1 ;
-(id)initWithUUID:(id)arg1 manufacturer:(id)arg2 category:(id)arg3 protectionMode:(long long)arg4 ;
-(void)updateProtectionMode:(long long)arg1 completion:(/*^block*/id)arg2 ;
@end

