/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol OS_dispatch_queue;
@class AMSEngagementConnection, NSObject, NSMutableSet;

@interface AMSEngagement : NSObject {

	AMSEngagementConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _runningPromises;

}

@property (nonatomic,retain) AMSEngagementConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableSet * runningPromises;                    //@synthesize runningPromises=_runningPromises - In the implementation block
+(id)_connection;
+(id)_connectionQueue;
-(id)sync;
-(id)_createCombinedLogKey;
-(void)setRunningPromises:(NSMutableSet *)arg1 ;
-(id)init;
-(AMSEngagementConnection *)connection;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setConnection:(AMSEngagementConnection *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_connectionErrorNotification;
-(void)_manageRunningPromise:(id)arg1 ;
-(void)_scheduleSyncIfNeeded:(id)arg1 ;
-(id)_parseActions:(id)arg1 ;
-(void)_removeRunningPromise:(id)arg1 ;
-(NSMutableSet *)runningPromises;
-(void)_failAllRunningPromisesWithError:(id)arg1 ;
-(id)enqueueData:(id)arg1 ;
@end

