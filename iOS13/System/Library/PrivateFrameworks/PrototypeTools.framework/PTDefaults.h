/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
*/

#import <BaseBoard/BSAbstractDefaultDomain.h>

@class NSString;

@interface PTDefaults : BSAbstractDefaultDomain

@property (nonatomic,retain) NSString * testRecipeIdentifier; 
@property (nonatomic,retain) NSString * testRecipeDescription; 
@property (assign,nonatomic) BOOL testRecipeEatsVolumeUp; 
@property (assign,nonatomic) BOOL testRecipeEatsVolumeDown; 
@property (assign,nonatomic) BOOL testRecipeEatsRingerSwitch; 
@property (assign,nonatomic) BOOL shouldClearSettingsArchivesForMigration; 
@property (assign,nonatomic) BOOL shouldClearPrototypeCachesForMigration; 
@property (assign,nonatomic) BOOL ringerSwitchShowsUI; 
@property (assign,nonatomic) BOOL volumeUpShowsUI; 
@property (assign,nonatomic) BOOL volumeDownShowsUI; 
@property (assign,nonatomic) BOOL prototypeSettingsEnabled; 
@property (assign,nonatomic) BOOL activePrototypingEnabled; 
@property (assign,nonatomic) BOOL remotePrototypingEnabled; 
+(id)sharedInstance;
-(void)setVolumeUpShowsUI:(BOOL)arg1 ;
-(BOOL)volumeUpShowsUI;
-(void)setRemotePrototypingEnabled:(BOOL)arg1 ;
-(BOOL)remotePrototypingEnabled;
-(void)setRingerSwitchShowsUI:(BOOL)arg1 ;
-(BOOL)ringerSwitchShowsUI;
-(void)setShouldClearPrototypeCachesForMigration:(BOOL)arg1 ;
-(BOOL)shouldClearPrototypeCachesForMigration;
-(void)setVolumeDownShowsUI:(BOOL)arg1 ;
-(BOOL)volumeDownShowsUI;
-(void)setTestRecipeEatsVolumeDown:(BOOL)arg1 ;
-(BOOL)testRecipeEatsVolumeDown;
-(void)setShouldClearSettingsArchivesForMigration:(BOOL)arg1 ;
-(BOOL)shouldClearSettingsArchivesForMigration;
-(void)setActivePrototypingEnabled:(BOOL)arg1 ;
-(BOOL)activePrototypingEnabled;
-(void)setTestRecipeEatsRingerSwitch:(BOOL)arg1 ;
-(BOOL)testRecipeEatsRingerSwitch;
-(void)setTestRecipeEatsVolumeUp:(BOOL)arg1 ;
-(BOOL)testRecipeEatsVolumeUp;
-(void)setTestRecipeIdentifier:(NSString *)arg1 ;
-(NSString *)testRecipeIdentifier;
-(void)setTestRecipeDescription:(NSString *)arg1 ;
-(NSString *)testRecipeDescription;
-(void)setPrototypeSettingsEnabled:(BOOL)arg1 ;
-(BOOL)prototypeSettingsEnabled;
-(void)_bindAndRegisterDefaults;
-(id)observeTestRecipeDefaultsOnQueue:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)activeTestRecipeIdentifier;
-(BOOL)activeTestRecipeEatsEvent:(long long)arg1 ;
-(BOOL)_eventShowsUI:(long long)arg1 ;
-(id)_eventDefaults;
-(BOOL)testRecipeIsActive;
-(id)_testRecipeDefaults;
-(BOOL)canEditShowsUIForEvent:(long long)arg1 ;
-(BOOL)displayedShowsUIValueForEvent:(long long)arg1 ;
-(void)setShowsUI:(BOOL)arg1 forEvent:(long long)arg2 ;
-(id)observeShowUISwitchDefaultsOnQueue:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)activeTestRecipeDescription;
-(id)activeTestRecipeEventDescription;
-(void)deactivateTestRecipe;
-(BOOL)prototypingServerWantsEvent:(long long)arg1 ;
-(id)observeEventDefaultsOnQueue:(id)arg1 withBlock:(/*^block*/id)arg2 ;
@end

