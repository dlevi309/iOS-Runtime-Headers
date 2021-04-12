/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/ESDaemonSupport.framework/ESDaemonSupport
*/


@class NSMutableDictionary;

@interface ESDStatusReportAggregator : NSObject {

	int _numOutstandingReports;
	/*^block*/id _completionBlock;
	NSMutableDictionary* _persistentUUIDToStatusReport;
	BOOL _finished;

}
-(void)noteAdditionalReportDicts:(id)arg1 ;
-(void)_coalesceAndReport;
-(id)initWithStatusReports:(id)arg1 numOutstandingReports:(int)arg2 timeout:(double)arg3 completionBlock:(/*^block*/id)arg4 ;
@end

