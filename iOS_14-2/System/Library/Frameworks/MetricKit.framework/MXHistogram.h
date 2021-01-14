/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)toDictionary;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithHistogramBucketData:(id)arg1 ;
-(unsigned long long)totalBucketCount;
-(NSEnumerator *)bucketEnumerator;
-(NSArray *)histogramData;
@end

