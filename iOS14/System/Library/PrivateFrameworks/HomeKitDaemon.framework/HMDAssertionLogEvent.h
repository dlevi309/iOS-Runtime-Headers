/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDDiagnosticReportLogging.h>

@class NSString;

@interface HMDAssertionLogEvent : HMDLogEvent <HMDDiagnosticReportLogging> {

	NSString* _description;
	NSString* _reason;

}

@property (copy,readonly) NSString * diagnosticReportEventType; 
@property (copy,readonly) NSString * diagnosticReportEventSubType; 
@property (copy,readonly) NSString * reason;                                    //@synthesize reason=_reason - In the implementation block
+(id)identifier;
-(id)initWithReason:(id)arg1 ;
-(id)description;
-(NSString *)reason;
-(void)updateDiagnosticReportSignature:(id)arg1 ;
@end

