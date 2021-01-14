/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>

@class HMFUnfairLock, NSString, NSNumber, NSUUID, HMDHome;

@interface HMDAccessoryNetworkProtectionGroup : NSObject <NSSecureCoding, HMDBackingStoreObjectProtocol> {

	HMFUnfairLock* _lock;
	long long _targetProtectionMode;
	NSString* _manufacturer;
	NSNumber* _category;
	NSUUID* _uuid;
	HMDHome* _home;

}

@property (assign,nonatomic,__weak) HMDHome * home;                       //@synthesize home=_home - In the implementation block
@property (assign,nonatomic) long long targetProtectionMode;              //@synthesize targetProtectionMode=_targetProtectionMode - In the implementation block
@property (nonatomic,retain) NSString * manufacturer;                     //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,retain) NSNumber * category;                         //@synthesize category=_category - In the implementation block
@property (readonly) NSUUID * uuid;                                       //@synthesize uuid=_uuid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)manufacturer;
-(NSUUID *)uuid;
-(void)setCategory:(NSNumber *)arg1 ;
-(void)setManufacturer:(NSString *)arg1 ;
-(long long)targetProtectionMode;
-(void)setTargetProtectionMode:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)category;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setHome:(HMDHome *)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(HMDHome *)home;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(void)configureWithHome:(id)arg1 ;
-(id)modelForVersion:(long long)arg1 ;
-(id)modelWithObjectChangeType:(unsigned long long)arg1 ;
-(id)initWithUUID:(id)arg1 manufacturer:(id)arg2 category:(id)arg3 targetProtectionMode:(long long)arg4 ;
@end

