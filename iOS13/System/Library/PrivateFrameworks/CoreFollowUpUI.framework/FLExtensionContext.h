/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/FLExtensionRemoteInterface.h>

@class NSString;

@interface FLExtensionContext : NSExtensionContext <FLExtensionRemoteInterface> {

	id _shadowPrincipalObject;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)processFollowUpItem:(id)arg1 selectedAction:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)followUpPerformUpdateWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)hostContextWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_shadowPrincipalObject;
-(id)extensionLogicProvider;
@end

