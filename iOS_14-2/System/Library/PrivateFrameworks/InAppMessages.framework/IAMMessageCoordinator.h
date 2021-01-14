/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
*/

#import <libobjc.A.dylib/IAMImpressionManagerDelegate.h>
#import <libobjc.A.dylib/IAMStorageCoordinatorDelegate.h>
#import <libobjc.A.dylib/IAMEventReceiver.h>

@protocol OS_dispatch_queue, IAMApplicationContextProvider, IAMMessageMetricsDelegate;
@class NSObject, NSMutableDictionary, IAMImpressionManager, NSMutableArray, IAMStorageCoordinator, NSDictionary, NSDate, IAMMessageEntryManager, NSString, IAMModalTarget;

@interface IAMMessageCoordinator : NSObject <IAMImpressionManagerDelegate, IAMStorageCoordinatorDelegate, IAMEventReceiver> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	id<IAMApplicationContextProvider> _applicationContext;
	NSMutableDictionary* _messageTargetsByTargetIdentifier;
	NSMutableDictionary* _priorityMessageEntryByTargetIdentifier;
	IAMImpressionManager* _impressionManager;
	NSMutableArray* _pendingTriggerContexts;
	IAMStorageCoordinator* _storageCoordinator;
	NSDictionary* _metadataEntryByMessageIdentifier;
	NSDate* _lastDisplayTimeGlobalPresentationPolicyGroupNormal;
	NSDate* _lastDisplayTimeGlobalPresentationPolicyGroupRestricted;
	IAMMessageEntryManager* _messageEntryManager;
	BOOL _isReadyToEvaluateMessages;
	NSString* _modalTargetIdentifier;
	IAMModalTarget* _modalTarget;
	NSDictionary* _messageGroupsByGroupIdentifier;
	id<IAMMessageMetricsDelegate> _metricsDelegate;

}

@property (assign,nonatomic,__weak) id<IAMMessageMetricsDelegate> metricsDelegate;                     //@synthesize metricsDelegate=_metricsDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IAMApplicationContextProvider> applicationContext;              //@synthesize applicationContext=_applicationContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)_createMessageFromMessageEntry:(id)arg1 replacingResourcePathsWithCachedResourceLocations:(BOOL)arg2 ;
-(void)reportMessageWithIdentifier:(id)arg1 actionWasPerformedWithIdentifier:(id)arg2 fromTargetWithIdentifier:(id)arg3 ;
-(id<IAMMessageMetricsDelegate>)metricsDelegate;
-(void)storageCoordinatorMessageEntriesChanged:(id)arg1 ;
-(void)reportMessageWithIdentifier:(id)arg1 actionWasPerformedWithIdentifier:(id)arg2 ;
-(void)_enqueuePendingTriggerContext:(id)arg1 ;
-(void)startWithApplicationContext:(id)arg1 ;
-(id)_metadataEntryForMessageIdentifier:(id)arg1 ;
-(id)init;
-(void)reportMessageDidAppearWithIdentifier:(id)arg1 fromTargetWithIdentifier:(id)arg2 ;
-(id)_filterActiveTargetIdentifiers:(id)arg1 ;
-(void)receiveTriggerEventContext:(id)arg1 ;
-(void)start;
-(void)startWithApplicationContext:(id)arg1 messageGroups:(id)arg2 messageEntryProvider:(id)arg3 messageMetadataStorage:(id)arg4 propertyStorage:(id)arg5 ;
-(void)_startStorageCoordinatorWithMessageEntryProvider:(id)arg1 messageMetadataStorage:(id)arg2 propertyStorage:(id)arg3 ;
-(void)reportMessageDidDisappearWithIdentifier:(id)arg1 ;
-(void)reportMetricsEvent:(id)arg1 ;
-(void)registerMessageTarget:(id)arg1 ;
-(void)setApplicationContext:(id<IAMApplicationContextProvider>)arg1 ;
-(void)_notifyMessageTargets:(id)arg1 withTargetIdentifier:(id)arg2 didUpdatePriorityMessageFromEntry:(id)arg3 ;
-(void)impressionManager:(id)arg1 impressionDidEndForMessageEntry:(id)arg2 ;
-(void)_evaluateMessagesForAllActiveTargets;
-(void)reportChangedContextPropertiesContext:(id)arg1 ;
-(id<IAMApplicationContextProvider>)applicationContext;
-(void)unregisterMessageTarget:(id)arg1 ;
-(void)_incrementNumberOfDisplaysForMessageEntry:(id)arg1 ;
-(void)_setMessageGroups:(id)arg1 ;
-(void)_reportMessageAction:(id)arg1 wasPerformedInMessageEntry:(id)arg2 fromTargetWithIdentifier:(id)arg3 ;
-(void)_reevaluateMessageEntries:(id)arg1 forTargetIdentifier:(id)arg2 shouldNotifyTargetsIfPriorityMessageNonNil:(BOOL)arg3 ;
-(void)startWithApplicationContext:(id)arg1 messageGroups:(id)arg2 ;
-(void)_calculateMessagesProximityAndDownloadResourcesIfNeeded:(id)arg1 ;
-(void)_updatePriorityMessageEntry:(id)arg1 forTargetIdentifier:(id)arg2 shouldNotifyTargetsIfNonNil:(BOOL)arg3 ;
-(void)_reportHoldoutMessageWouldAppear:(id)arg1 ;
-(void)_updateLastDisplayTime:(id)arg1 forMessageEntry:(id)arg2 ;
-(id)_dequeuePendingTriggerContexts;
-(id)_messageBundleIdentifiers;
-(void)_reevaluateTargetsWithIdentifiers:(id)arg1 forTriggerContext:(id)arg2 shouldNotifyTargetsIfPriorityMessageNonNil:(BOOL)arg3 ;
-(void)_removeUserNotificationRemovalForMessageWithIdentifier:(id)arg1 ;
-(void)_handleUpdatedMessageEntries:(id)arg1 andMetadata:(id)arg2 ;
-(void)reportMessageDidAppearWithIdentifier:(id)arg1 ;
-(void)receiveEvent:(id)arg1 ;
-(void)impressionManager:(id)arg1 shouldReportImpressionEventWithDictionary:(id)arg2 ;
-(void)reportMessageDidDisappearWithIdentifier:(id)arg1 fromTargetWithIdentifier:(id)arg2 ;
-(void)_fetchMessagesAndMetadataFromStorageCoordinator:(/*^block*/id)arg1 ;
-(void)setMetricsDelegate:(id<IAMMessageMetricsDelegate>)arg1 ;
-(void)_updateMetadataOfMessageEntriesByTrigger:(id)arg1 forReceivedEvent:(id)arg2 ;
-(void)dealloc;
-(void)_handleMessageReachedMaximumDisplayCount:(id)arg1 ;
-(void)reportApplicationContextPropertiesDidChange:(id)arg1 ;
-(void)_updateMetadata:(id)arg1 forMessageEntry:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

