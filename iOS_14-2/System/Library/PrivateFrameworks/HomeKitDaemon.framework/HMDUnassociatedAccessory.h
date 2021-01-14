/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMFLocking.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol HMFLocking;
@class NSUUID, NSString, HMAccessoryCategory, HMDAccessoryAdvertisement, HMFMessageDispatcher;

@interface HMDUnassociatedAccessory : HMFObject <HMFLogging, HMFMessageReceiver, HMFLocking, NSSecureCoding> {

	NSUUID* _uuid;
	id<HMFLocking> _lock;
	NSString* _name;
	HMAccessoryCategory* _category;
	NSString* _identifier;
	long long _associationOptions;
	HMDAccessoryAdvertisement* _accessoryAdvertisement;
	HMFMessageDispatcher* _messageDispatcher;

}

@property (nonatomic,retain) HMDAccessoryAdvertisement * accessoryAdvertisement;              //@synthesize accessoryAdvertisement=_accessoryAdvertisement - In the implementation block
@property (nonatomic,readonly) HMFMessageDispatcher * messageDispatcher;                      //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (nonatomic,copy) NSString * name;                                                   //@synthesize name=_name - In the implementation block
@property (retain) HMAccessoryCategory * category;                                            //@synthesize category=_category - In the implementation block
@property (setter=setUUID:,copy) NSUUID * uuid;                                               //@synthesize uuid=_uuid - In the implementation block
@property (copy,readonly) NSString * identifier;                                              //@synthesize identifier=_identifier - In the implementation block
@property (getter=isReachable,readonly) BOOL reachable; 
@property (readonly) long long associationOptions;                                            //@synthesize associationOptions=_associationOptions - In the implementation block
@property (readonly) unsigned long long transportTypes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
+(id)otherAccessoryCategory;
-(BOOL)isReachable;
-(NSUUID *)messageTargetUUID;
-(void)unlock;
-(NSUUID *)uuid;
-(void)setCategory:(HMAccessoryCategory *)arg1 ;
-(id)init;
-(void)_registerForMessages;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)shortDescription;
-(NSString *)debugDescription;
-(HMAccessoryCategory *)category;
-(void)lock;
-(id)logIdentifier;
-(HMFMessageDispatcher *)messageDispatcher;
-(NSString *)name;
-(id)messageDestination;
-(NSString *)description;
-(long long)associationOptions;
-(void)identifyWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setUUID:(id)arg1 ;
-(unsigned long long)transportTypes;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4 ;
-(id)descriptionWithPointer:(BOOL)arg1 additionalDescription:(id)arg2 ;
-(id)dumpDescription;
-(void)associateWithAccessoryAdvertisement:(id)arg1 ;
-(HMDAccessoryAdvertisement *)accessoryAdvertisement;
-(void)setAccessoryAdvertisement:(HMDAccessoryAdvertisement *)arg1 ;
-(void)_handleIdentify:(id)arg1 ;
-(void)updateCategoryWithCategoryIdentifier:(id)arg1 ;
@end

