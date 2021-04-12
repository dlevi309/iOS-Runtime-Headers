/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSMutableArray;

@interface SFCompanionXPCManager : NSObject {

	BOOL _invalid;
	BOOL _interrupted;
	int _listenerResumedToken;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _xpcSetupQueue;
	NSMutableArray* _observers;

}

@property (retain) NSObject*<OS_dispatch_queue> xpcSetupQueue;              //@synthesize xpcSetupQueue=_xpcSetupQueue - In the implementation block
@property (assign) int listenerResumedToken;                                //@synthesize listenerResumedToken=_listenerResumedToken - In the implementation block
@property (assign) BOOL interrupted;                                        //@synthesize interrupted=_interrupted - In the implementation block
@property (retain) NSXPCConnection * connection;                            //@synthesize connection=_connection - In the implementation block
@property (retain) NSMutableArray * observers;                              //@synthesize observers=_observers - In the implementation block
@property (getter=isInvalid) BOOL invalid;                                  //@synthesize invalid=_invalid - In the implementation block
+(void)initialize;
+(id)unlockInterface;
+(id)xpcManagerInterface;
+(id)serviceManagerClientInterface;
+(id)serviceManagerInterface;
+(id)hotspotClientInterface;
+(id)hotspotInterface;
+(id)sharedManager;
-(void)unregisterObserver:(id)arg1 ;
-(int)listenerResumedToken;
-(void)registerObserver:(id)arg1 ;
-(BOOL)isInvalid;
-(void)setupConnection;
-(void)setXpcSetupQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableArray *)observers;
-(id)init;
-(void)streamsForMessage:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)appleAccountSignedIn;
-(void)notifyOfInvalidation;
-(void)setInterrupted:(BOOL)arg1 ;
-(void)unlockManagerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setListenerResumedToken:(int)arg1 ;
-(BOOL)interrupted;
-(void)setInvalid:(BOOL)arg1 ;
-(void)remoteHotspotSessionForClient:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(NSXPCConnection *)connection;
-(void)setObservers:(NSMutableArray *)arg1 ;
-(void)notifyOfInterruption;
-(void)serviceManagerProxyForIdentifier:(id)arg1 client:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSObject*<OS_dispatch_queue>)xpcSetupQueue;
-(void)notifyOfResume;
-(void)appleAccountSignedOut;
-(void)dealloc;
@end

