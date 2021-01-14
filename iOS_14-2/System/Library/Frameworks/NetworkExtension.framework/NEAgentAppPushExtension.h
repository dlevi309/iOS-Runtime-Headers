/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEAgentExtension.h>
#import <libobjc.A.dylib/NEExtensionAppPushProviderHostDelegate.h>
#import <libobjc.A.dylib/NEAgentSessionDelegate.h>
#import <libobjc.A.dylib/NEAppPushPluginDriver.h>

@class NSArray, NSXPCInterface, NSString;

@interface NEAgentAppPushExtension : NEAgentExtension <NEExtensionAppPushProviderHostDelegate, NEAgentSessionDelegate, NEAppPushPluginDriver>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * uuids; 
@property (nonatomic,readonly) NSXPCInterface * driverInterface; 
@property (nonatomic,readonly) NSXPCInterface * managerInterface; 
-(NSXPCInterface *)managerInterface;
-(void)setProviderConfiguration:(id)arg1 ;
-(void)handleProviderError:(id)arg1 ;
-(void)handleProviderError:(id)arg1 forMessageID:(id)arg2 ;
-(void)reportIncomingCall:(id)arg1 ;
-(void)sendExtensionFailed;
-(void)handleProviderStopped;
-(void)startConnectionWithProviderConfig:(id)arg1 ;
-(void)stopWithReason:(int)arg1 ;
-(void)sendOutgoingCallMessage:(id)arg1 andMessageID:(id)arg2 ;
-(void)sendTimerEvent;
-(void)didReceiveIncomingCallWithUserInfo:(id)arg1 ;
-(NSXPCInterface *)driverInterface;
@end

