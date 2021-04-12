/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <SpeechRecognitionCommandAndControl/CACSpokenCommandGroup.h>

@class NSMutableDictionary, NSArray, NSString, AXReplayableGesture, CACRecordedUserActionFlow;

@interface CACSpokenCommandItem : CACSpokenCommandGroup {

	NSMutableDictionary* _customDictionary;
	NSArray* _searchAlternates;
	NSString* _locale;
	NSString* _untranslatedDisplayString;
	NSString* _untranslatedLocale;
	id _commandInfo;
	BOOL _isEdited;

}

@property (nonatomic,retain) NSArray * searchAlternates;                                    //@synthesize searchAlternates=_searchAlternates - In the implementation block
@property (nonatomic,retain) NSString * customScope; 
@property (nonatomic,retain) NSString * customAppName; 
@property (nonatomic,retain) AXReplayableGesture * customGesture; 
@property (nonatomic,retain) CACRecordedUserActionFlow * customUserActionFlow; 
@property (nonatomic,retain) NSString * customTextToInsert; 
@property (nonatomic,retain) NSString * customType; 
@property (nonatomic,retain) NSArray * customPasteBoard; 
@property (nonatomic,retain) NSString * customShortcutsWorkflowIdentifier; 
@property (nonatomic,retain) NSString * locale;                                             //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) NSString * untranslatedDisplayString;                          //@synthesize untranslatedDisplayString=_untranslatedDisplayString - In the implementation block
@property (nonatomic,retain) NSString * untranslatedLocale;                                 //@synthesize untranslatedLocale=_untranslatedLocale - In the implementation block
@property (nonatomic,retain) id commandInfo;                                                //@synthesize commandInfo=_commandInfo - In the implementation block
@property (assign,nonatomic) BOOL isEdited;                                                 //@synthesize isEdited=_isEdited - In the implementation block
@property (assign,nonatomic) BOOL isCollapsed; 
+(id)newCommandItemWithLocale:(id)arg1 scope:(id)arg2 ;
-(id)description;
-(id)copy;
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)locale;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)isVisible;
-(BOOL)isCollapsed;
-(BOOL)isGroup;
-(id)displayString;
-(void)setDisplayString:(id)arg1 ;
-(void)setIsEnabled:(BOOL)arg1 ;
-(NSString *)customType;
-(void)setCustomType:(NSString *)arg1 ;
-(BOOL)isEdited;
-(void)setIsEdited:(BOOL)arg1 ;
-(id)commandInfo;
-(void)saveToPreferences;
-(NSString *)customScope;
-(BOOL)conflictsWithItem:(id)arg1 ;
-(AXReplayableGesture *)customGesture;
-(NSString *)customTextToInsert;
-(CACRecordedUserActionFlow *)customUserActionFlow;
-(NSString *)customShortcutsWorkflowIdentifier;
-(NSArray *)customPasteBoard;
-(void)removeFromPreferences;
-(void)setValue:(id)arg1 forKey:(id)arg2 locale:(id)arg3 ;
-(void)setCustomScope:(NSString *)arg1 ;
-(void)setCommandInfo:(id)arg1 ;
-(void)setCustomShortcutsWorkflowIdentifier:(NSString *)arg1 ;
-(void)setCustomGesture:(AXReplayableGesture *)arg1 ;
-(void)setCustomTextToInsert:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 properties:(id)arg2 locale:(id)arg3 ;
-(void)_reloadFromProperties:(id)arg1 ;
-(id)cloneWithoutCommands;
-(id)commandsArray;
-(NSArray *)searchAlternates;
-(void)setIsConfirmationRequired:(BOOL)arg1 ;
-(void)setUntranslatedDisplayString:(NSString *)arg1 ;
-(void)setSearchAlternates:(NSArray *)arg1 ;
-(void)_updateBuiltInCommandsWithLocale:(id)arg1 ;
-(void)setCustomUserActionFlow:(CACRecordedUserActionFlow *)arg1 ;
-(void)setCustomAppName:(NSString *)arg1 ;
-(void)setCustomPasteBoard:(NSArray *)arg1 ;
-(void)_saveKey:(id)arg1 toDictionary:(id)arg2 ;
-(id)dictionaryForSavingToPreferences;
-(void)_setCustomCommandStrings:(id)arg1 withLocale:(id)arg2 ;
-(id)_customCommandStringsWithLocale:(id)arg1 ;
-(id)untranslatedDisplayStringAndLocale:(id*)arg1 ;
-(NSString *)customAppName;
-(NSString *)untranslatedDisplayString;
-(NSString *)untranslatedLocale;
-(void)setUntranslatedLocale:(NSString *)arg1 ;
-(void)setIsCollapsed:(BOOL)arg1 ;
-(BOOL)evaluateCommandPredicate:(id)arg1 ;
-(id)primaryBuiltinCommandForLocale:(id)arg1 ;
-(void)refreshDataFromPreferences;
-(id)valueForKey:(id)arg1 locale:(id)arg2 ;
-(id)sortString;
@end

