/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
*/


@class NSDate, BMItem;

@interface BMEvent : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	BMItem* _item;

}

@property (nonatomic,copy,readonly) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) BMItem * item;                        //@synthesize item=_item - In the implementation block
-(NSDate *)endDate;
-(NSDate *)startDate;
-(BMItem *)item;
-(id)description;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 item:(id)arg3 ;
@end

