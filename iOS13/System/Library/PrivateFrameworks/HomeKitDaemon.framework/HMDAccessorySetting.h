/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>
#import <libobjc.A.dylib/HMDAccessorySettingUpdateDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDAccessorySettingUpdateProtocol.h>
#import <libobjc.A.dylib/HMDAccessorySettingProtocol.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSString, NSArray, NSMutableArray, NSMutableSet, NSUUID, HMDAccessorySettingGroup, HMDAccessorySettingUpdateBase, NSObject, HMFMessageDispatcher, HMDAccessorySettingContainer, HMFMessageDestination, HMDAccessorySettingModel, NSSet;

@interface HMDAccessorySetting : HMFObject <HMDBackingStoreObjectProtocol, HMDAccessorySettingUpdateDelegate, HMFLogging, HMDAccessorySettingUpdateProtocol, HMDAccessorySettingProtocol, HMDHomeMessageReceiver, NSSecureCoding> {

	id _value;
	NSString* _name;
	long long _type;
	NSMutableArray* _constraints;
	NSMutableSet* _constraintItemsMarkedForRemoval;
	unsigned long long _configurationVersion;
	HMDAccessorySetting* _mediaSystemSetting;
	NSUUID* _identifier;
	HMDAccessorySettingGroup* _group;
	unsigned long long _properties;
	HMDAccessorySettingUpdateBase* _updateSetting;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HMFMessageDispatcher* _messageDispatcher;
	HMDAccessorySettingContainer* _container;
	HMFMessageDestination* _messageDestination;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                      //@synthesize clientQueue=_clientQueue - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> propertyQueue;                              //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * messageDispatcher;                        //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (readonly) HMDAccessorySettingModel * model; 
@property (copy,readonly) NSArray * models; 
@property (nonatomic,retain) HMDAccessorySettingContainer * container;                        //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) unsigned long long configurationVersion;                         //@synthesize configurationVersion=_configurationVersion - In the implementation block
@property (nonatomic,retain) HMFMessageDestination * messageDestination;                      //@synthesize messageDestination=_messageDestination - In the implementation block
@property (copy,readonly) NSUUID * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (__weak) HMDAccessorySettingGroup * group;                                          //@synthesize group=_group - In the implementation block
@property (readonly) unsigned long long properties;                                           //@synthesize properties=_properties - In the implementation block
@property (__weak) HMDAccessorySetting * mediaSystemSetting;                                  //@synthesize mediaSystemSetting=_mediaSystemSetting - In the implementation block
@property (nonatomic,retain) HMDAccessorySettingUpdateBase * updateSetting;                   //@synthesize updateSetting=_updateSetting - In the implementation block
@property (readonly) NSString * keyPath; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) long long type; 
@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSArray * constraints; 
@property (copy,readonly) id value; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)supportedValueClasses;
+(id)supportedConstraintClasses;
+(BOOL)hasMessageReceiverChildren;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMDAccessorySettingContainer *)container;
-(long long)type;
-(void)setContainer:(HMDAccessorySettingContainer *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(void)setGroup:(HMDAccessorySettingGroup *)arg1 ;
-(NSArray *)constraints;
-(id)value;
-(NSString *)keyPath;
-(void)setValue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(HMDAccessorySettingModel *)model;
-(unsigned long long)properties;
-(id)initWithModel:(id)arg1 ;
-(HMDAccessorySettingGroup *)group;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(NSArray *)models;
-(void)addConstraint:(id)arg1 ;
-(void)removeConstraint:(id)arg1 ;
-(void)setConstraints:(NSArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(BOOL)isValid:(id*)arg1 ;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 ;
-(id)logIdentifier;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(unsigned long long)configurationVersion;
-(void)setConfigurationVersion:(unsigned long long)arg1 ;
-(HMFMessageDispatcher *)messageDispatcher;
-(HMFMessageDestination *)messageDestination;
-(void)registerForMessages;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(void)setMessageDispatcher:(HMFMessageDispatcher *)arg1 ;
-(id)transactionWithObjectChangeType:(unsigned long long)arg1 ;
-(BOOL)compareConstraints:(id)arg1 ;
-(void)updateMediaSystemSettings:(id)arg1 ;
-(void)_fixupAccessorySetting;
-(void)fixupAccessorySetting;
-(void)configureWithContainer:(id)arg1 messageDispatcher:(id)arg2 ;
-(id)accessoryFromTarget;
-(id)remoteMessageDestination:(id)arg1 ;
-(void)_relayRequestMessage:(id)arg1 targetAccessory:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)shouldEncodeForCoder:(id)arg1 ;
-(HMDAccessorySetting *)mediaSystemSetting;
-(void)handleUpdateValue:(id)arg1 ;
-(id)valueUpdateNotificationWithMessage:(id)arg1 ;
-(void)settingUpdate:(id)arg1 didCompleteWithError:(id)arg2 ;
-(BOOL)isConstraintMergeStrategyReflection;
-(void)mergeConstraintsFromOther:(id)arg1 ;
-(id)modelsForConstraintsUpdate:(id)arg1 ;
-(void)setMediaSystemSetting:(HMDAccessorySetting *)arg1 ;
-(void)sendReflectedNotification:(BOOL)arg1 ;
-(void)_handleUpdateValue:(id)arg1 ;
-(void)_handleAddConstraint:(id)arg1 ;
-(void)_handleRemoveConstraint:(id)arg1 ;
-(void)_handleReplaceConstraints:(id)arg1 ;
-(void)_handleUpdatedConstraints:(id)arg1 ;
-(void)_replaceConstraints:(id)arg1 additions:(id)arg2 removals:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)constraintWithIdentifier:(id)arg1 ;
-(void)_handleReplaceConstraints:(id)arg1 additions:(id)arg2 removals:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_relayRequestMessageNoRemoteCheck:(id)arg1 targetAccessory:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_mergeConstraintsLocallyWithAdditions:(id)arg1 removals:(id)arg2 ;
-(void)handleReplaceConstraints:(id)arg1 additions:(id)arg2 removals:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_relayConstraintsMessage:(id)arg1 toTargetAccessory:(id)arg2 additions:(id)arg3 removals:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_fixupMergeStrategyConstraints;
-(BOOL)_shouldBlockSettingUpdateMessage:(id)arg1 ;
-(void)setUpdateSetting:(HMDAccessorySettingUpdateBase *)arg1 ;
-(HMDAccessorySettingUpdateBase *)updateSetting;
-(BOOL)_shouldTurnOffPersonalRequestsOnLanguageChangeFrom:(id)arg1 toValue:(id)arg2 ;
-(void)handleAddConstraint:(id)arg1 ;
-(void)handleRemoveConstraint:(id)arg1 ;
-(void)replaceConstraints:(id)arg1 additions:(id)arg2 removals:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_saveHomeConfiguration:(id)arg1 ;
-(void)setMessageDestination:(HMFMessageDestination *)arg1 ;
@end

