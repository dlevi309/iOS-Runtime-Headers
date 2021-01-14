/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDaemon:(PKDaemonClient *)arg1 ;
-(PKDaemonClient *)daemon;
-(void)setDiscoveryMap:(NSMapTable *)arg1 ;
-(id)init;
-(void)discoverPlugInsForAttributes:(id)arg1 flags:(unsigned long long)arg2 found:(/*^block*/id)arg3 ;
-(NSMutableDictionary *)activePlugIns;
-(void)findPlugInByUUID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)accessPlugIns:(id)arg1 synchronously:(BOOL)arg2 flags:(unsigned long long)arg3 extensions:(/*^block*/id)arg4 ;
-(void)cancelPlugInDiscovery:(id)arg1 ;
-(id)continuouslyDiscoverPlugInsForAttributes:(id)arg1 flags:(unsigned long long)arg2 found:(/*^block*/id)arg3 ;
-(void)setActiveOneShots:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)hostQueue;
-(NSDictionary *)hostInfoPlist;
-(NSMapTable *)discoveryMap;
-(NSMutableDictionary *)activeOneShots;
-(void)setActivePlugIns:(NSMutableDictionary *)arg1 ;
-(void)readyPlugIns:(id)arg1 synchronously:(BOOL)arg2 environment:(id)arg3 ready:(/*^block*/id)arg4 ;
-(void)deactivatePlugIn:(id)arg1 ;
-(void)setElection:(long long)arg1 forPlugIn:(id)arg2 ;
-(void)setHostQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)findPlugInByPathURL:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)activatePlugIn:(id)arg1 ;
-(id)activePlugInForIdentifier:(id)arg1 ;
-(id)rewriteDiscoveryAttributes:(id)arg1 flags:(unsigned long long)arg2 ;
-(void)setExtensionState:(id)arg1 forPlugIn:(id)arg2 ;
@end

