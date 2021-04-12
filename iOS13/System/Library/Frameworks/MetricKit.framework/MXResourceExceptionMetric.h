/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
*/

#import <MetricKit/MXMetric.h>

@interface MXResourceExceptionMetric : MXMetric {

	unsigned long long _cumulativeMemoryResourceExceptionCount;

}

@property (readonly) unsigned long long cumulativeMemoryResourceExceptionCount;              //@synthesize cumulativeMemoryResourceExceptionCount=_cumulativeMemoryResourceExceptionCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)toDictionary;
-(id)initWithCumulativeMemoryResourceExceptionCount:(unsigned long long)arg1 ;
-(unsigned long long)cumulativeMemoryResourceExceptionCount;
@end

