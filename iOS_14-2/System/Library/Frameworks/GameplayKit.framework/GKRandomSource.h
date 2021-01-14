/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)nextBool;
-(float)nextUniform;
-(id)arrayByShufflingObjectsInArray:(id)arg1 ;
-(long long)nextInt;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

