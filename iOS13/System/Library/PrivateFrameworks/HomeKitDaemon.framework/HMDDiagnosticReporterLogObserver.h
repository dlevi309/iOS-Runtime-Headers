/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)sharedObserver;
+(id)logCategory;
+(id)supportedEventTypes;
+(BOOL)shouldSubmitEvent:(id)arg1 ;
+(id)typeForEvent:(id)arg1 ;
+(id)subTypeForEvent:(id)arg1 ;
-(id)init;
-(void)stop;
-(void)start;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(SDRDiagnosticReporter *)reporter;
-(void)dispatcher:(id)arg1 didReceiveEvent:(id)arg2 ;
@end

