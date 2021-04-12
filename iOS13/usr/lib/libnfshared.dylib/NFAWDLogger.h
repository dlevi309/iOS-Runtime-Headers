/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnfshared.dylib
*/


@protocol OS_dispatch_queue;
@class AWDServerConnection, NSData, NSUserDefaults, NFAWDVersionInfo, NSObject, NFWeakReference, NSCountedSet;

@interface NFAWDLogger : NSObject {

	unsigned _hwType;
	AWDServerConnection* _awdServer;
	unsigned long long _previousTransactionState;
	NSData* _uuid;
	unsigned long long _uuidRefTimestamp;
	NSUserDefaults* _userDefault;
	NSData* _tsmUuid;
	unsigned long long _tsmUuidRefTimestamp;
	NSData* _rmpUuid;
	unsigned long long _rmpUuidRefTimestamp;
	NFAWDVersionInfo* _versionInfo;
	NSData* _deviceExceptionUuid;
	unsigned long long _previousVASTransactionState;
	NSObject*<OS_dispatch_queue> _awdSubmissionQueue;
	unsigned long long _middlewareExceptionCount;
	unsigned long long _previousCardIngestionSessionState;
	unsigned long long _previousExpressTransactionState;
	NSData* _restrictedModeID;
	NFWeakReference* _delegate;
	NSCountedSet* _expressTransactionInfo;
	NSData* _activeAID;

}

