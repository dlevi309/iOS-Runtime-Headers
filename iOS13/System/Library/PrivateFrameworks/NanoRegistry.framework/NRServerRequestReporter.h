/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/


#import <NanoRegistry/NanoRegistry-Structs.h>
@class NSString;

@interface NRServerRequestReporter : NSObject {

	BOOL _submitted;
	NSString* _requestType;
	mach_timebase_info _timebaseInfo;
	double _startTime;

}

@property (nonatomic,retain) NSString * requestType;                       //@synthesize requestType=_requestType - In the implementation block
@property (assign,nonatomic) mach_timebase_info timebaseInfo;              //@synthesize timebaseInfo=_timebaseInfo - In the implementation block
@property (assign,nonatomic) double startTime;                             //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL submitted;                               //@synthesize submitted=_submitted - In the implementation block
-(void)dealloc;
-(NSString *)requestType;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(void)setRequestType:(NSString *)arg1 ;
-(BOOL)submitted;
-(void)setSubmitted:(BOOL)arg1 ;
-(id)initWithRequestType:(id)arg1 ;
-(void)requestCompletedWithErrorCode:(unsigned)arg1 ;
-(void)requestTimedOut;
-(double)abs_to_seconds:(unsigned long long)arg1 ;
-(mach_timebase_info)timebaseInfo;
-(unsigned long long)abs_to_nanos:(unsigned long long)arg1 ;
-(void)requestCompletedWithErrorCode:(unsigned)arg1 andDuration:(double)arg2 ;
-(void)setTimebaseInfo:(mach_timebase_info)arg1 ;
@end

