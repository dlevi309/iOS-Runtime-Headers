/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)initWithProfile:(id)arg1 ;
-(id)diagnosticDescription;
-(void)daemonReady:(id)arg1 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(void)disconnectFromServices;
-(void)_connectToServices;
-(void)_disconnectFromServicesStopConnecting:(BOOL)arg1 ;
-(void)_disconnectFromService:(id)arg1 ;
-(void)_connectToService:(id)arg1 ;
-(void)_handleBluetoothUpdates:(long long)arg1 ;
-(void)_subscribeBluetoothStateUpdates;
-(void)reconnectToServices;
-(void)disconnectFromService:(id)arg1 ;
-(void)connectToService:(id)arg1 ;
@end

