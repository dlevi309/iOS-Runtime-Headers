/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface TISKPositionalMetricSample : NSObject <NSSecureCoding> {

	NSMutableArray* _positionalMetricSample;

}

@property (nonatomic,retain) NSMutableArray * positionalMetricSample;              //@synthesize positionalMetricSample=_positionalMetricSample - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)makeMetric:(unsigned long long)arg1 ;
-(void)merge:(id)arg1 ;
-(unsigned long long)size;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg1 ;
-(id)generateDataForSR:(id)arg1 ;
-(void)addSample:(id)arg1 withPosition:(unsigned long long)arg2 ;
-(id)singleMetricSample:(unsigned long long)arg1 ;
-(NSMutableArray *)positionalMetricSample;
-(void)setPositionalMetricSample:(NSMutableArray *)arg1 ;
@end

