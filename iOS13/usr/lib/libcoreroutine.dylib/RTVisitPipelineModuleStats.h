/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class NSMutableDictionary, NSDate;

@interface RTVisitPipelineModuleStats : NSObject {

	NSMutableDictionary* _iterationDurations;
	NSMutableDictionary* _iterationLocationCounts;
	NSMutableDictionary* _iterationLocationIntervals;
	NSMutableDictionary* _iterationMaxLocationOutageIntervals;
	NSMutableDictionary* _iterationVistCount;
	NSDate* _startDate;

}
-(id)init;
-(id)description;
-(double)cumulativeProcessingDuration;
-(void)startIterationWithVisitClusters:(id)arg1 ;
-(void)stopIterationWithVisitClusters:(id)arg1 ;
-(unsigned long long)lastLocationCount;
-(unsigned long long)lastLocationCountForDirection:(id)arg1 ;
-(unsigned long long)cumulativeLocationCountForDirection:(id)arg1 ;
-(unsigned long long)maxLocationCountForDirection:(id)arg1 ;
-(double)lastLocationIntervalForDirection:(id)arg1 ;
-(double)cumulativeLocationIntervalForDirection:(id)arg1 ;
-(double)maxLocationIntervalForDirection:(id)arg1 ;
-(double)lastMaxLocationOutageIntervalForDirection:(id)arg1 ;
-(double)cumulativeMaxLocationOutageIntervalForDirection:(id)arg1 ;
-(double)maxLocationOutageIntervalForDirection:(id)arg1 ;
-(unsigned long long)lastVisitCountForDirection:(id)arg1 ;
-(unsigned long long)cumulativeVisitCountForDirection:(id)arg1 ;
-(unsigned long long)maxVisitCountForDirection:(id)arg1 ;
-(double)lastProcessingDuration;
-(double)maxProcessingDuration;
-(void)setLocationCountForVisitCluster:(id)arg1 direction:(id)arg2 ;
-(void)setLocationIntervalForVisitCluster:(id)arg1 direction:(id)arg2 ;
-(void)setMaxLocationOutageIntervalForVisitCluster:(id)arg1 direction:(id)arg2 ;
-(void)setVisitCountForVisitCluster:(id)arg1 direction:(id)arg2 ;
@end

