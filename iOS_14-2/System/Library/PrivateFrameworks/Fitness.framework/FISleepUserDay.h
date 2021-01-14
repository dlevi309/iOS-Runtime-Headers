/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Fitness.framework/Fitness
*/


@class NSDate;

@interface FISleepUserDay : NSObject {

	NSDate* _startOfDay;
	NSDate* _endOfDay;

}

@property (nonatomic,retain) NSDate * startOfDay;              //@synthesize startOfDay=_startOfDay - In the implementation block
@property (nonatomic,retain) NSDate * endOfDay;                //@synthesize endOfDay=_endOfDay - In the implementation block
-(NSDate *)endOfDay;
-(NSDate *)startOfDay;
-(void)setStartOfDay:(NSDate *)arg1 ;
-(id)initWithStartOfDay:(id)arg1 endOfDay:(id)arg2 ;
-(void)setEndOfDay:(NSDate *)arg1 ;
@end

