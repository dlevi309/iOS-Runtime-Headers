/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppAnalytics.framework/AppAnalytics
*/


@interface AAAccessTracker : NSObject {

	 accessTracker;
	 eventMirrorStore;

}
-(void)timeRawEvent:(id)arg1 submitAndRestartWithSession:(BOOL)arg2 ;
-(void)timeEventType:(Class)arg1 ;
-(void)timeRawEvent:(id)arg1 submitAndRestartWithSession:(BOOL)arg2 startTime:(id)arg3 ;
-(void)submitEventType:(Class)arg1 onlyIfTimed:(BOOL)arg2 ;
-(void)submitEventType:(Class)arg1 onlyIfTimed:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)submitRawEvent:(id)arg1 onlyIfTimed:(BOOL)arg2 ;
-(void)submitRawEvent:(id)arg1 onlyIfTimed:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)explicitSubmitRawEvent:(id)arg1 onlyIfTimed:(BOOL)arg2 submitTime:(id)arg3 ;
-(void)explicitSubmitEventType:(Class)arg1 onlyIfTimed:(BOOL)arg2 submitTime:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)explicitSubmitRawEvent:(id)arg1 onlyIfTimed:(BOOL)arg2 submitTime:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)timeEventType:(Class)arg1 startTime:(id)arg2 ;
-(void)timeEventType:(Class)arg1 submitAndRestartWithSession:(BOOL)arg2 ;
-(void)timeRawEvent:(id)arg1 ;
-(void)timeRawEvent:(id)arg1 startTime:(id)arg2 ;
-(void)timeEventType:(Class)arg1 submitAndRestartWithSession:(BOOL)arg2 startTime:(id)arg3 ;
-(void)submitEventType:(Class)arg1 ;
-(void)submitEventType:(Class)arg1 completion:(/*^block*/id)arg2 ;
-(void)submitRawEvent:(id)arg1 ;
-(void)submitRawEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)explicitSubmitEventType:(Class)arg1 submitTime:(id)arg2 ;
-(void)explicitSubmitEventType:(Class)arg1 onlyIfTimed:(BOOL)arg2 submitTime:(id)arg3 ;
-(void)explicitSubmitEventType:(Class)arg1 submitTime:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)explicitSubmitRawEvent:(id)arg1 submitTime:(id)arg2 ;
-(void)explicitSubmitRawEvent:(id)arg1 submitTime:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)pushDataEvent:(id)arg1 traits:(id)arg2 file:(id)arg3 line:(long long)arg4 ;
-(void)popDataEventType:(Class)arg1 ;
-(void)popDataEventByName:(id)arg1 ;
-(id)peekDataEventByName:(id)arg1 ;
-(id)init;
@end

