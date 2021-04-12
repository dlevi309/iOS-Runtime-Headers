/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GKNoiseSource.h>

@interface GKCylindersNoiseSource : GKNoiseSource {

	double _frequency;

}

@property (assign,nonatomic) double frequency;              //@synthesize frequency=_frequency - In the implementation block
+(id)cylindersNoiseWithFrequency:(double)arg1 ;
-(id)init;
-(double)frequency;
-(void)setFrequency:(double)arg1 ;
-(id)initWithFrequency:(double)arg1 ;
-(double)valueAt:;
-(id)cloneModule;
@end

