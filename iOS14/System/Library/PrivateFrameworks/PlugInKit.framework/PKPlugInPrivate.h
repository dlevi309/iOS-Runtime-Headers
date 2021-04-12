/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
*/

@class NSUUID, NSDate, NSXPCConnection, NSDictionary;


@protocol PKPlugInPrivate <PKPlugIn>
@property (readonly) NSUUID * uuid; 
@property (readonly) NSDate * timestamp; 
@property (readonly) NSXPCConnection * pluginConnection; 
@property (retain) NSDictionary * extensionState; 
@property (retain) NSDictionary * environment; 
@required
-(NSXPCConnection *)pluginConnection;
-(NSUUID *)uuid;
-(NSDictionary *)extensionState;
-(NSDate *)timestamp;
-(void)setEnvironment:(id)arg1;
-(NSDictionary *)environment;
-(void)setExtensionState:(id)arg1;

@end

