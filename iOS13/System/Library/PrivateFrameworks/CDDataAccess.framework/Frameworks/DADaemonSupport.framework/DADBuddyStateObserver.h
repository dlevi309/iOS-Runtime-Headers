/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)stop;
-(void)start;
-(id)initWithQueue:(id)arg1 ;
-(BOOL)isRunning;
-(void)stopWithAssertQueue:(BOOL)arg1 ;
-(void)buddyDidFinish;
-(void)createPeriodicPollingTimer;
-(void)checkBuddyStatus;
-(id)buddyDidFinishHandler;
-(void)setBuddyDidFinishHandler:(id)arg1 ;
@end

