/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


#import <MessageUI/MessageUI-Structs.h>
@class MFLANHandoffContext;

@interface MFLANHandoffAgent : NSObject {

	BOOL _serverRunning;
	CFSocketRef _socket;
	CFRunLoopSourceRef _serverRunLoopSource;
	/*^block*/id _connectCallbackBlock;
	MFLANHandoffContext* _handoffContext;

}

@property (nonatomic,readonly) BOOL serverRunning;                                //@synthesize serverRunning=_serverRunning - In the implementation block
@property (nonatomic,readonly) MFLANHandoffContext * handoffContext;              //@synthesize handoffContext=_handoffContext - In the implementation block
-(id)init;
-(void)stopServer;
-(void)_cleanupRunLoopSource;
-(void)_cleanupSocket;
-(id)_getDeviceHostname;
-(void)_socketListenerRunLoop;
-(id)startServerWithCompletion:(/*^block*/id)arg1 ;
-(void)connectToServerWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)serverRunning;
-(MFLANHandoffContext *)handoffContext;
-(void)dealloc;
@end

