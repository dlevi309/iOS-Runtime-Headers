/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FeedbackLogger.framework/FeedbackLogger
*/


@protocol FLLoggingContext, OS_os_log, OS_dispatch_source;
@class NSMutableDictionary, NSObject, NSDistributedNotificationCenter;

@interface FLLogger : NSObject {

	NSMutableDictionary* _persistentStores;
	NSObject*<FLLoggingContext> _context;
	NSObject*<OS_os_log> _log;
	NSObject*<OS_dispatch_source> _persistentStoreCacheTTLTimer;
	unsigned long long _persistentStoreCacheTTL;
	NSDistributedNotificationCenter* _notificationCenter;

}

@property (nonatomic,retain) NSMutableDictionary * persistentStores;                                  //@synthesize persistentStores=_persistentStores - In the implementation block
@property (nonatomic,retain) NSObject*<FLLoggingContext> context;                                     //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                                                //@synthesize log=_log - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> persistentStoreCacheTTLTimer;              //@synthesize persistentStoreCacheTTLTimer=_persistentStoreCacheTTLTimer - In the implementation block
@property (assign,nonatomic) unsigned long long persistentStoreCacheTTL;                              //@synthesize persistentStoreCacheTTL=_persistentStoreCacheTTL - In the implementation block
@property (nonatomic,retain) NSDistributedNotificationCenter * notificationCenter;                    //@synthesize notificationCenter=_notificationCenter - In the implementation block
+(id)sharedLogger;
-(void)setNotificationCenter:(NSDistributedNotificationCenter *)arg1 ;
-(NSDistributedNotificationCenter *)notificationCenter;
-(NSObject*<OS_os_log>)log;
-(id)initWithContext:(id)arg1 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(NSMutableDictionary *)persistentStores;
-(NSObject*<FLLoggingContext>)context;
-(void)report:(id)arg1 application:(id)arg2 ;
-(void)dealloc;
-(void)setContext:(NSObject*<FLLoggingContext>)arg1 ;
-(void)closeAllStores;
-(BOOL)closeOpenBatches;
-(id)persistentStoreForApplication:(id)arg1 ;
-(BOOL)purgeBatchFromBundle:(id)arg1 withIdentifier:(id)arg2 ;
-(BOOL)closeOpenBatchForBundle:(id)arg1 ;
-(void)closeStoreForApplicationFromNotification:(id)arg1 ;
-(void)report:(id)arg1 application:(id)arg2 onComplete:(/*^block*/id)arg3 ;
-(id)__dispatched_persistentStoreForApplication:(id)arg1 ;
-(void)resetStoreCacheTimer;
-(id)pathForApplication:(id)arg1 ;
-(void)setPersistentStoreCacheTTLTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)persistentStoreCacheTTLTimer;
-(unsigned long long)persistentStoreCacheTTL;
-(void)setPersistentStores:(NSMutableDictionary *)arg1 ;
-(void)setPersistentStoreCacheTTL:(unsigned long long)arg1 ;
@end

