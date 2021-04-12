/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/ClientConnectionDelegate.h>
#import <libobjc.A.dylib/DatabaseChangeHandling.h>
#import <CalendarDaemon/CalActivatable.h>

@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, NSXPCListener, NSMutableSet, NSLock, NSArray, NSString;

@interface CADServer : NSObject <NSXPCListenerDelegate, ClientConnectionDelegate, DatabaseChangeHandling, CalActivatable> {

	NSObject*<OS_dispatch_queue> _notificationQueue;
	int _backgroundTaskCount;
	NSXPCListener* _NSXPCListener;
	NSObject*<OS_xpc_object> _xpcConnection;
	NSObject*<OS_dispatch_queue> _xpcQueue;
	NSMutableSet* _clientConnections;
	NSLock* _connectionLock;
	NSArray* _signalSensors;
	BOOL _initializationFinished;
	BOOL _active;
	NSArray* _modules;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _alarmQueue;

}

@property (nonatomic,retain) NSArray * modules;                                      //@synthesize modules=_modules - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                            //@synthesize active=_active - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                 //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> alarmQueue;              //@synthesize alarmQueue=_alarmQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_dumpState;
-(void)_registerForNotifications;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setActive:(BOOL)arg1 ;
-(id)init;
-(void)_registerActivityWithIdentifier:(const char*)arg1 block:(/*^block*/id)arg2 ;
-(void)_updateOccurrenceCacheTimeZone;
-(BOOL)_trimAndExtendOccurrenceCache;
-(void)_registerForChangeTableCleanup;
-(BOOL)isActive;
-(NSArray *)modules;
-(void)_handleDatabaseChanged;
-(void)_registerForAttachmentCleanup;
-(void)_handleXPCConnection:(id)arg1 ;
-(void)deactivate;
-(void)activate;
-(void)_deactivateAndExitWithStatus:(int)arg1 ;
-(void)setModules:(NSArray *)arg1 ;
-(void)cleanupDatabase:(CalDatabase*)arg1 ;
-(void)_cleanupChangeTablesInDatabase:(CalDatabase*)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)_protectedDataDidBecomeAvailable;
-(void)_registerForDatabaseCleanup;
-(NSObject*<OS_dispatch_queue>)alarmQueue;
-(void)_finishInitializationWithDataAvailable;
-(id)initWithModules:(id)arg1 ;
-(void)_exitWithStatus:(int)arg1 ;
-(void)_setUpSignalHandlers;
-(void)_tearDownSignalHandlers;
-(void)clientConnectionDied:(id)arg1 ;
-(void)_registerForAnalyticsCollection;
-(void)_enableICloudBackups;
-(void)_registerForAlarmEvents;
-(void)_registerMaintenanceActivities;
-(void)dealloc;
@end

