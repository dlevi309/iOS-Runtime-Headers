/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
*/


@protocol OS_dispatch_queue;
@class NSDictionary, NSMutableDictionary, NSMapTable, NSObject, PKDaemonClient;

@interface PKHost : NSObject {

	NSDictionary* _hostInfoPlist;
	NSMutableDictionary* _activePlugIns;
	NSMutableDictionary* _activeOneShots;
	NSMapTable* _discoveryMap;
	NSObject*<OS_dispatch_queue> _hostQueue;
	PKDaemonClient* _daemon;

}

@property (retain) NSMutableDictionary * activePlugIns;                 //@synthesize activePlugIns=_activePlugIns - In the implementation block
@property (retain) NSMutableDictionary * activeOneShots;                //@synthesize activeOneShots=_activeOneShots - In the implementation block
@property (retain) NSMapTable * discoveryMap;                           //@synthesize discoveryMap=_discoveryMap - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> hostQueue;              //@synthesize hostQueue=_hostQueue - In the implementation block
@property (retain) PKDaemonClient * daemon;                             //@synthesize daemon=_daemon - In the implementation block
@property (readonly) NSDictionary * hostInfoPlist;                      //@synthesize hostInfoPlist=_hostInfoPlist - In the implementation block
+(id)defaultHost;
-(id)init;
-(void)discoverPlugInsForAttributes:(id)arg1 flags:(unsigned long long)arg2 found:(/*^block*/id)arg3 ;
-(void)findPlugInByUUID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)findPlugInByPathURL:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)continuouslyDiscoverPlugInsForAttributes:(id)arg1 flags:(unsigned long long)arg2 found:(/*^block*/id)arg3 ;
-(void)cancelPlugInDiscovery:(id)arg1 ;
-(PKDaemonClient *)daemon;
-(void)setDaemon:(PKDaemonClient *)arg1 ;
-(void)setElection:(long long)arg1 forPlugIn:(id)arg2 ;
-(void)setExtensionState:(id)arg1 forPlugIn:(id)arg2 ;
-(void)deactivatePlugIn:(id)arg1 ;
-(id)activatePlugIn:(id)arg1 ;
-(void)accessPlugIns:(id)arg1 synchronously:(BOOL)arg2 flags:(unsigned long long)arg3 extensions:(/*^block*/id)arg4 ;
-(void)readyPlugIns:(id)arg1 synchronously:(BOOL)arg2 environment:(id)arg3 ready:(/*^block*/id)arg4 ;
-(void)setHostQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setActivePlugIns:(NSMutableDictionary *)arg1 ;
-(void)setActiveOneShots:(NSMutableDictionary *)arg1 ;
-(void)setDiscoveryMap:(NSMapTable *)arg1 ;
-(NSObject*<OS_dispatch_queue>)hostQueue;
-(NSMapTable *)discoveryMap;
-(id)rewriteDiscoveryAttributes:(id)arg1 flags:(unsigned long long)arg2 ;
-(NSMutableDictionary *)activePlugIns;
-(NSMutableDictionary *)activeOneShots;
-(id)activePlugInForIdentifier:(id)arg1 ;
-(NSDictionary *)hostInfoPlist;
@end

