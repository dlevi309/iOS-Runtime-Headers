/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSData *)seed;
-(void)setSeed:(NSData *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)nextBool;
-(unsigned long long)nextBits:(int)arg1 ;
-(float)nextUniform;
-(void)dropValuesWithCount:(unsigned long long)arg1 ;
-(long long)nextInt;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSeed:(id)arg1 ;
-(unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

