/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class NSDate;

@interface WFTimeTriggerLogic : NSObject {

	NSDate* _currentSunriseTime;
	NSDate* _currentSunsetTime;

}

@property (nonatomic,retain) NSDate * currentSunriseTime;              //@synthesize currentSunriseTime=_currentSunriseTime - In the implementation block
@property (nonatomic,retain) NSDate * currentSunsetTime;               //@synthesize currentSunsetTime=_currentSunsetTime - In the implementation block
+(id)sharedInstance;
-(id)nextFireDateForTrigger:(id)arg1 ;
-(id)triggersFromTriggers:(id)arg1 thatShouldFireAtDate:(id)arg2 ;
-(id)adjustedTime:(id)arg1 byOffset:(unsigned long long)arg2 ;
-(NSDate *)currentSunriseTime;
-(void)setCurrentSunriseTime:(NSDate *)arg1 ;
-(NSDate *)currentSunsetTime;
-(void)setCurrentSunsetTime:(NSDate *)arg1 ;
@end

