/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <libobjc.A.dylib/GKRandom.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GKRandomSource : NSObject <GKRandom, NSSecureCoding, NSCopying>
+(BOOL)supportsSecureCoding;
+(id)sharedRandom;
+(id)systemRandom;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1 ;
-(long long)nextInt;
-(float)nextUniform;
-(BOOL)nextBool;
-(id)arrayByShufflingObjectsInArray:(id)arg1 ;
@end