@property (copy) NSData * activeAID;                                               //@synthesize activeAID=_activeAID - In the implementation block
@property (assign,nonatomic,__weak) id<NFAWDLoggerDelegate> delegate; 
+(id)sharedAWDLogger;
-(id)init;
-(void)dealloc;
-(id<NFAWDLoggerDelegate>)delegate;
-(void)setDelegate:(id<NFAWDLoggerDelegate>)arg1 ;
-(unsigned long long)getTimestamp;
-(id)generateUUID;
-(void)postAWDEvent:(id)arg1 ;
-(void)_registerNFCVersionMetric;
-(void)_registerGeneralStatisticMetric;
-(void)_registerDeviceExceptionStatisticMetric;
-(void)_registerExpressTransactionStatisticMetric;
-(void)_registerLPCDStatisticMetric;
-(void)_updateStats:(id)arg1 reset:(BOOL)arg2 ;
-(void)_postAWDEvent:(id)arg1 withTimestamp:(unsigned long long)arg2 ;
-(void)_postAWDHCIStartOfTransactionEventWithParametersLegacy:(id)arg1 currentTimestamp:(unsigned long long)arg2 ;
-(void)_postAWDHCIEndOfTransactionEventWithParametersLegacy:(id)arg1 currentTimestamp:(unsigned long long)arg2 ;
-(BOOL)incrementMiddlewareExceptionCountWithReset:(BOOL)arg1 ;
-(void)_postReaderSessionStartedWithType:(unsigned)arg1 uuid:(id)arg2 ;
-(void)_postReaderSessionPollingStartedWithType:(unsigned)arg1 uuid:(id)arg2 startTime:(id)arg3 ;
-(void)_postReaderSessionTagFoundWithType:(unsigned)arg1 uuid:(id)arg2 startTime:(id)arg3 params:(id)arg4 ;
-(void)_postReaderSessionTagReadWithType:(unsigned)arg1 uuid:(id)arg2 startTime:(id)arg3 params:(id)arg4 ;
-(void)_postReaderSessionEndedWithType:(unsigned)arg1 uuid:(id)arg2 startTime:(id)arg3 params:(id)arg4 ;
-(void)enableQueryMetricsListener;
-(void)updateStats:(id)arg1 reset:(BOOL)arg2 ;
-(void)postAWDFieldEventWithFieldOn:(BOOL)arg1 withTechnology:(unsigned)arg2 ;
-(void)postAWDCRSAuthInitEventWithStatus:(unsigned)arg1 ;
-(void)postAWDCRSAuthWithStatus:(unsigned)arg1 withMethod:(unsigned)arg2 ;
-(void)postAWDCRSAuthECommerceWithParameters:(id)arg1 ;
-(void)postAWDCRSDeAuthWithStatus:(unsigned)arg1 ;
-(void)postAWDSESelectEventWithAID:(id)arg1 ;
-(void)postAWDCRSActivationTimerExpiredWithVersion:(unsigned)arg1 withStatus:(unsigned)arg2 ;
-(void)postAWDExpressTransactionEvent:(id)arg1 ;
-(void)postAWDCardIngestionSessionStateChange:(id)arg1 ;
-(void)postAWDCardIngestionReaderStateChangeWithType:(unsigned)arg1 errorCode:(unsigned)arg2 ;
-(void)postAWDHCIStartOfTransactionEventWithParameters:(id)arg1 ;
-(void)postAWDHCIEndOfTransactionEventWithParameters:(id)arg1 ;
-(void)postAWDTransactionLastRAPDU;
-(void)postAWDTransactionEndOfOperation;
-(void)postAWDAPNReceived;
-(void)postAWDSERemovedEvent:(id)arg1 isIcf:(BOOL)arg2 ;
-(void)postAWDRestrictedModeFromContactlessMode:(BOOL)arg1 isIcf:(BOOL)arg2 ;
-(void)postAWDSERestrictedModeEntered:(id)arg1 isIcf:(BOOL)arg2 ;
-(void)postAWDSERestrictedModeExited:(BOOL)arg1 ;
-(void)postAWDTSMStartWithParameters:(id)arg1 ;
-(void)postAWDTSMEndWithParameters:(id)arg1 ;
-(void)postAWDTSMEndOfSession;
-(void)postAWDTSMConnectivityException:(unsigned)arg1 ;
-(void)postAWDVersionInfo:(id)arg1 ;
-(void)postAWDSEMemoryInfo:(id)arg1 isIcf:(BOOL)arg2 ;
-(void)postAWDVASSelectOSE:(id)arg1 ;
-(void)postAWDVASGetData:(id)arg1 ;
-(void)postAWDVASTransactionException:(unsigned)arg1 withSWStatus:(unsigned)arg2 ;
-(void)postAWDReaderModeExceptionForType:(unsigned)arg1 withErrorCode:(unsigned)arg2 ;
-(void)postAWDPLLUnlockEvent;
-(void)postAWDMiddlewareException:(unsigned)arg1 mwVersion:(unsigned)arg2 errorType:(unsigned)arg3 errorCode:(unsigned)arg4 breadcrumb:(unsigned long long)arg5 checkMaxExceptionCounter:(BOOL)arg6 ;
-(void)_resetAWDLoadStackExceptionCount;
-(void)_postAWDHardwareExceptionEventWithAssertionCounter:(unsigned)arg1 hardwareType:(unsigned)arg2 wdogDump:(unsigned*)arg3 hwFltDump:(unsigned*)arg4 ;
-(void)postAWDReaderSessionEventWithParameters:(id)arg1 ;
-(void)postReaderModeIngestionSessionStarted:(id)arg1 ;
-(void)postReaderModeIngestionSessionEnded:(id)arg1 startTime:(unsigned long long)arg2 ;
-(void)postAWDPeerPaymentEnrollmentWithParameters:(id)arg1 ;
-(void)postAWDPeerPaymentRequestWithParameters:(id)arg1 ;
-(void)postAWDPurpleTrustOperationWithParameters:(id)arg1 ;
-(void)postAWDHCIActivityTimeout:(id)arg1 ;
-(void)postAWDHCEStartEvent:(id)arg1 ;
-(void)postAWDHCEStateChangeEvent:(unsigned)arg1 ;
-(void)postAWDHCEEndEvent;
-(void)postAWDFelicaStateChangeEvent:(id)arg1 ;
-(void)postAWDMobileSoftwareUpdateException:(unsigned)arg1 ;
-(NSData *)activeAID;
-(void)setActiveAID:(NSData *)arg1 ;
@end

