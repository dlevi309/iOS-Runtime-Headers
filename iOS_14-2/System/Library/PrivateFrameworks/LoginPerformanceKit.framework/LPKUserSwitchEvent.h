/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoginPerformanceKit.framework/LoginPerformanceKit
*/


@class NSDate, NSMutableDictionary;

@interface LPKUserSwitchEvent : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	NSMutableDictionary* _signposts;

}

@property (nonatomic,retain) NSDate * startDate;                           //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                             //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * signposts;              //@synthesize signposts=_signposts - In the implementation block
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)init;
-(NSDate *)startDate;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setSignposts:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)signposts;
@end

