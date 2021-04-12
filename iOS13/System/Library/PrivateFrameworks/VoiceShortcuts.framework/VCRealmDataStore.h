/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/


@class WFDatabase;

@interface VCRealmDataStore : NSObject {

	WFDatabase* _database;

}

@property (nonatomic,readonly) WFDatabase * database;              //@synthesize database=_database - In the implementation block
-(WFDatabase *)database;
-(id)initWithDatabase:(id)arg1 ;
-(void)getShareSheetWorkflowsForExtensionMatchingDictionaries:(id)arg1 hostBundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getNumberOfVoiceShortcutsWithAccessSpecifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getVoiceShortcutWithIdentifier:(id)arg1 accessSpecifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getVoiceShortcutWithPhrase:(id)arg1 accessSpecifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getVoiceShortcutsWithAccessSpecifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getVoiceShortcutsForAppsWithBundleIdentifiers:(id)arg1 accessSpecifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getInactiveAppsWithAccessSpecifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateVoiceShortcutWithIdentifier:(id)arg1 phrase:(id)arg2 shortcut:(id)arg3 accessSpecifier:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)deleteVoiceShortcutWithIdentifier:(id)arg1 accessSpecifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getSpeakableStringsWithAccessSpecifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)validatePhrases:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)createVoiceShortcut:(id)arg1 phrase:(id)arg2 accessSpecifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)isPhraseUsable:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3 ;
@end

