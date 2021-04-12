/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned duration : 1;
	unsigned timestamp : 1;
	unsigned closeReason : 1;
	unsigned deviceType : 1;
	unsigned errorCode : 1;
	unsigned role : 1;
} SCD_Struct_AW1;

typedef struct {
	unsigned homeKitMultiUserSettingsValueInteger : 1;
	unsigned type : 1;
} SCD_Struct_AW2;

typedef struct {
	unsigned timestamp : 1;
	unsigned duration : 1;
	unsigned resultErrorCode : 1;
	unsigned source : 1;
	unsigned wasNewUpdateFetched : 1;
} SCD_Struct_AW3;

typedef struct {
	unsigned timestamp : 1;
	unsigned status : 1;
	unsigned hadViolationsInLast24h : 1;
} SCD_Struct_AW4;

typedef struct {
	unsigned timestamp : 1;
	unsigned certified : 1;
	unsigned consecutiveFailureCount : 1;
	unsigned duration : 1;
	unsigned errorCode : 1;
	unsigned source : 1;
	unsigned timeElapsedSinceFirstFailure : 1;
	unsigned transportType : 1;
	unsigned underlyingErrorCode : 1;
	unsigned isCached : 1;
	unsigned isRemote : 1;
	unsigned isRemoteAccessAllowed : 1;
	unsigned isRemotelyReachable : 1;
	unsigned isResidentAvailable : 1;
	unsigned isTimedWrite : 1;
	unsigned isWrite : 1;
} SCD_Struct_AW5;

typedef struct {
	unsigned containsValue : 1;
} SCD_Struct_AW6;

typedef struct {
	unsigned timestamp : 1;
	unsigned certified : 1;
	unsigned command : 1;
	unsigned transportType : 1;
} SCD_Struct_AW7;

typedef struct __CFUserNotification* CFUserNotificationRef;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_HM9;

typedef struct CGImage* CGImageRef;

typedef struct HMFRate {
	unsigned long long value;
	double period;
} HMFRate;

typedef struct {
	unsigned receivedConnSetup : 1;
	unsigned receivedNegotiationRequest : 1;
	unsigned receivedStartRequest : 1;
	unsigned sentConnSetup : 1;
	unsigned sentNegotiationRequest : 1;
	unsigned sentNegotiationResponse : 1;
	unsigned sentStartRequest : 1;
	unsigned sentStartResponse : 1;
} SCD_Struct_AW12;

typedef struct __SCDynamicStore* SCDynamicStoreRef;

typedef struct {
	unsigned duration : 1;
	unsigned startupDelay : 1;
	unsigned timestamp : 1;
	unsigned certified : 1;
	unsigned errorCode : 1;
	unsigned receivedFirstFrame : 1;
	unsigned resolutionOnClose : 1;
	unsigned underlyingErrorCode : 1;
	unsigned isLocal : 1;
	unsigned isStreamStarted : 1;
} SCD_Struct_AW14;

typedef struct {
	unsigned timestamp : 1;
	unsigned dataSyncState : 1;
	unsigned fetchCount : 1;
	unsigned homeManagerFetchCount : 1;
	unsigned homeManagerUploadCount : 1;
	unsigned homeZoneFetchCount : 1;
	unsigned homeZoneUploadCount : 1;
	unsigned pushCount : 1;
	unsigned uploadCount : 1;
	unsigned uploadErrorCount : 1;
	unsigned hasDecryptionFailed : 1;
	unsigned lastDecryptionFailed : 1;
	unsigned uploadMaximumDelayReached : 1;
} SCD_Struct_AW15;

typedef union {
	unsigned char __u6_addr8[16];
	unsigned short __u6_addr16[8];
	unsigned __u6_addr32[4];
} SCD_Union_HM16;

typedef struct sockaddr {
	unsigned char sa_len;
	unsigned char sa_family;
	char sa_data[14];
} sockaddr;

typedef struct in_addr {
	unsigned s_addr;
} in_addr;

typedef struct in6_addr {
	SCD_Union_HM16 __u6_addr;
} in6_addr;

