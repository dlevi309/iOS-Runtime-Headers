/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
*/

#import <libobjc.A.dylib/IAMImpressionManagerDelegate.h>
#import <libobjc.A.dylib/IAMEventReceiver.h>

@protocol OS_dispatch_queue, IAMApplicationContextProvider, IAMMessageMetricsDelegate;
@class ICInAppMessageManager, NSObject, NSDictionary, NSMutableDictionary, IAMImpressionManager, NSMutableArray, NSString, IAMModalTarget;

@interface IAMMessageCoordinator : NSObject <IAMImpressionManagerDelegate, IAMEventReceiver> {

	ICInAppMessageManager* _iTunesCloudIAMManager;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSDictionary* _messageEntriesByIdentifier;
	NSMutableDictionary* _metadataEntriesByIdentifier;
	id<IAMApplicationContextProvider> _applicationContext;
	NSDictionary* _messageEntriesByMonitoredKeys;
	NSDictionary* _messageEntriesByTargetIdentifier;
	NSMutableDictionary* _messageTargetsByTargetIdentifier;
	NSMutableDictionary* _priorityMessageEntryByTargetIdentifier;
	NSMutableDictionary* _lastDisplayTimeByGlobalPresentationPolicyGroupString;
	IAMImpressionManager* _impressionManager;
	NSMutableArray* _pendingEvents;
	NSString* _modalTargetIdentifier;
	IAMModalTarget* _modalTarget;
	BOOL _haveMessagesBeenFetchedAndIndexed;
	BOOL _havePresentationPolicyDisplayTimesBeenFetched;
	BOOL _registeredAsObserverForICNotifications;
	id<IAMMessageMetricsDelegate> _metricsDelegate;

}

