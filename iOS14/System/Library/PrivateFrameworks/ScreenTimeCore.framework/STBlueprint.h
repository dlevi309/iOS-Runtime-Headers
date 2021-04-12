/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <ScreenTimeCore/STUniquedManagedObject.h>
#import <libobjc.A.dylib/STSerializableMappedObject.h>
#import <libobjc.A.dylib/STUniquelySerializableManagedObject.h>
#import <libobjc.A.dylib/STVersionVectorable.h>

@class NSData, NSString, NSDate, NSSet, STBlueprintSchedule, STBlueprintUsageLimit, STCoreOrganization;

@interface STBlueprint : STUniquedManagedObject <STSerializableMappedObject, STUniquelySerializableManagedObject, STVersionVectorable>

@property (getter=isDowntimeEnabled) BOOL downtimeEnabled; 
@property (copy,readonly) NSString * downtimeScheduleText; 
@property (getter=isUsageLimitEnabled) BOOL usageLimitEnabled; 
@property (copy,readonly) NSString * limitDisplayName; 
@property (copy,readonly) NSString * limitScheduleText; 
@property (assign,nonatomic) BOOL isTombstoned; 
@property (assign,nonatomic) BOOL invertUsageLimit; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSDate * creationDate; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) BOOL enabled; 
@property (assign,nonatomic) BOOL limitEnabled; 
@property (nonatomic,copy) NSDate * expiration; 
@property (nonatomic,copy) NSDate * minimumInstallationDate; 
@property (nonatomic,retain) NSSet * users; 
@property (nonatomic,retain) STBlueprintSchedule * schedule; 
@property (nonatomic,retain) STBlueprintUsageLimit * usageLimit; 
@property (nonatomic,retain) NSSet * configurations; 
@property (nonatomic,retain) STCoreOrganization * organization; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSData * versionVector; 
@property (assign,nonatomic) BOOL isDirty; 
+(id)createBlueprintWithType:(id)arg1 user:(id)arg2 ;
+(BOOL)saveDowntimeForUser:(id)arg1 startTime:(id)arg2 endTime:(id)arg3 scheduleByWeekdayIndex:(id)arg4 enabled:(BOOL)arg5 behaviorType:(unsigned long long)arg6 error:(id*)arg7 ;
+(id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg1 ofType:(id)arg2 ;
+(BOOL)saveManagedUserBlueprintForUser:(id)arg1 error:(id*)arg2 ;
+(id)keyPathsForValuesAffectingDowntimeScheduleText;
+(id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg1 ofType:(id)arg2 withIdentifier:(id)arg3 fromOrganization:(id)arg4 ;
+(id)fetchRequestMatchingExpiredBlueprints;
+(BOOL)saveUsageLimitWithIdentifier:(id)arg1 user:(id)arg2 bundleIdentifiers:(id)arg3 webDomains:(id)arg4 categoryIdentifiers:(id)arg5 dailyBudgetLimit:(double)arg6 budgetLimitByWeekday:(id)arg7 enabled:(BOOL)arg8 behaviorType:(unsigned long long)arg9 error:(id*)arg10 ;
+(BOOL)saveAlwaysAllowListForUser:(id)arg1 withBundleIDs:(id)arg2 error:(id*)arg3 ;
+(id)displayNameForUsageLimitWithCategoryIdentifiers:(id)arg1 bundleIdentifiers:(id)arg2 webDomains:(id)arg3 ;
+(id)customScheduleTimeRangeWithLocale:(id)arg1 startTimeComponents:(id)arg2 endTimeComponents:(id)arg3 ;
+(id)keyPathsForValuesAffectingLimitScheduleText;
+(id)serializableClassName;
+(id)_fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg1 ;
+(id)simpleScheduleTimeRangeWithStartTimeComponents:(id)arg1 endTimeComponents:(id)arg2 ;
+(id)fetchRequestMatchingUnexpiredOneMoreMinuteBlueprints;
+(id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg1 fromOrganization:(id)arg2 ;
+(BOOL)deleteUsageLimitWithIdentifier:(id)arg1 user:(id)arg2 managedObjectContext:(id)arg3 error:(id*)arg4 ;
+(id)keyPathsForValuesAffectingLimitDisplayName;
+(id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchRequestMatchingOrphanedBlueprints;
+(BOOL)deleteManagedUserBlueprintForUser:(id)arg1 error:(id*)arg2 ;
+(id)fetchResultsRequestsForChangesToBlueprintsForUserWithDSID:(id)arg1 ;
+(void)_addWebDomains:(id)arg1 toItemNames:(id)arg2 remainingItems:(unsigned long long)arg3 totalCount:(unsigned long long)arg4 completionHandler:(/*^block*/id)arg5 ;
+(id)defaultAlwaysAllowBundleIDs;
+(id)scheduleTextWithLocale:(id)arg1 weekdayScheduleComparator:(/*^block*/id)arg2 scheduleTimeGetter:(/*^block*/id)arg3 ;
+(id)blueprintIdentifierForUser:(id)arg1 ;
+(id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg1 ofType:(id)arg2 fromOrganization:(id)arg3 ;
+(id)defaultStartTime;
+(id)fetchResultsRequestsForChangesToBlueprints;
+(void)fetchDisplayNameForUsageLimitWithCategoryIdentifiers:(id)arg1 bundleIdentifiers:(id)arg2 webDomains:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)_getDisplayNameAndAddCategories:(id)arg1 toItemNames:(id)arg2 remainingItems:(unsigned long long*)arg3 ;
+(id)defaultEndTime;
+(void)_createDisplayNameWithItemNames:(id)arg1 itemCount:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)dictionaryRepresentation;
-(void)didChangeValueForKey:(id)arg1 ;
-(id)computeUniqueIdentifier;
-(BOOL)permitWebFilterURL:(id)arg1 pageTitle:(id)arg2 error:(id*)arg3 ;
-(void)tombstone;
-(BOOL)updateWithDictionaryRepresentation:(id)arg1 ;
-(void)setDowntimeEnabled:(BOOL)arg1 ;
-(id)declarationsWithError:(id*)arg1 ;
-(void)migrateToVersion2CategoriesIfNeeded;
-(void)setStartTime:(id)arg1 endTime:(id)arg2 ;
-(void)setStartTime:(id)arg1 endTime:(id)arg2 forDay:(unsigned long long)arg3 ;
-(BOOL)isDowntimeEnabled;
-(void)disableDowntimeForDay:(unsigned long long)arg1 ;
-(NSString *)downtimeScheduleText;
-(id)_webFilterBlacklistStringsForURL:(id)arg1 ;
-(BOOL)isUsageLimitEnabled;
-(void)setUsageLimitEnabled:(BOOL)arg1 ;
-(NSString *)limitDisplayName;
-(NSString *)limitScheduleText;
@end

