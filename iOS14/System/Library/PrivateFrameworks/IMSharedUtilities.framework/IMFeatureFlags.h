/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@interface IMFeatureFlags : NSObject

@property (nonatomic,readonly) BOOL newConversationListEnabled; 
@property (nonatomic,readonly) BOOL conversationPinningEnabled; 
@property (nonatomic,readonly) BOOL conversationPinningOnboardingEnabled; 
@property (nonatomic,readonly) BOOL conversationPinningSyncEnabled; 
@property (nonatomic,readonly) BOOL conversationPinningMultiDragEnabled; 
@property (nonatomic,readonly) BOOL conversationPinningTouchdownDimEnabled; 
@property (nonatomic,readonly) BOOL conversationPinningUsesLastNameForDuplicatesEnabled; 
@property (nonatomic,readonly) BOOL avatarViewAllowsStaleRendering; 
@property (nonatomic,readonly) BOOL mentionsEnabled; 
@property (nonatomic,readonly) BOOL mentionsKeyboardSuggestionsEnabled; 
@property (nonatomic,readonly) BOOL macToolbarEnabled; 
@property (nonatomic,readonly) BOOL macApplicationMetricsGatheringEnabled; 
@property (nonatomic,readonly) BOOL messageSyncP2Enabled; 
@property (nonatomic,readonly) BOOL fullTranscriptLoggingEnabled; 
+(id)sharedInstance;
-(BOOL)isImagePreviewBlastDoorEnabled;
-(BOOL)macApplicationMetricsGatheringEnabled;
-(BOOL)loadAllChatsProgressivelyEnabled;
-(BOOL)mentionsEnabled;
-(BOOL)messageAppFreezerEnabled;
-(BOOL)fullTranscriptLoggingEnabled;
-(BOOL)conversationPinningEnabled;
-(BOOL)conversationPinningOnboardingEnabled;
-(BOOL)messageSyncP2Enabled;
-(BOOL)conversationPinningMultiDragEnabled;
-(BOOL)mentionsKeyboardSuggestionsEnabled;
-(BOOL)conversationPinningSyncEnabled;
-(BOOL)fixIMTranscoderAgentPriorityInversion;
-(BOOL)isGreenfieldEnabled;
-(BOOL)isGreenfieldBlastDoorEnabled;
-(BOOL)newConversationListEnabled;
-(BOOL)fixImagentPriorityInversion;
-(BOOL)certifiedDeliveryEnabled;
-(BOOL)conversationPinningUsesLastNameForDuplicatesEnabled;
-(BOOL)avatarViewAllowsStaleRendering;
-(BOOL)fixIMDPersistenceAgentPriorityInversion;
-(BOOL)conversationPinningTouchdownDimEnabled;
-(BOOL)messagesBlastdoorEnabled;
-(BOOL)manuallyAckMessagesEnabled;
-(BOOL)macToolbarEnabled;
-(BOOL)groupPhotoEnabled;
@end

