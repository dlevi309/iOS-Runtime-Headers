/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDMediaDestinationControllerMessageHandlerDataSource.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDMediaDestinationControllerBackingStoreHandlerDelegate.h>
#import <libobjc.A.dylib/HMDMediaDestinationControllerMessageHandlerDelegate.h>
#import <libobjc.A.dylib/HMFStagedValueDelegate.h>

@protocol HMDMediaDestinationControllerDataSource, HMDMediaDestinationControllerDelegate;
@class NSUUID, HMDMediaDestinationControllerMessageHandler, HMDMediaDestinationControllerBackingStoreHandler, HMDMediaDestinationControllerMetricsEventDispatcher, HMFStagedValue, HMMediaDestinationControllerData, NSString;

@interface HMDMediaDestinationController : HMFObject <HMDMediaDestinationControllerMessageHandlerDataSource, HMFLogging, HMDMediaDestinationControllerBackingStoreHandlerDelegate, HMDMediaDestinationControllerMessageHandlerDelegate, HMFStagedValueDelegate> {

	BOOL _isTargetDevice;
	NSUUID* _identifier;
	HMDMediaDestinationControllerMessageHandler* _messageHandler;
	HMDMediaDestinationControllerBackingStoreHandler* _backingStoreHandler;
	id<HMDMediaDestinationControllerDataSource> _dataSource;
	id<HMDMediaDestinationControllerDelegate> _delegate;
	HMDMediaDestinationControllerMetricsEventDispatcher* _metricsEventDispatcher;
	HMFStagedValue* _stagedDestinationIdentifier;
	HMFStagedValue* _stagedAvailableDestinationIdentifiers;

}

