/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDSettingsMessageHandlerProtocol.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDSettingsMessageController, OS_dispatch_queue;
@class NSMapTable, HMFMessageDispatcher, NSObject, HMDUserMessagePolicy, NSString;

@interface HMDSettingsMessageHandler : HMFObject <HMDSettingsMessageHandlerProtocol, HMFLogging> {

	BOOL _isCurrentUser;
	NSMapTable* _settingMessageMap;
	NSMapTable* _settingGroupMessageMap;
	id<HMDSettingsMessageController> _messageController;
	HMFMessageDispatcher* _messageDispatcher;
	NSObject*<OS_dispatch_queue> _queue;
	HMDUserMessagePolicy* _anyUserAllowedPolicy;

}

@property (retain) NSMapTable * settingMessageMap;                                  //@synthesize settingMessageMap=_settingMessageMap - In the implementation block
@property (retain) NSMapTable * settingGroupMessageMap;                             //@synthesize settingGroupMessageMap=_settingGroupMessageMap - In the implementation block
@property (__weak) id<HMDSettingsMessageController> messageController;              //@synthesize messageController=_messageController - In the implementation block
@property (retain) HMFMessageDispatcher * messageDispatcher;                        //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                              //@synthesize queue=_queue - In the implementation block
@property (retain) HMDUserMessagePolicy * anyUserAllowedPolicy;                     //@synthesize anyUserAllowedPolicy=_anyUserAllowedPolicy - In the implementation block
@property (assign) BOOL isCurrentUser;                                              //@synthesize isCurrentUser=_isCurrentUser - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithQueue:(id)arg1 ;
-(void)setIsCurrentUser:(BOOL)arg1 ;
-(BOOL)isCurrentUser;
-(HMFMessageDispatcher *)messageDispatcher;
-(void)registerForMessages;
-(void)setMessageDispatcher:(HMFMessageDispatcher *)arg1 ;
-(NSMapTable *)settingMessageMap;
-(NSMapTable *)settingGroupMessageMap;
-(id)messageMapperForSetting:(id)arg1 ;
-(void)registerForSettingMessages:(id)arg1 ;
-(id)messageMapperForSettingGroup:(id)arg1 ;
-(void)registerForSettingGroupMessages:(id)arg1 ;
-(id)_checkIsCurrentUser:(id)arg1 ;
-(HMDUserMessagePolicy *)anyUserAllowedPolicy;
-(BOOL)_applyOnlyCurrentUserAllowedPolicy:(id)arg1 ;
-(void)_handleUpdateValue:(id)arg1 setting:(id)arg2 ;
-(void)setAnyUserAllowedPolicy:(HMDUserMessagePolicy *)arg1 ;
-(id<HMDSettingsMessageController>)messageController;
-(void)setMessageController:(id<HMDSettingsMessageController>)arg1 ;
-(void)configureForSetting:(id)arg1 ;
-(void)unconfigureFromSetting:(id)arg1 ;
-(void)configureForSettingGroup:(id)arg1 ;
-(void)unconfigureFromSettingGroup:(id)arg1 ;
-(void)configureWithMessageDispatcher:(id)arg1 home:(id)arg2 isCurrentUser:(BOOL)arg3 ;
-(void)_handleAddConstraint:(id)arg1 setting:(id)arg2 ;
-(void)_handleRemoveConstraint:(id)arg1 setting:(id)arg2 ;
-(void)_handleReplaceConstraints:(id)arg1 setting:(id)arg2 ;
-(void)_handleUpdatedConstraints:(id)arg1 setting:(id)arg2 ;
-(void)setSettingMessageMap:(NSMapTable *)arg1 ;
-(void)setSettingGroupMessageMap:(NSMapTable *)arg1 ;
@end
