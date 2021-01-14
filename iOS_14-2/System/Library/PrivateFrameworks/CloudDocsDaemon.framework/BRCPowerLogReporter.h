/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

