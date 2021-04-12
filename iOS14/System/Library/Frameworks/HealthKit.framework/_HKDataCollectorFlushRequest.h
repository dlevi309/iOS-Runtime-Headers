/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@class NSDate;

@interface _HKDataCollectorFlushRequest : NSObject {

	NSDate* _date;
	/*^block*/id _completion;

}

@property (nonatomic,copy,readonly) NSDate * date;              //@synthesize date=_date - In the implementation block
@property (nonatomic,copy,readonly) id completion;              //@synthesize completion=_completion - In the implementation block
-(id)completion;
-(NSDate *)date;
-(id)initWithDate:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

