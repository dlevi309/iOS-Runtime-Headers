/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithRequestType:(id)arg1 ;
-(void)dealloc;
-(double)abs_to_seconds:(unsigned long long)arg1 ;
-(unsigned long long)abs_to_nanos:(unsigned long long)arg1 ;
-(void)requestCompletedWithErrorCode:(unsigned)arg1 andDuration:(double)arg2 ;
-(void)requestCompletedWithErrorCode:(unsigned)arg1 ;
-(void)requestTimedOut;
@end

