/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEProvider.h>
#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class NEVPNProtocol, NSArray, NSString;

@interface NETunnelProvider : NEProvider <NSExtensionRequestHandling> {

	BOOL _reasserting;
	BOOL _onDemandEnabled;
	NEVPNProtocol* _protocolConfiguration;
	NSArray* _appRules;

}

@property (retain) NEVPNProtocol * protocolConfiguration;              //@synthesize protocolConfiguration=_protocolConfiguration - In the implementation block
@property (assign) BOOL onDemandEnabled;                               //@synthesize onDemandEnabled=_onDemandEnabled - In the implementation block
@property (retain) NSArray * appRules;                                 //@synthesize appRules=_appRules - In the implementation block
@property (readonly) long long routingMethod; 
@property (assign) BOOL reasserting; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleAppMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setOnDemandEnabled:(BOOL)arg1 ;
-(NSArray *)appRules;
-(void)setAppRules:(NSArray *)arg1 ;
-(void)setProtocolConfiguration:(NEVPNProtocol *)arg1 ;
-(NEVPNProtocol *)protocolConfiguration;
-(void)setTunnelNetworkSettings:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)onDemandEnabled;
-(void)setReasserting:(BOOL)arg1 ;
-(BOOL)reasserting;
-(long long)routingMethod;
@end