@property (nonatomic,retain) NSDictionary * messageEntriesByIdentifier;                                 //@synthesize messageEntriesByIdentifier=_messageEntriesByIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * messageEntriesByMonitoredKeys;                              //@synthesize messageEntriesByMonitoredKeys=_messageEntriesByMonitoredKeys - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * priorityMessageEntryByTargetIdentifier;              //@synthesize priorityMessageEntryByTargetIdentifier=_priorityMessageEntryByTargetIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<IAMMessageMetricsDelegate> metricsDelegate;                      //@synthesize metricsDelegate=_metricsDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)propertyNameForGlobalPresentationPolicyGroupLastDisplayTime:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(void)start;
-(void)setMetricsDelegate:(id<IAMMessageMetricsDelegate>)arg1 ;
-(id<IAMMessageMetricsDelegate>)metricsDelegate;
-(void)registerMessageTarget:(id)arg1 ;
-(BOOL)applicationAllowsModalPresentation;
-(id)messageEntryForIdentifier:(id)arg1 ;
-(void)reportHoldoutMessageWouldAppear:(id)arg1 ;
-(void)unregisterMessageTarget:(id)arg1 ;
-(void)reportMessageDidAppearWithIdentifier:(id)arg1 ;
-(void)reportMessageDidDisappearWithIdentifier:(id)arg1 ;
-(void)reportMetricsEvent:(id)arg1 ;
-(void)performApplicationAction:(id)arg1 ;
-(id)applicationViewControllerForModalPresentation;
-(void)impressionManager:(id)arg1 impressionDidEndForMessageEntry:(id)arg2 ;
-(void)impressionManager:(id)arg1 shouldReportImpressionEventWithDictionary:(id)arg2 ;
-(id)metadataEntryForIdentifier:(id)arg1 ;
-(void)setMetadataEntry:(id)arg1 forIdentifier:(id)arg2 ;
-(void)_updateMessageIndexes;
-(void)_evaluateMessagesIfReady;
-(void)cacheLastDisplayTime:(id)arg1 forGlobalPresentationPolicyGroup:(int)arg2 ;
-(void)_fetchLastDisplayTimeForGlobalPresentationPolicyGroup:(int)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_canMessagesBeEvaluated;
-(id)_dequeuePendingEvents;
-(void)receiveEvent:(id)arg1 ;
-(void)_reevaluateTargetsWithIdentifiers:(id)arg1 forEvent:(id)arg2 shouldNotifyTargetsIfPriorityMessageNonNil:(BOOL)arg3 ;
-(void)fetchMessagesFromiTunesCloud;
-(void)fetchGlobalPresentationPolicyGroupDisplayTimesFromiTunesCloud;
-(void)_didReceiveMessagesDidChangeNotification;
-(void)startWithApplicationContext:(id)arg1 ;
-(void)setLastDisplayTime:(id)arg1 forGlobalPresentationPolicyGroup:(int)arg2 ;
-(void)_removeUserNotificationRemovalForMessageWithIdentifier:(id)arg1 ;
-(void)_incrementNumberOfDisplaysForMessageEntry:(id)arg1 ;
-(void)reportMessageWithIdentifier:(id)arg1 actionWasPerformedWithIdentifier:(id)arg2 fromTargetWithIdentifier:(id)arg3 ;
-(void)_reportMessageAction:(id)arg1 wasPerformedInMessageEntry:(id)arg2 fromTargetWithIdentifier:(id)arg3 ;
-(id)_messageEntriesCorrespondingToContextProperties:(id)arg1 shouldExcludeMessagesRequiringTriggerEvent:(BOOL)arg2 ;
-(id)_targetIdentifiersCorrespondingToMessageEntries:(id)arg1 ;
-(id)_filterActiveTargetIdentifiers:(id)arg1 ;
-(id)metadataEntriesByIdentifier;
-(id)lastDisplayTimeForGlobalPresentationPolicyGroup:(int)arg1 ;
-(void)_updatePriorityMessageEntry:(id)arg1 forTargetIdentifier:(id)arg2 shouldNotifyTargetsIfNonNil:(BOOL)arg3 ;
-(void)_reevaluateMessageEntries:(id)arg1 forTargetIdentifier:(id)arg2 shouldNotifyTargetsIfPriorityMessageNonNil:(BOOL)arg3 ;
-(void)_notifyMessageTargets:(id)arg1 withTargetIdentifier:(id)arg2 didUpdatePriorityMessageFromEntry:(id)arg3 ;
-(id)_createMessageFromMessageEntry:(id)arg1 replacingResourcePathsWithCachedResourceLocations:(BOOL)arg2 ;
-(void)_enqueuePendingEvent:(id)arg1 ;
-(id)messageEntriesByRealKeyCorrespondingToEvent:(id)arg1 ;
-(id)allMessageEntriesWithoutDuplicates:(id)arg1 ;
-(void)updateMetadataOfMessageEntriesByRealKey:(id)arg1 forReceivedEvent:(id)arg2 ;
-(void)_calculateMessagesProximityAndDownloadResourcesIfNeeded:(id)arg1 ;
-(void)_reportDisplayToITunesCloudManagerWithEventIdentifier:(id)arg1 ;
-(void)reportMessageDidAppearWithIdentifier:(id)arg1 fromTargetWithIdentifier:(id)arg2 ;
-(void)reportMessageDidDisappearWithIdentifier:(id)arg1 fromTargetWithIdentifier:(id)arg2 ;
-(void)reportMessageWithIdentifier:(id)arg1 actionWasPerformedWithIdentifier:(id)arg2 ;
-(void)reportApplicationContextPropertiesDidChange:(id)arg1 ;
-(void)setMetadataEntriesByIdentifier:(id)arg1 ;
-(NSDictionary *)messageEntriesByIdentifier;
-(void)setMessageEntriesByIdentifier:(NSDictionary *)arg1 ;
-(NSDictionary *)messageEntriesByMonitoredKeys;
-(void)setMessageEntriesByMonitoredKeys:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)priorityMessageEntryByTargetIdentifier;
-(void)setPriorityMessageEntryByTargetIdentifier:(NSMutableDictionary *)arg1 ;
@end

