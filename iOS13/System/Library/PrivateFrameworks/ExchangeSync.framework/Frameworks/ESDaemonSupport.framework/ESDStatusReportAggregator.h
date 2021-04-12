/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

