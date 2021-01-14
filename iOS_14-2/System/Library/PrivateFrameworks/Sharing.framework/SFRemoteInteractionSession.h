/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_invalidate;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(SDRemoteInteractionAgent *)agent;
-(id)init;
-(void)setAgent:(SDRemoteInteractionAgent *)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
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
-(SFDevice *)peerDevice;
-(void)encodeWithCoder:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_ensureXPCStarted;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)description;
-(void)setPeerDevice:(SFDevice *)arg1 ;
-(void)_interrupted;
-(void)_invalidated;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidate;
-(void)remoteInteractionSessionRemoteTextEvent:(id)arg1 ;
-(void)remoteInteractionSessionTextSessionDidBegin:(id)arg1 ;
-(void)remoteInteractionSessionTextSessionDidEnd:(id)arg1 ;
-(void)remoteInteractionSessionTextSessionDidChange:(id)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(id)interruptionHandler;
@end

