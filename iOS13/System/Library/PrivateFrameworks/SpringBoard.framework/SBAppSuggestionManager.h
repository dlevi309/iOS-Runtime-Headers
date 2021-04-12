/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/UABestAppSuggestionManagerDelegate.h>
#import <libobjc.A.dylib/SBAttentionAwarenessClientDelegate.h>

@class UABestAppSuggestionManager, UABestAppSuggestion, _DECConsumer, _DECResult, SBBestAppSuggestion, NSCountedSet, SBAttentionAwarenessClient, NSString;

@interface SBAppSuggestionManager : NSObject <UABestAppSuggestionManagerDelegate, SBAttentionAwarenessClientDelegate> {

	UABestAppSuggestionManager* _continuitySuggestionManager;
	UABestAppSuggestion* _continuityCurrentBestSuggestion;
	_DECConsumer* _expertCenterSuggestionMonitor;
	_DECResult* _currentExpertBestSuggestion;
	SBBestAppSuggestion* _currentBestSuggestion;
	NSCountedSet* _listeningReasons;
	BOOL _isListeningForContinuitySuggestion;
	BOOL _isListeningForExpertCenterSuggestion;
	BOOL _screenOnDueToUserEvent;
	BOOL _screenOnAndLookingForEvent;
	SBAttentionAwarenessClient* _idleTouchAwarenessClient;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)bestAppSuggestionChanged:(id)arg1 ;
-(void)_stopListeningForNotifications;
-(void)noteActivatingForAppSuggestion:(id)arg1 fromSource:(long long)arg2 ;
-(void)client:(id)arg1 attentionLostTimeoutDidExpire:(double)arg2 forConfigurationGeneration:(unsigned long long)arg3 withAssociatedObject:(id)arg4 ;
-(void)clientDidResetForUserAttention:(id)arg1 ;
-(void)noteNotActivatingForAppSuggestion:(id)arg1 fromSource:(long long)arg2 ;
-(void)startFetchingPayloadForAppSuggestion:(id)arg1 ;
-(id)currentSuggestedApp;
-(void)_createSuggestionSources;
-(void)_listenForNotifications;
-(void)_destroySuggestionSources;
-(unsigned long long)_supportedExpertCenterCategories;
-(void)_evaluateSuggestionUpdates:(id)arg1 ;
-(void)_screenDidUndim:(id)arg1 ;
-(void)_screenDidDim:(id)arg1 ;
-(void)_handleInitialSpringBoardLaunch;
-(void)_handleAppUninstall:(id)arg1 ;
-(void)_setContinuitySuggestionUpdatesEnabled:(BOOL)arg1 expertCenterSuggestionUpdatesEnabled:(BOOL)arg2 ;
-(void)expertCenterSuggestionChanged:(id)arg1 ;
-(void)_calculateBestSuggestionAndNotifyListeners;
-(void)performWithCurrentSuggestedAppAndApplication:(/*^block*/id)arg1 ;
-(void)enableListeningForUpdatesForReason:(id)arg1 ;
-(void)disableListeningForUpdatesForReason:(id)arg1 ;
@end

