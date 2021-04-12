/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDDiagnosticReportLogging.h>

@class NSString;

@interface HMDRemoteMessageExceedBudgetLogEvent : HMDLogEvent <HMDDiagnosticReportLogging> {

	HMFRate _budgetRate;

}

@property (copy,readonly) NSString * diagnosticReportEventType; 
@property (copy,readonly) NSString * diagnosticReportEventSubType; 
@property (nonatomic,readonly) HMFRate budgetRate;                              //@synthesize budgetRate=_budgetRate - In the implementation block
+(id)identifier;
+(id)eventWithBudgetRate:(HMFRate)arg1 ;
-(id)initWithBudgetRate:(HMFRate)arg1 ;
-(HMFRate)budgetRate;
-(void)updateDiagnosticReportSignature:(id)arg1 ;
@end

