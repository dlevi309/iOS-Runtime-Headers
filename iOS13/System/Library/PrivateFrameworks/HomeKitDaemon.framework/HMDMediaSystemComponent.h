/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class HMMediaSystemRole, NSUUID, HMDAccessory, NSObject, HMDMediaProfile, NSString;

@interface HMDMediaSystemComponent : NSObject <NSSecureCoding, HMFDumpState, HMFLogging> {

	HMMediaSystemRole* _role;
	NSUUID* _uuid;
	HMDAccessory* _accessory;
	NSObject*<OS_dispatch_queue> _propertyQueue;

}

@property (nonatomic,__weak,readonly) HMDMediaProfile * mediaProfile; 
@property (nonatomic,readonly) NSUUID * uuid;                                           //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,__weak,readonly) HMDAccessory * accessory;                         //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) HMMediaSystemRole * role;                                //@synthesize role=_role - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;              //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)mediaSystemComponentWithDictionary:(id)arg1 home:(id)arg2 ;
+(id)accessoryForMediaSystemComponentWithDictionary:(id)arg1 home:(id)arg2 ;
-(void)dealloc;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HMMediaSystemRole *)role;
-(NSUUID *)uuid;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(id)serialize;
-(void)setRole:(HMMediaSystemRole *)arg1 ;
-(HMDAccessory *)accessory;
-(HMDMediaProfile *)mediaProfile;
-(id)logIdentifier;
-(id)dumpState;
-(id)initWithUUID:(id)arg1 accessory:(id)arg2 role:(id)arg3 ;
@end

