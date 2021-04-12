/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GKNoiseSource.h>

@interface GKConstantNoiseSource : GKNoiseSource {

	double _value;

}

@property (assign,nonatomic) double value;              //@synthesize value=_value - In the implementation block
+(id)constantNoiseWithValue:(double)arg1 ;
-(id)init;
-(double)value;
-(void)setValue:(double)arg1 ;
-(id)initWithValue:(double)arg1 ;
-(double)valueAt:;
-(id)cloneModule;
@end

