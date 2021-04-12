/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol HMFLocking, OS_dispatch_queue;
@class NSObject, HMSoftwareUpdateDocumentationMetadata, NSUUID, HMFSoftwareVersion, HMFMessageDispatcher, HMDAccessory, HMDSoftwareUpdateModel, NSString, NSArray, NSSet;

@interface HMDSoftwareUpdate : HMFObject <HMFLogging, HMFObject, HMDBackingStoreObjectProtocol, HMDHomeMessageReceiver, NSSecureCoding> {

	id<HMFLocking> _lock;
	NSObject*<OS_dispatch_queue> _queue;
	long long _state;
	HMSoftwareUpdateDocumentationMetadata* _documentationMetadata;
	NSUUID* _identifier;
	HMFSoftwareVersion* _version;
	unsigned long long _downloadSize;
	double _installDuration;
	HMFMessageDispatcher* _messageDispatcher;
	HMDAccessory* _accessory;

}

@property (nonatomic,retain) HMFMessageDispatcher * messageDispatcher;                           //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (copy) NSUUID * identifier;                                                            //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) HMDSoftwareUpdateModel * model; 
@property (__weak) HMDAccessory * accessory;                                                     //@synthesize accessory=_accessory - In the implementation block
@property (copy,readonly) HMFSoftwareVersion * version;                                          //@synthesize version=_version - In the implementation block
@property (readonly) long long state;                                                            //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long downloadSize;                                            //@synthesize downloadSize=_downloadSize - In the implementation block
@property (readonly) double installDuration;                                                     //@synthesize installDuration=_installDuration - In the implementation block
@property (readonly) HMSoftwareUpdateDocumentationMetadata * documentationMetadata;              //@synthesize documentationMetadata=_documentationMetadata - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(BOOL)hasMessageReceiverChildren;
+(id)modelNamespace;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)initWithVersion:(id)arg1 downloadSize:(unsigned long long)arg2 state:(long long)arg3 installDuration:(double)arg4 documentationMetadata:(id)arg5 releaseDate:(id)arg6 ;
-(HMSoftwareUpdateDocumentationMetadata *)documentationMetadata;
-(HMDSoftwareUpdateModel *)model;
-(void)setDocumentationMetadata:(HMSoftwareUpdateDocumentationMetadata *)arg1 ;
-(double)installDuration;
-(unsigned long long)downloadSize;
-(void)encodeWithCoder:(id)arg1 ;
-(HMDAccessory *)accessory;
-(id)logIdentifier;
-(HMFMessageDispatcher *)messageDispatcher;
-(id)messageDestination;
-(void)registerForMessages;
-(void)setAccessory:(HMDAccessory *)arg1 ;
-(void)setState:(long long)arg1 ;
-(NSString *)propertyDescription;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(void)invalidate;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
-(HMFSoftwareVersion *)version;
-(id)initWithModel:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(void)setMessageDispatcher:(HMFMessageDispatcher *)arg1 ;
-(id)transactionWithObjectChangeType:(unsigned long long)arg1 ;
-(void)configureWithAccessory:(id)arg1 messageDispatcher:(id)arg2 ;
-(void)_handleUpdateState:(id)arg1 ;
-(void)_handleUpdateDocumentationMetadata:(id)arg1 ;
-(void)_handleDocumentationRequest:(id)arg1 ;
-(void)_updateState:(long long)arg1 message:(id)arg2 options:(id)arg3 ;
-(void)updateLocalState:(long long)arg1 ;
-(void)_handleDocumentationStateNotification:(id)arg1 ;
@end

