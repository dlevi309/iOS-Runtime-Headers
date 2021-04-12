/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoSystemSettings.framework/NanoSystemSettings
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface NSSManager : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _externalQueue;
	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> externalQueue;              //@synthesize externalQueue=_externalQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                         //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(void)initialize;
+(void)displayAlertWithTitle:(id)arg1 body:(id)arg2 icon:(id)arg3 ;
+(void)displayAlertFailedRemoteAirplaneMode;
+(void)displayAirplaneModeMirroringUserEducationAlert;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id)protocol;
-(id)initWithQueue:(id)arg1 ;
-(id)connection;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)setDeviceName:(id)arg1 ;
-(void)enableAirplaneMode:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)rebootDevice;
-(void)unsafe_invalidate;
-(void)installProfile:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeProfileWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getProfileWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getProfilesInfo:(/*^block*/id)arg1 ;
-(void)getiCloudInfo:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)externalQueue;
-(void)setExternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)getAccountsInfoForAccountType:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getUsage:(/*^block*/id)arg1 ;
-(void)getDiagnosticLogFileFromGizmo:(id)arg1 withResults:(/*^block*/id)arg2 ;
-(void)getDiagnosticLogsInfo:(/*^block*/id)arg1 ;
-(void)deleteDiagnosticLogFile:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)getAboutInfo:(/*^block*/id)arg1 ;
-(void)obliterateGizmoPreservingeSIM:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getLegalDocuments:(/*^block*/id)arg1 ;
-(void)getLocalesInfo:(/*^block*/id)arg1 ;
-(void)purgeUsageBundle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelFileTransfersInProgress;
-(BOOL)fileTransferInProgress:(id)arg1 ;
-(void)obliterateGizmo:(/*^block*/id)arg1 ;
-(void)getAccountsInfo:(/*^block*/id)arg1 ;
@end

