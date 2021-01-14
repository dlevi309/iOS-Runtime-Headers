/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSSQLiteConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, AMSSQLiteConnection, NSObject;

@interface AMSMetricsDatabase : NSObject <AMSSQLiteConnectionDelegate> {

	NSString* _containerId;
	AMSSQLiteConnection* _connection;
	NSObject*<OS_dispatch_queue> _internalQueue;
	long long _keepAliveCount;

}

@property (nonatomic,retain) AMSSQLiteConnection * connection;                        //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (assign,nonatomic) long long keepAliveCount;                                //@synthesize keepAliveCount=_keepAliveCount - In the implementation block
@property (nonatomic,retain) NSString * containerId;                                  //@synthesize containerId=_containerId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDatabaseWithContainerId:(id)arg1 ;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)containerId;
-(void)setIdentifier:(id)arg1 forKey:(id)arg2 account:(id)arg3 duration:(double)arg4 error:(id*)arg5 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)close;
-(void)_performTransaction:(/*^block*/id)arg1 ;
-(void)insertEvents:(id)arg1 error:(id*)arg2 ;
-(BOOL)connectionNeedsResetForCorruption:(id)arg1 ;
-(void)unlockEvents:(id)arg1 error:(id*)arg2 ;
-(void)cleanupInvalidIdentifiersWithError:(id*)arg1 ;
-(void)removeIdentifiersForAccount:(id)arg1 error:(id*)arg2 ;
-(AMSSQLiteConnection *)connection;
-(void)dropEvents:(id)arg1 error:(id*)arg2 ;
-(long long)countAllEventsWithLockKey:(id)arg1 error:(id*)arg2 ;
-(id)_lockedById;
-(void)setKeepAliveCount:(long long)arg1 ;
-(id)initWithContainerId:(id)arg1 ;
-(long long)keepAliveCount;
-(void)setConnection:(AMSSQLiteConnection *)arg1 ;
-(void)setContainerId:(NSString *)arg1 ;
-(void)dropAllEventsWithLockKey:(id)arg1 error:(id*)arg2 ;
-(id)identifierForKey:(id)arg1 account:(id)arg2 error:(id*)arg3 ;
-(void)unlockAllEventsWithKey:(id)arg1 error:(id*)arg2 ;
-(id)lockAllEventsWithError:(id*)arg1 ;
-(void)enumerateEventsWithTopic:(id)arg1 lockKey:(id)arg2 objectBlock:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

