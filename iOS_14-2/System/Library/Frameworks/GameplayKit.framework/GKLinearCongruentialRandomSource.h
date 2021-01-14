/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKRandomSource.h>

@interface GKLinearCongruentialRandomSource : GKRandomSource {

	unsigned long long _seed;

}

@property (assign,nonatomic) unsigned long long seed; 
+(BOOL)supportsSecureCoding;
-(unsigned long long)seed;
-(void)setSeed:(unsigned long long)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)nextBool;
-(unsigned long long)nextBits:(int)arg1 ;
-(float)nextUniform;
-(long long)nextInt;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSeed:(unsigned long long)arg1 ;
-(unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

