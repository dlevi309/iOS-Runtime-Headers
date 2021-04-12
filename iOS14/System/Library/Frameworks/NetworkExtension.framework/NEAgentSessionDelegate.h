/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

@class NSArray, NSXPCInterface;


@protocol NEAgentSessionDelegate <NSObject>
@property (nonatomic,readonly) NSArray * uuids; 
@property (nonatomic,readonly) NSXPCInterface * driverInterface; 
@property (nonatomic,readonly) NSXPCInterface * managerInterface; 
@optional
-(id)initWithPluginType:(id)arg1 pluginClass:(long long)arg2 pluginEndpoint:(id)arg3 pluginUUID:(id)arg4 queue:(id)arg5 factory:(id)arg6;

@required
-(NSXPCInterface *)managerInterface;
-(void)handleCancel;
-(NSXPCInterface *)driverInterface;
-(id)initWithPluginType:(id)arg1 pluginClass:(long long)arg2 pluginInfo:(id)arg3 queue:(id)arg4 factory:(id)arg5;
-(void)handleInitWithCompletionHandler:(/*^block*/id)arg1;
-(void)handleDisposeWithCompletionHandler:(/*^block*/id)arg1;
-(void)handleAppsUninstalled:(id)arg1;
-(void)handleAppsUpdateBegins:(id)arg1;
-(void)handleAppsUpdateEnding:(id)arg1;
-(void)handleAppsUpdateEnds:(id)arg1;
-(NSArray *)uuids;

@end

