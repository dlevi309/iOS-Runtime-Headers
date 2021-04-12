/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDMediaDestinationBackingStoreHandlerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFStagedValueDelegate.h>
#import <libobjc.A.dylib/HMDMediaDestinationManager.h>
#import <libobjc.A.dylib/HMDMediaDestinationMessageHandlerDataSource.h>
#import <libobjc.A.dylib/HMDMediaDestinationMessageHandlerDelegate.h>

@protocol HMDMediaDestinationManagerDataSource, HMDMediaDestinationManagerDelegate;
@class NSUUID, HMDMediaDestinationMessageHandler, HMDMediaDestinationBackingStoreHandler, HMFStagedValue, NSString, HMMediaDestination;

@interface HMDMediaDestinationManager : HMFObject <HMDMediaDestinationBackingStoreHandlerDelegate, HMFLogging, HMFStagedValueDelegate, HMDMediaDestinationManager, HMDMediaDestinationMessageHandlerDataSource, HMDMediaDestinationMessageHandlerDelegate> {

	NSUUID* _identifier;
	HMDMediaDestinationMessageHandler* _messageHandler;
	HMDMediaDestinationBackingStoreHandler* _backingStoreHandler;
	id<HMDMediaDestinationManagerDataSource> _dataSource;
	id<HMDMediaDestinationManagerDelegate> _delegate;
	HMFStagedValue* _stagedAudioGroupIdentifier;

}

@property (__weak) id<HMDMediaDestinationManagerDataSource> dataSource;                         //@synthesize dataSource=_dataSource - In the implementation block
@property (__weak) id<HMDMediaDestinationManagerDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (readonly) HMFStagedValue * stagedAudioGroupIdentifier;                               //@synthesize stagedAudioGroupIdentifier=_stagedAudioGroupIdentifier - In the implementation block
@property (readonly) HMDMediaDestinationBackingStoreHandler * backingStoreHandler;              //@synthesize backingStoreHandler=_backingStoreHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSUUID * identifier;                                                       //@synthesize identifier=_identifier - In the implementation block
@property (readonly) HMMediaDestination * destination; 
@property (readonly) HMMediaDestination * committedDestination; 
@property (readonly) HMDMediaDestinationMessageHandler * messageHandler;                        //@synthesize messageHandler=_messageHandler - In the implementation block
+(id)logCategory;
-(id)privateDescription;
-(id<HMDMediaDestinationManagerDelegate>)delegate;
-(HMDMediaDestinationMessageHandler *)messageHandler;
-(id<HMDMediaDestinationManagerDataSource>)dataSource;
-(id)logIdentifier;
-(void)setDelegate:(id<HMDMediaDestinationManagerDelegate>)arg1 ;
-(void)setDataSource:(id<HMDMediaDestinationManagerDataSource>)arg1 ;
-(id)attributeDescriptions;
-(NSUUID *)identifier;
-(HMMediaDestination *)destination;
-(HMMediaDestination *)committedDestination;
-(void)configureWithHome:(id)arg1 ;
-(void)stageAudioGroupIdentifier:(id)arg1 ;
-(id)dataSourceTargetAccessory;
-(void)mediaDestinationMessageHandler:(id)arg1 didReceiveUpdateSupportedOptionsRequestMessage:(id)arg2 supportOptions:(unsigned long long)arg3 ;
-(void)mediaDestinationMessageHandler:(id)arg1 didReceiveUpdateAudioGroupIdentifierRequestMessage:(id)arg2 audioGroupIdentifier:(id)arg3 ;
-(id)messageHandler:(id)arg1 shouldRelayIncomingMessage:(id)arg2 ;
-(id)messageHandler:(id)arg1 deviceForOutgoingMessage:(id)arg2 ;
-(BOOL)messageHandler:(id)arg1 reachableForOutgoingMessage:(id)arg2 ;
-(id)dataSourceDestinationControllerWithIdentifier:(id)arg1 ;
-(void)mediaDestinationBackingStoreHandler:(id)arg1 didUpdateDestination:(id)arg2 ;
-(id)initWithDestination:(id)arg1 messageHandler:(id)arg2 backingStoreHandler:(id)arg3 dataSource:(id)arg4 delegate:(id)arg5 ;
-(HMFStagedValue *)stagedAudioGroupIdentifier;
-(HMDMediaDestinationBackingStoreHandler *)backingStoreHandler;
-(id)dataSourceRootDestinationManager;
-(id)updateSupportedOptions:(unsigned long long)arg1 ;
-(id)updateAudioGroupIdentifier:(id)arg1 ;
-(void)stagedValue:(id)arg1 didExpireValue:(id)arg2 ;
-(id)initWithDestination:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 backingStore:(id)arg4 dataSource:(id)arg5 delegate:(id)arg6 ;
-(void)triggerStageValueDidExpireValueForAudioDestinationIdentifier;
@end

