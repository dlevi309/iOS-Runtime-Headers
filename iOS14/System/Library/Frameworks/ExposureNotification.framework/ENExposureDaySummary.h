/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
*/

#import <libobjc.A.dylib/CUXPCCodable.h>

@class NSDate, ENExposureSummaryItem;

@interface ENExposureDaySummary : NSObject <CUXPCCodable> {

	NSDate* _date;
	ENExposureSummaryItem* _confirmedTestSummary;
	ENExposureSummaryItem* _confirmedClinicalDiagnosisSummary;
	ENExposureSummaryItem* _recursiveSummary;
	ENExposureSummaryItem* _selfReportedSummary;
	ENExposureSummaryItem* _daySummary;

}

@property (nonatomic,copy) NSDate * date;                                                            //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) ENExposureSummaryItem * confirmedTestSummary;                           //@synthesize confirmedTestSummary=_confirmedTestSummary - In the implementation block
@property (nonatomic,retain) ENExposureSummaryItem * confirmedClinicalDiagnosisSummary;              //@synthesize confirmedClinicalDiagnosisSummary=_confirmedClinicalDiagnosisSummary - In the implementation block
@property (nonatomic,retain) ENExposureSummaryItem * recursiveSummary;                               //@synthesize recursiveSummary=_recursiveSummary - In the implementation block
@property (nonatomic,retain) ENExposureSummaryItem * selfReportedSummary;                            //@synthesize selfReportedSummary=_selfReportedSummary - In the implementation block
@property (nonatomic,retain) ENExposureSummaryItem * daySummary;                                     //@synthesize daySummary=_daySummary - In the implementation block
-(void)encodeWithXPCObject:(id)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(id)description;
-(id)initWithXPCObject:(id)arg1 error:(id*)arg2 ;
-(NSDate *)date;
-(void)setDaySummary:(ENExposureSummaryItem *)arg1 ;
-(ENExposureSummaryItem *)daySummary;
-(ENExposureSummaryItem *)confirmedTestSummary;
-(void)setConfirmedTestSummary:(ENExposureSummaryItem *)arg1 ;
-(ENExposureSummaryItem *)confirmedClinicalDiagnosisSummary;
-(void)setConfirmedClinicalDiagnosisSummary:(ENExposureSummaryItem *)arg1 ;
-(ENExposureSummaryItem *)selfReportedSummary;
-(void)setSelfReportedSummary:(ENExposureSummaryItem *)arg1 ;
-(ENExposureSummaryItem *)recursiveSummary;
-(void)setRecursiveSummary:(ENExposureSummaryItem *)arg1 ;
-(void)roundDurations;
@end

