/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GKNoiseSource.h>

@interface GKCylindersNoiseSource : GKNoiseSource {

	double _frequency;

}

@property (assign,nonatomic) double frequency;              //@synthesize frequency=_frequency - In the implementation block
+(id)cylindersNoiseWithFrequency:(double)arg1 ;
-(void)setFrequency:(double)arg1 ;
-(double)frequency;
-(id)init;
-(id)initWithFrequency:(double)arg1 ;
-(double)valueAt:;
-(id)cloneModule;
@end

