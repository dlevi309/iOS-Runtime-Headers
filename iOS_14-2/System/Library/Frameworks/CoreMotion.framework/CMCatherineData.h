/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@interface CMCatherineData : CMLogItem {

	double _catherine;
	double _confidence;

}

@property (nonatomic,readonly) double catherine;               //@synthesize catherine=_catherine - In the implementation block
@property (nonatomic,readonly) double confidence;              //@synthesize confidence=_confidence - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)confidence;
-(double)catherine;
-(id)initWithCatherine:(double)arg1 confidence:(double)arg2 timestamp:(double)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

