/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class SBPressSequenceSettings;

@interface SBPressSequenceValidator : NSObject {

	SBPressSequenceSettings* _settings;

}

@property (nonatomic,readonly) SBPressSequenceSettings * settings;              //@synthesize settings=_settings - In the implementation block
-(id)init;
-(id)initWithSettings:(id)arg1 ;
-(SBPressSequenceSettings *)settings;
-(BOOL)pressEventIsValidInSequence:(id)arg1 endingDownEvent:(BOOL)arg2 duration:(double)arg3 ;
-(double)timeUntilNextPressEventIsInValidInSequence:(id)arg1 lastPressEventInSequenceIsDown:(BOOL)arg2 ;
-(SBPressSequenceValidatorBounds)_pressDownBoundsForDesiredIndex:(unsigned long long)arg1 sequence:(id)arg2 ;
-(SBPressSequenceValidatorBounds)_pressUpBoundsForDesiredIndex:(unsigned long long)arg1 sequence:(id)arg2 ;
-(long long)_modeForDesiredIndex:(unsigned long long)arg1 isDownEvent:(BOOL)arg2 ;
@end

