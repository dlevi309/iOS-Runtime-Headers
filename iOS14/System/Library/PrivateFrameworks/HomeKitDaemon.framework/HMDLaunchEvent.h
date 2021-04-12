/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDDiagnosticReportLogging.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@class HMFActivity, NSDate, NSString;

@interface HMDLaunchEvent : HMDLogEvent <HMDDiagnosticReportLogging, HMDCoreAnalyticsLogging> {

	HMFActivity* _activity;
	NSDate* _XPCMessageTransportStartedDate;

}

@property (readonly) double diagnosticReportThreshold; 
@property (copy,readonly) NSString * diagnosticReportEventType; 
@property (copy,readonly) NSString * diagnosticReportEventSubType; 
@property (retain) HMFActivity * activity;                                      //@synthesize activity=_activity - In the implementation block
+(id)identifier;
-(id)init;
-(HMFActivity *)activity;
-(id)eventName;
-(void)setActivity:(HMFActivity *)arg1 ;
-(void)markXPCMessageTransportStarted;
-(id)serializedEvent;
-(void)updateDiagnosticReportSignature:(id)arg1 ;
-(NSString *)diagnosticReportEventType;
-(NSString *)diagnosticReportEventSubType;
-(double)diagnosticReportThreshold;
@end

