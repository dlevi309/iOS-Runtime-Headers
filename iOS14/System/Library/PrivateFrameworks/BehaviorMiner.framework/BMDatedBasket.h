/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
*/


@class NSDate, NSSet;

@interface BMDatedBasket : NSObject {

	NSDate* _date;
	NSSet* _basket;

}

@property (nonatomic,copy,readonly) NSDate * date;               //@synthesize date=_date - In the implementation block
@property (nonatomic,copy,readonly) NSSet * basket;              //@synthesize basket=_basket - In the implementation block
+(id)undated:(id)arg1 ;
-(NSSet *)basket;
-(NSDate *)date;
-(id)initWithBasket:(id)arg1 Date:(id)arg2 ;
@end

