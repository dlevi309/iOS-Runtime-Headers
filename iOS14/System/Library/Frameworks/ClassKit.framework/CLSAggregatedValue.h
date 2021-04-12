/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/ClassKit-Structs.h>
#import <ClassKit/CLSReportItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CLSAggregatedValue : CLSReportItem <NSSecureCoding, NSCopying> {

	int _aggregateType;
	double _value;
	long long _totalSampleCount;

}

@property (assign,nonatomic) double value;                            //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) long long totalSampleCount;              //@synthesize totalSampleCount=_totalSampleCount - In the implementation block
@property (nonatomic,readonly) double normalized; 
@property (assign,nonatomic) int aggregateType;                       //@synthesize aggregateType=_aggregateType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setValue:(double)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)add:(id)arg1 ;
-(double)value;
-(long long)totalSampleCount;
-(void)setTotalSampleCount:(long long)arg1 ;
-(int)aggregateType;
-(void)setAggregateType:(int)arg1 ;
-(double)normalized;
-(void)scalarMultiply:(double)arg1 ;
@end

