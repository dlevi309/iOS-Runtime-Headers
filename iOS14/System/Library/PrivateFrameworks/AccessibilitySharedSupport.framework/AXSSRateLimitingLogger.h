/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/


@protocol OS_os_log;
@class NSObject, NSDate;

@interface AXSSRateLimitingLogger : NSObject {

	unsigned char _logLevel;
	double _timeInterval;
	NSObject*<OS_os_log> _categoryLog;
	NSDate* __dateSinceLastLog;

}

@property (nonatomic,retain) NSDate * _dateSinceLastLog;                      //@synthesize _dateSinceLastLog=__dateSinceLastLog - In the implementation block
@property (nonatomic,readonly) double timeInterval;                           //@synthesize timeInterval=_timeInterval - In the implementation block
@property (nonatomic,readonly) unsigned char logLevel;                        //@synthesize logLevel=_logLevel - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> categoryLog;              //@synthesize categoryLog=_categoryLog - In the implementation block
-(BOOL)logString:(id)arg1 ;
-(double)timeInterval;
-(unsigned char)logLevel;
-(id)initWithLogLevel:(unsigned char)arg1 categoryLog:(id)arg2 timeInterval:(double)arg3 ;
-(NSDate *)_dateSinceLastLog;
-(void)set_dateSinceLastLog:(NSDate *)arg1 ;
-(void)_logStringAtProperLevel:(id)arg1 ;
-(NSObject*<OS_os_log>)categoryLog;
@end

