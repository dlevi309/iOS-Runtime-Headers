/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface DADBuddyStateObserver : NSObject {

	NSObject*<OS_dispatch_source> _buddyStatePollingTimer;
	NSObject*<OS_dispatch_queue> _queue;
	int _notifyToken;
	/*^block*/id _buddyDidFinishHandler;

}

@property (nonatomic,copy) id buddyDidFinishHandler;              //@synthesize buddyDidFinishHandler=_buddyDidFinishHandler - In the implementation block
+(BOOL)hasPassedBuddy;
+(BOOL)isSetupUser;
-(id)initWithQueue:(id)arg1 ;
-(void)start;
-(void)stop;
-(BOOL)isRunning;
-(void)dealloc;
-(void)stopWithAssertQueue:(BOOL)arg1 ;
-(void)buddyDidFinish;
-(void)createPeriodicPollingTimer;
-(void)checkBuddyStatus;
-(id)buddyDidFinishHandler;
-(void)setBuddyDidFinishHandler:(id)arg1 ;
@end

