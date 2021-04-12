/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <libobjc.A.dylib/IAMMessageMetricsDelegate.h>

@class NSMutableDictionary, VUIInAppMessagingContextProvider, IAMMessageCoordinator, VUIInAppMessagesConfig, NSString;

@interface VUIInAppMessagingManager : NSObject <IAMMessageMetricsDelegate> {

	NSMutableDictionary* messageRegistry;
	BOOL _enabled;
	VUIInAppMessagingContextProvider* _context;
	IAMMessageCoordinator* _coordinator;
	VUIInAppMessagesConfig* _config;

}

@property (nonatomic,retain) VUIInAppMessagingContextProvider * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) IAMMessageCoordinator * coordinator;                     //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,retain) VUIInAppMessagesConfig * config;                         //@synthesize config=_config - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                            //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(VUIInAppMessagesConfig *)config;
-(VUIInAppMessagingContextProvider *)context;
-(void)setConfig:(VUIInAppMessagesConfig *)arg1 ;
-(void)setContext:(VUIInAppMessagingContextProvider *)arg1 ;
-(void)setCoordinator:(IAMMessageCoordinator *)arg1 ;
-(IAMMessageCoordinator *)coordinator;
-(void)registerMessageTarget:(id)arg1 ;
-(void)unregisterMessageTarget:(id)arg1 ;
-(void)reportMetricsEvent:(id)arg1 ;
-(void)messageDidReportMetricsEvent:(id)arg1 eventProperties:(id)arg2 ;
-(void)reportMessageDidAppearWithIdentifier:(id)arg1 fromTargetWithIdentifier:(id)arg2 ;
-(void)reportMessageDidDisappearWithIdentifier:(id)arg1 fromTargetWithIdentifier:(id)arg2 ;
-(void)reportMessageWithIdentifier:(id)arg1 actionWasPerformedWithIdentifier:(id)arg2 ;
-(void)addMessage:(id)arg1 forTargetID:(id)arg2 ;
-(void)removeMessageForTargetID:(id)arg1 ;
-(id)messageForTargetID:(id)arg1 ;
-(void)_handleSubscriptionDataDidChangeNotification:(id)arg1 ;
-(id)_normalizedPageDetailsForEventProperties:(id)arg1 ;
-(void)reportApplicationDidBecomeActive;
@end

