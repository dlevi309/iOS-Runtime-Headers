/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSEnumerator, NSArray;

@interface MXHistogram : NSObject <NSSecureCoding> {

	unsigned long long _totalBucketCount;
	NSEnumerator* _bucketEnumerator;
	NSArray* _histogramData;

}

@property (readonly) NSArray * histogramData;                          //@synthesize histogramData=_histogramData - In the implementation block
@property (readonly) unsigned long long totalBucketCount;              //@synthesize totalBucketCount=_totalBucketCount - In the implementation block
@property (readonly) NSEnumerator * bucketEnumerator;                  //@synthesize bucketEnumerator=_bucketEnumerator - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)toDictionary;
-(id)initWithHistogramBucketData:(id)arg1 ;
-(unsigned long long)totalBucketCount;
-(NSEnumerator *)bucketEnumerator;
-(NSArray *)histogramData;
@end

