/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMDDevicePreferenceDataSource.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, HMFMessageDispatcher, HMDHome, NSString, NSUUID, NSSet;

@interface HMDHomeMediaSystemHandler : NSObject <HMDDevicePreferenceDataSource, NSSecureCoding, HMFLogging, HMDHomeMessageReceiver> {

	NSMutableArray* _mediaSystems;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMFMessageDispatcher* _msgDispatcher;
	HMDHome* _home;

}

@property (nonatomic,retain) NSMutableArray * mediaSystems;                                   //@synthesize mediaSystems=_mediaSystems - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                            //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (assign,nonatomic,__weak) HMDHome * home;                                           //@synthesize home=_home - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(BOOL)hasMessageReceiverChildren;
+(id)preProcessMediaSystemMessage:(id)arg1 home:(id)arg2 ;
-(id)init;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HMDHome *)home;
-(void)setHome:(HMDHome *)arg1 ;
-(NSMutableArray *)mediaSystems;
-(id)logIdentifier;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)initWithHome:(id)arg1 ;
-(id)messageDestination;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(void)_registerForMessages;
-(NSSet *)messageReceiverChildren;
-(BOOL)supportsDeviceWithCapabilities:(id)arg1 ;
-(void)_handleAddMediaSystemModel:(id)arg1 message:(id)arg2 ;
-(void)_handleRemoveMediaSystemModel:(id)arg1 message:(id)arg2 ;
-(void)configure:(id)arg1 queue:(id)arg2 messageDispatcher:(id)arg3 ;
-(id)backingStoreObjects;
-(void)_userAssistantAccessControlDidUpdate:(id)arg1 accessories:(id)arg2 ;
-(void)_handleAddMediaSystem:(id)arg1 ;
-(void)_handleRemoveMediaSystem:(id)arg1 ;
-(void)_addMediaSystem:(id)arg1 ;
-(void)_removeMediaSystem:(id)arg1 ;
-(id)_currentMediaSystemIfPrimary;
-(void)_handleUpdateMediaSystemModel:(id)arg1 message:(id)arg2 ;
-(void)setMediaSystems:(NSMutableArray *)arg1 ;
@end

