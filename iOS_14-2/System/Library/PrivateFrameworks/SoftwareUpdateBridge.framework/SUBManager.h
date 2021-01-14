/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateBridge.framework/SoftwareUpdateBridge
*/


@protocol SUBManagerDelegate, OS_xpc_object, OS_dispatch_queue;
@class NSObject;

@interface SUBManager : NSObject {

	AB _hasQueriedStateOnceFlag;
	id<SUBManagerDelegate> _delegate;
	NSObject*<OS_xpc_object> _serverConnection;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> serverConnection;              //@synthesize serverConnection=_serverConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<SUBManagerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
+(void)initialize;
-(void)performMigration;
-(NSObject*<OS_xpc_object>)serverConnection;
-(id)_serverConnection;
-(id<SUBManagerDelegate>)delegate;
-(void)setDelegate:(id<SUBManagerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)startDownload:(id)arg1 ;
-(void)setServerConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(void)scanForUpdates;
-(void)_forwardDownloadProgress:(id)arg1 ;
-(void)_forwardScanResult:(id)arg1 ;
-(void)_forwardInstallResult:(id)arg1 ;
-(void)_forwardInstallationCanProceed:(id)arg1 ;
-(void)_forwardInstallationWillProceed:(id)arg1 ;
-(void)_forwardUserDidAcceptTermsAndConditionsChanged:(id)arg1 ;
-(void)_forwardUserInstallRequestTypeChanged:(id)arg1 ;
-(void)_forwardInstallationAwaitingUserInteraction:(id)arg1 ;
-(void)userDidAcceptTermsAndConditionsForUpdate:(id)arg1 ;
-(void)supportsInstallTonightWithCompletion:(/*^block*/id)arg1 ;
-(void)managerState:(/*^block*/id)arg1 ;
-(void)startDownload:(id)arg1 passcode:(id)arg2 ;
-(void)installUpdate:(id)arg1 ;
-(void)installUpdate:(id)arg1 passcode:(id)arg2 ;
-(void)getCloudDescriptors:(/*^block*/id)arg1 ;
-(void)removeCloudDescriptor:(id)arg1 ;
-(void)userDidAcceptTermsAndConditionsForUpdate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)purgeUpdate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setUserInstallRequestTypeForUpdate:(id)arg1 userInstallRequestType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendTermsRequest:(/*^block*/id)arg1 ;
@end

