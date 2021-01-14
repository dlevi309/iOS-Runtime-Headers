/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFMetricStatusEvent : WFEvent {

	BOOL _installed;
	BOOL _sharingEnabled;
	BOOL _personalAutomationsEnabled;
	BOOL _homeAutomationsEnabled;
	BOOL _sleepEnabled;
	unsigned _shortcutComplicationSlotsUsed;
	unsigned _appComplicationSlotsUsed;
	unsigned _averageShortcutCountPerFolder;
	unsigned _shortcutsCount;
	unsigned _uncategorizedShortcutCount;
	unsigned _watchShortcutCount;
	unsigned _folderCount;
	unsigned _numberOfPersonalAutomationsEnabled;
	unsigned _numberOfPersonalAutomationsFromSuggestionsEnabled;
	unsigned _shortcutRunCount;
	unsigned _appSessionCount;
	unsigned _sleepShortcutsCount;
	unsigned _numberOfSmallWidgets;
	unsigned _numberOfMediumWidgets;
	unsigned _numberOfLargeWidgets;
	unsigned _numberOfWidgetsOnHomeScreen;
	unsigned _numberOfWidgetsOnLoL;
	unsigned _numberOfSuggestedAutomationsGenerated;
	unsigned _numberOfSuggestedAutomationsGeneratedUserAlreadyHas;
	NSString* _key;
	NSString* _automationSuggestionsTrialIdentifier;

}

