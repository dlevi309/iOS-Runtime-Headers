/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKitInternal.framework/ReminderKitInternal
*/

#import <ReminderKitInternal/ReminderKitInternal-Structs.h>
#import <ReminderKitInternal/RMDRandomSource.h>

@interface RMDMersenneTwisterRandomSource : RMDRandomSource {

	unsigned long long _seed;
	mersenne_twister_engine<unsigned long long, 64, 312, 156, 31, 13043109905998158313, 29, 6148914691236517205, 17, 8202884508482404352, 37, 18444473444759240704, 43, 6364136223846793005> _engine;

}

@property (assign,nonatomic) unsigned long long seed; 
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

