/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppAnalytics.framework/AppAnalytics
*/

#import <libobjc.A.dylib/AAFlushable.h>

@class AATracker, AAProcessorManager;

@interface AASessionManager : NSObject <AAFlushable> {

	 tracker;
	 processorManager;
	 sessionManager;

}

@property (readonly,nonatomic) AATracker * tracker; 
@property (readonly,nonatomic) AAProcessorManager * processorManager; 
-(void)transaction:(/*^block*/id)arg1 ;
-(void)flushWithCallbackQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)pushSessionData:(id)arg1 traits:(id)arg2 ;
-(void)startSessionForKind:(long long)arg1 withName:(id)arg2 identifier:(id)arg3 startDate:(id)arg4 ;
-(void)pushSessionData:(id)arg1 ;
-(void)pushSessionData:(id)arg1 submitEventQueues:(BOOL)arg2 ;
-(void)pushSessionData:(id)arg1 traits:(id)arg2 submitEventQueues:(BOOL)arg3 ;
-(void)startSessionForKind:(long long)arg1 withName:(id)arg2 ;
-(void)startSessionForKind:(long long)arg1 withName:(id)arg2 identifier:(id)arg3 ;
-(void)startSessionForKind:(long long)arg1 withName:(id)arg2 startDate:(id)arg3 ;
-(void)endSessionWithEndDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)endSession;
-(void)endSessionWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(AAProcessorManager *)processorManager;
-(id)initWithAccessQueue:(id)arg1 ;
-(AATracker *)tracker;
@end