typedef struct sockaddr_in6 {
	unsigned char sin6_len;
	unsigned char sin6_family;
	unsigned short sin6_port;
	unsigned sin6_flowinfo;
	in6_addr sin6_addr;
	unsigned sin6_scope_id;
} sockaddr_in6;

typedef struct sockaddr_in {
	unsigned char sin_len;
	unsigned char sin_family;
	unsigned short sin_port;
	in_addr sin_addr;
	char sin_zero[8];
} sockaddr_in;

typedef union {
	sockaddr sa;
	sockaddr_in v4;
	sockaddr_in6 v6;
} SCD_Union_HM22;

typedef struct {
	unsigned homeCreationMonth : 1;
	unsigned homeCreationYear : 1;
	unsigned networkProtectionStatus : 1;
	unsigned numAccessories : 1;
	unsigned numAccessoriesNetworkProtectionAutoFullAccess : 1;
	unsigned numAccessoriesNetworkProtectionAutoProtectedHomeKitLAN : 1;
	unsigned numAccessoriesNetworkProtectionAutoProtectedMainLAN : 1;
	unsigned numAccessoriesNetworkProtectionFullAccess : 1;
	unsigned numAccessoriesNetworkProtectionHomeKitOnly : 1;
	unsigned numAccessoriesNetworkProtectionUnprotected : 1;
	unsigned numAccessoriesWiFiPPSKCredential : 1;
	unsigned numAccessoryServiceGroups : 1;
	unsigned numAdmins : 1;
	unsigned numAppleAudioAccessories : 1;
	unsigned numAppleMediaAccessories : 1;
	unsigned numAppleTVAccessories : 1;
	unsigned numBridgedAccessories : 1;
	unsigned numBridgedTargetControllers : 1;
	unsigned numCameraAccessories : 1;
	unsigned numCameraAccessoriesSupportRecording : 1;
	unsigned numCertifiedAccessories : 1;
	unsigned numCertifiedBridgedTargetControllers : 1;
	unsigned numCertifiedTargetControllers : 1;
	unsigned numConfiguredScenes : 1;
	unsigned numEventTriggers : 1;
	unsigned numHAPAccessories : 1;
	unsigned numHAPBTAccessories : 1;
	unsigned numHAPBatteryServiceAccessories : 1;
	unsigned numHAPIPAccessories : 1;
	unsigned numHAPSpeakerServiceAccessories : 1;
	unsigned numMediaSystems : 1;
	unsigned numNotCertifiedAccessories : 1;
	unsigned numPrimaryHAPSpeakerServiceAccessories : 1;
	unsigned numResidentsEnabled : 1;
	unsigned numRooms : 1;
	unsigned numScenes : 1;
	unsigned numServices : 1;
	unsigned numShortcuts : 1;
	unsigned numTargetControllers : 1;
	unsigned numTelevisionAccessories : 1;
	unsigned numTimerTriggers : 1;
	unsigned numTriggerOwnedConfiguredScenes : 1;
	unsigned numTriggers : 1;
	unsigned numUsers : 1;
	unsigned numWholeHouseAudioAccessories : 1;
	unsigned numZones : 1;
	unsigned isOwner : 1;
	unsigned isPrimaryResident : 1;
	unsigned isResidentAvailable : 1;
	unsigned primaryReportingDevice : 1;
} SCD_Struct_AW23;

typedef struct {
	char* ptr;
	unsigned long long len;
	unsigned long long maxLen;
	char* mallocedPtr;
	unsigned char inlineBuffer[300];
} SCD_Struct_HM24;

typedef struct sqlite3* sqlite3Ref;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct FPSAPContextOpaque_* FPSAPContextOpaque_Ref;

typedef struct FairPlayHWInfo_ {
	unsigned IDLength;
	unsigned char ID[20];
} FairPlayHWInfo_;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct __CFString* CFStringRef;

typedef struct __CFArray* CFArrayRef;

typedef struct PairingSessionPrivate* PairingSessionPrivateRef;

typedef struct {
	unsigned byteLength : 1;
	unsigned byteOffset : 1;
	unsigned duration : 1;
	unsigned timeOffset : 1;
	unsigned height : 1;
	unsigned type : 1;
	unsigned width : 1;
} SCD_Struct_HM33;

