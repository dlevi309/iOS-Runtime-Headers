/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <libobjc.A.dylib/BonjourProbeDelegate.h>
#import <libobjc.A.dylib/ICMPPingProbeDelegate.h>
#import <libobjc.A.dylib/AWDLPeerProbeDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyDumpProbeDelegate.h>

@protocol ProbeManagerDelegate, OS_dispatch_queue;
@class NSMutableDictionary, CoreTelephonyDumpProbe, NSObject, NSString;

@interface ProbeManager : NSObject <BonjourProbeDelegate, ICMPPingProbeDelegate, AWDLPeerProbeDelegate, CoreTelephonyDumpProbeDelegate> {

	unsigned long long probeSequenceNumber;
	id<ProbeManagerDelegate> _delegate;
	NSMutableDictionary* _probes;
	id _probeDetails;
	CoreTelephonyDumpProbe* _ctDumpProbe;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) id probeDetails;                                   //@synthesize probeDetails=_probeDetails - In the implementation block
@property (nonatomic,retain) CoreTelephonyDumpProbe * ctDumpProbe;              //@synthesize ctDumpProbe=_ctDumpProbe - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) id<ProbeManagerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * probes;                    //@synthesize probes=_probes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithQueue:(id)arg1 ;
-(void)initializeCoreTelephonyDumps;
-(void)startTCPDumpForDiagSession:(id)arg1 duration:(id)arg2 ;
-(void)awdlPeerPollProbe:(id)arg1 serviceAdded:(id)arg2 ;
-(id<ProbeManagerDelegate>)delegate;
-(void)coreTelephonyDumpProbeStarted:(id)arg1 ;
-(NSMutableDictionary *)probes;
-(void)startGetNetworkInfo:(id)arg1 ;
-(CoreTelephonyDumpProbe *)ctDumpProbe;
-(BOOL)enableCoreTelephonyLoggingForCustomerSeed:(BOOL)arg1 ;
-(void)coreTelephonyDumpProbeCompleted:(id)arg1 success:(BOOL)arg2 ;
-(void)awdlPeerPollProbe:(id)arg1 serviceUpdated:(id)arg2 ;
-(void)setDelegate:(id<ProbeManagerDelegate>)arg1 ;
-(void)bonjourServiceAdded:(id)arg1 isUpdatedService:(BOOL)arg2 ;
-(void)awdlPeerPollProbe:(id)arg1 serviceRemoved:(id)arg2 ;
-(void)startAWDLPeerPollingWithDiagSession:(id)arg1 services:(id)arg2 count:(id)arg3 interval:(id)arg4 ;
-(void)stopTCPDump;
-(void)startTestTCPConnectionForDiagSession:(id)arg1 url:(id)arg2 host:(id)arg3 port:(id)arg4 interfaceName:(id)arg5 timeout:(id)arg6 ;
-(void)awdlPeerPollProbeIsComplete:(id)arg1 ;
-(void)bonjourServiceRemoved:(id)arg1 ;
-(void)finalizeCoreTelephonyDumps;
-(void)icmpPingProbe:(id)arg1 completedIterations:(unsigned long long)arg2 successfulCount:(unsigned long long)arg3 withError:(id)arg4 ;
-(void)cancelAllProbes;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)bonjourProbeComplete:(id)arg1 status:(unsigned)arg2 ;
-(id)probeCallbackFunctions;
-(void)fetchCoreTelephonyLoggingEnabledStatus;
-(void)startICMPPingForDiagSession:(id)arg1 hostName:(id)arg2 ipAddress:(id)arg3 interface:(id)arg4 pingCount:(id)arg5 interPingInterval:(id)arg6 burstCount:(id)arg7 interBurstInterval:(id)arg8 timeout:(id)arg9 ;
-(void)icmpPingProbe:(id)arg1 echoRequestSent:(id)arg2 success:(BOOL)arg3 ;
-(void)startCoreTelephonyDumpProbeForDiagSession:(id)arg1 previousDumpTimestamp:(id)arg2 previousDumpFolderPath:(id)arg3 previousDumpFolderPrefix:(id)arg4 timeout:(id)arg5 startNewDump:(id)arg6 maximumSingleFileSize:(id)arg7 dumpReason:(id)arg8 ;
-(id)dateTimeStringFromCTDumpFolderPrefix:(id)arg1 ;
-(id)probeDetails;
-(void)startAirDropBonjourScan:(id)arg1 duration:(id)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCtDumpProbe:(CoreTelephonyDumpProbe *)arg1 ;
-(void)icmpPingProbe:(id)arg1 echoResponseReceived:(id)arg2 success:(BOOL)arg3 ;
-(void)dealloc;
-(void)startTestHTTPForDiagSession:(id)arg1 url:(id)arg2 timeout:(id)arg3 interfaceName:(id)arg4 userAgent:(id)arg5 ;
-(void)setProbeDetails:(id)arg1 ;
@end

