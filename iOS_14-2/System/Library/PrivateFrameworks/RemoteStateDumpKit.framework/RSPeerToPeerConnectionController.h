/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteStateDumpKit.framework/RemoteStateDumpKit
*/

#import <libobjc.A.dylib/MCSessionDelegate.h>

@protocol RSPeerToPeerConnectionControllerDelegate, RSPeerToPeerConnectionControllerDataSource;
@class MCPeerID, MCSession, NSMutableArray, NSString;

@interface RSPeerToPeerConnectionController : NSObject <MCSessionDelegate> {

	id<RSPeerToPeerConnectionControllerDelegate> _delegate;
	MCPeerID* _localPeerID;
	MCSession* _session;
	NSMutableArray* _alreadyConnectedPeerIDs;
	id<RSPeerToPeerConnectionControllerDataSource> _dataSource;

}

@property (nonatomic,retain) MCPeerID * localPeerID;                                                        //@synthesize localPeerID=_localPeerID - In the implementation block
@property (nonatomic,retain) MCSession * session;                                                           //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSMutableArray * alreadyConnectedPeerIDs;                                      //@synthesize alreadyConnectedPeerIDs=_alreadyConnectedPeerIDs - In the implementation block
@property (assign,nonatomic,__weak) id<RSPeerToPeerConnectionControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<RSPeerToPeerConnectionControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)abort;
-(id<RSPeerToPeerConnectionControllerDelegate>)delegate;
-(id)initWithDataSource:(id)arg1 ;
-(id<RSPeerToPeerConnectionControllerDataSource>)dataSource;
-(MCSession *)session;
-(void)setDelegate:(id<RSPeerToPeerConnectionControllerDelegate>)arg1 ;
-(MCPeerID *)localPeerID;
-(void)setDataSource:(id<RSPeerToPeerConnectionControllerDataSource>)arg1 ;
-(void)setSession:(MCSession *)arg1 ;
-(void)setLocalPeerID:(MCPeerID *)arg1 ;
-(void)dealloc;
-(void)session:(id)arg1 peer:(id)arg2 didChangeState:(long long)arg3 ;
-(void)session:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3 ;
-(void)session:(id)arg1 didReceiveStream:(id)arg2 withName:(id)arg3 fromPeer:(id)arg4 ;
-(void)session:(id)arg1 didStartReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 withProgress:(id)arg4 ;
-(void)session:(id)arg1 didFinishReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 atURL:(id)arg4 withError:(id)arg5 ;
-(void)prepareForConnection;
-(void)sendState:(id)arg1 withInfo:(id)arg2 toPeer:(id)arg3 ;
-(void)attemptConnectionWithPeer:(id)arg1 successBlock:(/*^block*/id)arg2 ;
-(void)setAlreadyConnectedPeerIDs:(NSMutableArray *)arg1 ;
-(BOOL)_shouldInteractWithPeer:(id)arg1 ;
-(NSMutableArray *)alreadyConnectedPeerIDs;
-(id)_stateDataWithRequestType:(unsigned long long)arg1 stateContent:(id)arg2 info:(id)arg3 ;
-(void)_sendData:(id)arg1 toPeers:(id)arg2 ;
-(void)requestState:(id)arg1 fromPeer:(id)arg2 ;
-(id)_connectedPeerWithDisplayName:(id)arg1 ;
@end

