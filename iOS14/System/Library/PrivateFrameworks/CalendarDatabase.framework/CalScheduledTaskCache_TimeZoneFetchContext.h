/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
*/


@class NSTimeZone, NSMutableDictionary;

@interface CalScheduledTaskCache_TimeZoneFetchContext : NSObject {

	NSTimeZone* _previousTimeZone;
	NSTimeZone* _nextTimeZone;
	NSMutableDictionary* _dict;

}

@property (nonatomic,retain) NSTimeZone * previousTimeZone;              //@synthesize previousTimeZone=_previousTimeZone - In the implementation block
@property (nonatomic,retain) NSTimeZone * nextTimeZone;                  //@synthesize nextTimeZone=_nextTimeZone - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dict;                 //@synthesize dict=_dict - In the implementation block
-(void)setDict:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)dict;
-(NSTimeZone *)previousTimeZone;
-(void)setPreviousTimeZone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)nextTimeZone;
-(void)setNextTimeZone:(NSTimeZone *)arg1 ;
@end

