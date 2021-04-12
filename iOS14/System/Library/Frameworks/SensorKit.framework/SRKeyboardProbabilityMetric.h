/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SensorKit.framework/SensorKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUnit, NSMutableArray, NSArray;

@interface SRKeyboardProbabilityMetric : NSObject <NSSecureCoding> {

	NSUnit* _unitType;
	long long _totalDataSamples;
	NSMutableArray* _mutableSampleValues;

}

@property (copy) NSUnit * unitType;                                        //@synthesize unitType=_unitType - In the implementation block
@property (assign,nonatomic) long long totalDataSamples;                   //@synthesize totalDataSamples=_totalDataSamples - In the implementation block
@property (retain) NSMutableArray * mutableSampleValues;                   //@synthesize mutableSampleValues=_mutableSampleValues - In the implementation block
@property (copy,readonly) NSArray * distributionSampleValues; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)setUnitType:(NSUnit *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSUnit *)unitType;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NSMutableArray *)mutableSampleValues;
-(long long)totalDataSamples;
-(void)setMutableSampleValues:(NSMutableArray *)arg1 ;
-(NSArray *)distributionSampleValues;
-(void)setTotalDataSamples:(long long)arg1 ;
@end

