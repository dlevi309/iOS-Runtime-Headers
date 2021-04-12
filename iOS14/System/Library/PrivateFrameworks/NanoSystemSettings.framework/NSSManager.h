/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)displayAlertFailedRemoteAirplaneMode:(BOOL)arg1 ;
+(void)displayAirplaneModeMirroringUserEducationAlert:(BOOL)arg1 ;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(id)init;
-(id)protocol;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)rebootDevice;
-(id)connection;
-(NSObject*<OS_dispatch_queue>)externalQueue;
-(void)setExternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)invalidate;
-(void)setDeviceName:(id)arg1 ;
-(void)unsafe_invalidate;
-(void)dealloc;
-(void)enableAirplaneMode:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getiCloudInfo:(/*^block*/id)arg1 ;
-(void)installProfile:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeProfileWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getProfileWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getProfilesInfo:(/*^block*/id)arg1 ;
-(void)getAccountsInfo:(/*^block*/id)arg1 ;
-(void)getAccountsInfoForAccountType:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getUsage:(/*^block*/id)arg1 ;
-(void)getDiagnosticLogFileFromGizmo:(id)arg1 withResults:(/*^block*/id)arg2 ;
-(void)getDiagnosticLogsInfo:(/*^block*/id)arg1 ;
-(void)retrieveAirplaneModeSettingsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setAirplaneModeSettings:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)retrieveDiagnosticLogTransferProgress:(id)arg1 withProgress:(/*^block*/id)arg2 ;
-(void)cancelDiagnosticLogTranfer:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)deleteDiagnosticLogFile:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)getAboutInfo:(/*^block*/id)arg1 ;
-(void)obliterateGizmoPreservingeSIM:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getLegalDocuments:(/*^block*/id)arg1 ;
-(void)getLocalesInfo:(/*^block*/id)arg1 ;
-(void)recordSoftwareUpdateSpaceFailure:(id)arg1 osBeingUpdatedTo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)purgeUsageBundle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelFileTransfersInProgress;
-(BOOL)fileTransferInProgress:(id)arg1 ;
-(void)obliterateGizmo:(/*^block*/id)arg1 ;
@end

