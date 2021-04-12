/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned timestamp : 1;
} SCD_Struct_Wi1;

typedef struct {
	unsigned kCtlTxRTS : 1;
	unsigned kMACRxDataFrameMatchingRA : 1;
	unsigned kMACRxDataFrameOtherRA : 1;
	unsigned kRxBadFCS : 1;
	unsigned kRxBadPLCP : 1;
	unsigned kRxCRCGlitch : 1;
	unsigned kRxDataErrors : 1;
	unsigned kRxFrames : 1;
	unsigned kRxGoodPLCP : 1;
	unsigned kRxRetryBitSet : 1;
	unsigned kTxFrames : 1;
	unsigned kTxRetransmission : 1;
	unsigned kdot11MultipleRetryCount : 1;
	unsigned kdot11RTSFailureCount : 1;
	unsigned kdot11RTSSuccessCount : 1;
	unsigned kdot11RetryCount : 1;
	unsigned kMACRxControlFrameMatchingRA : 1;
	unsigned kMACRxControlFrameOtherRA : 1;
} SCD_Struct_Wi2;

typedef struct {
	unsigned ac : 1;
	unsigned dpsNotifications : 1;
	unsigned durSinceLastEnqueue : 1;
	unsigned durSinceLastEnqueueAtLastCheck : 1;
	unsigned durSinceLastFailedComp : 1;
	unsigned durSinceLastSuccessfulComp : 1;
	unsigned expiredComp : 1;
	unsigned failedComp : 1;
	unsigned failedCompletionsAtLastCheck : 1;
	unsigned noAckComp : 1;
	unsigned otherErrComp : 1;
	unsigned qeuedPackets : 1;
	unsigned sinceLastEnqueueHowManyFailed : 1;
	unsigned sinceLastEnqueueHowManySuccess : 1;
	unsigned sinceLastSuccessHowManyFailed : 1;
	unsigned success : 1;
	unsigned successfulCompletionsAtLastCheck : 1;
} SCD_Struct_Wi3;

typedef struct {
	unsigned timestamp : 1;
	unsigned rttGatewayBE : 1;
	unsigned rttGatewayBK : 1;
	unsigned rttGatewayVI : 1;
	unsigned rttGatewayVO : 1;
	unsigned rttPrimaryDnsBE : 1;
	unsigned rttPrimaryDnsBK : 1;
	unsigned rttPrimaryDnsVI : 1;
	unsigned rttPrimaryDnsVO : 1;
} SCD_Struct_Wi4;

typedef struct {
	unsigned long long list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_Wi5;

typedef struct {
	unsigned chipmodeerror : 1;
	unsigned expired : 1;
	unsigned internalerror : 1;
	unsigned ioerror : 1;
	unsigned mbfree : 1;
	unsigned noack : 1;
	unsigned nobuf : 1;
	unsigned noremotepeer : 1;
	unsigned noresources : 1;
	unsigned success : 1;
	unsigned txfailure : 1;
} SCD_Struct_Wi6;

typedef struct {
	unsigned timestamp : 1;
	unsigned action : 1;
	unsigned afterRecommendedAction : 1;
	unsigned beforeAction : 1;
} SCD_Struct_Wi7;

typedef struct {
	unsigned assocCount : 1;
	unsigned assocDur : 1;
	unsigned otherCount : 1;
	unsigned otherDur : 1;
	unsigned pnoBSSIDCount : 1;
	unsigned pnoBSSIDDur : 1;
	unsigned pnoSSIDCount : 1;
	unsigned pnoSSIDDur : 1;
	unsigned roamCount : 1;
	unsigned roamDur : 1;
	unsigned userCount : 1;
	unsigned userDur : 1;
} SCD_Struct_Wi8;

typedef struct {
	unsigned value : 1;
	unsigned traffic : 1;
} SCD_Struct_Wi9;

typedef struct {
	unsigned timestamp : 1;
	unsigned problemAC : 1;
	unsigned symptom : 1;
} SCD_Struct_Wi10;

typedef struct {
	unsigned changedChannel : 1;
	unsigned changedDNSPrimary : 1;
	unsigned changedDNSSecondary : 1;
	unsigned changedMAC : 1;
	unsigned newBSSID : 1;
} SCD_Struct_Wi11;

typedef struct {
	unsigned a2dp : 1;
	unsigned acl : 1;
	unsigned ble : 1;
	unsigned blescan : 1;
	unsigned esco : 1;
	unsigned inquiry : 1;
	unsigned inquiryscan : 1;
	unsigned mss : 1;
	unsigned other : 1;
	unsigned page : 1;
	unsigned pagescan : 1;
	unsigned park : 1;
	unsigned sco : 1;
	unsigned sniff : 1;
} SCD_Struct_Wi12;

