/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@interface GEOXPCUtil : NSObject
+(id)createServerConnectionWithDebugIdentifier:(id)arg1 eventHandler:(/*^block*/id)arg2 ;
+(id)defaultXPCServerConnectionQueue;
+(id)createServerConnectionWithPort:(const char*)arg1 queue:(id)arg2 debugIdentifier:(id)arg3 eventHandler:(/*^block*/id)arg4 ;
+(/*^block*/id)daemonXPCConnectionCreationBlock;
+(void)setDaemonXPCConnectionCreationBlock:(/*^block*/id)arg1 ;
+(void)setDefaultXPCServerConnectionQueue:(id)arg1 ;
+(id)createServerConnectionWithQueue:(id)arg1 debugIdentifier:(id)arg2 eventHandler:(/*^block*/id)arg3 ;
@end

