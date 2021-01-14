/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/


@protocol OS_dispatch_source;
@class NSObject, NPTPerformanceTest;

@interface WFMeasure : NSObject {

	BOOL _isInProgress;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	NPTPerformanceTest* _performanceTest;

}
-(void)abort;
-(BOOL)start:(/*^block*/id)arg1 ;
-(id)initWithType:(int)arg1 ;
-(BOOL)isInProgress;
@end

