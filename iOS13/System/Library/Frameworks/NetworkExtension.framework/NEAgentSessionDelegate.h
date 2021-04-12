/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSXPCInterface *)driverInterface;
-(void)handleDisposeWithCompletionHandler:(/*^block*/id)arg1;
-(void)handleCancel;
-(void)handleAppsUninstalled:(id)arg1;
-(void)handleAppsUpdateBegins:(id)arg1;
-(void)handleAppsUpdateEnding:(id)arg1;
-(void)handleAppsUpdateEnds:(id)arg1;
-(NSXPCInterface *)managerInterface;
-(id)initWithPluginType:(id)arg1 pluginClass:(long long)arg2 pluginInfo:(id)arg3 queue:(id)arg4 factory:(id)arg5;
-(void)handleInitWithCompletionHandler:(/*^block*/id)arg1;
-(NSArray *)uuids;

@end

