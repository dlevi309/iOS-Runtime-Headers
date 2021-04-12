/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMFLocking, OS_dispatch_queue;
@class HMMediaSystemRole, NSUUID, HMDAccessory, NSObject, HMDMediaProfile, NSString;

@interface HMDMediaSystemComponent : HMFObject <NSSecureCoding, HMFDumpState, HMFLogging> {

	id<HMFLocking> _lock;
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
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(id)mediaSystemComponentWithDictionary:(id)arg1 home:(id)arg2 ;
+(BOOL)decodeComponents:(id)arg1 leftUUID:(id*)arg2 leftAccessory:(id*)arg3 rightUUID:(id*)arg4 rightAccessory:(id*)arg5 ;
+(id)componentsWithLeftComponent:(id)arg1 leftAccessory:(id)arg2 rightComponent:(id)arg3 rightAccessory:(id)arg4 ;
+(id)accessoryForMediaSystemComponentWithDictionary:(id)arg1 home:(id)arg2 ;
-(id)serialize;
-(NSUUID *)uuid;
-(id)privateDescription;
-(id)dumpState;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRole:(HMMediaSystemRole *)arg1 ;
-(HMDAccessory *)accessory;
-(id)logIdentifier;
-(HMDMediaProfile *)mediaProfile;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(id)attributeDescriptions;
-(id)initWithCoder:(id)arg1 ;
-(HMMediaSystemRole *)role;
-(void)dealloc;
-(id)initWithUUID:(id)arg1 accessory:(id)arg2 role:(id)arg3 ;
@end

