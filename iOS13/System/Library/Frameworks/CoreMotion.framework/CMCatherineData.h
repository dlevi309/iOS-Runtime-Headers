/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)confidence;
-(id)initWithCatherine:(double)arg1 confidence:(double)arg2 timestamp:(double)arg3 ;
-(double)catherine;
@end