@property (nonatomic,copy) NSString * key;                                                              //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL installed;                                                            //@synthesize installed=_installed - In the implementation block
@property (assign,nonatomic) BOOL sharingEnabled;                                                       //@synthesize sharingEnabled=_sharingEnabled - In the implementation block
@property (assign,nonatomic) BOOL personalAutomationsEnabled;                                           //@synthesize personalAutomationsEnabled=_personalAutomationsEnabled - In the implementation block
@property (assign,nonatomic) BOOL homeAutomationsEnabled;                                               //@synthesize homeAutomationsEnabled=_homeAutomationsEnabled - In the implementation block
@property (assign,nonatomic) BOOL sleepEnabled;                                                         //@synthesize sleepEnabled=_sleepEnabled - In the implementation block
@property (assign,nonatomic) unsigned shortcutComplicationSlotsUsed;                                    //@synthesize shortcutComplicationSlotsUsed=_shortcutComplicationSlotsUsed - In the implementation block
@property (assign,nonatomic) unsigned appComplicationSlotsUsed;                                         //@synthesize appComplicationSlotsUsed=_appComplicationSlotsUsed - In the implementation block
@property (assign,nonatomic) unsigned averageShortcutCountPerFolder;                                    //@synthesize averageShortcutCountPerFolder=_averageShortcutCountPerFolder - In the implementation block
@property (assign,nonatomic) unsigned shortcutsCount;                                                   //@synthesize shortcutsCount=_shortcutsCount - In the implementation block
@property (assign,nonatomic) unsigned uncategorizedShortcutCount;                                       //@synthesize uncategorizedShortcutCount=_uncategorizedShortcutCount - In the implementation block
@property (assign,nonatomic) unsigned watchShortcutCount;                                               //@synthesize watchShortcutCount=_watchShortcutCount - In the implementation block
@property (assign,nonatomic) unsigned folderCount;                                                      //@synthesize folderCount=_folderCount - In the implementation block
@property (assign,nonatomic) unsigned numberOfPersonalAutomationsEnabled;                               //@synthesize numberOfPersonalAutomationsEnabled=_numberOfPersonalAutomationsEnabled - In the implementation block
@property (assign,nonatomic) unsigned numberOfPersonalAutomationsFromSuggestionsEnabled;                //@synthesize numberOfPersonalAutomationsFromSuggestionsEnabled=_numberOfPersonalAutomationsFromSuggestionsEnabled - In the implementation block
@property (assign,nonatomic) unsigned shortcutRunCount;                                                 //@synthesize shortcutRunCount=_shortcutRunCount - In the implementation block
@property (assign,nonatomic) unsigned appSessionCount;                                                  //@synthesize appSessionCount=_appSessionCount - In the implementation block
@property (assign,nonatomic) unsigned sleepShortcutsCount;                                              //@synthesize sleepShortcutsCount=_sleepShortcutsCount - In the implementation block
@property (assign,nonatomic) unsigned numberOfSmallWidgets;                                             //@synthesize numberOfSmallWidgets=_numberOfSmallWidgets - In the implementation block
@property (assign,nonatomic) unsigned numberOfMediumWidgets;                                            //@synthesize numberOfMediumWidgets=_numberOfMediumWidgets - In the implementation block
@property (assign,nonatomic) unsigned numberOfLargeWidgets;                                             //@synthesize numberOfLargeWidgets=_numberOfLargeWidgets - In the implementation block
@property (assign,nonatomic) unsigned numberOfWidgetsOnHomeScreen;                                      //@synthesize numberOfWidgetsOnHomeScreen=_numberOfWidgetsOnHomeScreen - In the implementation block
@property (assign,nonatomic) unsigned numberOfWidgetsOnLoL;                                             //@synthesize numberOfWidgetsOnLoL=_numberOfWidgetsOnLoL - In the implementation block
@property (assign,nonatomic) unsigned numberOfSuggestedAutomationsGenerated;                            //@synthesize numberOfSuggestedAutomationsGenerated=_numberOfSuggestedAutomationsGenerated - In the implementation block
@property (assign,nonatomic) unsigned numberOfSuggestedAutomationsGeneratedUserAlreadyHas;              //@synthesize numberOfSuggestedAutomationsGeneratedUserAlreadyHas=_numberOfSuggestedAutomationsGeneratedUserAlreadyHas - In the implementation block
@property (nonatomic,copy) NSString * automationSuggestionsTrialIdentifier;                             //@synthesize automationSuggestionsTrialIdentifier=_automationSuggestionsTrialIdentifier - In the implementation block
+(Class)codableEventClass;
-(BOOL)sleepEnabled;
-(unsigned)shortcutsCount;
-(void)setSleepEnabled:(BOOL)arg1 ;
-(BOOL)installed;
-(void)setInstalled:(BOOL)arg1 ;
-(NSString *)key;
-(void)setSharingEnabled:(BOOL)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)sharingEnabled;
-(void)setNumberOfWidgetsOnLoL:(unsigned)arg1 ;
-(void)setNumberOfWidgetsOnHomeScreen:(unsigned)arg1 ;
-(void)setNumberOfLargeWidgets:(unsigned)arg1 ;
-(void)setNumberOfMediumWidgets:(unsigned)arg1 ;
-(void)setNumberOfSmallWidgets:(unsigned)arg1 ;
-(void)setNumberOfSuggestedAutomationsGeneratedUserAlreadyHas:(unsigned)arg1 ;
-(void)setAutomationSuggestionsTrialIdentifier:(NSString *)arg1 ;
-(void)setNumberOfSuggestedAutomationsGenerated:(unsigned)arg1 ;
-(void)setNumberOfPersonalAutomationsFromSuggestionsEnabled:(unsigned)arg1 ;
-(void)setSleepShortcutsCount:(unsigned)arg1 ;
-(void)setAppSessionCount:(unsigned)arg1 ;
-(void)setShortcutRunCount:(unsigned)arg1 ;
-(void)setShortcutComplicationSlotsUsed:(unsigned)arg1 ;
-(unsigned)shortcutComplicationSlotsUsed;
-(void)setAppComplicationSlotsUsed:(unsigned)arg1 ;
-(unsigned)appComplicationSlotsUsed;
-(void)setNumberOfPersonalAutomationsEnabled:(unsigned)arg1 ;
-(void)setFolderCount:(unsigned)arg1 ;
-(void)setWatchShortcutCount:(unsigned)arg1 ;
-(void)setUncategorizedShortcutCount:(unsigned)arg1 ;
-(void)setShortcutsCount:(unsigned)arg1 ;
-(void)setAverageShortcutCountPerFolder:(unsigned)arg1 ;
-(void)setHomeAutomationsEnabled:(BOOL)arg1 ;
-(void)setPersonalAutomationsEnabled:(BOOL)arg1 ;
-(BOOL)personalAutomationsEnabled;
-(BOOL)homeAutomationsEnabled;
-(unsigned)averageShortcutCountPerFolder;
-(unsigned)uncategorizedShortcutCount;
-(unsigned)watchShortcutCount;
-(unsigned)folderCount;
-(unsigned)numberOfPersonalAutomationsEnabled;
-(unsigned)numberOfPersonalAutomationsFromSuggestionsEnabled;
-(unsigned)shortcutRunCount;
-(unsigned)appSessionCount;
-(unsigned)sleepShortcutsCount;
-(unsigned)numberOfSmallWidgets;
-(unsigned)numberOfMediumWidgets;
-(unsigned)numberOfLargeWidgets;
-(unsigned)numberOfWidgetsOnHomeScreen;
-(unsigned)numberOfWidgetsOnLoL;
-(unsigned)numberOfSuggestedAutomationsGenerated;
-(unsigned)numberOfSuggestedAutomationsGeneratedUserAlreadyHas;
-(NSString *)automationSuggestionsTrialIdentifier;
@end

