/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMDSettingsControllerDependency.h>
@class NSString, NSUUID;


@protocol HMDSettingsControllerDependency <NSObject>
@property (__weak) id<HMDSettingTransactionReceiverProtocol> transactionReceiver; 
@property (readonly) NSString * codingKey; 
@property (readonly) NSUUID * parentIdentifier; 
@property (readonly) NSString * logIdentifier; 
@required
-(id)messageHandler;
-(NSString *)logIdentifier;
-(NSUUID *)parentIdentifier;
-(NSString *)codingKey;
-(id<HMDSettingTransactionReceiverProtocol>)transactionReceiver;
-(void)setTransactionReceiver:(id)arg1;
-(id)createSettingRootGroupModelWithParentModelID:(id)arg1;
-(id)createSettingGroupModelWithName:(id)arg1 parent:(id)arg2;
-(id)createSettingModelWithName:(id)arg1 parent:(id)arg2 type:(id)arg3 properties:(id)arg4;
-(id)settingValueForValue:(id)arg1 type:(id)arg2 constraintModels:(id)arg3 error:(id*)arg4;
-(id)backingStoreController;
-(id)settingModelForUpdateWithIdentifier:(id)arg1 parentIdentifier:(id)arg2 value:(id)arg3;
-(id)loadMetadata;
-(id)metadataParser;

@end


@protocol HMDSettingTransactionReceiverProtocol, HMDSettingsBackingStoreController, HMDSettingsMetadataParserProtocol, OS_dispatch_queue, HMDSettingsMessageHandlerProtocol;
@class NSString, NSUUID, NSObject, HMFMessageDispatcher, HMDSettingsMessageHandler;

@interface HMDSettingsControllerDependency : NSObject <HMDSettingsControllerDependency> {

	NSUUID* _parentIdentifier;
	NSString* _logIdentifier;
	id<HMDSettingTransactionReceiverProtocol> _transactionReceiver;
	id<HMDSettingsBackingStoreController> _backingStoreController;
	NSString* _codingKey;
	id<HMDSettingsMetadataParserProtocol> _metadataParser;
	NSString* _metadataFileName;
	NSObject*<OS_dispatch_queue> _queue;
	HMFMessageDispatcher* _messageDispatcher;
	HMDSettingsMessageHandler*<HMDSettingsMessageHandlerProtocol> _internalMessageHandler;

}

@property (retain) id<HMDSettingsBackingStoreController> backingStoreController;                                      //@synthesize backingStoreController=_backingStoreController - In the implementation block
@property (readonly) id<HMDSettingsMetadataParserProtocol> metadataParser;                                            //@synthesize metadataParser=_metadataParser - In the implementation block
@property (readonly) NSString * metadataFileName;                                                                     //@synthesize metadataFileName=_metadataFileName - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> queue;                                                              //@synthesize queue=_queue - In the implementation block
@property (retain) HMFMessageDispatcher * messageDispatcher;                                                          //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (retain) HMDSettingsMessageHandler*<HMDSettingsMessageHandlerProtocol> internalMessageHandler;              //@synthesize internalMessageHandler=_internalMessageHandler - In the implementation block
@property (readonly) id<HMDSettingsMessageHandlerProtocol> messageHandler; 
@property (__weak) id<HMDSettingTransactionReceiverProtocol> transactionReceiver;                                     //@synthesize transactionReceiver=_transactionReceiver - In the implementation block
@property (readonly) NSString * codingKey;                                                                            //@synthesize codingKey=_codingKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSUUID * parentIdentifier;                                                                       //@synthesize parentIdentifier=_parentIdentifier - In the implementation block
@property (readonly) NSString * logIdentifier;                                                                        //@synthesize logIdentifier=_logIdentifier - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(id<HMDSettingsMessageHandlerProtocol>)messageHandler;
-(NSString *)logIdentifier;
-(NSUUID *)parentIdentifier;
-(HMFMessageDispatcher *)messageDispatcher;
-(NSString *)codingKey;
-(void)setMessageDispatcher:(HMFMessageDispatcher *)arg1 ;
-(id<HMDSettingTransactionReceiverProtocol>)transactionReceiver;
-(void)setTransactionReceiver:(id<HMDSettingTransactionReceiverProtocol>)arg1 ;
-(id)createSettingRootGroupModelWithParentModelID:(id)arg1 ;
-(id)createSettingGroupModelWithName:(id)arg1 parent:(id)arg2 ;
-(id)createSettingModelWithName:(id)arg1 parent:(id)arg2 type:(id)arg3 properties:(id)arg4 ;
-(id)settingValueForValue:(id)arg1 type:(id)arg2 constraintModels:(id)arg3 error:(id*)arg4 ;
-(id<HMDSettingsBackingStoreController>)backingStoreController;
-(id)settingModelForUpdateWithIdentifier:(id)arg1 parentIdentifier:(id)arg2 value:(id)arg3 ;
-(id)loadMetadata;
-(id<HMDSettingsMetadataParserProtocol>)metadataParser;
-(void)setBackingStoreController:(id<HMDSettingsBackingStoreController>)arg1 ;
-(HMDSettingsMessageHandler*<HMDSettingsMessageHandlerProtocol>)internalMessageHandler;
-(NSString *)metadataFileName;
-(id)initWithParentUUID:(id)arg1 logName:(id)arg2 queue:(id)arg3 metadataFileName:(id)arg4 codingKey:(id)arg5 ;
-(void)configureWithHome:(id)arg1 messageDispatcher:(id)arg2 backingStoreController:(id)arg3 isCurrentUser:(BOOL)arg4 ;
-(void)setInternalMessageHandler:(HMDSettingsMessageHandler*<HMDSettingsMessageHandlerProtocol>)arg1 ;
@end

