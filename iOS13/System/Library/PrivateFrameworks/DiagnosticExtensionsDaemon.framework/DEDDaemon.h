/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
*/

#import <libobjc.A.dylib/DEDWorkerProtocol.h>

@protocol OS_os_log, OS_dispatch_queue;
@class NSObject, DEDConfiguration, NSOperationQueue, DEDDiagnosticCollector, DEDController, NSString;

@interface DEDDaemon : NSObject <DEDWorkerProtocol> {

	BOOL _embeddedInApp;
	NSObject*<OS_os_log> _log;
	DEDConfiguration* _config;
	NSOperationQueue* _backgroundOpQueue;
	NSOperationQueue* _userInitiatedOpQueue;
	NSObject*<OS_dispatch_queue> _diskAccessQueue;
	DEDDiagnosticCollector* __diagnosticCollector;
	DEDController* _controller;

}

@property (retain) NSObject*<OS_os_log> log;                                   //@synthesize log=_log - In the implementation block
@property (retain) DEDConfiguration * config;                                  //@synthesize config=_config - In the implementation block
@property (retain) NSOperationQueue * backgroundOpQueue;                       //@synthesize backgroundOpQueue=_backgroundOpQueue - In the implementation block
@property (retain) NSOperationQueue * userInitiatedOpQueue;                    //@synthesize userInitiatedOpQueue=_userInitiatedOpQueue - In the implementation block
@property (assign) BOOL embeddedInApp;                                         //@synthesize embeddedInApp=_embeddedInApp - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> diskAccessQueue;               //@synthesize diskAccessQueue=_diskAccessQueue - In the implementation block
@property (retain) DEDDiagnosticCollector * _diagnosticCollector;              //@synthesize _diagnosticCollector=__diagnosticCollector - In the implementation block
@property (retain) DEDController * controller;                                 //@synthesize controller=_controller - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)start;
-(DEDConfiguration *)config;
-(void)setConfig:(DEDConfiguration *)arg1 ;
-(long long)transportType;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)setController:(DEDController *)arg1 ;
-(DEDController *)controller;
-(id)_controller;
-(void)cancelSession:(id)arg1 ;
-(void)pingSession:(id)arg1 ;
-(void)listAvailableExtensionsForSession:(id)arg1 ;
-(void)getSessionStatusWithSession:(id)arg1 ;
-(void)syncSessionStatusWithSession:(id)arg1 ;
-(void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 session:(id)arg3 ;
-(void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 deferRunUntil:(id)arg3 session:(id)arg4 ;
-(void)scheduleNotificationForSession:(id)arg1 ;
-(void)cancelNotificationForSession:(id)arg1 ;
-(void)adoptFiles:(id)arg1 forSession:(id)arg2 ;
-(void)commitSession:(id)arg1 ;
-(id)attachmentHandler;
-(void)terminateExtension:(id)arg1 info:(id)arg2 session:(id)arg3 ;
-(void)setEmbeddedInApp:(BOOL)arg1 ;
-(void)configureForEmbedded:(BOOL)arg1 ;
-(BOOL)embeddedInApp;
-(void)setBackgroundOpQueue:(NSOperationQueue *)arg1 ;
-(void)setUserInitiatedOpQueue:(NSOperationQueue *)arg1 ;
-(void)setDiskAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)diagnosticCollector;
-(NSObject*<OS_dispatch_queue>)diskAccessQueue;
-(NSOperationQueue *)backgroundOpQueue;
-(BOOL)observesOperations;
-(void)_logOperations;
-(NSOperationQueue *)userInitiatedOpQueue;
-(void)_getSessionStatusWithSession:(id)arg1 ;
-(void)_syncSessionStatusWithSession:(id)arg1 withIdentifiers:(BOOL)arg2 ;
-(DEDDiagnosticCollector *)_diagnosticCollector;
-(void)set_diagnosticCollector:(DEDDiagnosticCollector *)arg1 ;
-(void)_streamOperationStatus;
-(id)_blockOnFakeSysidagnoseWithIdentifer:(id)arg1 withBugSession:(id)arg2 ;
@end

