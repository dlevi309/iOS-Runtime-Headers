/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/HFSynchronizedTimerObserver.h>
#import <libobjc.A.dylib/HFDynamicFormattingValue.h>

@protocol HFStringGenerator;
@class NSMapTable, NSDate, NSDateComponentsFormatter, NSString;

@interface HFFormattedTimeRemainingValue : NSObject <HFSynchronizedTimerObserver, HFDynamicFormattingValue> {

	NSMapTable* _observationBlocks;
	NSDate* _value;
	NSDateComponentsFormatter* _formatter;
	id<HFStringGenerator> _currentFormattedValue;

}

@property (nonatomic,readonly) NSMapTable * observationBlocks;                         //@synthesize observationBlocks=_observationBlocks - In the implementation block
@property (nonatomic,retain) id<HFStringGenerator> currentFormattedValue;              //@synthesize currentFormattedValue=_currentFormattedValue - In the implementation block
@property (nonatomic,readonly) NSDate * value;                                         //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSDateComponentsFormatter * formatter;                  //@synthesize formatter=_formatter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultFormatter;
+(id)valueWithRemainingDuration:(double)arg1 relativeToDate:(id)arg2 ;
-(NSDate *)value;
-(NSDateComponentsFormatter *)formatter;
-(void)_stopTimer;
-(double)_timeRemaining;
-(id)initWithFireDate:(id)arg1 ;
-(id)initWithFireDate:(id)arg1 formatter:(id)arg2 ;
-(id)_generateFormattedValue;
-(NSMapTable *)observationBlocks;
-(void)_updateTimerState;
-(void)setCurrentFormattedValue:(id<HFStringGenerator>)arg1 ;
-(void)countdownTimerDidFire:(id)arg1 ;
-(id)observeFormattedValueChangesWithBlock:(/*^block*/id)arg1 ;
-(id<HFStringGenerator>)currentFormattedValue;
@end

