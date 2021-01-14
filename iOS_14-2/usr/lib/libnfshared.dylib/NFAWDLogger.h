/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/


@protocol OS_dispatch_queue, NFAWDLoggerDelegate;
@class AWDServerConnection, NSData, NSUserDefaults, NFAWDVersionInfo, NSObject, NSCountedSet;

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
	id<NFAWDLoggerDelegate> _delegate;
	NSCountedSet* _expressTransactionInfo;
	NSData* _activeAID;

}

@property (copy) NSData * activeAID;                                               //@synthesize activeAID=_activeAID - In the implementation block
@property (assign,nonatomic,__weak) id<NFAWDLoggerDelegate> delegate; 
+(id)sharedAWDLogger;
-(void)_registerLPCDStatisticMetric;
-(void)postAWDCRSAuthWithStatus:(unsigned)arg1 withMethod:(unsigned)arg2 ;
-(void)postAWDHCEEndEvent;
-(void)postAWDTSMEndOfSession;
-(void)_postAWDHardwareExceptionEventWithAssertionCounter:(unsigned)arg1 hardwareType:(unsigned)arg2 wdogDump:(unsigned*)arg3 hwFltDump:(unsigned*)arg4 ;
-(void)postAWDSERestrictedModeEntered:(id)arg1 isIcf:(BOOL)arg2 ;
-(void)postAWDHCIEndOfTransactionEventWithParameters:(id)arg1 ;
-(void)postAWDPurpleTrustOperationWithParameters:(id)arg1 ;
-(void)_postAWDHCIEndOfTransactionEventWithParametersLegacy:(id)arg1 currentTimestamp:(unsigned long long)arg2 ;
-(id)init;
-(void)postAWDReaderModeExceptionForType:(unsigned)arg1 withErrorCode:(unsigned)arg2 ;
-(void)postAWDHCEStateChangeEvent:(unsigned)arg1 ;
-(void)postAWDAPNReceived;
-(id<NFAWDLoggerDelegate>)delegate;
-(void)_postReaderSessionEndedWithType:(unsigned)arg1 uuid:(id)arg2 startTime:(id)arg3 params:(id)arg4 ;
-(void)postAWDTSMEndWithParameters:(id)arg1 ;
-(void)postAWDPLLUnlockEvent;
-(void)_registerGeneralStatisticMetric;
-(void)postAWDCRSDeAuthWithStatus:(unsigned)arg1 ;
-(void)postAWDFelicaHCIEndOfTransactionEventWithParameters:(id)arg1 ;
-(void)postAWDExpressTransactionEvent:(id)arg1 ;
-(void)postAWDTSMStartWithParameters:(id)arg1 ;
-(void)postAWDSERestrictedModeExited:(BOOL)arg1 ;
-(void)postAWDFelicaStateChangeEvent:(id)arg1 ;
-(void)setActiveAID:(NSData *)arg1 ;
-(void)postAWDCRSAuthInitEventWithStatus:(unsigned)arg1 ;
-(void)postAWDHCEStartEvent:(id)arg1 ;
-(void)postAWDSEMemoryInfo:(id)arg1 isIcf:(BOOL)arg2 ;
-(void)postAWDCardIngestionSessionStateChange:(id)arg1 ;
-(void)postAWDVASSelectOSE:(id)arg1 ;
-(NSData *)activeAID;
-(BOOL)incrementMiddlewareExceptionCountWithReset:(BOOL)arg1 ;
-(void)getAWDUniversityCode:(id)arg1 universityCodes:(unsigned*)arg2 ;
-(void)postAWDVASGetData:(id)arg1 ;
-(void)postAWDReaderSessionEventWithParameters:(id)arg1 ;
-(void)postAWDTSMConnectivityException:(unsigned)arg1 ;
-(void)postAWDVASTransactionException:(unsigned)arg1 withSWStatus:(unsigned)arg2 ;
-(void)setDelegate:(id<NFAWDLoggerDelegate>)arg1 ;
-(unsigned long long)getTimestamp;
-(void)postAWDFieldEventWithFieldOn:(BOOL)arg1 withTechnology:(unsigned)arg2 ;
-(void)postAWDCRSActivationTimerExpiredWithVersion:(unsigned)arg1 withStatus:(unsigned)arg2 ;
-(void)_registerNFCVersionMetric;
-(void)postAWDHCIActivityTimeout:(id)arg1 ;
-(void)postAWDPeerPaymentRequestWithParameters:(id)arg1 ;
-(void)postAWDTransactionEndOfOperation;
-(void)postReaderModeIngestionSessionStarted:(id)arg1 ;
-(void)postAWDMiddlewareException:(unsigned)arg1 mwVersion:(unsigned)arg2 errorType:(unsigned)arg3 errorCode:(unsigned)arg4 breadcrumb:(unsigned long long)arg5 checkMaxExceptionCounter:(BOOL)arg6 ;
-(void)postAWDSERemovedEvent:(id)arg1 isIcf:(BOOL)arg2 ;
-(void)postAWDVersionInfo:(id)arg1 ;
-(void)postAWDMobileSoftwareUpdateException:(unsigned)arg1 ;
-(void)postAWDSESelectEventWithAID:(id)arg1 ;
-(void)_registerDeviceExceptionStatisticMetric;
-(void)_registerExpressTransactionStatisticMetric;
-(void)postAWDEvent:(id)arg1 ;
-(void)updateStats:(id)arg1 reset:(BOOL)arg2 ;
-(void)_postAWDHCIStartOfTransactionEventWithParametersLegacy:(id)arg1 currentTimestamp:(unsigned long long)arg2 ;
-(void)_resetAWDLoadStackExceptionCount;
-(void)_postReaderSessionBurnoutTimerInvokedWithType:(unsigned)arg1 uuid:(id)arg2 startTime:(id)arg3 params:(id)arg4 ;
-(void)postReaderModeIngestionSessionEnded:(id)arg1 startTime:(unsigned long long)arg2 ;
-(void)_updateStats:(id)arg1 reset:(BOOL)arg2 ;
-(void)enableQueryMetricsListener;
-(void)postAWDPeerPaymentEnrollmentWithParameters:(id)arg1 ;
-(void)postAWDCRSAuthECommerceWithParameters:(id)arg1 ;
-(void)postAWDHCIStartOfTransactionEventWithParameters:(id)arg1 ;
-(void)_postReaderSessionStartedWithType:(unsigned)arg1 uuid:(id)arg2 ;
-(void)postAWDTransactionLastRAPDU;
-(id)generateUUID;
-(void)_postAWDEvent:(id)arg1 withTimestamp:(unsigned long long)arg2 ;
-(void)_postReaderSessionPollingStartedWithType:(unsigned)arg1 uuid:(id)arg2 startTime:(id)arg3 params:(id)arg4 ;
-(void)postAWDCardIngestionReaderStateChangeWithType:(unsigned)arg1 errorCode:(unsigned)arg2 ;
-(void)_postReaderSessionTagReadWithType:(unsigned)arg1 uuid:(id)arg2 startTime:(id)arg3 params:(id)arg4 ;
-(void)postAWDRestrictedModeFromContactlessMode:(BOOL)arg1 isIcf:(BOOL)arg2 ;
-(void)_postReaderSessionTagFoundWithType:(unsigned)arg1 uuid:(id)arg2 startTime:(id)arg3 params:(id)arg4 ;
@end

