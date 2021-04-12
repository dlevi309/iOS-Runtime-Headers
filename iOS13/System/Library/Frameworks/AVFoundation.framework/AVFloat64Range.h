/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AVFloat64Range : NSObject <NSCopying> {

	double _minimum;
	double _maximum;

}

@property (nonatomic,readonly) double minimum;              //@synthesize minimum=_minimum - In the implementation block
@property (nonatomic,readonly) double maximum;              //@synthesize maximum=_maximum - In the implementation block
+(id)float64RangeWithMinimum:(double)arg1 maximum:(double)arg2 ;
+(id)float64RangeWithAudioValueRange:(AudioValueRange)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)minimum;
-(double)maximum;
-(id)initWithMinimum:(double)arg1 maximum:(double)arg2 ;
-(id)initWithAudioValueRange:(AudioValueRange)arg1 ;
@end

