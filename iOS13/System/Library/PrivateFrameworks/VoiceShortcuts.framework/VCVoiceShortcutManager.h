/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <libobjc.A.dylib/HMHomeManagerDelegate.h>

@class VCCoreDataStore, HMHomeManager, WFDatabase, NSPersistentStoreDescription, VCRealmDataStore, NSString;

@interface VCVoiceShortcutManager : NSObject <HMHomeManagerDelegate> {

	VCCoreDataStore* _coreDataStore;
	HMHomeManager* _homeManager;
	WFDatabase* _database;
	NSPersistentStoreDescription* _storeDescription;
	VCRealmDataStore* _realmDataStore;

}

@property (nonatomic,readonly) WFDatabase * database;                                             //@synthesize database=_database - In the implementation block
@property (nonatomic,copy,readonly) NSPersistentStoreDescription * storeDescription;              //@synthesize storeDescription=_storeDescription - In the implementation block
@property (nonatomic,readonly) VCCoreDataStore * coreDataStore;                                   //@synthesize coreDataStore=_coreDataStore - In the implementation block
@property (nonatomic,readonly) VCRealmDataStore * realmDataStore;                                 //@synthesize realmDataStore=_realmDataStore - In the implementation block
@property (nonatomic,readonly) HMHomeManager * homeManager;                                       //@synthesize homeManager=_homeManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WFDatabase *)database;
-(NSPersistentStoreDescription *)storeDescription;
-(HMHomeManager *)homeManager;
-(void)updateShortcutsVocabularyWithCompletion:(/*^block*/id)arg1 ;
-(void)getShareSheetWorkflowsForExtensionMatchingDictionaries:(id)arg1 hostBundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithDatabase:(id)arg1 error:(id*)arg2 ;
-(id)initWithDatabase:(id)arg1 storeDescription:(id)arg2 error:(id*)arg3 ;
-(id)coreDataStoreWithError:(id*)arg1 ;
-(VCCoreDataStore *)coreDataStore;
-(void)migrateVoiceShortcutsToBeShortcuts;
-(void)getNumberOfVoiceShortcutsWithAccessSpecifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getVoiceShortcutWithIdentifier:(id)arg1 accessSpecifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getVoiceShortcutWithPhrase:(id)arg1 accessSpecifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getVoiceShortcutsWithAccessSpecifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getVoiceShortcutsForAppsWithBundleIdentifiers:(id)arg1 accessSpecifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getInactiveAppsWithAccessSpecifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addVoiceShortcut:(id)arg1 phrase:(id)arg2 accessSpecifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)updateVoiceShortcutWithIdentifier:(id)arg1 phrase:(id)arg2 shortcut:(id)arg3 accessSpecifier:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)deleteVoiceShortcutWithIdentifier:(id)arg1 accessSpecifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)validateVoiceShortcutPhrases:(id)arg1 accessSpecifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)sanitizePhrase:(id)arg1 ;
-(BOOL)phraseHasHomeKitConflict:(id)arg1 ;
-(void)setShortcutSuggestions:(id)arg1 forAppWithBundleIdentifier:(id)arg2 accessSpecifier:(id)arg3 ;
-(void)getShortcutSuggestionsForAppWithBundleIdentifier:(id)arg1 accessSpecifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getShortcutSuggestionsForAllAppsWithLimit:(unsigned long long)arg1 accessSpecifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteStaleSuggestions;
-(void)deleteSuggestionsFromApps:(id)arg1 ;
-(BOOL)lsDatabaseChangedSinceLastCheck;
-(void)updateLSDatabaseAnchors;
-(id)generateSingleUseTokenForWorkflowIdentifier:(id)arg1 ;
-(void)handleAssistantPreferencesChangedNotification;
-(void)requestShortcutsSpotlightFullReindex;
-(id)addExtraVocabForDemoIfAppropriate:(id)arg1 ;
-(void)requestDataMigrationWithCompletion:(/*^block*/id)arg1 ;
-(VCRealmDataStore *)realmDataStore;
@end

