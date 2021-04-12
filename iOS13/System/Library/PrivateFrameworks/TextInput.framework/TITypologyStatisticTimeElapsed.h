/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TITypologyStatistic.h>

@class TITypologyTimer;

@interface TITypologyStatisticTimeElapsed : TITypologyStatistic {

	TITypologyTimer* _timer;
	TITypologyTimer* _adjustedTimer;

}

@property (nonatomic,retain) TITypologyTimer * timer;                      //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) TITypologyTimer * adjustedTimer;              //@synthesize adjustedTimer=_adjustedTimer - In the implementation block
@property (nonatomic,readonly) double elapsedTime; 
@property (nonatomic,readonly) double adjustedElapsedTime; 
-(id)init;
-(TITypologyTimer *)timer;
-(void)setTimer:(TITypologyTimer *)arg1 ;
-(double)elapsedTime;
-(void)visitRecordKeyboardInput:(id)arg1 ;
-(id)structuredReport;
-(id)aggregateReport;
-(double)adjustedElapsedTime;
-(TITypologyTimer *)adjustedTimer;
-(void)setAdjustedTimer:(TITypologyTimer *)arg1 ;
@end

