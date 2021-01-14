/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TITypologyStatisticComposite.h>

@class TITypologyStatisticTimeElapsed, TITypologyStatisticBasicCounts;

@interface TITypologyStatisticTypingSpeed : TITypologyStatisticComposite {

	TITypologyStatisticTimeElapsed* _timeElapsed;
	TITypologyStatisticBasicCounts* _basicCounts;

}

@property (nonatomic,readonly) TITypologyStatisticTimeElapsed * timeElapsed;              //@synthesize timeElapsed=_timeElapsed - In the implementation block
@property (nonatomic,readonly) TITypologyStatisticBasicCounts * basicCounts;              //@synthesize basicCounts=_basicCounts - In the implementation block
@property (nonatomic,readonly) float typingSpeed; 
+(id)statisticCompositeWithStatistics:(id)arg1 ;
+(id)statistic;
-(id)initWithTimeElapsed:(id)arg1 basicCounts:(id)arg2 ;
-(id)aggregateReport;
-(float)typingSpeed;
-(TITypologyStatisticBasicCounts *)basicCounts;
-(TITypologyStatisticTimeElapsed *)timeElapsed;
@end

