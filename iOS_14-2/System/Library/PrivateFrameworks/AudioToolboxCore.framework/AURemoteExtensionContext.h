/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/

#import <Foundation/NSExtensionContext.h>

@class AURemoteHost, AUAudioUnitViewService;

@interface AURemoteExtensionContext : NSExtensionContext {

	AURemoteHost* _host;
	BOOL _isUIExtension;
	BOOL _isRunningInProcess;
	AUAudioUnitViewService* _viewService;

}

@property (assign,nonatomic) AUAudioUnitViewService * viewService;              //@synthesize viewService=_viewService - In the implementation block
+(BOOL)conformsToProtocol:(id)arg1 ;
+(id)_extensionAuxiliaryVendorProtocol;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)_extensionAuxiliaryHostProtocol;
-(void)open:(/*^block*/id)arg1 ;
-(id)iOSViewController;
-(void)requestViewControllerWithCompletionHandler:(/*^block*/id)arg1 ;
-(AUAudioUnitViewService *)viewService;
-(void)setViewService:(AUAudioUnitViewService *)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 ;
@end

