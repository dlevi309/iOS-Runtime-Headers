/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)fullTimerKey;
-(unsigned long long)elapsedNanoseconds;
-(void)setFullTimerKey:(NSString *)arg1 ;
-(unsigned long long)elapsedSeconds;
-(id)timerValue;
@end

