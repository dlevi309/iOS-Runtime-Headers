/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Transports/USBHost.transport/USBHost
*/


@class NSString;

@interface iAP2EASession : NSObject {

	NSString* _endpointUUID;
	NSString* _eaSessionUUID;
	int _listenSock;
	int _sock;
	BOOL _openPipeToAppAfterAccept;
	BOOL _openPipeFromAppAfterAccept;
	BOOL _isWirelessSession;

}
-(id)init;
-(void)dealloc;
-(id)description;
-(void)shuttingDownSession;
-(BOOL)openPipeToApp;
-(BOOL)openPipeFromApp;
-(void)_openPipeToApp;
-(void)_openPipeFromApp;
-(id)initWithProtocol:(id)arg1 endpointUUID:(id)arg2 eaSessionUUID:(id)arg3 ;
-(BOOL)closeDataPipes;
-(int)_createListenSocket;
@end

