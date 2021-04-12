/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSMutableDictionary, NSNumber, VCConnectionManager, NSObject;

@interface VCIDSSessionInfoSynchronizer : NSObject {

	NSMutableArray* _peerSubscribedStreams;
	NSMutableDictionary* _peerPublishedStreams;
	NSMutableArray* _publishedStreams;
	NSMutableDictionary* _subscribedStreams;
	/*^block*/id _peerSubscribedStreamCallback;
	/*^block*/id _peerPublishedStreamCallback;
	/*^block*/id _errorReponseCallback;
	id _delegate;
	unsigned _currentParticipantGenerationCounter;
	NSNumber* _primaryLinkID;
	NSNumber* _duplicationLinkID;
	VCConnectionManager* _connectionManager;
	id _reportingAgentWeak;
	BOOL _isSessionInfoErrorResponseReported;
	NSObject*<OS_dispatch_queue> _stateQueue;
	int _sessionInfoRequestBytesUsed;
	int _sessionInfoResponseBytesUsed;
	int _lastProcessedBytesSent;
	int _bytesSentToReport;
	int _maxSentRate;
	int _minSentRate;
	int _lastProcessedBytesReceived;
	int _bytesReceivedToReport;
	int _maxReceivedRate;
	int _minReceivedRate;
	double _lastUpdateTimestamp;

}

@property (nonatomic,retain) NSNumber * primaryLinkID; 
@property (nonatomic,retain) NSNumber * duplicationLinkID; 
@property (nonatomic,copy) id peerSubscribedStreamCallback;              //@synthesize peerSubscribedStreamCallback=_peerSubscribedStreamCallback - In the implementation block
@property (nonatomic,copy) id peerPublishedStreamCallback;               //@synthesize peerPublishedStreamCallback=_peerPublishedStreamCallback - In the implementation block
@property (nonatomic,copy) id errorReponseCallback;                      //@synthesize errorReponseCallback=_errorReponseCallback - In the implementation block
@property (readonly) id reportingAgent; 
-(void)dealloc;
-(void)registerPeriodicTask;
-(void)deregisterPeriodicTask;
-(id)reportingAgent;
-(void)periodicTask:(void*)arg1 ;
-(id)initWithDelegate:(id)arg1 connectionManager:(id)arg2 reportingAgent:(id)arg3 ;
-(void)updateVCIDSSessionInfoResponse:(id)arg1 ;
-(void)optInStreamIDsForNewPrimaryConnection:(id)arg1 oldPrimaryConnection:(id)arg2 ;
-(void)optInStreamIDsForConnection:(id)arg1 ;
-(void)optOutStreamIDsForNonPrimaryConnection:(id)arg1 sentOnConnection:(id)arg2 ;
-(void)checkVCIDSSessionInfoNeedUpdate:(unsigned char)arg1 ;
-(void)resetParticipantGenerationCounter;
-(void)setVCIDSSessionInfoSubscribedStreamIDs:(id)arg1 ;
-(void)setErrorResponseCallback:(/*^block*/id)arg1 ;
-(void)setPeerSubscribedStreamCallback:(id)arg1 ;
-(void)flushRealTimeReportingStats;
-(id)sessionInfoSynchronizerDelegate;
-(void)setVCIDSSessionInfoPublishedStreamIDs:(id)arg1 ;
-(id)peerSubscribedStreamCallback;
-(id)peerPublishedStreamCallback;
-(void)setPeerPublishedStreamCallback:(id)arg1 ;
-(id)errorReponseCallback;
-(void)setErrorReponseCallback:(id)arg1 ;
-(void)setPrimaryLinkID:(NSNumber *)arg1 ;
-(NSNumber *)primaryLinkID;
-(void)setDuplicationLinkID:(NSNumber *)arg1 ;
-(NSNumber *)duplicationLinkID;
@end

