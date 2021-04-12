/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/DEDSecureArchiving.h>

@protocol DEDClientProtocol, OS_os_log, OS_dispatch_queue, IDSServiceDelegate;
@class NSObject, IDSService, NSString;

@interface DEDIDSConnection : NSObject <IDSServiceDelegate, DEDSecureArchiving> {

	id<DEDClientProtocol> _remoteSideDelegate;
	NSObject*<OS_os_log> _log;
	IDSService* _service;
	IDSService* _localService;
	NSObject*<OS_dispatch_queue> _run_queue;
	NSObject*<OS_dispatch_queue> _discovery_queue;
	id<IDSServiceDelegate> _incomingDelegate;
	/*^block*/id _deviceStatusCallback;

}

@property (retain) NSObject*<OS_os_log> log;                                  //@synthesize log=_log - In the implementation block
@property (retain) IDSService * service;                                      //@synthesize service=_service - In the implementation block
@property (retain) IDSService * localService;                                 //@synthesize localService=_localService - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> run_queue;                    //@synthesize run_queue=_run_queue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> discovery_queue;              //@synthesize discovery_queue=_discovery_queue - In the implementation block
@property (retain) id<IDSServiceDelegate> incomingDelegate;                   //@synthesize incomingDelegate=_incomingDelegate - In the implementation block
@property (copy) id deviceStatusCallback;                                     //@synthesize deviceStatusCallback=_deviceStatusCallback - In the implementation block
@property (__weak) id<DEDClientProtocol> remoteSideDelegate;                  //@synthesize remoteSideDelegate=_remoteSideDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)archivedClasses;
+(id)packPayload:(id)arg1 ;
+(id)unpackProtobuf:(id)arg1 ;
-(NSObject*<OS_os_log>)log;
-(IDSService *)service;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)setService:(IDSService *)arg1 ;
-(void)startBugSessionWithIdentifier:(id)arg1 configuration:(id)arg2 caller:(id)arg3 target:(id)arg4 ;
-(void)setDeviceCallback:(/*^block*/id)arg1 ;
-(void)discoverDevicesWithCompletion:(/*^block*/id)arg1 ;
-(void)didStartBugSessionWithInfo:(id)arg1 forID:(id)arg2 ;
-(id)initWithConroller:(id)arg1 ;
-(IDSService *)localService;
-(id<IDSServiceDelegate>)incomingDelegate;
-(NSObject*<OS_dispatch_queue>)run_queue;
-(void)setDeviceStatusCallback:(id)arg1 ;
-(BOOL)sendMessage:(int)arg1 withData:(id)arg2 forIDSDeviceIDs:(id)arg3 isResponse:(BOOL)arg4 ;
-(BOOL)sendMessage:(int)arg1 withData:(id)arg2 forIDSDeviceIDs:(id)arg3 localIDSDeviceIDs:(id)arg4 isResponse:(BOOL)arg5 ;
-(NSObject*<OS_dispatch_queue>)discovery_queue;
-(BOOL)sendMessage:(int)arg1 withData:(id)arg2 forDevices:(id)arg3 isResponse:(BOOL)arg4 ;
-(id)deviceStatusCallback;
-(BOOL)sendMessage:(int)arg1 withData:(id)arg2 forIDSDeviceID:(id)arg3 isResponse:(BOOL)arg4 ;
-(void)incomingDeviceReceived:(id)arg1 ;
-(id<DEDClientProtocol>)remoteSideDelegate;
-(void)setRemoteSideDelegate:(id<DEDClientProtocol>)arg1 ;
-(void)setLocalService:(IDSService *)arg1 ;
-(void)setRun_queue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDiscovery_queue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setIncomingDelegate:(id<IDSServiceDelegate>)arg1 ;
@end

