/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
*/


@protocol CBPairingAgentDelegate, CBPairingAgentParentDelegate;
@interface CBPairingAgent : NSObject {

	BOOL _useOOBMode;
	id<CBPairingAgentDelegate> _delegate;
	id<CBPairingAgentParentDelegate> _parentManager;

}

@property (assign,nonatomic,__weak) id<CBPairingAgentParentDelegate> parentManager;              //@synthesize parentManager=_parentManager - In the implementation block
@property (assign,nonatomic,__weak) id<CBPairingAgentDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL useOOBMode;                                                    //@synthesize useOOBMode=_useOOBMode - In the implementation block
-(void)respondToPairingRequest:(id)arg1 type:(long long)arg2 accept:(BOOL)arg3 data:(id)arg4 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)retrieveOOBDataForPeer:(id)arg1 ;
-(void)unpairPeer:(id)arg1 ;
-(id<CBPairingAgentDelegate>)delegate;
-(void)pairPeer:(id)arg1 useMITM:(BOOL)arg2 ;
-(void)setParentManager:(id<CBPairingAgentParentDelegate>)arg1 ;
-(void)setUseOOBMode:(BOOL)arg1 ;
-(void)pairPeer:(id)arg1 options:(id)arg2 ;
-(void)pairPeer:(id)arg1 ;
-(void)updateRegistration;
-(void)setDelegate:(id<CBPairingAgentDelegate>)arg1 ;
-(void)setOOBPairingEnabled:(BOOL)arg1 forPeer:(id)arg2 ;
-(void)handleUnpaired:(id)arg1 ;
-(BOOL)isPeerPaired:(id)arg1 ;
-(void)handlePairingRequested:(id)arg1 ;
-(id)initWithParentManager:(id)arg1 ;
-(BOOL)useOOBMode;
-(BOOL)isPeerCloudPaired:(id)arg1 ;
-(BOOL)isPeerMagicPaired:(id)arg1 ;
-(id<CBPairingAgentParentDelegate>)parentManager;
-(id)retrievePairedPeers;
-(void)handlePairingMessage:(unsigned short)arg1 args:(id)arg2 ;
-(void)handlePairingCompleted:(id)arg1 ;
-(void)dealloc;
@end

