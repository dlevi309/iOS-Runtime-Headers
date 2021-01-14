/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface TISKSingleMetricSample : NSObject <NSSecureCoding> {

	NSMutableArray* _samples;

}

@property (nonatomic,retain) NSMutableArray * samples;              //@synthesize samples=_samples - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)makeMetric;
-(NSMutableArray *)samples;
-(void)merge:(id)arg1 ;
-(void)setSamples:(NSMutableArray *)arg1 ;
-(double)average;
-(id)init;
-(void)addSample:(id)arg1 ;
-(unsigned long long)size;
-(void)encodeWithCoder:(id)arg1 ;
-(double)variance;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg1 ;
-(id)generateDataForSR:(id)arg1 ;
@end

