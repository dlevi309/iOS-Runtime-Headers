/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class BRCAccountSession, NSMutableDictionary, NSObject;

@interface BRCPowerLogReporter : NSObject {

	BRCAccountSession* _session;
	NSMutableDictionary* _deepScanReasonsToReport;
	NSObject*<OS_dispatch_source> _reporterTimer;
	NSObject*<OS_dispatch_queue> _reporterQueue;

}
-(id)initWithSession:(id)arg1 ;
-(void)reportDeepScanReason:(id)arg1 forAppLibraryID:(id)arg2 ;
-(double)statsReportInterval;
-(void)_reportStats;
-(double)timeUntilNextReport;
@end

