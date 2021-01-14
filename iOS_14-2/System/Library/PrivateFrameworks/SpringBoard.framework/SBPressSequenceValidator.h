/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class SBPressSequenceSettings;

@interface SBPressSequenceValidator : NSObject {

	SBPressSequenceSettings* _settings;

}

@property (nonatomic,readonly) SBPressSequenceSettings * settings;              //@synthesize settings=_settings - In the implementation block
-(id)initWithSettings:(id)arg1 ;
-(id)init;
-(SBPressSequenceSettings *)settings;
-(BOOL)pressEventIsValidInSequence:(id)arg1 endingDownEvent:(BOOL)arg2 duration:(double)arg3 ;
-(double)timeUntilNextPressEventIsInValidInSequence:(id)arg1 lastPressEventInSequenceIsDown:(BOOL)arg2 ;
-(SBPressSequenceValidatorBounds)_pressDownBoundsForDesiredIndex:(unsigned long long)arg1 sequence:(id)arg2 ;
-(SBPressSequenceValidatorBounds)_pressUpBoundsForDesiredIndex:(unsigned long long)arg1 sequence:(id)arg2 ;
-(long long)_modeForDesiredIndex:(unsigned long long)arg1 isDownEvent:(BOOL)arg2 ;
@end

