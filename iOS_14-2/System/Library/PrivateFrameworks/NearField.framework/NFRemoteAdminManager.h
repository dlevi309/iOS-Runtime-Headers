/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>
#import <libobjc.A.dylib/NFRemoteAdminManagerCallbacks.h>

@class NSXPCConnection, NSMutableSet, NSString;

@interface NFRemoteAdminManager : NSObject <NSXPCConnectionDelegate, NFRemoteAdminManagerCallbacks> {

	NSXPCConnection* _connection;
	BOOL _hasEventListener;
	NSMutableSet* _eventListeners;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedRemoteAdminManager;
-(id)registrationInfo;
-(id)primaryRegionTopic;
-(id)init;
-(void)remoteAdminCleanupProgress:(double)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)registerEventListener:(id)arg1 ;
-(void)_connectIfNeeded;
-(void)unregisterEventListener:(id)arg1 ;
-(BOOL)cancelCardIngestion;
-(void)ingestCard:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)getSELDInfoForBroker:(/*^block*/id)arg1 ;
-(BOOL)queueServerConnectionForApplets:(id)arg1 ;
-(BOOL)setRegistrationInfo:(id)arg1 primaryRegionTopic:(id)arg2 ;
-(BOOL)queueServerConnection:(id)arg1 ;
-(void)connectToServer:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)readerModeCardSessionToken:(id)arg1 ;
-(void)readerModeCardIngestionStatus:(unsigned long long)arg1 ;
-(void)didInvalidateXPCConnection:(id)arg1 ;
-(void)didInterruptXPCConnection:(id)arg1 ;
-(id)nextRequestForServer:(id)arg1 ;
-(id)getAPNPublicToken;
-(id)deleteAllAppletsAndCleanupWithTSM;
@end

