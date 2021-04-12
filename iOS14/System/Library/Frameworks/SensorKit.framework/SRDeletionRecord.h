/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SensorKit.framework/SensorKit
*/

#import <libobjc.A.dylib/SRSampleExporting.h>
#import <libobjc.A.dylib/SRSampling.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SRDeletionRecord : NSObject <SRSampleExporting, SRSampling, NSSecureCoding> {

	Aq _reason;
	double _startTime;
	double _endTime;
	long long _extendedReason;
	NSString* __originatingDeviceIdentifier;

}

@property (assign) double startTime;                                   //@synthesize startTime=_startTime - In the implementation block
@property (assign) double endTime;                                     //@synthesize endTime=_endTime - In the implementation block
@property (assign) long long reason; 
@property (assign) long long extendedReason;                           //@synthesize extendedReason=_extendedReason - In the implementation block
@property (copy) NSString * _originatingDeviceIdentifier;              //@synthesize _originatingDeviceIdentifier=__originatingDeviceIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)tombstoneWithStartTime:(double)arg1 endTime:(double)arg2 reason:(long long)arg3 originatingDeviceIdentifier:(id)arg4 ;
+(id)tombstoneWithStartTime:(double)arg1 endTime:(double)arg2 extendedReason:(long long)arg3 originatingDeviceIdentifier:(id)arg4 ;
+(id)tombstoneWithStartTime:(double)arg1 endTime:(double)arg2 reason:(long long)arg3 ;
+(id)tombstoneWithStartTime:(double)arg1 endTime:(double)arg2 extendedReason:(long long)arg3 ;
-(void)setStartTime:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(long long)reason;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)_originatingDeviceIdentifier;
-(void)setEndTime:(double)arg1 ;
-(double)endTime;
-(void)setReason:(long long)arg1 ;
-(double)startTime;
-(id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3 ;
-(id)binarySampleRepresentation;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)sr_dictionaryRepresentation;
-(void)set_originatingDeviceIdentifier:(NSString *)arg1 ;
-(void)setExtendedReason:(long long)arg1 ;
-(long long)extendedReason;
@end

