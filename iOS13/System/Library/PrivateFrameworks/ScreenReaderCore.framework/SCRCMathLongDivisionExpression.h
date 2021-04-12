/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
*/

#import <ScreenReaderCore/SCRCMathArrayExpression.h>

@class SCRCMathExpression;

@interface SCRCMathLongDivisionExpression : SCRCMathArrayExpression {

	SCRCMathExpression* _divisor;

}

@property (nonatomic,retain) SCRCMathExpression * divisor;              //@synthesize divisor=_divisor - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(BOOL)arg2 ;
-(void)setDivisor:(SCRCMathExpression *)arg1 ;
-(SCRCMathExpression *)divisor;
@end

