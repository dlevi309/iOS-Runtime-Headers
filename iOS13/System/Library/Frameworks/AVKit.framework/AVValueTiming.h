/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface AVValueTiming : NSObject <NSCoding, NSCopying, NSMutableCopying>

@property (nonatomic,readonly) double currentValue; 
@property (nonatomic,readonly) double anchorValue; 
@property (nonatomic,readonly) double anchorTimeStamp; 
@property (nonatomic,readonly) double rate; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)valueTimingWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3 ;
+(double)currentTimeStamp;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(double)rate;
-(double)currentValue;
-(double)valueForTimeStamp:(double)arg1 ;
-(CGPoint)_timing;
-(double)anchorValue;
-(double)anchorTimeStamp;
-(id)initWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3 ;
-(id)initWithValueTiming:(id)arg1 ;
-(BOOL)isEqualToValueTiming:(id)arg1 ;
-(double)timeStampForValue:(double)arg1 ;
@end

