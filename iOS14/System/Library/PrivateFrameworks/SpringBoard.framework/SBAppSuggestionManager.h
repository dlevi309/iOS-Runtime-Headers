/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_destroySuggestionSources;
-(void)startFetchingPayloadForAppSuggestion:(id)arg1 ;
-(id)init;
-(void)enableListeningForUpdatesForReason:(id)arg1 ;
-(void)_listenForNotifications;
-(void)_handleInitialSpringBoardLaunch;
-(void)_screenDidUndim:(id)arg1 ;
-(void)performWithCurrentSuggestedAppAndApplication:(/*^block*/id)arg1 ;
-(void)_evaluateSuggestionUpdates:(id)arg1 ;
-(void)disableListeningForUpdatesForReason:(id)arg1 ;
-(void)_setContinuitySuggestionUpdatesEnabled:(BOOL)arg1 expertCenterSuggestionUpdatesEnabled:(BOOL)arg2 ;
-(void)_screenDidDim:(id)arg1 ;
-(void)clientDidResetForUserAttention:(id)arg1 ;
-(void)_handleAppUninstall:(id)arg1 ;
-(void)noteNotActivatingForAppSuggestion:(id)arg1 fromSource:(long long)arg2 ;
-(void)_stopListeningForNotifications;
-(id)currentSuggestedApp;
-(void)_createSuggestionSources;
-(unsigned long long)_supportedExpertCenterCategories;
-(void)client:(id)arg1 attentionLostTimeoutDidExpire:(double)arg2 forConfigurationGeneration:(unsigned long long)arg3 withAssociatedObject:(id)arg4 ;
-(void)_calculateBestSuggestionAndNotifyListeners;
-(void)noteActivatingForAppSuggestion:(id)arg1 fromSource:(long long)arg2 ;
-(void)expertCenterSuggestionChanged:(id)arg1 ;
-(void)bestAppSuggestionChanged:(id)arg1 ;
-(void)dealloc;
@end

