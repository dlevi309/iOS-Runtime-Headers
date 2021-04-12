/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class HMSoftwareUpdateDocumentationMetadata, NSUUID, HMFSoftwareVersion, NSObject, HMFMessageDispatcher, HMDAccessory, HMDSoftwareUpdateModel, NSString, NSArray, NSSet;

@interface HMDSoftwareUpdate : HMFObject <HMFLogging, HMFObject, HMDBackingStoreObjectProtocol, HMDHomeMessageReceiver, NSSecureCoding> {

	long long _state;
	HMSoftwareUpdateDocumentationMetadata* _documentationMetadata;
	NSUUID* _identifier;
	HMFSoftwareVersion* _version;
	unsigned long long _downloadSize;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HMFMessageDispatcher* _messageDispatcher;
	HMDAccessory* _accessory;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                         //@synthesize clientQueue=_clientQueue - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> propertyQueue;                                 //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * messageDispatcher;                           //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (copy) NSUUID * identifier;                                                            //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) HMDSoftwareUpdateModel * model; 
@property (__weak) HMDAccessory * accessory;                                                     //@synthesize accessory=_accessory - In the implementation block
@property (copy,readonly) HMFSoftwareVersion * version;                                          //@synthesize version=_version - In the implementation block
@property (readonly) long long state;                                                            //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long downloadSize;                                            //@synthesize downloadSize=_downloadSize - In the implementation block
@property (readonly) HMSoftwareUpdateDocumentationMetadata * documentationMetadata;              //@synthesize documentationMetadata=_documentationMetadata - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(BOOL)hasMessageReceiverChildren;
+(id)modelNamespace;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(HMFSoftwareVersion *)version;
-(long long)state;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)setState:(long long)arg1 ;
-(HMDSoftwareUpdateModel *)model;
-(id)initWithModel:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSString *)propertyDescription;
-(HMDAccessory *)accessory;
-(void)setAccessory:(HMDAccessory *)arg1 ;
-(id)logIdentifier;
-(id)__init;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(unsigned long long)downloadSize;
-(HMFMessageDispatcher *)messageDispatcher;
-(id)messageDestination;
-(HMSoftwareUpdateDocumentationMetadata *)documentationMetadata;
-(void)setDocumentationMetadata:(HMSoftwareUpdateDocumentationMetadata *)arg1 ;
-(void)registerForMessages;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(void)setMessageDispatcher:(HMFMessageDispatcher *)arg1 ;
-(id)transactionWithObjectChangeType:(unsigned long long)arg1 ;
-(void)_handleUpdateState:(id)arg1 ;
-(void)_handleUpdateDocumentationMetadata:(id)arg1 ;
-(void)_handleDocumentationRequest:(id)arg1 ;
-(void)configureWithAccessory:(id)arg1 messageDispatcher:(id)arg2 ;
-(void)_handleDocumentationStateNotification:(id)arg1 ;
@end

