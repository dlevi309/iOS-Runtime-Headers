/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/


@protocol VCVoiceShortcutManagerXPCInterface <NSObject>
@required
-(void)getVoiceShortcutsWithCompletion:(/*^block*/id)arg1;
-(void)getVoiceShortcutWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setShortcutSuggestions:(id)arg1 forAppWithBundleIdentifier:(id)arg2;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 inDomain:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)updateShortcutsVocabularyWithCompletion:(/*^block*/id)arg1;
-(void)unregisterTriggerWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)refreshTriggerWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)getNumberOfVoiceShortcutsWithCompletion:(/*^block*/id)arg1;
-(void)getVoiceShortcutWithPhrase:(id)arg1 completion:(/*^block*/id)arg2;
-(void)getVoiceShortcutsForAppWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)addVoiceShortcut:(id)arg1 phrase:(id)arg2 completion:(/*^block*/id)arg3;
-(void)updateVoiceShortcutWithIdentifier:(id)arg1 phrase:(id)arg2 shortcut:(id)arg3 completion:(/*^block*/id)arg4;
-(void)deleteVoiceShortcutWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)validateVoiceShortcutPhrases:(id)arg1 completion:(/*^block*/id)arg2;
-(void)requestSyncToWatchWithForceReset:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(void)requestDataMigration:(/*^block*/id)arg1;
-(void)getShortcutSuggestionsForAppWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)getShortcutSuggestionsForAllAppsWithLimit:(unsigned long long)arg1 completion:(/*^block*/id)arg2;
-(void)getShareSheetWorkflowsForExtensionMatchingDictionaries:(id)arg1 hostBundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)generateSingleUseTokenForWorkflowIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)getSiriPodcastsDatabaseURLWithCompletion:(/*^block*/id)arg1;
-(void)getConfiguredTriggerDescriptionsWithCompletion:(/*^block*/id)arg1;
-(void)fireTriggerWithIdentifier:(id)arg1 force:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)checkTriggerStateWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)checkTriggerStateWithKeyPath:(id)arg1 completion:(/*^block*/id)arg2;
-(void)deleteTriggerWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)runShortcutWithName:(id)arg1 completion:(/*^block*/id)arg2;
-(void)runShortcutWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)hasRunEventsInTheLast5DaysWithCompletion:(/*^block*/id)arg1;
-(void)obliterateShortcuts:(/*^block*/id)arg1;

@end

