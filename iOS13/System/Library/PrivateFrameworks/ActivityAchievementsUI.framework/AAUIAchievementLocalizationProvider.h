/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsUI.framework/ActivityAchievementsUI
*/


@class NSString, FIUIUnitManager, NSDate, NSCalendar;

@interface AAUIAchievementLocalizationProvider : NSObject {

	BOOL _wheelchairUser;
	NSString* _name;
	FIUIUnitManager* _unitManager;
	NSDate* _currentDateOverride;
	NSCalendar* _gregorianCalendar;

}

@property (nonatomic,retain) NSDate * currentDateOverride;                //@synthesize currentDateOverride=_currentDateOverride - In the implementation block
@property (nonatomic,retain) NSCalendar * gregorianCalendar;              //@synthesize gregorianCalendar=_gregorianCalendar - In the implementation block
@property (nonatomic,retain) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL wheelchairUser;                         //@synthesize wheelchairUser=_wheelchairUser - In the implementation block
@property (nonatomic,retain) FIUIUnitManager * unitManager;               //@synthesize unitManager=_unitManager - In the implementation block
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)currentDate;
-(NSCalendar *)gregorianCalendar;
-(NSDate *)currentDateOverride;
-(void)setCurrentDateOverride:(NSDate *)arg1 ;
-(void)setGregorianCalendar:(NSCalendar *)arg1 ;
-(id)localizedStringForKey:(id)arg1 withAchievement:(id)arg2 ;
-(id)titleForAchievement:(id)arg1 ;
-(id)unachievedAlertBackDescriptionForAchievement:(id)arg1 ;
-(id)_backDateStringForDate:(id)arg1 achievement:(id)arg2 dateStyle:(unsigned long long)arg3 ;
-(id)_localizedStringWithKey:(id)arg1 withAchievement:(id)arg2 ;
-(id)_localizedStringWithKey:(id)arg1 withAchievement:(id)arg2 localizationBundleURL:(id)arg3 ;
-(id)_suffixesForLocalizedStringLookup;
-(id)_allStringCombinationsWithPrefix:(id)arg1 andSuffixes:(id)arg2 ;
-(id)_pluralizeLocalizedString:(id)arg1 withAchievement:(id)arg2 ;
-(id)_replacePlaceholdersInString:(id)arg1 withAchievement:(id)arg2 ;
-(id)_buildKeyWithKeyBaseString:(id)arg1 andSuffixes:(id)arg2 ;
-(id)_valueFromPlaceholder:(id)arg1 withAchievement:(id)arg2 ;
-(id)_stringByTrimmingPlaceholderMarkersFromString:(id)arg1 ;
-(id)_formatValue:(id)arg1 usingFormatterNamed:(id)arg2 template:(id)arg3 ;
-(id)_progressValueWithAchievement:(id)arg1 ;
-(id)_achievementValueWithAchievement:(id)arg1 ;
-(id)_goalValueWithAchievement:(id)arg1 ;
-(id)_quantityToGoalValueWithAchievement:(id)arg1 ;
-(id)_formattedEnergyValue:(id)arg1 template:(id)arg2 ;
-(FIUIUnitManager *)unitManager;
-(id)_userEnergyUnitSuffix;
-(id)_calculateSuffixCombinations:(id)arg1 ;
-(id)_remainingProgressValueWithUnit:(id)arg1 achievement:(id)arg2 ;
-(id)unachievedDescriptionForAchievement:(id)arg1 ;
-(id)unachievedShortDescriptionForAchievement:(id)arg1 ;
-(id)achievedDescriptionForAchievement:(id)arg1 ;
-(id)achievedShortDescriptionForAchievement:(id)arg1 ;
-(id)friendAchievedTitleForAchievement:(id)arg1 ;
-(id)friendAchievedDescriptionForAchievement:(id)arg1 ;
-(id)achievedAlertDescriptionForAchievement:(id)arg1 ;
-(id)achievedAlertBackDescriptionForAchievement:(id)arg1 sizeVariant:(long long)arg2 dateSizeVariant:(long long)arg3 ;
-(id)unachievedAlertDescriptionForAchievement:(id)arg1 ;
-(id)shareDescriptionForAchievement:(id)arg1 ;
-(id)_buildKeyWithKeyBaseString:(id)arg1 ;
-(BOOL)wheelchairUser;
-(void)setWheelchairUser:(BOOL)arg1 ;
-(void)setUnitManager:(FIUIUnitManager *)arg1 ;
@end

