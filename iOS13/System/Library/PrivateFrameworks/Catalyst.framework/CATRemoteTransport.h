/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/

#import <Catalyst/Catalyst-Structs.h>
#import <Catalyst/CATTransport.h>
#import <libobjc.A.dylib/CATRemoteConnectionDelegate.h>

@protocol CATRemoteTransportDelegate;
@class CATRemoteConnection, NSMutableDictionary, NSString;

@interface CATRemoteTransport : CATTransport <CATRemoteConnectionDelegate> {

	CATRemoteConnection* mConnection;
	NSMutableDictionary* mOperationByUUID;
	BOOL mConnectionHasOpened;
	id<CATRemoteTransportDelegate> _remoteTransportDelegate;

}

@property (assign,nonatomic,__weak) id<CATRemoteTransportDelegate> remoteTransportDelegate;              //@synthesize remoteTransportDelegate=_remoteTransportDelegate - In the implementation block
@property (nonatomic,readonly) SecTrustRef peerTrust; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(void)createRemoteTransportPairWithTransport:(id*)arg1 andTransport:(id*)arg2 ;
-(id)init;
-(id)name;
-(void)setName:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)suspendConnection;
-(void)resumeConnection;
-(SecTrustRef)peerTrust;
-(void)connectionDidClose:(id)arg1 ;
-(void)invalidateConnection;
-(id)initWithRemoteConnection:(id)arg1 ;
-(void)connection:(id)arg1 encounteredTrustDecisionWhileTryingToSecure:(id)arg2 ;
-(void)connectionWillSecure:(id)arg1 ;
-(void)connectionDidSecure:(id)arg1 ;
-(void)connection:(id)arg1 didSendData:(id)arg2 userInfo:(id)arg3 ;
-(void)connection:(id)arg1 didFailToSendData:(id)arg2 userInfo:(id)arg3 error:(id)arg4 ;
-(void)connection:(id)arg1 didInterruptWithError:(id)arg2 ;
-(id<CATRemoteTransportDelegate>)remoteTransportDelegate;
-(id)operationToSendMessage:(id)arg1 ;
-(void)remoteTransportSendMessageOperation:(id)arg1 sendData:(id)arg2 ;
-(void)setRemoteTransportDelegate:(id<CATRemoteTransportDelegate>)arg1 ;
@end

