/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@class NSDate;

@interface ReportDampener : NSObject {

	NSDate* _suppressReportingUntil;
	unsigned long long _numSuppressedReports;

}

@property (nonatomic,retain) NSDate * suppressReportingUntil;                      //@synthesize suppressReportingUntil=_suppressReportingUntil - In the implementation block
@property (assign,nonatomic) unsigned long long numSuppressedReports;              //@synthesize numSuppressedReports=_numSuppressedReports - In the implementation block
-(NSDate *)suppressReportingUntil;
-(void)setSuppressReportingUntil:(NSDate *)arg1 ;
-(unsigned long long)numSuppressedReports;
-(void)setNumSuppressedReports:(unsigned long long)arg1 ;
@end

