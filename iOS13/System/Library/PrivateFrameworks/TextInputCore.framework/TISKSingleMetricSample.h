/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(BOOL)isEmpty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)size;
-(NSMutableArray *)samples;
-(void)merge:(id)arg1 ;
-(void)addSample:(id)arg1 ;
-(void)setSamples:(NSMutableArray *)arg1 ;
-(double)average;
-(double)variance;
-(id)generateDataForSR:(id)arg1 ;
@end

