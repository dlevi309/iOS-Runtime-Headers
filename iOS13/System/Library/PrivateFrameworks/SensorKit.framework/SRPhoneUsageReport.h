/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
*/

#import <libobjc.A.dylib/SRSampleExporting.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SRSampling.h>

@class NSString;

@interface SRPhoneUsageReport : NSObject <SRSampleExporting, NSSecureCoding, SRSampling> {

	double _duration;
	long long _totalOutgoingCalls;
	long long _totalIncomingCalls;
	long long _totalUniqueContacts;
	double _totalPhoneCallDuration;
	double _startTime;

}

@property (assign) double startTime;                                //@synthesize startTime=_startTime - In the implementation block
@property (assign) double duration;                                 //@synthesize duration=_duration - In the implementation block
@property (assign) long long totalOutgoingCalls;                    //@synthesize totalOutgoingCalls=_totalOutgoingCalls - In the implementation block
@property (assign) long long totalIncomingCalls;                    //@synthesize totalIncomingCalls=_totalIncomingCalls - In the implementation block
@property (assign) long long totalUniqueContacts;                   //@synthesize totalUniqueContacts=_totalUniqueContacts - In the implementation block
@property (assign) double totalPhoneCallDuration;                   //@synthesize totalPhoneCallDuration=_totalPhoneCallDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)usageReportWithInterval:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3 ;
-(id)binarySampleRepresentation;
-(id)sr_dictionaryRepresentation;
-(long long)totalUniqueContacts;
-(void)setTotalUniqueContacts:(long long)arg1 ;
-(long long)totalOutgoingCalls;
-(long long)totalIncomingCalls;
-(double)totalPhoneCallDuration;
-(void)setTotalOutgoingCalls:(long long)arg1 ;
-(void)setTotalIncomingCalls:(long long)arg1 ;
-(void)setTotalPhoneCallDuration:(double)arg1 ;
@end

