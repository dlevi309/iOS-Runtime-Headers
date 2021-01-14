/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol HMSoftwareUpdateDelegate;
@class HMFUnfairLock, NSUUID, HMSoftwareUpdateDocumentationMetadata, HMSoftwareUpdateDocumentation, HMFSoftwareVersion, _HMContext, HMAccessory, NSString;

@interface HMSoftwareUpdate : NSObject <HMFMessageReceiver, HMFLogging, HMObjectMerge, NSSecureCoding> {

	HMFUnfairLock* _lock;
	NSUUID* _identifier;
	NSUUID* _uniqueIdentifier;
	long long _state;
	HMSoftwareUpdateDocumentationMetadata* _documentationMetadata;
	HMSoftwareUpdateDocumentation* _documentation;
	id<HMSoftwareUpdateDelegate> _delegate;
	HMFSoftwareVersion* _version;
	unsigned long long _downloadSize;
	double _installDuration;
	_HMContext* _context;
	HMAccessory* _accessory;

}

@property (nonatomic,retain) _HMContext * context;                                               //@synthesize context=_context - In the implementation block
@property (__weak) HMAccessory * accessory;                                                      //@synthesize accessory=_accessory - In the implementation block
@property (copy) NSUUID * identifier;                                                            //@synthesize identifier=_identifier - In the implementation block
@property (readonly) HMSoftwareUpdateDocumentationMetadata * documentationMetadata;              //@synthesize documentationMetadata=_documentationMetadata - In the implementation block
@property (__weak) id<HMSoftwareUpdateDelegate> delegate;                                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                                   //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (copy,readonly) HMFSoftwareVersion * version;                                          //@synthesize version=_version - In the implementation block
@property (readonly) long long state;                                                            //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long downloadSize;                                            //@synthesize downloadSize=_downloadSize - In the implementation block
@property (readonly) double installDuration;                                                     //@synthesize installDuration=_installDuration - In the implementation block
@property (getter=isDocumentationAvailable,readonly) BOOL documentationAvailable; 
@property (readonly) HMSoftwareUpdateDocumentation * documentation;                              //@synthesize documentation=_documentation - In the implementation block
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)initWithVersion:(id)arg1 downloadSize:(unsigned long long)arg2 state:(long long)arg3 installDuration:(double)arg4 documentationMetadata:(id)arg5 releaseDate:(id)arg6 ;
-(HMSoftwareUpdateDocumentationMetadata *)documentationMetadata;
-(void)_handleUpdatedState:(id)arg1 ;
-(void)_handleUpdatedDocumentationMetadata:(id)arg1 ;
-(void)_handleUpdatedDocumentation:(id)arg1 ;
-(BOOL)isDocumentationAvailable;
-(void)setDocumentationMetadata:(HMSoftwareUpdateDocumentationMetadata *)arg1 ;
-(void)requestDocumentation;
-(double)installDuration;
-(id)initWithVersion:(id)arg1 downloadSize:(unsigned long long)arg2 ;
-(id)initWithVersion:(id)arg1 downloadSize:(unsigned long long)arg2 state:(long long)arg3 ;
-(id)initWithVersion:(id)arg1 downloadSize:(unsigned long long)arg2 state:(long long)arg3 documentationMetadata:(id)arg4 ;
-(void)updateState:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithVersion:(id)arg1 downloadSize:(unsigned long long)arg2 state:(long long)arg3 installDuration:(double)arg4 documentationMetadata:(id)arg5 ;
-(void)updateDocumentationMetadata:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(unsigned long long)downloadSize;
-(id<HMSoftwareUpdateDelegate>)delegate;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(HMAccessory *)accessory;
-(id)logIdentifier;
-(_HMContext *)context;
-(void)setDelegate:(id<HMSoftwareUpdateDelegate>)arg1 ;
-(id)messageDestination;
-(NSString *)description;
-(void)setDocumentation:(HMSoftwareUpdateDocumentation *)arg1 ;
-(void)setAccessory:(HMAccessory *)arg1 ;
-(void)setState:(long long)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
-(HMSoftwareUpdateDocumentation *)documentation;
-(HMFSoftwareVersion *)version;
-(void)_registerNotificationHandlers;
-(void)configureWithContext:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setContext:(_HMContext *)arg1 ;
@end

