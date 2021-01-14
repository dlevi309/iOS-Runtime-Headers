/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDLogEventDailyProvider.h>

@protocol HMDMediaDestinationControllerMetricsEventDispatcherDataSource;
@class HMFUnfairLock, NSUUID, HMDLogEventDispatcher, HMDMediaDestinationControllerStagedDestinationIdentifierCommittedEvent, NSString, NSArray;

@interface HMDMediaDestinationControllerMetricsEventDispatcher : HMFObject <HMFLogging, HMDLogEventDailyProvider> {

	HMFUnfairLock* _lock;
	id<HMDMediaDestinationControllerMetricsEventDispatcherDataSource> _dataSource;
	NSUUID* _identifier;
	HMDLogEventDispatcher* _logEventDispatcher;
	HMDMediaDestinationControllerStagedDestinationIdentifierCommittedEvent* _trackedStagedDestinationIdentifierEvent;

}

@property (__weak) id<HMDMediaDestinationControllerMetricsEventDispatcherDataSource> dataSource;                                                  //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) NSUUID * identifier;                                                                                                         //@synthesize identifier=_identifier - In the implementation block
@property (readonly) HMDLogEventDispatcher * logEventDispatcher;                                                                                  //@synthesize logEventDispatcher=_logEventDispatcher - In the implementation block
@property (retain) HMDMediaDestinationControllerStagedDestinationIdentifierCommittedEvent * trackedStagedDestinationIdentifierEvent;              //@synthesize trackedStagedDestinationIdentifierEvent=_trackedStagedDestinationIdentifierEvent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * logEventProviderDailySubmissionBlocks; 
+(id)logCategory;
-(id<HMDMediaDestinationControllerMetricsEventDispatcherDataSource>)dataSource;
-(id)logIdentifier;
-(void)setDataSource:(id<HMDMediaDestinationControllerMetricsEventDispatcherDataSource>)arg1 ;
-(NSUUID *)identifier;
-(void)submitFailureEventWithEventErrorCode:(unsigned long long)arg1 error:(id)arg2 ;
-(void)submitTransactionUpdatedDestinationEventWithDestinationIdentifier:(id)arg1 existingDestinationIdentifier:(id)arg2 ;
-(HMDLogEventDispatcher *)logEventDispatcher;
-(NSArray *)logEventProviderDailySubmissionBlocks;
-(void)triggerLogEventProviderDailySubmissionBlocks;
-(id)dataSourceDestinationTypeWithIdentifier:(id)arg1 ;
-(id)dataSourceIsTriggeredOnControllerDevice;
-(id)dataSourceCurrentUserPrivilege;
-(id)dataSourceCurrentDestinationType;
-(id)dataSourceCurrentUser;
-(void)submitDailySetDestinationEvent;
-(id)initWithIdentifier:(id)arg1 logEventDispatcher:(id)arg2 dataSource:(id)arg3 ;
-(void)submitReceivedUpdateDestinationRequestMessageEventWithDestinationIdentifier:(id)arg1 existingDestinationIdentifier:(id)arg2 ;
-(void)startStagedDestinationIdentifierCommittedEventWithStagedDestinationIdentifier:(id)arg1 ;
-(void)submitStagedDestinationIdentifierCommittedEventWithCommittedDestinationIdentifier:(id)arg1 ;
-(HMDMediaDestinationControllerStagedDestinationIdentifierCommittedEvent *)trackedStagedDestinationIdentifierEvent;
-(void)setTrackedStagedDestinationIdentifierEvent:(HMDMediaDestinationControllerStagedDestinationIdentifierCommittedEvent *)arg1 ;
@end

