/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/


@protocol OS_dispatch_queue;
@class NSDictionary, NSObject, FPAppRegistry, FPDServer;

@interface FPDAppMonitor : NSObject {

	NSDictionary* _defaultProviderByAppBundleID;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	int _didChangeProvidersToken;
	int _didChangeDefaultProviderToken;
	BOOL _monitoring;
	FPAppRegistry* _appRegistry;
	FPDServer* _server;

}

@property (nonatomic,__weak,readonly) FPDServer * server;                     //@synthesize server=_server - In the implementation block
@property (getter=isMonitoring) BOOL monitoring;                              //@synthesize monitoring=_monitoring - In the implementation block
@property (nonatomic,copy,readonly) FPAppRegistry * appRegistry;              //@synthesize appRegistry=_appRegistry - In the implementation block
-(FPDServer *)server;
-(void)startMonitoring;
-(void)stopMonitoring;
-(id)initWithServer:(id)arg1 ;
-(BOOL)isMonitoring;
-(void)setMonitoring:(BOOL)arg1 ;
-(void)dumpStateTo:(id)arg1 ;
-(int)_registerForNotification:(const char*)arg1 handler:(/*^block*/id)arg2 ;
-(FPAppRegistry *)appRegistry;
-(id)_updateDefaultProviderDomainID;
-(void)_updateDefaultProviderByAppBundleID;
-(void)_didRegisterApps:(id)arg1 ;
-(void)_didUnregisterApps:(id)arg1 ;
-(void)_didChangeLocale:(id)arg1 ;
-(void)_didChangeListOfProviders;
-(void)_didChangeDefaultSaveLocationInUserDefaults;
-(void)_populateListOfMonitoredApps;
-(id)_appMetadataIfMonitoringIsNeeded:(id)arg1 ;
@end

