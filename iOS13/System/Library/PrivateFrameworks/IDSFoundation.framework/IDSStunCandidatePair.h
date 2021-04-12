/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@protocol IDSStunCandidatePairDelegate, OS_dispatch_source;
#import <IDSFoundation/IDSFoundation-Structs.h>
@class IDSStunCandidate, NSUUID, NSString, NSData, IDSQuickRelaySessionInfo, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject;

@interface IDSStunCandidatePair : NSObject {

	unsigned long long _state;
	IDSStunCandidate* _local;
	IDSStunCandidate* _remote;
	IDSStunCandidate* _relayRemote;
	BOOL _isNominated;
	BOOL _isActive;
	id<IDSStunCandidatePairDelegate> _delegate;
	/*^block*/id _sendMsgBlock;
	double _lastIncomingPacketTime;
	double _lastOutgoingPacketTime;
	unsigned _totalPacketsSentOnLink;
	unsigned _totalPacketsReceivedOnLink;
	BOOL _hbStarted;
	unsigned short _hbCounter;
	unsigned char _statsIntervalInSeconds;
	char _linkID;
	NSUUID* _linkUUID;
	NSString* _sessionID;
	NSString* _groupID;
	NSData* _relaySessionToken;
	NSData* _relaySessionKey;
	IDSQuickRelaySessionInfo* _relaySessionInfo;
	NSDictionary* _sessionInfoDict;
	unsigned short _channelNumber;
	unsigned short _relayLinkID;
	BOOL _isAcceptedRelaySession;
	long long _participantID;
	unsigned long long _capabilityFlags;
	unsigned char _protocolVersion;
	BOOL _isInitiator;
	BOOL _enableSKE;
	NSData* _softwareData;
	NSString* _appName;
	NSMutableArray* _pendingStunRequests;
	NSMutableArray* _repliedStunRequests;
	NSMutableDictionary* _requestIDToQueryLinkIDs;
	NSMutableDictionary* _requestIDToSessionInfoReqType;
	NSMutableDictionary* _stunSentBytesToRequestID;
	NSUUID* _defaultLocalDeviceCBUUID;
	NSUUID* _defaultRemoteDeviceCBUUID;
	long long _relayProviderType;
	long long _allocateType;
	double _allocateTime;
	double _selfAllocateStartTime;
	double _serverLatency;
	unsigned _sessionInfoReqCount;
	BOOL _recvSKEData;
	BOOL _sentSKEData;
	NSData* _skeData;
	NSObject*<OS_dispatch_source> _sessionConnectedTimer;
	/*^block*/id _sessionConnectedTimeoutBlock;
	NSObject*<OS_dispatch_source> _sessionConvergenceTimer;
	/*^block*/id _sessionConvergenceBlock;
	NSObject*<OS_dispatch_source> _sessionGoAwayTimer;
	/*^block*/id _sessionGoAwayBlock;
	BOOL _pendingRealloc;
	NSObject*<OS_dispatch_source> _reallocTimer;
	BOOL _pendingNoSessionStateAllocbind;
	NSObject*<OS_dispatch_source> _noSessionStateTimer;
	BOOL _recvDisconnected;
	BOOL _recvDisconnectedAck;
	NSData* _encKey;
	NSData* _decKey;
	NSData* _hmacKey;
	NSDictionary* _participantIDMap;
	BOOL _serverIsDegraded;
	double _testStartTime;
	unsigned _testOptions;
	BOOL _isDisconnecting;
	double _triggeredCheckTime;
	BOOL _isRealloc;
	NSObject*<OS_dispatch_source> _allocbindFailoverTimer;

}

