/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@class NSString;

@interface HKPersistentTimer : NSObject {

	NSString* _fullTimerKey;

}

@property (nonatomic,retain) NSString * fullTimerKey;              //@synthesize fullTimerKey=_fullTimerKey - In the implementation block
+(id)_prefixedKeyWithTimerKey:(id)arg1 ;
+(id)timerWithKey:(id)arg1 ;
-(void)clear;
-(void)start;
-(unsigned long long)elapsedNanoseconds;
-(id)timerValue;
-(unsigned long long)elapsedSeconds;
-(NSString *)fullTimerKey;
-(void)setFullTimerKey:(NSString *)arg1 ;
@end

