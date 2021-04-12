/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@class NSString, NSMutableDictionary, NSUserDefaults;

@interface REMUserDefaults : NSObject {

	BOOL _showRemindersAsOverdue_cached;
	NSString* _suiteName;
	NSMutableDictionary* _observers;
	NSUserDefaults* _userDefaults;

}

@property (nonatomic,readonly) NSString * suiteName;                          //@synthesize suiteName=_suiteName - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * observers;               //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) BOOL showRemindersAsOverdue_cached;              //@synthesize showRemindersAsOverdue_cached=_showRemindersAsOverdue_cached - In the implementation block
@property (nonatomic,readonly) NSUserDefaults * userDefaults;                 //@synthesize userDefaults=_userDefaults - In the implementation block
+(id)appGroupUserDefaults;
+(id)daemonUserDefaults;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_removeObserver:(id)arg1 ;
-(NSMutableDictionary *)observers;
-(void)setShowRemindersAsOverdue_cached:(BOOL)arg1 ;
-(BOOL)showRemindersAsOverdue_cached;
-(NSUserDefaults *)userDefaults;
-(id)_startObservingValuesForKey:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithSuiteName:(id)arg1 containerURL:(id)arg2 ;
-(NSString *)suiteName;
-(id)_startStreamingValuesForKey:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)_addObserverForKey:(id)arg1 block:(/*^block*/id)arg2 ;
@end

