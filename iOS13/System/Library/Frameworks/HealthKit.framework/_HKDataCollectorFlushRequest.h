/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@class NSDate;

@interface _HKDataCollectorFlushRequest : NSObject {

	NSDate* _date;
	/*^block*/id _completion;

}

@property (nonatomic,copy,readonly) NSDate * date;              //@synthesize date=_date - In the implementation block
@property (nonatomic,copy,readonly) id completion;              //@synthesize completion=_completion - In the implementation block
-(NSDate *)date;
-(id)completion;
-(id)initWithDate:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

