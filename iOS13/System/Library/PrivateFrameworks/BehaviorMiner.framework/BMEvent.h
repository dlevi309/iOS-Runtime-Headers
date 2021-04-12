/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
*/


@class NSDate, BMItem;

@interface BMEvent : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	BMItem* _item;

}

@property (retain) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (retain) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
@property (retain) BMItem * item;                   //@synthesize item=_item - In the implementation block
-(id)description;
-(BMItem *)item;
-(void)setItem:(BMItem *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 item:(id)arg3 ;
@end

