/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSDictionary *)extensionState;
-(void)setExtensionState:(id)arg1;
-(NSDictionary *)environment;
-(NSUUID *)uuid;
-(NSXPCConnection *)pluginConnection;
-(void)setEnvironment:(id)arg1;
-(NSDate *)timestamp;

@end

