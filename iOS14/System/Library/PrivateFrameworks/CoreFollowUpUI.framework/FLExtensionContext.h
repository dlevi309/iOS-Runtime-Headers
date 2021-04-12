/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(id)hostContextWithErrorHandler:(/*^block*/id)arg1 ;
-(void)processFollowUpItem:(id)arg1 selectedAction:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)followUpPerformUpdateWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_shadowPrincipalObject;
-(id)extensionLogicProvider;
-(id)syncHostContextWithErrorHandler:(/*^block*/id)arg1 ;
@end

