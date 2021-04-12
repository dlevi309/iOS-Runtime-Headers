/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface CXCallDirectoryManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _defaultConnection;
	NSXPCConnection* _maintenanceConnection;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * defaultConnection;                  //@synthesize defaultConnection=_defaultConnection - In the implementation block
@property (nonatomic,retain) NSXPCConnection * maintenanceConnection;              //@synthesize maintenanceConnection=_maintenanceConnection - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSXPCConnection *)defaultConnection;
-(void)firstIdentificationEntriesForEnabledExtensionsWithPhoneNumbers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)firstIdentificationEntryForEnabledExtensionWithPhoneNumber:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getExtensionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setPrioritizedExtensionIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setEnabled:(BOOL)arg1 forExtensionWithIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSXPCConnection *)maintenanceConnection;
-(id)defaultConnectionRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)maintenanceConnectionRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)reloadExtensionWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getEnabledStatusForExtensionWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)synchronizeExtensionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)openSettingsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)compactStoreWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDefaultConnection:(NSXPCConnection *)arg1 ;
-(void)setMaintenanceConnection:(NSXPCConnection *)arg1 ;
@end

