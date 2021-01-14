/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class SASampleStore;

@interface PASampleTimeSeriesDataStore : NSObject <NSSecureCoding> {

	SASampleStore* _sampleStore;

}

@property (retain) SASampleStore * sampleStore;              //@synthesize sampleStore=_sampleStore - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSampleStore:(id)arg1 ;
-(SASampleStore *)sampleStore;
-(void)setSampleStore:(SASampleStore *)arg1 ;
@end

