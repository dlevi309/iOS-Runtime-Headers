/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSMutableDictionary *)signposts;
-(void)setSignposts:(NSMutableDictionary *)arg1 ;
@end

