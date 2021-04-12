/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <libobjc.A.dylib/IAMMessageMetricsDelegate.h>

@class NSMutableDictionary, VUIInAppMessagingContextProvider, IAMMessageCoordinator, VUIInAppMessagesConfig, NSString;

@interface VUIInAppMessagingManager : NSObject <IAMMessageMetricsDelegate> {

	NSMutableDictionary* messageRegistry;
	VUIInAppMessagingContextProvider* _context;
	IAMMessageCoordinator* _coordinator;
	VUIInAppMessagesConfig* _config;

}

@property (nonatomic,retain) VUIInAppMessagingContextProvider * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) IAMMessageCoordinator * coordinator;                     //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,retain) VUIInAppMessagesConfig * config;                         //@synthesize config=_config - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(VUIInAppMessagesConfig *)config;
-(void)reportMessageWithIdentifier:(id)arg1 actionWasPerformedWithIdentifier:(id)arg2 ;
-(void)messageDidReportMetricsEvent:(id)arg1 eventProperties:(id)arg2 ;
-(id)init;
-(void)setCoordinator:(IAMMessageCoordinator *)arg1 ;
-(void)reportMessageDidAppearWithIdentifier:(id)arg1 fromTargetWithIdentifier:(id)arg2 ;
-(VUIInAppMessagingContextProvider *)context;
-(void)reportMetricsEvent:(id)arg1 ;
-(void)registerMessageTarget:(id)arg1 ;
-(void)unregisterMessageTarget:(id)arg1 ;
-(void)setConfig:(VUIInAppMessagesConfig *)arg1 ;
-(void)reportMessageDidDisappearWithIdentifier:(id)arg1 fromTargetWithIdentifier:(id)arg2 ;
-(void)dealloc;
-(IAMMessageCoordinator *)coordinator;
-(void)setContext:(VUIInAppMessagingContextProvider *)arg1 ;
-(void)addMessage:(id)arg1 forTargetID:(id)arg2 ;
-(void)removeMessageForTargetID:(id)arg1 ;
-(id)messageForTargetID:(id)arg1 ;
-(id)messageJSONForTargetID:(id)arg1 ;
-(void)reportCountableEventNamed:(id)arg1 ;
-(void)reportDocumentAppearance:(id)arg1 ;
-(void)reportApplicationDidBecomeActiveEvent;
-(id)_getMessageGroups;
-(void)_handleSubscriptionDataDidChangeNotification:(id)arg1 ;
-(void)_handleIsPlaybackUIBeingShownDidChange:(id)arg1 ;
-(void)_handleActiveDownloadButtonsDidChange:(id)arg1 ;
-(void)_handleHasFavoriteTeamsDidChange:(id)arg1 ;
-(void)_handleLocationStatusDidChange:(id)arg1 ;
-(void)_handleNetworkStatusDidChange:(id)arg1 ;
-(void)_handleLibraryContentsDidChange:(id)arg1 ;
-(id)_normalizedPageDetailsForEventProperties:(id)arg1 ;
-(void)_debouncedLibraryContentsDidChange;
-(void)reportValueEventNamed:(id)arg1 value:(id)arg2 ;
@end

