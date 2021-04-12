/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/MobileAccessoryUpdater
*/


@protocol MobileAccessoryUpdaterDelegate, FudConnection, OS_dispatch_queue, OS_dispatch_queue_attr;
@class NSString, NSObject;

@interface MobileAccessoryUpdater : NSObject {

	id<MobileAccessoryUpdaterDelegate> _delegate;
	id<FudConnection> _connection;
	NSString* _bundleIdentifier;
	NSString* _clientIdentifier;
	char* _cClientIdentifier;
	NSObject*<OS_dispatch_queue> _sessionQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue_attr> _attr;
	NSString* _activeFilter;
	BOOL _isInternalClient;
	BOOL _didUnregister;

}
-(void)unregister;
-(void)createConnection;
-(void)doneWithOptions:(id)arg1 ;
-(BOOL)doesOperationCodeRequireFilter:(int)arg1 ;
-(id)queryNextStep:(id*)arg1 ;
-(BOOL)loadPluginWithAccessoryInfo:(id)arg1 options:(id)arg2 ;
-(id)bundleIdentifier;
-(const char*)getActiveDeviceClassCString;
-(id)initWithDelegate:(id)arg1 isInternalClient:(BOOL)arg2 options:(id)arg3 error:(id*)arg4 ;
-(BOOL)setActiveDeviceClass:(id)arg1 ;
-(id)initWithPluginIdentifier:(id)arg1 isGroupIdentifier:(BOOL)arg2 delegate:(id)arg3 isInternalClient:(BOOL)arg4 options:(id)arg5 error:(id*)arg6 ;
-(id)initWithGroupIdentifer:(id)arg1 delegate:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)activeFilter;
-(BOOL)setLastRemoteFindDate:(id)arg1 ;
-(void)handleInboundEvent:(id)arg1 ;
-(id)initWithPluginIdentifier:(id)arg1 delegate:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(void)performNextStepWithOptions:(id)arg1 ;
-(BOOL)sendMessageForCommand:(int)arg1 withOptions:(id)arg2 requiresFilter:(BOOL)arg3 replyHandler:(/*^block*/id)arg4 ;
-(void)performStep:(id)arg1 withOptions:(id)arg2 ;
-(id)getPluginsList;
-(id)clientIdentifier;
-(BOOL)sendMessageForCommand:(int)arg1 withOptions:(id)arg2 requiresFilter:(BOOL)arg3 ;
-(void)dealloc;
-(id)getActiveDeviceClass;
-(int)getOperationCodeFromName:(id)arg1 ;
-(BOOL)registerForIdentifier:(id)arg1 isGroupIdentifier:(BOOL)arg2 ;
@end