@property (__weak) id<HMDMediaDestinationControllerDataSource> dataSource;                                    //@synthesize dataSource=_dataSource - In the implementation block
@property (__weak) id<HMDMediaDestinationControllerDelegate> delegate;                                        //@synthesize delegate=_delegate - In the implementation block
@property (readonly) BOOL isTargetDevice;                                                                     //@synthesize isTargetDevice=_isTargetDevice - In the implementation block
@property (retain) HMDMediaDestinationControllerMetricsEventDispatcher * metricsEventDispatcher;              //@synthesize metricsEventDispatcher=_metricsEventDispatcher - In the implementation block
@property (readonly) HMFStagedValue * stagedDestinationIdentifier;                                            //@synthesize stagedDestinationIdentifier=_stagedDestinationIdentifier - In the implementation block
@property (readonly) HMFStagedValue * stagedAvailableDestinationIdentifiers;                                  //@synthesize stagedAvailableDestinationIdentifiers=_stagedAvailableDestinationIdentifiers - In the implementation block
@property (copy,readonly) NSUUID * identifier;                                                                //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) HMMediaDestinationControllerData * data; 
@property (copy,readonly) HMMediaDestinationControllerData * committedData; 
@property (readonly) HMDMediaDestinationControllerMessageHandler * messageHandler;                            //@synthesize messageHandler=_messageHandler - In the implementation block
@property (readonly) HMDMediaDestinationControllerBackingStoreHandler * backingStoreHandler;                  //@synthesize backingStoreHandler=_backingStoreHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)urlString;
-(id)privateDescription;
-(id<HMDMediaDestinationControllerDelegate>)delegate;
-(HMDMediaDestinationControllerMessageHandler *)messageHandler;
-(id<HMDMediaDestinationControllerDataSource>)dataSource;
-(id)logIdentifier;
-(void)setDelegate:(id<HMDMediaDestinationControllerDelegate>)arg1 ;
-(void)setDataSource:(id<HMDMediaDestinationControllerDataSource>)arg1 ;
-(HMMediaDestinationControllerData *)data;
-(id)attributeDescriptions;
-(NSUUID *)identifier;
-(void)configureWithHome:(id)arg1 ;
-(id)dataSourceTargetAccessory;
-(id)messageHandler:(id)arg1 shouldRelayIncomingMessage:(id)arg2 ;
-(id)messageHandler:(id)arg1 deviceForOutgoingMessage:(id)arg2 ;
-(BOOL)messageHandler:(id)arg1 reachableForOutgoingMessage:(id)arg2 ;
-(void)mediaDestinationControllerBackingStoreHandler:(id)arg1 didUpdateDestinationIdentifier:(id)arg2 ;
-(void)mediaDestinationControllerBackingStoreHandler:(id)arg1 didUpdateAvailableDestinationIdentifiers:(id)arg2 ;
-(HMDMediaDestinationControllerMetricsEventDispatcher *)metricsEventDispatcher;
-(id)updateDestinationIdentifier:(id)arg1 ;
-(id)updateAvailableDestinationIdentifiers:(id)arg1 ;
-(void)setMetricsEventDispatcher:(HMDMediaDestinationControllerMetricsEventDispatcher *)arg1 ;
-(HMFStagedValue *)stagedDestinationIdentifier;
-(HMDMediaDestinationControllerBackingStoreHandler *)backingStoreHandler;
-(void)stageDestinationIdentifier:(id)arg1 ;
-(void)stagedValue:(id)arg1 didExpireValue:(id)arg2 ;
-(HMMediaDestinationControllerData *)committedData;
-(id)initWithData:(id)arg1 backingStore:(id)arg2 messageDispatcher:(id)arg3 notificationCenter:(id)arg4 logEventDailyScheduler:(id)arg5 targetDevice:(BOOL)arg6 dataSource:(id)arg7 delegate:(id)arg8 ;
-(id)assistantObjectWithHome:(id)arg1 name:(id)arg2 ;
-(void)mediaDestinationControllerMessageHandler:(id)arg1 didReceiveMediaDestinationControllerUpdateDestinationRequestMessage:(id)arg2 destinationIdentifier:(id)arg3 updateOptions:(unsigned long long)arg4 ;
-(void)mediaDestinationControllerMessageHandler:(id)arg1 didReceiveMediaDestinationUpdatedNotification:(id)arg2 ;
-(void)mediaDestinationControllerMessageHandler:(id)arg1 didReceiveHomeAccessoryRemovedNotification:(id)arg2 destination:(id)arg3 ;
-(void)mediaDestinationControllerMessageHandler:(id)arg1 didReceiveMediaSystemAddedNotification:(id)arg2 ;
-(void)mediaDestinationControllerMessageHandler:(id)arg1 didReceiveMediaSystemRemovedNotification:(id)arg2 ;
-(void)mediaDestinationControllerMessageHandler:(id)arg1 didReceiveAccessoryChangedRoomNotification:(id)arg2 ;
-(void)mediaDestinationControllerMessageHandler:(id)arg1 didReceiveMediaDestinationControllerUpdatedDestinationNotification:(id)arg2 destinationControllerIdentifier:(id)arg3 destinationIdentifier:(id)arg4 ;
-(id)initWithBackingStoreHandler:(id)arg1 messageHandler:(id)arg2 metricsEventDispatcher:(id)arg3 targetDevice:(BOOL)arg4 dataSource:(id)arg5 delegate:(id)arg6 ;
-(void)refreshDestinationController;
-(HMFStagedValue *)stagedAvailableDestinationIdentifiers;
-(id)updateDestinationIdentifier:(id)arg1 updateOptions:(unsigned long long)arg2 ;
-(id)updateDestinationWithIdentifier:(id)arg1 audioGroupIdentifier:(id)arg2 ;
-(id)dataSourceDestinationUsingRelatedIdentifier:(id)arg1 ;
-(id)dataSourceDestinationManagerWithIdentifier:(id)arg1 ;
-(BOOL)isTargetDevice;
-(void)refeshAvailableDestinationIdentifiers;
-(void)refreshDestinationIdentifier;
-(id)dataSourceAvailableDestinationIdentifiers;
-(id)filteredAvailableDestinationIdentifiers;
-(id)filteredDestinationIdentifierFilteredAvailableDestinationIdentifiers:(id)arg1 ;
-(id)dataSourceDestinationWithIdentifier:(id)arg1 ;
-(void)stagedValue:(id)arg1 didExpireDestinationIdentifier:(id)arg2 ;
-(void)stagedValue:(id)arg1 didExpireAvailableDestinationIdentifiers:(id)arg2 ;
-(void)notifyDelegateDidExpireStagedValues;
-(void)stageAvailableDestinationIdentifiers:(id)arg1 ;
-(void)triggerStageValueDidExpireValueForStagedDestinationIdentifier;
-(void)triggerStageValueDidExpireValueForStagedAvailableDestinationIdentifiers;
@end

