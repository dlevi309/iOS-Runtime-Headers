/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_distributedNotificationForLocalNotification:(id)arg1 ;
+(id)sharedUserDefaults;
+(id)_localNotificationForDistributedNotification:(id)arg1 ;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 notification:(id)arg3 ;
-(id)initWithUserDefaults:(id)arg1 ;
-(id)objectForKey:(id)arg1 defaultValue:(id)arg2 ;
-(void)setFloat:(float)arg1 forKey:(id)arg2 ;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(float)floatForKey:(id)arg1 ;
-(void)registerNotification:(id)arg1 observer:(id)arg2 ;
-(void)setTimeInterval:(double)arg1 forKey:(id)arg2 notification:(id)arg3 ;
-(NSMutableDictionary *)observers;
-(void)setObject:(id)arg1 forKey:(id)arg2 notification:(id)arg3 ;
-(BOOL)boolForKey:(id)arg1 exists:(BOOL*)arg2 ;
-(id<NAScheduler>)serializer;
-(void)_cleanupObserversForNotification:(id)arg1 ;
-(double)timeIntervalForKey:(id)arg1 isValid:(/*^block*/id)arg2 defaultValue:(double)arg3 ;
-(void)setTimeInterval:(double)arg1 forKey:(id)arg2 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 notification:(id)arg3 ;
-(void)removeObjectForKey:(id)arg1 ;
-(NSUserDefaults *)userDefaults;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)distributedNotificationPosted:(id)arg1 ;
-(void)setObservers:(NSMutableDictionary *)arg1 ;
-(void)unregisterNotification:(id)arg1 observer:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(double)timeIntervalForKey:(id)arg1 exists:(BOOL*)arg2 ;
-(void)setFloat:(float)arg1 forKey:(id)arg2 notification:(id)arg3 ;
-(double)timeIntervalForKey:(id)arg1 defaultValue:(double)arg2 ;
-(BOOL)boolForKey:(id)arg1 ;
-(long long)integerForKey:(id)arg1 defaultValue:(long long)arg2 ;
-(float)floatForKey:(id)arg1 exists:(BOOL*)arg2 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)_postNotification:(id)arg1 ;
-(long long)integerForKey:(id)arg1 exists:(BOOL*)arg2 ;
-(long long)integerForKey:(id)arg1 isValid:(/*^block*/id)arg2 defaultValue:(long long)arg3 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

