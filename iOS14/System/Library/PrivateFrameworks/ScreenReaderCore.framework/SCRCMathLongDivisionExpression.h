/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
*/

#import <ScreenReaderCore/SCRCMathArrayExpression.h>

@class SCRCMathExpression;

@interface SCRCMathLongDivisionExpression : SCRCMathArrayExpression {

	SCRCMathExpression* _divisor;

}

@property (nonatomic,retain) SCRCMathExpression * divisor;              //@synthesize divisor=_divisor - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(SCRCMathExpression *)divisor;
-(id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(BOOL)arg2 ;
-(void)setDivisor:(SCRCMathExpression *)arg1 ;
@end

