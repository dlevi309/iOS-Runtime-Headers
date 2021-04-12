/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
*/

#import <ExposureNotification/ExposureNotification-Structs.h>
#import <libobjc.A.dylib/CUXPCCodable.h>

@class NSData;

@interface ENTemporaryExposureKey : NSObject <CUXPCCodable> {

	unsigned char _transmissionRiskLevel;
	unsigned _rollingPeriod;
	unsigned _rollingStartNumber;
	unsigned _diagnosisReportType;
	NSData* _keyData;
	long long _daysSinceOnsetOfSymptoms;

}

@property (assign,nonatomic) long long daysSinceOnsetOfSymptoms;               //@synthesize daysSinceOnsetOfSymptoms=_daysSinceOnsetOfSymptoms - In the implementation block
@property (assign,nonatomic) unsigned diagnosisReportType;                     //@synthesize diagnosisReportType=_diagnosisReportType - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,copy) NSData * keyData;                                   //@synthesize keyData=_keyData - In the implementation block
@property (assign,nonatomic) unsigned rollingPeriod;                           //@synthesize rollingPeriod=_rollingPeriod - In the implementation block
@property (assign,nonatomic) unsigned rollingStartNumber;                      //@synthesize rollingStartNumber=_rollingStartNumber - In the implementation block
@property (assign,nonatomic) unsigned char transmissionRiskLevel;              //@synthesize transmissionRiskLevel=_transmissionRiskLevel - In the implementation block
-(void)encodeWithXPCObject:(id)arg1 ;
-(id)init;
-(id)description;
-(BOOL)isValid;
-(NSData *)keyData;
-(id)initWithXPCObject:(id)arg1 error:(id*)arg2 ;
-(void)setKeyData:(NSData *)arg1 ;
-(unsigned)rollingStartNumber;
-(unsigned char)transmissionRiskLevel;
-(unsigned)rollingPeriod;
-(long long)daysSinceOnsetOfSymptoms;
-(unsigned)diagnosisReportType;
-(void)deriveRollingProximityIdentifiersWithBuffer:(SCD_Struct_EN0*)arg1 count:(unsigned long long)arg2 ;
-(void)getAEMBytes:(void*)arg1 input:(const void*)arg2 length:(unsigned long long)arg3 RPI:(const SCD_Struct_EN0*)arg4 ;
-(void)setRollingPeriod:(unsigned)arg1 ;
-(void)setRollingStartNumber:(unsigned)arg1 ;
-(void)setTransmissionRiskLevel:(unsigned char)arg1 ;
-(void)setDaysSinceOnsetOfSymptoms:(long long)arg1 ;
-(void)setDiagnosisReportType:(unsigned)arg1 ;
@end

