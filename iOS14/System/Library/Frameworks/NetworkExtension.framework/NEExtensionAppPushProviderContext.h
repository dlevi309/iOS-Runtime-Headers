/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEExtensionProviderContext.h>
#import <libobjc.A.dylib/NEExtensionAppPushProviderProtocol.h>
#import <libobjc.A.dylib/NEExtensionAppPushProviderHostProtocol.h>

@class NSString;

@interface NEExtensionAppPushProviderContext : NEExtensionProviderContext <NEExtensionAppPushProviderProtocol, NEExtensionAppPushProviderHostProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)setProviderConfiguration:(id)arg1 ;
-(void)reportIncomingCall:(id)arg1 ;
-(void)sendTimerEvent;
-(void)startConnectionWithProviderConfig:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)stopWithReason:(int)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sendOutgoingCallMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)extensionPoint;
-(void)dealloc;
@end

