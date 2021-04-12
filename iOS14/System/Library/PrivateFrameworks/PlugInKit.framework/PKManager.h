/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
*/


@class PKDaemonClient;

@interface PKManager : NSObject {

	PKDaemonClient* _client;

}

@property (retain) PKDaemonClient * client;              //@synthesize client=_client - In the implementation block
+(id)managerForUser:(unsigned)arg1 ;
+(id)defaultManager;
-(void)terminatePlugInsInApplication:(id)arg1 options:(long long)arg2 result:(/*^block*/id)arg3 ;
-(PKDaemonClient *)client;
-(void)setClient:(PKDaemonClient *)arg1 ;
-(BOOL)terminatePlugInAtURL:(id)arg1 withError:(id*)arg2 ;
-(id)informationForPlugInWithPid:(int)arg1 ;
-(void)releaseHold:(id)arg1 ;
-(void)releaseHold:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)initForUser:(unsigned)arg1 ;
-(void)holdPlugInsInApplication:(id)arg1 result:(/*^block*/id)arg2 ;
-(id)holdPlugInsInApplication:(id)arg1 withError:(id*)arg2 ;
-(void)unregisterPlugInAtURL:(id)arg1 result:(/*^block*/id)arg2 ;
-(id)containingAppForExtensionProperties:(id)arg1 ;
-(id)containingAppForPlugInWithPid:(int)arg1 ;
-(BOOL)releaseHold:(id)arg1 flags:(unsigned long long)arg2 withError:(id*)arg3 ;
-(BOOL)releaseHold:(id)arg1 withError:(id*)arg2 ;
-(id)containingAppForPlugInConnectedTo:(id)arg1 ;
-(void)registerPlugInsInBundle:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)updateExtensionStatesForPlugIns:(id)arg1 result:(/*^block*/id)arg2 ;
-(id)initForService:(const char*)arg1 ;
-(id)forceHoldPlugIn:(id)arg1 withError:(id*)arg2 ;
-(void)forceHoldPlugIn:(id)arg1 result:(/*^block*/id)arg2 ;
-(id)terminatePlugInsInApplication:(id)arg1 options:(long long)arg2 withError:(id*)arg3 ;
-(void)registerPlugInAtURL:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)holdRequest:(id)arg1 flags:(unsigned long long)arg2 result:(/*^block*/id)arg3 ;
-(void)unregisterPlugInsInBundle:(id)arg1 result:(/*^block*/id)arg2 ;
@end

