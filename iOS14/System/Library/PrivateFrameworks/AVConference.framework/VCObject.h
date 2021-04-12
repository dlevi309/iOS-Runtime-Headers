/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@class VCDispatchTimer, NSString;

@interface VCObject : NSObject {

	id _reportingAgent;
	VCDispatchTimer* _timeoutTimer;
	NSString* _logPrefix;
	opaque_pthread_mutex_t _mutex;

}

@property (nonatomic,retain) NSString * logPrefix;                              //@synthesize logPrefix=_logPrefix - In the implementation block
@property (assign,nonatomic) opaqueRTCReportingRef reportingAgent; 
-(void)unlock;
-(id)init;
-(void)lock;
-(NSString *)logPrefix;
-(void)setLogPrefix:(NSString *)arg1 ;
-(void)dealloc;
-(opaqueRTCReportingRef)reportingAgent;
-(void)setReportingAgent:(opaqueRTCReportingRef)arg1 ;
-(void)startDeallocTimer;
-(void)startTimeoutTimer;
-(void)stopTimeoutTimer;
-(void)startDeallocTimerWithTimeout:(unsigned)arg1 ;
-(void)stopTerminationTimer;
-(void)startTerminationTimer:(unsigned)arg1 ;
@end

