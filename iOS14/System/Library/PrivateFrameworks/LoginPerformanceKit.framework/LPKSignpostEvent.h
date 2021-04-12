/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setProcessName:(NSString *)arg1 ;
-(NSDate *)endDate;
-(void)setDuration:(double)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(NSString *)processName;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(double)duration;
-(void)_calculateDurationIfNeeded;
@end

