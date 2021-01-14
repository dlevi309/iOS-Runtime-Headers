/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/

#import <IDS/IDSXPCActivityMonitorClient.h>

@class NSMutableDictionary, IDSXPCDaemonController, NSString;

@interface _IDSActivityMonitorXPCConnector : NSObject <IDSXPCActivityMonitorClient> {

	NSMutableDictionary* _listenersByActivity;
	IDSXPCDaemonController* _daemonController;
	IDSXPCDaemonController* _syncDaemonController;
	/*^block*/id _syncDaemonControllerBuilder;
	/*^block*/id _daemonControllerBuilder;

}

@property (nonatomic,retain) NSMutableDictionary * listenersByActivity;                  //@synthesize listenersByActivity=_listenersByActivity - In the implementation block
@property (nonatomic,retain) IDSXPCDaemonController * daemonController;                  //@synthesize daemonController=_daemonController - In the implementation block
@property (nonatomic,retain) IDSXPCDaemonController * syncDaemonController;              //@synthesize syncDaemonController=_syncDaemonController - In the implementation block
@property (nonatomic,copy) id syncDaemonControllerBuilder;                               //@synthesize syncDaemonControllerBuilder=_syncDaemonControllerBuilder - In the implementation block
@property (nonatomic,copy) id daemonControllerBuilder;                                   //@synthesize daemonControllerBuilder=_daemonControllerBuilder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)weakSharedInstance;
-(void)setSyncDaemonController:(IDSXPCDaemonController *)arg1 ;
-(void)setDaemonController:(IDSXPCDaemonController *)arg1 ;
-(id)syncDaemonControllerBuilder;
-(void)_handleInterruption;
-(IDSXPCDaemonController *)syncDaemonController;
-(void)handleIncomingUpdate:(id)arg1 onActivity:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)daemonControllerBuilder;
-(void)setListenersByActivity:(NSMutableDictionary *)arg1 ;
-(void)removeListener:(id)arg1 forTopic:(id)arg2 ;
-(id)initWithSyncDaemonControllerBuilder:(/*^block*/id)arg1 daemonControllerBuilder:(/*^block*/id)arg2 ;
-(void)performSyncAction:(/*^block*/id)arg1 ;
-(void)addListener:(id)arg1 forTopic:(id)arg2 ;
-(IDSXPCDaemonController *)daemonController;
-(void)setSyncDaemonControllerBuilder:(id)arg1 ;
-(void)setDaemonControllerBuilder:(id)arg1 ;
-(void)performAction:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)listenersByActivity;
-(void)dealloc;
-(void)_updateActivity:(id)arg1 isSupported:(BOOL)arg2 ;
@end

