/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EventKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSTimeZone;

@interface EKOfficeHour : NSObject <NSCopying> {

	BOOL _enabled;
	long long _weekday;
	NSDate* _startTime;
	NSDate* _endTime;
	NSTimeZone* _timeZone;

}

@property (assign,nonatomic) BOOL enabled;                       //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) long long weekday;                  //@synthesize weekday=_weekday - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                 //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                   //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone;              //@synthesize timeZone=_timeZone - In the implementation block
-(long long)weekday;
-(void)setWeekday:(long long)arg1 ;
-(BOOL)enabled;
-(NSTimeZone *)timeZone;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)setEndTime:(NSDate *)arg1 ;
-(NSDate *)endTime;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)startTime;
-(id)initWithEnabled:(BOOL)arg1 weekday:(long long)arg2 startTime:(id)arg3 endTime:(id)arg4 timeZone:(id)arg5 ;
@end

