/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(double)currentTimeStamp;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)valueTimingWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3 ;
-(double)valueForTimeStamp:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGPoint)_timing;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(double)anchorValue;
-(Class)classForCoder;
-(double)rate;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(double)currentValue;
-(double)anchorTimeStamp;
-(id)initWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3 ;
-(id)initWithValueTiming:(id)arg1 ;
-(BOOL)isEqualToValueTiming:(id)arg1 ;
-(double)timeStampForValue:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

