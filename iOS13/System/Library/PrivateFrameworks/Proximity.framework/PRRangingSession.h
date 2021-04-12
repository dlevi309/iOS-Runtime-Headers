/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
*/

#import <libobjc.A.dylib/PRAidedRangingClientProtocol.h>

@protocol OS_os_log, PRRangingSessionDelegate, OS_dispatch_queue;
@class NSObject, NSXPCConnection, PRPeer, PRRangingDevice, NSMutableSet, NSString;

@interface PRRangingSession : NSObject <PRAidedRangingClientProtocol> {

	NSObject*<OS_os_log> _logger;
	NSXPCConnection* _connection;
	PRPeer* _localPeer;
	PRRangingDevice* _rangingDevice;
	BOOL _isReady;
	BOOL _valid;
	id<PRRangingSessionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSMutableSet* _sessionParticipants;
	PRPeer* _rangedPeer;

}

@property (retain) NSMutableSet * sessionParticipants;                      //@synthesize sessionParticipants=_sessionParticipants - In the implementation block
@property (assign) BOOL isReady;                                            //@synthesize isReady=_isReady - In the implementation block
@property (getter=isValid) BOOL valid;                                      //@synthesize valid=_valid - In the implementation block
@property (retain) PRPeer * rangedPeer;                                     //@synthesize rangedPeer=_rangedPeer - In the implementation block
@property (__weak) id<PRRangingSessionDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> delegateQueue;              //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (copy,readonly) PRPeer * localPeer;                               //@synthesize localPeer=_localPeer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)computeLocalDeviceIndex:(id)arg1 sessionParticipants:(id)arg2 ;
-(id)init;
-(void)invalidate;
-(BOOL)isValid;
-(id<PRRangingSessionDelegate>)delegate;
-(void)setDelegate:(id<PRRangingSessionDelegate>)arg1 ;
-(BOOL)isReady;
-(void)handleInvalidation;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setIsReady:(BOOL)arg1 ;
-(id)remoteObject;
-(void)setValid:(BOOL)arg1 ;
-(void)connectToDaemon;
-(void)didFailWithError:(id)arg1 ;
-(void)handleInterruption;
-(void)setRangedPeer:(PRPeer *)arg1 ;
-(id)rangingConfigurationWithDeviceIndex:(unsigned long long)arg1 ;
-(PRPeer *)localPeer;
-(void)requestInitialCollaborationDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)invokeDelegateBlock:(/*^block*/id)arg1 ;
-(PRPeer *)rangedPeer;
-(void)rangingServiceDidUpdateState:(unsigned long long)arg1 ;
-(void)didReceiveNewSolutions:(id)arg1 ;
-(void)rangingRequestDidUpdateStatus:(unsigned long long)arg1 ;
-(void)sendDataToPeers:(id)arg1 ;
-(void)startRangingWithPeer:(id)arg1 ;
-(void)stopRangingWithPeer:(id)arg1 ;
-(void)pushCollaborationData:(id)arg1 ;
-(NSMutableSet *)sessionParticipants;
-(void)setSessionParticipants:(NSMutableSet *)arg1 ;
@end

