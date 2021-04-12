/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
*/

#import <libobjc.A.dylib/CUXPCCodable.h>

@class NSDate, NSArray;

@interface ENExposureWindow : NSObject <CUXPCCodable> {

	unsigned char _calibrationConfidence;
	unsigned _diagnosisReportType;
	unsigned _infectiousness;
	NSDate* _date;
	NSArray* _scanInstances;

}

@property (assign,nonatomic) unsigned char calibrationConfidence;              //@synthesize calibrationConfidence=_calibrationConfidence - In the implementation block
@property (nonatomic,copy) NSDate * date;                                      //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) unsigned diagnosisReportType;                     //@synthesize diagnosisReportType=_diagnosisReportType - In the implementation block
@property (assign,nonatomic) unsigned infectiousness;                          //@synthesize infectiousness=_infectiousness - In the implementation block
@property (nonatomic,copy) NSArray * scanInstances;                            //@synthesize scanInstances=_scanInstances - In the implementation block
-(void)encodeWithXPCObject:(id)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(id)description;
-(id)initWithXPCObject:(id)arg1 error:(id*)arg2 ;
-(NSDate *)date;
-(unsigned)diagnosisReportType;
-(void)setDiagnosisReportType:(unsigned)arg1 ;
-(unsigned char)calibrationConfidence;
-(void)setCalibrationConfidence:(unsigned char)arg1 ;
-(unsigned)infectiousness;
-(void)setInfectiousness:(unsigned)arg1 ;
-(NSArray *)scanInstances;
-(void)setScanInstances:(NSArray *)arg1 ;
@end

