/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDAccessorySettingsMessageController, OS_dispatch_queue;
@class NSMapTable, HMFMessageDispatcher, NSObject, HMDUserMessagePolicy, NSString;

@interface HMDAccessorySettingsMessageHandler : HMFObject <HMFLogging> {

	id<HMDAccessorySettingsMessageController> _messageController;
	NSMapTable* _settingMessageMap;
	HMFMessageDispatcher* _messageDispatcher;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDUserMessagePolicy* _onlyOwnerAllowedUserPolicy;
	HMDUserMessagePolicy* _sharedAdminAllowedUserPolicy;

}

@property (__weak,readonly) id<HMDAccessorySettingsMessageController> messageController;              //@synthesize messageController=_messageController - In the implementation block
@property (readonly) NSMapTable * settingMessageMap;                                                  //@synthesize settingMessageMap=_settingMessageMap - In the implementation block
@property (retain) HMFMessageDispatcher * messageDispatcher;                                          //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                          //@synthesize workQueue=_workQueue - In the implementation block
@property (retain) HMDUserMessagePolicy * onlyOwnerAllowedUserPolicy;                                 //@synthesize onlyOwnerAllowedUserPolicy=_onlyOwnerAllowedUserPolicy - In the implementation block
@property (retain) HMDUserMessagePolicy * sharedAdminAllowedUserPolicy;                               //@synthesize sharedAdminAllowedUserPolicy=_sharedAdminAllowedUserPolicy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMFMessageDispatcher *)messageDispatcher;
-(void)registerForMessages;
-(id)initWithQueue:(id)arg1 delegate:(id)arg2 ;
-(void)setMessageDispatcher:(HMFMessageDispatcher *)arg1 ;
-(NSMapTable *)settingMessageMap;
-(id)messageMapperForSetting:(id)arg1 ;
-(void)registerForSettingMessages:(id)arg1 ;
-(id<HMDAccessorySettingsMessageController>)messageController;
-(void)unconfigureFromSetting:(id)arg1 ;
-(void)configureWithMessageDispatcher:(id)arg1 home:(id)arg2 ;
-(void)configureForSetting:(id)arg1 allowSharedAdminEditConstraints:(BOOL)arg2 ;
-(void)relayUpdateValue:(id)arg1 destination:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)relayReplaceConstraints:(id)arg1 constraintIdsToRemove:(id)arg2 destination:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)notifyOfUpdatedValue:(id)arg1 setting:(id)arg2 ;
-(void)setOnlyOwnerAllowedUserPolicy:(HMDUserMessagePolicy *)arg1 ;
-(void)setSharedAdminAllowedUserPolicy:(HMDUserMessagePolicy *)arg1 ;
-(HMDUserMessagePolicy *)sharedAdminAllowedUserPolicy;
-(void)_handleSettingUpdateValue:(id)arg1 ;
-(void)_handleAddConstraint:(id)arg1 ;
-(void)_handleRemoveConstraint:(id)arg1 ;
-(void)_handleUpdatedConstraints:(id)arg1 ;
-(HMDUserMessagePolicy *)onlyOwnerAllowedUserPolicy;
-(void)_handleReplaceConstraints:(id)arg1 ;
-(BOOL)_decodeUpdateValueMessagePayload:(id)arg1 outValue:(id*)arg2 ;
@end

