/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <BaseBoard/BSTimer.h>

@class SBPIPInterruptionAssertion;

@interface SBPIPInterruptionDebouncingTimer : BSTimer {

	SBPIPInterruptionAssertion* _debouncedAssertion;

}

@property (assign,nonatomic,__weak) SBPIPInterruptionAssertion * debouncedAssertion;              //@synthesize debouncedAssertion=_debouncedAssertion - In the implementation block
-(SBPIPInterruptionAssertion *)debouncedAssertion;
-(void)setDebouncedAssertion:(SBPIPInterruptionAssertion *)arg1 ;
@end

