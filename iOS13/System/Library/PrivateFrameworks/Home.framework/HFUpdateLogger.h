/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@protocol OS_os_activity;
@class NSObject, NSString, NSDate, NSTimer;

@interface HFUpdateLogger : NSObject {

	BOOL _didReachSoftTimeout;
	NSObject*<OS_os_activity> _loggerActivity;
	NSString* _clientDescription;
	NSDate* _startDate;
	double _softTimeoutInterval;
	NSTimer* _softTimeoutTimer;

}

@property (nonatomic,retain) NSObject*<OS_os_activity> loggerActivity;              //@synthesize loggerActivity=_loggerActivity - In the implementation block
@property (nonatomic,retain) NSString * clientDescription;                          //@synthesize clientDescription=_clientDescription - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                    //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) double softTimeoutInterval;                            //@synthesize softTimeoutInterval=_softTimeoutInterval - In the implementation block
@property (nonatomic,retain) NSTimer * softTimeoutTimer;                            //@synthesize softTimeoutTimer=_softTimeoutTimer - In the implementation block
@property (assign,nonatomic) BOOL didReachSoftTimeout;                              //@synthesize didReachSoftTimeout=_didReachSoftTimeout - In the implementation block
+(id)history;
+(id)runningLoggers;
-(id)description;
-(NSDate *)startDate;
-(void)finish;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)_handleTimeout:(id)arg1 ;
-(NSObject*<OS_os_activity>)loggerActivity;
-(id)initWithTimeout:(double)arg1 description:(id)arg2 ;
-(void)setClientDescription:(NSString *)arg1 ;
-(void)setLoggerActivity:(NSObject*<OS_os_activity>)arg1 ;
-(void)setSoftTimeoutInterval:(double)arg1 ;
-(void)setSoftTimeoutTimer:(NSTimer *)arg1 ;
-(NSTimer *)softTimeoutTimer;
-(void)setDidReachSoftTimeout:(BOOL)arg1 ;
-(NSString *)clientDescription;
-(double)softTimeoutInterval;
-(BOOL)didReachSoftTimeout;
@end

