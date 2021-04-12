/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKRandomSource.h>

@class NSData;

@interface GKARC4RandomSource : GKRandomSource {

	Arc4State* _state;
	NSData* _seed;

}

@property (nonatomic,copy) NSData * seed; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)seed;
-(void)setSeed:(NSData *)arg1 ;
-(unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1 ;
-(id)initWithSeed:(id)arg1 ;
-(unsigned long long)nextBits:(int)arg1 ;
-(long long)nextInt;
-(float)nextUniform;
-(BOOL)nextBool;
-(void)dropValuesWithCount:(unsigned long long)arg1 ;
@end

