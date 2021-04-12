/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@interface GEOXPCUtil : NSObject
+(void)setDefaultXPCServerConnectionQueue:(id)arg1 ;
+(id)createServerConnectionWithDebugIdentifier:(id)arg1 eventHandler:(/*^block*/id)arg2 ;
+(id)defaultXPCServerConnectionQueue;
+(id)createServerConnectionWithPort:(const char*)arg1 queue:(id)arg2 debugIdentifier:(id)arg3 eventHandler:(/*^block*/id)arg4 ;
+(void)setDaemonXPCConnectionCreationBlock:(/*^block*/id)arg1 ;
+(/*^block*/id)daemonXPCConnectionCreationBlock;
+(id)createServerConnectionWithQueue:(id)arg1 debugIdentifier:(id)arg2 eventHandler:(/*^block*/id)arg3 ;
@end

