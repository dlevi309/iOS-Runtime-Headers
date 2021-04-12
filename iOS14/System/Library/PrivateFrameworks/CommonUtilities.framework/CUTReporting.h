/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
*/


#import <CommonUtilities/CommonUtilities-Structs.h>
@class CUTPromise;

@interface CUTReporting : NSObject {

	os_unfair_lock_s _promiseLock;
	CUTPromise* _promise;

}

@property (nonatomic,retain) CUTPromise * promise;              //@synthesize promise=_promise - In the implementation block
@property (readonly) os_unfair_lock_s promiseLock;              //@synthesize promiseLock=_promiseLock - In the implementation block
+(id)_rtcReportingSession;
+(id)reportingSession;
+(void)startRTCReportingSessionWithCompletion:(/*^block*/id)arg1 ;
+(id)RTCSessionPromiseWithBatchingInterval:(double)arg1 ;
-(id)init;
-(CUTPromise *)promise;
-(void)setPromise:(CUTPromise *)arg1 ;
-(id)_RTCSessionPromiseWithBatchingInterval:(double)arg1 ;
-(void)_beginPromiseTimeoutWithInterval:(long long)arg1 ;
-(void)_startConfigurationOfSession:(id)arg1 withPromiseSeal:(id)arg2 ;
-(void)_failSeal:(id)arg1 withError:(id)arg2 ;
-(void)_fullfillSeal:(id)arg1 withSession:(id)arg2 ;
-(os_unfair_lock_s)promiseLock;
@end

