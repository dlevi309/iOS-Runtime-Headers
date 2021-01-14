/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(TITypologyTimer *)timer;
-(double)adjustedElapsedTime;
-(void)setTimer:(TITypologyTimer *)arg1 ;
-(id)init;
-(void)visitRecordKeyboardInput:(id)arg1 ;
-(id)aggregateReport;
-(double)elapsedTime;
-(void)setAdjustedTimer:(TITypologyTimer *)arg1 ;
-(TITypologyTimer *)adjustedTimer;
-(id)structuredReport;
@end

