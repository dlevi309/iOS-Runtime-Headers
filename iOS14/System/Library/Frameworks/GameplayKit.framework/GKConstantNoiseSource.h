/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GKNoiseSource.h>

@interface GKConstantNoiseSource : GKNoiseSource {

	double _value;

}

@property (assign,nonatomic) double value;              //@synthesize value=_value - In the implementation block
+(id)constantNoiseWithValue:(double)arg1 ;
-(id)init;
-(id)initWithValue:(double)arg1 ;
-(void)setValue:(double)arg1 ;
-(double)value;
-(double)valueAt:;
-(id)cloneModule;
@end

