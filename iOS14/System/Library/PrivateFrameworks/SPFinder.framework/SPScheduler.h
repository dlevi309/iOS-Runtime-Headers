/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
*/


@protocol SPSchedulerXPCProtocol, OS_dispatch_queue;
@class FMXPCServiceDescription, FMXPCSession, NSObject;

@interface SPScheduler : NSObject {

	FMXPCServiceDescription* _serviceDescription;
	FMXPCSession* _session;
	id<SPSchedulerXPCProtocol> _proxy;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) FMXPCServiceDescription * serviceDescription;              //@synthesize serviceDescription=_serviceDescription - In the implementation block
@property (nonatomic,retain) FMXPCSession * session;                                    //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) id<SPSchedulerXPCProtocol> proxy;                          //@synthesize proxy=_proxy - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                        //@synthesize queue=_queue - In the implementation block
-(void)setProxy:(id<SPSchedulerXPCProtocol>)arg1 ;
-(id<SPSchedulerXPCProtocol>)proxy;
-(id)init;
-(void)setServiceDescription:(FMXPCServiceDescription *)arg1 ;
-(FMXPCServiceDescription *)serviceDescription;
-(id)remoteInterface;
-(FMXPCSession *)session;
-(void)setSession:(FMXPCSession *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(void)schedulePublishWakeWithInformation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)publishImmediatelyWithCompletion:(/*^block*/id)arg1 ;
@end

