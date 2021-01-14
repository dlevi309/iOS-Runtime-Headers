/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKitInternal.framework/ReminderKitInternal
*/

#import <ReminderKitInternal/ReminderKitInternal-Structs.h>
#import <libobjc.A.dylib/RMDRandom.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RMDRandomSource : NSObject <RMDRandom, NSSecureCoding, NSCopying>
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

