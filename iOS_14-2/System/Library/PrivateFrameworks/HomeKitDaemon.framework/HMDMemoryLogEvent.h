/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>
#import <libobjc.A.dylib/HMDDiagnosticReportLogging.h>

@class NSString, NSNumber;

@interface HMDMemoryLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging, HMDDiagnosticReportLogging> {

	NSString* _reason;
	NSNumber* _memoryUsage;
	NSNumber* _maxMemoryUsage;

}

@property (copy,readonly) NSString * diagnosticReportEventType; 
@property (copy,readonly) NSString * diagnosticReportEventSubType; 
@property (nonatomic,readonly) NSString * reason;                               //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) NSNumber * memoryUsage;                          //@synthesize memoryUsage=_memoryUsage - In the implementation block
@property (nonatomic,readonly) NSNumber * maxMemoryUsage;                       //@synthesize maxMemoryUsage=_maxMemoryUsage - In the implementation block
+(id)identifier;
+(id)memoryLogEventWithReason:(id)arg1 memoryUsage:(id)arg2 maxMemoryUsage:(id)arg3 ;
-(id)init;
-(id)eventName;
-(NSString *)reason;
-(id)serializedEvent;
-(BOOL)shouldSubmitEvent;
-(NSNumber *)memoryUsage;
-(NSNumber *)maxMemoryUsage;
-(id)__initWithReason:(id)arg1 memoryUsage:(id)arg2 maxMemoryUsage:(id)arg3 ;
-(void)updateDiagnosticReportSignature:(id)arg1 ;
@end

