/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue, HMDAccessorySettingUpdateDelegate;
@class NSString, NSObject, HMFMessage, HMFMessageDispatcher, HMDAccessorySettingTarget, HMDAccessorySetting;

@interface HMDAccessorySettingUpdateBase : HMFObject <HMFLogging> {

	NSString* _sessionID;
	NSObject*<OS_dispatch_queue> _clientQueue;
	HMFMessage* _originalMessage;
	HMFMessageDispatcher* _remoteMessageDispatcher;
	HMDAccessorySettingTarget* _target;
	HMDAccessorySetting* _setting;
	id<HMDAccessorySettingUpdateDelegate> _delegate;
	id _value;

}

@property (nonatomic,readonly) NSString * sessionID;                                               //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                           //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) HMFMessage * originalMessage;                                       //@synthesize originalMessage=_originalMessage - In the implementation block
@property (nonatomic,readonly) HMFMessageDispatcher * remoteMessageDispatcher;                     //@synthesize remoteMessageDispatcher=_remoteMessageDispatcher - In the implementation block
@property (nonatomic,readonly) HMDAccessorySettingTarget * target;                                 //@synthesize target=_target - In the implementation block
@property (nonatomic,__weak,readonly) HMDAccessorySetting * setting;                               //@synthesize setting=_setting - In the implementation block
@property (nonatomic,__weak,readonly) id<HMDAccessorySettingUpdateDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) id value;                                                    //@synthesize value=_value - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSString *)description;
-(id<HMDAccessorySettingUpdateDelegate>)delegate;
-(HMDAccessorySettingTarget *)target;
-(id)value;
-(void)update;
-(NSString *)sessionID;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(id)logIdentifier;
-(HMDAccessorySetting *)setting;
-(HMFMessage *)originalMessage;
-(HMFMessageDispatcher *)remoteMessageDispatcher;
-(void)callDelegate:(id)arg1 ;
-(id)updateValueWithPayload:(id)arg1 setting:(id)arg2 ;
-(void)saveLocally:(unsigned long long)arg1 ;
-(id)_processMessage:(id)arg1 setting:(id)arg2 ;
-(id)initWithSessionID:(id)arg1 setting:(id)arg2 clientQueue:(id)arg3 delegate:(id)arg4 message:(id)arg5 outError:(id*)arg6 ;
-(void)updateWithAdditionalModel:(id)arg1 ;
@end

