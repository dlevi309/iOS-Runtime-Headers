/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDDataStreamProtocol.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol HMDDataStreamProtocolDelegate, OS_dispatch_queue;
@class NSObject, NSMapTable, NSString, NSMutableDictionary;

@interface HMDDataStreamBulkSendProtocol : NSObject <HMFLogging, HMDDataStreamProtocol, HMFTimerDelegate> {

	BOOL _isConnected;
	unsigned _nextSessionIdentifier;
	id<HMDDataStreamProtocolDelegate> _dataStream;
	NSObject*<OS_dispatch_queue> _queue;
	id _accessory;
	NSMapTable* _listeners;
	NSString* _logIdentifier;
	NSMapTable* _activeBulkSendSessions;
	NSMutableDictionary* _pendingBulkSendSessionContextBySessionIdentifier;
	/*^block*/id _bulkSendSessionContextFactory;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                          //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id accessory;                                                         //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,retain) NSMapTable * listeners;                                                      //@synthesize listeners=_listeners - In the implementation block
@property (assign,nonatomic) BOOL isConnected;                                                            //@synthesize isConnected=_isConnected - In the implementation block
@property (nonatomic,copy,readonly) NSString * logIdentifier;                                             //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (assign) unsigned nextSessionIdentifier;                                                        //@synthesize nextSessionIdentifier=_nextSessionIdentifier - In the implementation block
@property (readonly) NSMapTable * activeBulkSendSessions;                                                 //@synthesize activeBulkSendSessions=_activeBulkSendSessions - In the implementation block
@property (readonly) NSMutableDictionary * pendingBulkSendSessionContextBySessionIdentifier;              //@synthesize pendingBulkSendSessionContextBySessionIdentifier=_pendingBulkSendSessionContextBySessionIdentifier - In the implementation block
@property (readonly) id bulkSendSessionContextFactory;                                                    //@synthesize bulkSendSessionContextFactory=_bulkSendSessionContextFactory - In the implementation block
@property (assign,nonatomic,__weak) id<HMDDataStreamProtocolDelegate> dataStream;                         //@synthesize dataStream=_dataStream - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
+(id)logCategory;
+(id)protocolName;
-(BOOL)isConnected;
-(void)timerDidFire:(id)arg1 ;
-(NSMapTable *)listeners;
-(void)setListeners:(NSMapTable *)arg1 ;
-(BOOL)isActive;
-(id)accessory;
-(NSString *)logIdentifier;
-(void)setNextSessionIdentifier:(unsigned)arg1 ;
-(void)setIsConnected:(BOOL)arg1 ;
-(void)setAccessory:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(unsigned)nextSessionIdentifier;
-(id<HMDDataStreamProtocolDelegate>)dataStream;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setDataStream:(id<HMDDataStreamProtocolDelegate>)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)addListener:(id)arg1 fileType:(id)arg2 ;
-(void)dataStream:(id)arg1 didFailWithError:(id)arg2 ;
-(void)dataStream:(id)arg1 didReceiveResponse:(id)arg2 header:(id)arg3 payload:(id)arg4 ;
-(void)dataStream:(id)arg1 didReceiveEvent:(id)arg2 header:(id)arg3 payload:(id)arg4 ;
-(void)dataStream:(id)arg1 didReceiveRequest:(id)arg2 header:(id)arg3 payload:(id)arg4 ;
-(void)dataStreamDidClose:(id)arg1 ;
-(void)dataStreamDidOpen:(id)arg1 ;
-(id)initWithQueue:(id)arg1 accessory:(id)arg2 logIdentifier:(id)arg3 ;
-(void)openSessionForFileType:(id)arg1 reason:(id)arg2 queue:(id)arg3 callback:(/*^block*/id)arg4 ;
-(void)_notifyActiveStatusChangedFromPreviousValue:(BOOL)arg1 ;
-(id)initWithQueue:(id)arg1 accessory:(id)arg2 logIdentifier:(id)arg3 bulkSendSessionContextFactory:(/*^block*/id)arg4 ;
-(NSMapTable *)activeBulkSendSessions;
-(void)_closeAllSessionsWithError:(id)arg1 ;
-(void)_handleDataMessage:(id)arg1 ;
-(void)_handleCloseMessage:(id)arg1 ;
-(void)_handleOpenWithRequestHeader:(id)arg1 payload:(id)arg2 ;
-(void)_startSessionCandidate:(id)arg1 queue:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)_rejectSessionCandidate:(id)arg1 status:(unsigned short)arg2 ;
-(void)_cancelSessionWithIdentifier:(id)arg1 reason:(unsigned short)arg2 hadReceivedEof:(BOOL)arg3 ;
-(id)_createSessionIdentifier;
-(void)_sendOpenResponseWithRequestHeader:(id)arg1 streamIdentifier:(id)arg2 ;
-(id)_createSessionFromCandidate:(id)arg1 queue:(id)arg2 ;
-(void)_pumpMessage:(id)arg1 session:(id)arg2 ;
-(void)_pumpReceiveFailure:(id)arg1 session:(id)arg2 ;
-(void)_sendOpenResponseWithRequestHeader:(id)arg1 bulkSendStatus:(unsigned short)arg2 ;
-(void)_sendOpenResponseWithRequestHeader:(id)arg1 status:(unsigned short)arg2 ;
-(id)_createSessionCandidateWithRequestHeader:(id)arg1 ;
-(id)_getBulkSendSessionForSessionIdentifier:(id)arg1 ;
-(void)_removeBulkSendSessionForSessionIdentifier:(id)arg1 ;
-(void)_sendAckMessageWithIdentifier:(id)arg1 ;
-(void)_sendCloseMessageWithIdentifier:(id)arg1 reason:(unsigned short)arg2 ;
-(void)_openSessionForFileType:(id)arg1 reason:(id)arg2 queue:(id)arg3 callback:(/*^block*/id)arg4 ;
-(id)bulkSendSessionContextFactory;
-(NSMutableDictionary *)pendingBulkSendSessionContextBySessionIdentifier;
-(void)asyncBulkSendSessionCandidate:(id)arg1 didAcceptOnQueue:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)asyncBulkSendSessionCandidate:(id)arg1 didRejectWithStatus:(unsigned short)arg2 ;
-(void)asyncBulkSendSessionDidCancelSessionWithIdentifier:(id)arg1 reason:(unsigned short)arg2 hadReceivedEof:(BOOL)arg3 ;
@end

