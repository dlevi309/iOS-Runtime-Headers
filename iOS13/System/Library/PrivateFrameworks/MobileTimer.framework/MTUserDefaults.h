/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@protocol NAScheduler;
@class NSUserDefaults, NSMutableDictionary;

@interface MTUserDefaults : NSObject {

	id<NAScheduler> _serializer;
	NSUserDefaults* _userDefaults;
	NSMutableDictionary* _observers;

}

@property (nonatomic,retain) id<NAScheduler> serializer;                   //@synthesize serializer=_serializer - In the implementation block
@property (nonatomic,retain) NSUserDefaults * userDefaults;                //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * observers;              //@synthesize observers=_observers - In the implementation block
+(id)sharedUserDefaults;
+(id)_distributedNotificationForLocalNotification:(id)arg1 ;
+(id)_localNotificationForDistributedNotification:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)boolForKey:(id)arg1 ;
-(float)floatForKey:(id)arg1 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)setFloat:(float)arg1 forKey:(id)arg2 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(NSUserDefaults *)userDefaults;
-(void)setObservers:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)observers;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(void)_postNotification:(id)arg1 ;
-(id<NAScheduler>)serializer;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(id)initWithUserDefaults:(id)arg1 ;
-(id)objectForKey:(id)arg1 defaultValue:(id)arg2 ;
-(long long)integerForKey:(id)arg1 isValid:(/*^block*/id)arg2 defaultValue:(long long)arg3 ;
-(long long)integerForKey:(id)arg1 defaultValue:(long long)arg2 ;
-(double)timeIntervalForKey:(id)arg1 isValid:(/*^block*/id)arg2 defaultValue:(double)arg3 ;
-(void)setFloat:(float)arg1 forKey:(id)arg2 notification:(id)arg3 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 notification:(id)arg3 ;
-(float)floatForKey:(id)arg1 exists:(BOOL*)arg2 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 notification:(id)arg3 ;
-(BOOL)boolForKey:(id)arg1 exists:(BOOL*)arg2 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 notification:(id)arg3 ;
-(long long)integerForKey:(id)arg1 exists:(BOOL*)arg2 ;
-(void)setTimeInterval:(double)arg1 forKey:(id)arg2 notification:(id)arg3 ;
-(double)timeIntervalForKey:(id)arg1 exists:(BOOL*)arg2 ;
-(void)distributedNotificationPosted:(id)arg1 ;
-(void)_cleanupObserversForNotification:(id)arg1 ;
-(void)setTimeInterval:(double)arg1 forKey:(id)arg2 ;
-(double)timeIntervalForKey:(id)arg1 defaultValue:(double)arg2 ;
-(void)registerNotification:(id)arg1 observer:(id)arg2 ;
-(void)unregisterNotification:(id)arg1 observer:(id)arg2 ;
@end

