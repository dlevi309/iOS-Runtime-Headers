/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
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

