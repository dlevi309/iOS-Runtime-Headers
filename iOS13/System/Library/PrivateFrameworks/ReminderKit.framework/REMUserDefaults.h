/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class NSString, NSMutableDictionary, NSUserDefaults;

@interface REMUserDefaults : NSObject {

	NSString* _suiteName;
	NSMutableDictionary* _observers;
	NSUserDefaults* _userDefaults;

}

@property (nonatomic,readonly) NSString * suiteName;                         //@synthesize suiteName=_suiteName - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * observers;              //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) NSUserDefaults * userDefaults;                //@synthesize userDefaults=_userDefaults - In the implementation block
+(id)daemonUserDefaults;
+(id)_oldDeprecatedAppGroupUserDefaults;
+(id)appGroupUserDefaults;
+(void)migrateUserDefaults;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_removeObserver:(id)arg1 ;
-(NSUserDefaults *)userDefaults;
-(NSMutableDictionary *)observers;
-(id)initWithSuiteName:(id)arg1 containerURL:(id)arg2 ;
-(id)_addObserverForKey:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)_startObservingValuesForKey:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)_startStreamingValuesForKey:(id)arg1 block:(/*^block*/id)arg2 ;
-(NSString *)suiteName;
@end

