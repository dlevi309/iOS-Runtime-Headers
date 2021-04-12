/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDLogEventObserver.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSObject, SDRDiagnosticReporter, NSString;

@interface HMDDiagnosticReporterLogObserver : HMFObject <HMDLogEventObserver, HMFLogging> {

	NSObject*<OS_dispatch_queue> _clientQueue;
	SDRDiagnosticReporter* _reporter;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (readonly) SDRDiagnosticReporter * reporter;                                //@synthesize reporter=_reporter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)sharedObserver;
+(id)supportedEventTypes;
+(BOOL)isSupportedEvent:(id)arg1 ;
+(id)domainForEvent:(id)arg1 ;
+(id)typeForEvent:(id)arg1 ;
+(id)subTypeForEvent:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(id)init;
-(void)start;
-(void)stop;
-(SDRDiagnosticReporter *)reporter;
-(void)didReceiveEventFromDispatcher:(id)arg1 withLogContext:(id)arg2 ;
-(BOOL)shouldSubmitEvent:(id)arg1 withLogContext:(id)arg2 ;
@end

