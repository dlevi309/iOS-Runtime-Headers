/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/


@class NSString, NSUserDefaults;

@interface _UIActivityUserDefaults : NSObject {

	NSString* _activityDefaultsKey;
	NSUserDefaults* _underlyingUserDefaults;

}

@property (nonatomic,copy) NSString * activityDefaultsKey;                         //@synthesize activityDefaultsKey=_activityDefaultsKey - In the implementation block
@property (nonatomic,retain) NSUserDefaults * underlyingUserDefaults;              //@synthesize underlyingUserDefaults=_underlyingUserDefaults - In the implementation block
+(id)builtinActivityOrder;
+(id)updatedActivityIdentifiersUserOrderWithPreviousOrder:(id)arg1 someSortedActivityIdentifiers:(id)arg2 ;
+(void)migrateUserDefaultKeyIfNecessary:(id)arg1 hasMigratedKey:(id)arg2 fromUserDefaults:(id)arg3 toUserDefaults:(id)arg4 ;
+(void)migrateUserDefaultKeysIfNecessary:(id)arg1 fromUIKitDefaultsToUserDefaults:(id)arg2 ;
-(id)activitiesOrderedByUserActivityOrderForActivities:(id)arg1 ;
-(BOOL)activityIsHidden:(id)arg1 ;
-(void)setActivity:(id)arg1 asHidden:(BOOL)arg2 ;
-(void)setActivityDefaultsKey:(NSString *)arg1 ;
-(void)setUnderlyingUserDefaults:(NSUserDefaults *)arg1 ;
-(id)applicationExtensionForActivity:(id)arg1 ;
-(void)postActivityUserDefaultsDidChangeNotification;
-(id)identifierForActivity:(id)arg1 ;
-(id)activityIdentifiersInUserOrder;
-(id)activitiesBySortingActivities:(id)arg1 byIdentifierWithDefaultActivityIdentifierOrdering:(id)arg2 ;
-(id)mutableActivityIdentifiersArrayForActivitiesArray:(id)arg1 ;
-(void)setActivityIdentifiersInUserOrder:(id)arg1 ;
-(id)_userDefaultsDictionary;
-(void)_setUserDefaultsDictionary:(id)arg1 ;
-(NSString *)activityDefaultsKey;
-(id)initWithUnderlyingUserDefaults:(id)arg1 activityDefaultsKey:(id)arg2 ;
-(BOOL)canHideActivity:(id)arg1 ;
-(id)migrateSortOrderIfNeededForBuiltInActivityType:(id)arg1 activityIdentifierOrdering:(id)arg2 ;
-(void)updateUserActivityOrderWithOrderedPartialActivities:(id)arg1 ;
-(void)removeActivityTypeFromDefaults:(id)arg1 ;
-(void)replaceUserActivityOrderIfNecessaryWithSystemDefaultOrder:(id)arg1 ;
-(id)defaultsValueForKey:(id)arg1 activity:(id)arg2 ;
-(void)setDefaultsValue:(id)arg1 forKey:(id)arg2 activity:(id)arg3 ;
-(NSUserDefaults *)underlyingUserDefaults;
@end

