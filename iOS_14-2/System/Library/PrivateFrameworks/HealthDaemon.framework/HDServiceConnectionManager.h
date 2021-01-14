/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>
#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>

@protocol OS_dispatch_queue;
@class HDProfile, HDHealthServiceManager, NSMutableDictionary, NSObject, NSString;

@interface HDServiceConnectionManager : NSObject <HDDatabaseProtectedDataObserver, HDDiagnosticObject, HDHealthDaemonReadyObserver> {

	HDProfile* _profile;
	HDHealthServiceManager* _serviceManager;
	BOOL _connecting;
	BOOL _BTLEEnabled;
	NSMutableDictionary* _activeServices;
	NSObject*<OS_dispatch_queue> _deviceQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)daemonReady:(id)arg1 ;
-(id)init;
-(void)disconnectFromService:(id)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)_connectToService:(id)arg1 ;
-(void)_handleBluetoothUpdates:(long long)arg1 ;
-(void)disconnectFromServices;
-(id)diagnosticDescription;
-(void)_subscribeBluetoothStateUpdates;
-(void)connectToService:(id)arg1 ;
-(void)_disconnectFromService:(id)arg1 ;
-(void)reconnectToServices;
-(void)_connectToServices;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(void)_disconnectFromServicesStopConnecting:(BOOL)arg1 ;
-(void)dealloc;
@end

