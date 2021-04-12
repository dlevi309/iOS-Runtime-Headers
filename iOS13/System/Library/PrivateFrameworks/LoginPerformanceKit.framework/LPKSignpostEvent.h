/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LoginPerformanceKit.framework/LoginPerformanceKit
*/


@class NSDate, NSString;

@interface LPKSignpostEvent : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	double _duration;
	NSString* _name;
	NSString* _processName;

}

@property (nonatomic,retain) NSDate * startDate;                //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                  //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) double duration;                   //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * processName;              //@synthesize processName=_processName - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)processName;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setProcessName:(NSString *)arg1 ;
-(double)duration;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)_calculateDurationIfNeeded;
@end

