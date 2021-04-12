/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/ClientConnectionDelegate.h>
#import <libobjc.A.dylib/DatabaseChangeHandling.h>
#import <CalendarDaemon/CalActivatable.h>

@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, NSXPCListener, NSMutableSet, NSLock, NSArray, CDBDataProtectionObserver, NSString;

@interface CADServer : NSObject <NSXPCListenerDelegate, ClientConnectionDelegate, DatabaseChangeHandling, CalActivatable> {

	NSObject*<OS_dispatch_queue> _notificationQueue;
	int _backgroundTaskCount;
	NSXPCListener* _NSXPCListener;
	NSObject*<OS_xpc_object> _xpcConnection;
	NSObject*<OS_dispatch_queue> _xpcQueue;
	NSMutableSet* _clientConnections;
	NSLock* _connectionLock;
	NSArray* _signalSensors;
	BOOL _active;
	CDBDataProtectionObserver* _dataProtectionObserver;
	NSArray* _modules;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _alarmQueue;

}

@property (nonatomic,retain) CDBDataProtectionObserver * dataProtectionObserver;              //@synthesize dataProtectionObserver=_dataProtectionObserver - In the implementation block
@property (nonatomic,retain) NSArray * modules;                                               //@synthesize modules=_modules - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                     //@synthesize active=_active - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> alarmQueue;                       //@synthesize alarmQueue=_alarmQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_stringForBackgroundTaskAgentJobStatus:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isActive;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setActive:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activate;
-(void)deactivate;
-(void)_registerForNotifications;
-(NSArray *)modules;
-(void)setModules:(NSArray *)arg1 ;
-(void)setDataProtectionObserver:(CDBDataProtectionObserver *)arg1 ;
-(CDBDataProtectionObserver *)dataProtectionObserver;
-(void)clientConnectionDied:(id)arg1 ;
-(id)initWithModules:(id)arg1 ;
-(void)_enableICloudBackups;
-(void)_setUpSignalHandlers;
-(void)_protectedDataDidBecomeAvailable;
-(void)_finishInitializationWithDataAvailable;
-(void)_handleXPCConnection:(id)arg1 ;
-(void)_registerMaintenanceActivities;
-(void)_tearDownSignalHandlers;
-(void)_registerForAlarmEvents;
-(void)_registerForBackgroundTaskAgentJobs;
-(void)_startBirthdayManager;
-(void)_deactivateAndExitWithStatus:(int)arg1 ;
-(void)_dumpState;
-(void)_updateOccurrenceCacheTimeZone;
-(BOOL)_trimAndExtendOccurrenceCache;
-(NSObject*<OS_dispatch_queue>)alarmQueue;
-(void)_registerForDatabaseCleanup;
-(void)_registerForAnalyticsCollection;
-(void)_registerForAttachmentCleanup;
-(void)_registerForChangeTableCleanup;
-(void)cleanupDatabase:(CalDatabase*)arg1 ;
-(void)_registerActivityWithIdentifier:(const char*)arg1 block:(/*^block*/id)arg2 ;
-(void)_cleanupChangeTablesInDatabase:(CalDatabase*)arg1 ;
-(void)_exitWithStatus:(int)arg1 ;
-(void)_handleDatabaseChanged;
@end

