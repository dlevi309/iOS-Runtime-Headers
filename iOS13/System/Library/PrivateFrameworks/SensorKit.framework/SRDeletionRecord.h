/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
*/

#import <libobjc.A.dylib/SRSampleExporting.h>
#import <libobjc.A.dylib/SRSampling.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SRDeletionRecord : NSObject <SRSampleExporting, SRSampling, NSSecureCoding> {

	double _startTime;
	double _endTime;
	long long _reason;

}

@property (assign) double startTime;                                //@synthesize startTime=_startTime - In the implementation block
@property (assign) double endTime;                                  //@synthesize endTime=_endTime - In the implementation block
@property (assign) long long reason;                                //@synthesize reason=_reason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)tombstoneWithStartTime:(double)arg1 endTime:(double)arg2 reason:(long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)reason;
-(void)setReason:(long long)arg1 ;
-(double)startTime;
-(double)endTime;
-(void)setEndTime:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3 ;
-(id)binarySampleRepresentation;
-(id)sr_dictionaryRepresentation;
@end

