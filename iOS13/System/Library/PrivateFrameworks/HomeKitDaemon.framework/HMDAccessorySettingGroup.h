/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, NSUUID, NSString, NSObject, HMFMessageDispatcher, HMDAccessorySettingContainer, HMDAccessorySettingGroupModel, NSArray, NSSet;

@interface HMDAccessorySettingGroup : HMFObject <HMDBackingStoreObjectProtocol, HMFLogging, HMDHomeMessageReceiver, NSSecureCoding, NSCopying> {

	NSMutableSet* _settings;
	NSMutableSet* _groups;
	HMDAccessorySettingGroup* _mediaSystemSettingGroup;
	NSUUID* _identifier;
	HMDAccessorySettingGroup* _group;
	NSString* _name;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HMFMessageDispatcher* _messageDispatcher;
	HMDAccessorySettingContainer* _container;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                      //@synthesize clientQueue=_clientQueue - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> propertyQueue;                              //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * messageDispatcher;                        //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (readonly) HMDAccessorySettingGroupModel * model; 
@property (copy,readonly) NSArray * models; 
@property (nonatomic,retain) HMDAccessorySettingContainer * container;                        //@synthesize container=_container - In the implementation block
@property (copy,readonly) NSUUID * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (__weak) HMDAccessorySettingGroup * group;                                          //@synthesize group=_group - In the implementation block
@property (copy,readonly) NSString * name;                                                    //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSArray * settings; 
@property (copy,readonly) NSArray * groups; 
@property (__weak) HMDAccessorySettingGroup * mediaSystemSettingGroup;                        //@synthesize mediaSystemSettingGroup=_mediaSystemSettingGroup - In the implementation block
@property (readonly) NSString * keyPath; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)supportedSettingsClasses;
+(id)supportedGroupsClasses;
+(BOOL)hasMessageReceiverChildren;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMDAccessorySettingContainer *)container;
-(void)setContainer:(HMDAccessorySettingContainer *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(NSUUID *)identifier;
-(void)setGroup:(HMDAccessorySettingGroup *)arg1 ;
-(NSString *)keyPath;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(HMDAccessorySettingGroupModel *)model;
-(id)initWithModel:(id)arg1 ;
-(HMDAccessorySettingGroup *)group;
-(NSArray *)settings;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(NSArray *)groups;
-(NSArray *)models;
-(id)fullDescription;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(id)logIdentifier;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(HMFMessageDispatcher *)messageDispatcher;
-(id)messageDestination;
-(void)addGroup:(id)arg1 ;
-(void)addSetting:(id)arg1 ;
-(void)registerForMessages;
-(void)removeSetting:(id)arg1 ;
-(void)removeGroup:(id)arg1 ;
-(id)settingWithIdentifier:(id)arg1 ;
-(id)groupWithIdentifier:(id)arg1 ;
-(NSSet *)messageReceiverChildren;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(void)setMessageDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMDAccessorySettingGroup *)mediaSystemSettingGroup;
-(id)transactionWithObjectChangeType:(unsigned long long)arg1 ;
-(BOOL)isPrivateToDevice;
-(void)intersectSettingGroup:(id)arg1 groupMetadata:(id)arg2 ;
-(BOOL)compareSettingsTree:(id)arg1 ;
-(void)setMediaSystemSettingGroup:(HMDAccessorySettingGroup *)arg1 ;
-(void)updateMediaSystemSettingsGroup:(id)arg1 ;
-(void)_fixupAccessorySetting;
-(BOOL)isOwnerCurrentDevice;
-(void)fixupAccessorySetting;
-(void)configureWithContainer:(id)arg1 messageDispatcher:(id)arg2 ;
-(id)mergeWithGroupMetadata:(id)arg1 ;
-(id)accessoryFromTarget;
-(id)remoteMessageDestination:(id)arg1 ;
-(void)_handleAddSetting:(id)arg1 ;
-(void)_handleRemoveSetting:(id)arg1 ;
-(void)_handleAddGroup:(id)arg1 ;
-(void)_handleRemoveGroup:(id)arg1 ;
-(BOOL)isTargetCurrentDevice;
-(void)_relayRequestMessage:(id)arg1 targetAccessory:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)handleAddedGroupModel:(id)arg1 message:(id)arg2 ;
-(void)handleAddedSettingModel:(id)arg1 message:(id)arg2 ;
-(void)handleRemovedSettingModel:(id)arg1 message:(id)arg2 ;
-(void)handleRemovedGroupModel:(id)arg1 message:(id)arg2 ;
-(BOOL)shouldEncodeForCoder:(id)arg1 ;
-(id)ownerAccessory;
@end

