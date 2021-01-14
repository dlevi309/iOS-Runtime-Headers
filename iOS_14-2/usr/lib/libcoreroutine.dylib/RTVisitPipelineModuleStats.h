/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)cumulativeLocationIntervalForDirection:(id)arg1 ;
-(unsigned long long)lastLocationCountForDirection:(id)arg1 ;
-(unsigned long long)lastVisitCountForDirection:(id)arg1 ;
-(double)maxLocationOutageIntervalForDirection:(id)arg1 ;
-(id)init;
-(unsigned long long)maxVisitCountForDirection:(id)arg1 ;
-(void)stopIterationWithVisitClusters:(id)arg1 ;
-(double)cumulativeMaxLocationOutageIntervalForDirection:(id)arg1 ;
-(unsigned long long)cumulativeVisitCountForDirection:(id)arg1 ;
-(void)setVisitCountForVisitCluster:(id)arg1 direction:(id)arg2 ;
-(void)setMaxLocationOutageIntervalForVisitCluster:(id)arg1 direction:(id)arg2 ;
-(id)description;
-(double)maxProcessingDuration;
-(double)lastLocationIntervalForDirection:(id)arg1 ;
-(double)cumulativeProcessingDuration;
-(unsigned long long)cumulativeLocationCountForDirection:(id)arg1 ;
-(unsigned long long)maxLocationCountForDirection:(id)arg1 ;
-(void)setLocationIntervalForVisitCluster:(id)arg1 direction:(id)arg2 ;
-(void)setLocationCountForVisitCluster:(id)arg1 direction:(id)arg2 ;
-(double)maxLocationIntervalForDirection:(id)arg1 ;
-(double)lastProcessingDuration;
-(unsigned long long)lastLocationCount;
-(void)startIterationWithVisitClusters:(id)arg1 ;
-(double)lastMaxLocationOutageIntervalForDirection:(id)arg1 ;
@end

