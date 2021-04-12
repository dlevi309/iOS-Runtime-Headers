/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSString, NSDate;

@interface CDGlanceLingerEvent : NSObject {

	NSString* _bundle;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (retain) NSString * bundle;               //@synthesize bundle=_bundle - In the implementation block
@property (retain) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (retain) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
-(id)description;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSString *)bundle;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setBundle:(NSString *)arg1 ;
@end

