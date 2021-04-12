/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SFXPCInterface.h>

@protocol OS_dispatch_queue;
@class SFSession, NSXPCConnection, NSObject, SFDevice, SDRemoteInteractionAgent;

@interface SFRemoteInteractionSession : NSObject <NSSecureCoding, SFXPCInterface> {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	SFSession* _remoteSession;
	NSXPCConnection* _xpcCnx;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	SFDevice* _peerDevice;
	/*^block*/id _remoteTextEventHandler;
	/*^block*/id _textSessionDidBegin;
	/*^block*/id _textSessionDidEnd;
	/*^block*/id _textSessionDidChange;
	SDRemoteInteractionAgent* _agent;

}

@property (nonatomic,retain) SDRemoteInteractionAgent * agent;                        //@synthesize agent=_agent - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,retain) SFDevice * peerDevice;                                   //@synthesize peerDevice=_peerDevice - In the implementation block
@property (nonatomic,copy) id remoteTextEventHandler;                                 //@synthesize remoteTextEventHandler=_remoteTextEventHandler - In the implementation block
@property (nonatomic,copy) id textSessionDidBegin;                                    //@synthesize textSessionDidBegin=_textSessionDidBegin - In the implementation block
@property (nonatomic,copy) id textSessionDidEnd;                                      //@synthesize textSessionDidEnd=_textSessionDidEnd - In the implementation block
@property (nonatomic,copy) id textSessionDidChange;                                   //@synthesize textSessionDidChange=_textSessionDidChange - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(void)invalidate;
-(void)_invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_invalidated;
-(void)_interrupted;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_ensureXPCStarted;
-(SFDevice *)peerDevice;
-(void)setPeerDevice:(SFDevice *)arg1 ;
-(void)remoteInteractionSessionRemoteTextEvent:(id)arg1 ;
-(void)remoteInteractionSessionTextSessionDidBegin:(id)arg1 ;
-(void)remoteInteractionSessionTextSessionDidEnd:(id)arg1 ;
-(void)remoteInteractionSessionTextSessionDidChange:(id)arg1 ;
-(SDRemoteInteractionAgent *)agent;
-(void)setAgent:(SDRemoteInteractionAgent *)arg1 ;
-(void)_sessionHandleEvent:(id)arg1 ;
-(void)_sessionStart;
-(void)_sessionSendPayload:(id)arg1 ;
-(void)sendPayload:(id)arg1 ;
-(id)remoteTextEventHandler;
-(void)setRemoteTextEventHandler:(id)arg1 ;
-(id)textSessionDidBegin;
-(void)setTextSessionDidBegin:(id)arg1 ;
-(id)textSessionDidEnd;
-(void)setTextSessionDidEnd:(id)arg1 ;
-(id)textSessionDidChange;
-(void)setTextSessionDidChange:(id)arg1 ;
@end