@property (assign,nonatomic) unsigned long long state;                                //@synthesize state=_state - In the implementation block
@property (readonly) IDSStunCandidate * local;                                        //@synthesize local=_local - In the implementation block
@property (readonly) IDSStunCandidate * remote;                                       //@synthesize remote=_remote - In the implementation block
@property (retain) IDSStunCandidate * relayRemote;                                    //@synthesize relayRemote=_relayRemote - In the implementation block
@property (assign,nonatomic) BOOL isNominated;                                        //@synthesize isNominated=_isNominated - In the implementation block
@property (assign,nonatomic) BOOL isActive;                                           //@synthesize isActive=_isActive - In the implementation block
@property (assign,nonatomic) double lastIncomingPacketTime;                           //@synthesize lastIncomingPacketTime=_lastIncomingPacketTime - In the implementation block
@property (assign,nonatomic) double lastOutgoingPacketTime;                           //@synthesize lastOutgoingPacketTime=_lastOutgoingPacketTime - In the implementation block
@property (assign,nonatomic) unsigned totalPacketsSentOnLink;                         //@synthesize totalPacketsSentOnLink=_totalPacketsSentOnLink - In the implementation block
@property (assign,nonatomic) unsigned totalPacketsReceivedOnLink;                     //@synthesize totalPacketsReceivedOnLink=_totalPacketsReceivedOnLink - In the implementation block
@property (assign,nonatomic) BOOL hbStarted;                                          //@synthesize hbStarted=_hbStarted - In the implementation block
@property (nonatomic,readonly) unsigned short hbCounter;                              //@synthesize hbCounter=_hbCounter - In the implementation block
@property (nonatomic,readonly) unsigned char statsIntervalInSeconds;                  //@synthesize statsIntervalInSeconds=_statsIntervalInSeconds - In the implementation block
@property (assign,nonatomic) char linkID;                                             //@synthesize linkID=_linkID - In the implementation block
@property (copy) NSUUID * linkUUID;                                                   //@synthesize linkUUID=_linkUUID - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> allocbindFailoverTimer;              //@synthesize allocbindFailoverTimer=_allocbindFailoverTimer - In the implementation block
@property (readonly) NSString * sessionID;                                            //@synthesize sessionID=_sessionID - In the implementation block
@property (readonly) NSData * relaySessionToken;                                      //@synthesize relaySessionToken=_relaySessionToken - In the implementation block
@property (readonly) NSData * relaySessionKey;                                        //@synthesize relaySessionKey=_relaySessionKey - In the implementation block
@property (readonly) IDSQuickRelaySessionInfo * relaySessionInfo;                     //@synthesize relaySessionInfo=_relaySessionInfo - In the implementation block
@property (readonly) NSDictionary * sessionInfoDict;                                  //@synthesize sessionInfoDict=_sessionInfoDict - In the implementation block
@property (assign,nonatomic) unsigned short channelNumber;                            //@synthesize channelNumber=_channelNumber - In the implementation block
@property (nonatomic,readonly) unsigned short relayLinkID;                            //@synthesize relayLinkID=_relayLinkID - In the implementation block
@property (assign,nonatomic) BOOL isAcceptedRelaySession;                             //@synthesize isAcceptedRelaySession=_isAcceptedRelaySession - In the implementation block
@property (assign,nonatomic) long long participantID;                                 //@synthesize participantID=_participantID - In the implementation block
@property (nonatomic,readonly) unsigned long long capabilityFlags;                    //@synthesize capabilityFlags=_capabilityFlags - In the implementation block
@property (nonatomic,readonly) unsigned char protocolVersion;                         //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (nonatomic,readonly) BOOL isInitiator;                                      //@synthesize isInitiator=_isInitiator - In the implementation block
@property (nonatomic,readonly) BOOL enableSKE;                                        //@synthesize enableSKE=_enableSKE - In the implementation block
@property (readonly) NSData * softwareData;                                           //@synthesize softwareData=_softwareData - In the implementation block
@property (readonly) NSString * appName;                                              //@synthesize appName=_appName - In the implementation block
@property (readonly) NSMutableArray * pendingStunRequests;                            //@synthesize pendingStunRequests=_pendingStunRequests - In the implementation block
@property (readonly) NSMutableArray * repliedStunRequests;                            //@synthesize repliedStunRequests=_repliedStunRequests - In the implementation block
@property (copy) NSUUID * defaultLocalDeviceCBUUID;                                   //@synthesize defaultLocalDeviceCBUUID=_defaultLocalDeviceCBUUID - In the implementation block
@property (copy) NSUUID * defaultRemoteDeviceCBUUID;                                  //@synthesize defaultRemoteDeviceCBUUID=_defaultRemoteDeviceCBUUID - In the implementation block
@property (copy) NSString * groupID;                                                  //@synthesize groupID=_groupID - In the implementation block
@property (assign,nonatomic) long long relayProviderType;                             //@synthesize relayProviderType=_relayProviderType - In the implementation block
@property (assign,nonatomic) long long allocateType;                                  //@synthesize allocateType=_allocateType - In the implementation block
@property (assign,nonatomic) double allocateTime;                                     //@synthesize allocateTime=_allocateTime - In the implementation block
@property (assign,nonatomic) double selfAllocateStartTime;                            //@synthesize selfAllocateStartTime=_selfAllocateStartTime - In the implementation block
@property (nonatomic,readonly) double testStartTime;                                  //@synthesize testStartTime=_testStartTime - In the implementation block
@property (assign,nonatomic) double serverLatency;                                    //@synthesize serverLatency=_serverLatency - In the implementation block
@property (nonatomic,readonly) unsigned sessionInfoReqCount;                          //@synthesize sessionInfoReqCount=_sessionInfoReqCount - In the implementation block
@property (assign,nonatomic) BOOL recvSKEData;                                        //@synthesize recvSKEData=_recvSKEData - In the implementation block
@property (assign,nonatomic) BOOL sentSKEData;                                        //@synthesize sentSKEData=_sentSKEData - In the implementation block
@property (copy) NSData * skeData;                                                    //@synthesize skeData=_skeData - In the implementation block
@property (assign,nonatomic) BOOL pendingRealloc;                                     //@synthesize pendingRealloc=_pendingRealloc - In the implementation block
@property (assign,nonatomic) BOOL pendingNoSessionStateAllocbind;                     //@synthesize pendingNoSessionStateAllocbind=_pendingNoSessionStateAllocbind - In the implementation block
@property (assign,nonatomic) BOOL recvDisconnected;                                   //@synthesize recvDisconnected=_recvDisconnected - In the implementation block
@property (assign,nonatomic) BOOL recvDisconnectedAck;                                //@synthesize recvDisconnectedAck=_recvDisconnectedAck - In the implementation block
@property (assign,nonatomic) BOOL isRealloc;                                          //@synthesize isRealloc=_isRealloc - In the implementation block
@property (readonly) NSData * encKey;                                                 //@synthesize encKey=_encKey - In the implementation block
@property (readonly) NSData * decKey;                                                 //@synthesize decKey=_decKey - In the implementation block
@property (readonly) NSData * hmacKey;                                                //@synthesize hmacKey=_hmacKey - In the implementation block
@property (readonly) NSDictionary * participantIDMap;                                 //@synthesize participantIDMap=_participantIDMap - In the implementation block
@property (nonatomic,readonly) BOOL serverIsDegraded;                                 //@synthesize serverIsDegraded=_serverIsDegraded - In the implementation block
@property (assign,nonatomic) BOOL isDisconnecting;                                    //@synthesize isDisconnecting=_isDisconnecting - In the implementation block
@property (assign,nonatomic) double triggeredCheckTime;                               //@synthesize triggeredCheckTime=_triggeredCheckTime - In the implementation block
@property (nonatomic,readonly) unsigned testOptions;                                  //@synthesize testOptions=_testOptions - In the implementation block
+(id)candidatePairWithLocalCandidate:(id)arg1 remoteCandidate:(id)arg2 sessionID:(id)arg3 delegate:(id)arg4 sendMsgBlock:(/*^block*/id)arg5 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)invalidate;
-(BOOL)isActive;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(BOOL)isInitiator;
-(NSString *)groupID;
-(void)setGroupID:(NSString *)arg1 ;
-(NSString *)sessionID;
-(NSString *)appName;
-(void)setIsActive:(BOOL)arg1 ;
-(long long)participantID;
-(void)setParticipantID:(long long)arg1 ;
-(IDSStunCandidate *)local;
-(unsigned char)protocolVersion;
-(NSData *)relaySessionKey;
-(NSData *)relaySessionToken;
-(char)linkID;
-(NSUUID *)linkUUID;
-(BOOL)serverIsDegraded;
-(long long)allocateType;
-(void)synthesizeNat64WithPrefix;
-(id)candidatePairToken;
-(IDSStunCandidate *)remote;
-(void)setPropertiesWithRelaySessionInfo:(id)arg1 sessionInfoDict:(id)arg2 enableSKE:(BOOL)arg3 ;
-(void)sendInfoRequest:(id)arg1 ;
-(unsigned short)channelNumber;
-(void)setLastOutgoingPacketTime:(double)arg1 ;
-(void)setLastIncomingPacketTime:(double)arg1 ;
-(BOOL)isNominated;
-(void)setIsNominated:(BOOL)arg1 ;
-(BOOL)isRelayStunCandidatePair;
-(void)stopSessionConnectedTimer;
-(void)stopSessionConvergenceTimer;
-(void)setLinkID:(char)arg1 ;
-(BOOL)isSharedQRSession;
-(long long)relayProviderType;
-(BOOL)pendingNoSessionStateAllocbind;
-(void)setChannelNumber:(unsigned short)arg1 ;
-(void)setRelayLinkID:(unsigned short)arg1 ;
-(BOOL)hbStarted;
-(BOOL)pendingRealloc;
-(void)setHbStarted:(BOOL)arg1 ;
-(void)setChannelSettings:(unsigned)arg1 ;
-(void)initParticipantIDMap;
-(unsigned)nextSessionInfoReqID;
-(void)sendSessionInfoRequest:(id)arg1 options:(id)arg2 ;
-(BOOL)isAcceptedRelaySession;
-(void)startSessionConnectedTimer:(int)arg1 block:(/*^block*/id)arg2 ;
-(void)setPendingNoSessionState:(BOOL)arg1 ;
-(void)setPropertiesWithReallocCandidatePair:(id)arg1 reallocToken:(id)arg2 ;
-(void)setIsRealloc:(BOOL)arg1 ;
-(void)setIsDisconnecting:(BOOL)arg1 ;
-(void)startSessionGoAwayTimer:(int)arg1 block:(/*^block*/id)arg2 ;
-(NSData *)decKey;
-(BOOL)processStatsResponse:(id)arg1 arrivalTime:(double)arg2 ;
-(BOOL)processInfoResponse:(id)arg1 packetBuffer:(SCD_Struct_ID19*)arg2 headerOverhead:(unsigned long long)arg3 ;
-(BOOL)processSessionInfoResponse:(id)arg1 packetBuffer:(SCD_Struct_ID19*)arg2 headerOverhead:(unsigned long long)arg3 ;
-(BOOL)processTestResponse:(id)arg1 arrivalTime:(double)arg2 ;
-(BOOL)processInfoIndication:(id)arg1 arrivalTime:(double)arg2 ;
-(BOOL)processSessionInfoIndication:(id)arg1 arrivalTime:(double)arg2 ;
-(BOOL)processDataMessageErrorIndication:(id)arg1 ;
-(BOOL)processStunErrorResponse:(id)arg1 packetBuffer:(SCD_Struct_ID19*)arg2 headerOverhead:(unsigned long long)arg3 ;
-(void)setPendingRealloc:(BOOL)arg1 ;
-(NSData *)encKey;
-(BOOL)isSelfQRSession;
-(void)stopSessionGoAwayTimer;
-(void)setSentSKEData:(BOOL)arg1 ;
-(void)setSkeData:(NSData *)arg1 ;
-(NSData *)skeData;
-(NSUUID *)defaultRemoteDeviceCBUUID;
-(unsigned short)hbCounter;
-(void)setTestOptionsFromUserDefaults;
-(BOOL)isRealloc;
-(void)setRecvSKEData:(BOOL)arg1 ;
-(IDSStunCandidate *)relayRemote;
-(void)setRelayRemote:(IDSStunCandidate *)arg1 ;
-(void)setLinkUUID:(NSUUID *)arg1 ;
-(BOOL)sentSKEData;
-(void)setRecvDisconnected:(BOOL)arg1 ;
-(void)setRecvDisconnectedAck:(BOOL)arg1 ;
-(BOOL)recvDisconnected;
-(BOOL)recvDisconnectedAck;
-(double)testStartTime;
-(void)sendTestRequest:(id)arg1 ;
-(unsigned)testOptions;
-(double)lastOutgoingPacketTime;
-(double)lastIncomingPacketTime;
-(void)setTotalPacketsSentOnLink:(unsigned)arg1 ;
-(void)setTotalPacketsReceivedOnLink:(unsigned)arg1 ;
-(unsigned char)statsIntervalInSeconds;
-(void)sendStatsRequest:(id)arg1 options:(id)arg2 ;
-(NSObject*<OS_dispatch_source>)allocbindFailoverTimer;
-(void)setAllocbindFailoverTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSDictionary *)sessionInfoDict;
-(double)selfAllocateStartTime;
-(void)setSelfAllocateStartTime:(double)arg1 ;
-(double)triggeredCheckTime;
-(void)setTriggeredCheckTime:(double)arg1 ;
-(BOOL)recvSKEData;
-(void)setIsAcceptedRelaySession:(BOOL)arg1 ;
-(unsigned short)relayLinkID;
-(void)updateParticipantIDMap:(id)arg1 ;
-(unsigned long long)capabilityFlags;
-(BOOL)isDisconnecting;
-(double)allocateTime;
-(void)startSessionConvergenceTimer:(int)arg1 block:(/*^block*/id)arg2 ;
-(void)setRelayProviderType:(long long)arg1 ;
-(NSDictionary *)participantIDMap;
-(BOOL)isValidRelayStunCandidatePair;
-(NSData *)softwareData;
-(BOOL)hasValidCapabilityFlags;
-(void)deriveAES128CTRKeys:(id)arg1 ;
-(IDSQuickRelaySessionInfo *)relaySessionInfo;
-(double)serverLatency;
-(unsigned)totalPacketsSentOnLink;
-(unsigned)totalPacketsReceivedOnLink;
-(id)initWithLocalCandidate:(id)arg1 remoteCandidate:(id)arg2 sessionID:(id)arg3 delegate:(id)arg4 sendMsgBlock:(/*^block*/id)arg5 ;
-(void)_stopReallocTimer;
-(NSUUID *)defaultLocalDeviceCBUUID;
-(BOOL)enableSKE;
-(void)_startNoSessionStateTimer;
-(void)_stopNoSessionStateTimer;
-(void)_handleNoSessionStateTimer;
-(void)_startReallocTimer;
-(void)_handleReallocTimer;
-(void)_handleSessionConnectedtTimer;
-(void)_handleSessionConvergenceTimer;
-(void)_handleSessionGoAwayTimer;
-(unsigned long long)getParticipantIDHash:(id)arg1 ;
-(void)removeStunRequest:(id)arg1 ;
-(BOOL)shouldRexmitStunRequest:(id)arg1 ;
-(void)addStunRequest:(id)arg1 ;
-(void)_notifyQREventAdded:(id)arg1 ;
-(void)processSessionInfoRequestTimeout:(id)arg1 ;
-(void)updateStunSentBytes:(long long)arg1 requestID:(id)arg2 ;
-(BOOL)shouldProcessStunResponse:(id)arg1 ;
-(BOOL)_optionallyCheckEncMarker:(id)arg1 ;
-(id)processParticipantsData:(char*)arg1 dataLen:(int)arg2 ;
-(unsigned long long)getStunSentBytes:(id)arg1 ;
-(void)_notifySessionStreamInfoReceived:(id)arg1 withParticipants:(id)arg2 sentBytes:(unsigned long long)arg3 receivedBytes:(unsigned long long)arg4 offlineRequest:(BOOL)arg5 streamInfoRequest:(BOOL)arg6 success:(BOOL)arg7 ;
-(void)setProtocolVersion:(unsigned char)arg1 isInitiator:(BOOL)arg2 enableSKE:(BOOL)arg3 ;
-(void)setDefaultLocalDeviceCBUUID:(NSUUID *)arg1 ;
-(void)setDefaultRemoteDeviceCBUUID:(NSUUID *)arg1 ;
-(void)setAllocateType:(long long)arg1 ;
-(void)setAllocateTime:(double)arg1 ;
-(void)setServerLatency:(double)arg1 ;
-(void)setPendingNoSessionStateAllocbind:(BOOL)arg1 ;
-(NSMutableArray *)pendingStunRequests;
-(NSMutableArray *)repliedStunRequests;
-(unsigned)sessionInfoReqCount;
-(NSData *)hmacKey;
@end

