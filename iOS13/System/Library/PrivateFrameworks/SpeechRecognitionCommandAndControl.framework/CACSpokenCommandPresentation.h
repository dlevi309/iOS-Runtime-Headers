/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/


@class NSArray, NSMutableArray, NSString, NSDictionary, NSSet;

@interface CACSpokenCommandPresentation : NSObject {

	NSArray* _commandItems;
	NSArray* _commandsOnly;
	NSMutableArray* _newCommandItems;
	NSMutableArray* _deletedCommandIdentifiers;
	NSArray* _commandGroups;
	NSArray* _allCommandGroups;
	NSString* _searchString;
	NSString* _locale;
	NSArray* _externalCommandGroups;
	NSArray* _relevantCommandIdentifiers;
	NSDictionary* _additionalCommandInfo;
	NSSet* _excludedSearchWordSet;
	NSDictionary* _conflictDictionary;
	BOOL _usedByPreferences;

}

@property (nonatomic,retain) NSString * locale;                                       //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) NSString * searchString;                                 //@synthesize searchString=_searchString - In the implementation block
@property (readonly) BOOL isSearching; 
@property (nonatomic,retain) NSArray * externalCommandGroups;                         //@synthesize externalCommandGroups=_externalCommandGroups - In the implementation block
@property (nonatomic,retain) NSArray * relevantCommandIdentifiers;                    //@synthesize relevantCommandIdentifiers=_relevantCommandIdentifiers - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalCommandInfo;                    //@synthesize additionalCommandInfo=_additionalCommandInfo - In the implementation block
@property (nonatomic,readonly) NSArray * nestedCommandGroupsAndItems; 
@property (nonatomic,readonly) NSArray * flattenedCommandGroupsAndItems; 
@property (assign,nonatomic) BOOL usedByPreferences;                                  //@synthesize usedByPreferences=_usedByPreferences - In the implementation block
-(id)init;
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)locale;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(void)saveChanges;
-(BOOL)isSearching;
-(void)discardChanges;
-(NSArray *)flattenedCommandGroupsAndItems;
-(void)resetConflicts;
-(void)_flushCommands;
-(void)_deepFlush;
-(BOOL)hasConflicts;
-(unsigned long long)indexOfItemWithIdentifier:(id)arg1 ;
-(void)sortCustomCommands;
-(void)addCustomCommandItem:(id)arg1 ;
-(NSArray *)nestedCommandGroupsAndItems;
-(BOOL)groupIsCollapsed:(id)arg1 ;
-(id)_filteredCommandGroupsAndItemsWithSearchString:(id)arg1 ;
-(unsigned long long)indexOfItemWithIdentifier:(id)arg1 ignoreGroups:(BOOL)arg2 ;
-(id)itemsConflictingWithItem:(id)arg1 ;
-(void)refreshItemWithIdentifier:(id)arg1 ;
-(void)setExternalCommandGroups:(NSArray *)arg1 ;
-(void)setRelevantCommandIdentifiers:(NSArray *)arg1 ;
-(void)setAdditionalCommandInfo:(NSDictionary *)arg1 ;
-(void)deleteCustomCommandAtIndex:(unsigned long long)arg1 ;
-(void)setGroup:(id)arg1 isCollapsed:(BOOL)arg2 ;
-(NSArray *)externalCommandGroups;
-(NSArray *)relevantCommandIdentifiers;
-(NSDictionary *)additionalCommandInfo;
-(BOOL)usedByPreferences;
-(void)setUsedByPreferences:(BOOL)arg1 ;
@end

