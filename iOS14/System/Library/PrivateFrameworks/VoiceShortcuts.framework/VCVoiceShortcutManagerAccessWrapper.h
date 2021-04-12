/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <libobjc.A.dylib/VCVoiceShortcutManagerXPCInterface.h>

@protocol VCSyncDataEndpoint;
@class VCAccessSpecifier, VCVoiceShortcutManager, VCCoreDuetListener, WFShareSheetWorkflowProvider, VCCKShortcutSyncCoordinator, WFWorkflowRunCoordinator, NSString;

@interface VCVoiceShortcutManagerAccessWrapper : NSObject <VCVoiceShortcutManagerXPCInterface> {

	VCAccessSpecifier* _accessSpecifier;
	VCVoiceShortcutManager* _voiceShortcutManager;
	VCCoreDuetListener* _coreDuetListener;
	WFShareSheetWorkflowProvider* _shareSheetProvider;
	id<VCSyncDataEndpoint> _syncDataEndpoint;
	VCCKShortcutSyncCoordinator* _syncCoordinator;
	WFWorkflowRunCoordinator* _runCoordinator;

}

@property (nonatomic,readonly) VCVoiceShortcutManager * voiceShortcutManager;                  //@synthesize voiceShortcutManager=_voiceShortcutManager - In the implementation block
@property (nonatomic,readonly) VCCoreDuetListener * coreDuetListener;                          //@synthesize coreDuetListener=_coreDuetListener - In the implementation block
@property (nonatomic,readonly) WFShareSheetWorkflowProvider * shareSheetProvider;              //@synthesize shareSheetProvider=_shareSheetProvider - In the implementation block
@property (nonatomic,readonly) id<VCSyncDataEndpoint> syncDataEndpoint;                        //@synthesize syncDataEndpoint=_syncDataEndpoint - In the implementation block
@property (nonatomic,readonly) VCCKShortcutSyncCoordinator * syncCoordinator;                  //@synthesize syncCoordinator=_syncCoordinator - In the implementation block
@property (nonatomic,readonly) WFWorkflowRunCoordinator * runCoordinator;                      //@synthesize runCoordinator=_runCoordinator - In the implementation block
@property (nonatomic,copy,readonly) VCAccessSpecifier * accessSpecifier;                       //@synthesize accessSpecifier=_accessSpecifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)unregisterTriggerWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteTriggerWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendAceCommandDictionary:(id)arg1 completion:(/*^block*/id)arg2 ;
-(VCVoiceShortcutManager *)voiceShortcutManager;
-(VCCKShortcutSyncCoordinator *)syncCoordinator;
-(void)stopRunningWorkflowWithRunningContext:(id)arg1 ;
-(VCCoreDuetListener *)coreDuetListener;
-(void)checkTriggerStateWithKeyPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(WFWorkflowRunCoordinator *)runCoordinator;
-(void)getVoiceShortcutsWithCompletion:(/*^block*/id)arg1 ;
-(void)getVoiceShortcutWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setShortcutSuggestions:(id)arg1 forAppWithBundleIdentifier:(id)arg2 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 inDomain:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)checkTriggerStateWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resumeWorkflowFromContext:(id)arg1 presentationMode:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissPresentedContentWithCompletion:(/*^block*/id)arg1 ;
-(void)runWorkflowWithRequest:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getNumberOfVoiceShortcutsWithCompletion:(/*^block*/id)arg1 ;
-(void)getVoiceShortcutWithPhrase:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getVoiceShortcutsForAppWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addVoiceShortcut:(id)arg1 phrase:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateVoiceShortcutWithIdentifier:(id)arg1 phrase:(id)arg2 shortcut:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)deleteVoiceShortcutWithIdentifier:(id)arg1 name:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)requestDataMigration:(/*^block*/id)arg1 ;
-(void)getShortcutSuggestionsForAppWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getShortcutSuggestionsForAllAppsWithLimit:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)generateSingleUseTokenForWorkflowIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getShareSheetWorkflowsForExtensionMatchingDictionaries:(id)arg1 hostBundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getSiriPodcastsDatabaseURLWithCompletion:(/*^block*/id)arg1 ;
-(void)refreshTriggerWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fireTriggerWithIdentifier:(id)arg1 force:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)enqueueDialogRequest:(id)arg1 runningContext:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)hasRunEventsInTheLast5DaysWithCompletion:(/*^block*/id)arg1 ;
-(void)obliterateShortcuts:(/*^block*/id)arg1 ;
-(id<VCSyncDataEndpoint>)syncDataEndpoint;
-(void)createShortcutWithRecordData:(id)arg1 name:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getResultsForWorkflowQuery:(id)arg1 resultClassName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getValueForDescriptor:(id)arg1 resultClassName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addDefaultShortcutsIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)resetDefaultShortcutFlagsWithCompletion:(/*^block*/id)arg1 ;
-(void)createSleepWorkflow:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getSleepActionSuggestionsForAllAppsWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)getSleepActionSuggestionsForAppWithBundleIdentifier:(id)arg1 shouldFilterBySleep:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)getSleepActionSuggestionsForAllAppsFilteringBySleep:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)getSleepActionSuggestionsForAppWithBundleIdentifier:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteSleepWorkflowWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getAccessibilityWorkflowsWithCompletion:(/*^block*/id)arg1 ;
-(void)getAccessibilityWorkflowWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)drawGlyphs:(id)arg1 withBackgroundColorValues:(id)arg2 intoContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)getFirstUnsortedWorkflowWithCompletion:(/*^block*/id)arg1 ;
-(void)getConfiguredTriggerDescriptionsWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithVoiceShortcutManager:(id)arg1 coreDuetListener:(id)arg2 accessSpecifier:(id)arg3 syncCoordinator:(id)arg4 syncDataEndpoint:(id)arg5 runCoordinator:(id)arg6 ;
-(void)describeSyncStateIncludingDeleted:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(VCAccessSpecifier *)accessSpecifier;
-(WFShareSheetWorkflowProvider *)shareSheetProvider;
@end

