/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/SOHostExtensionContextProtocol.h>

@class SOExtension, NSString;

@interface SOHostExtensionContext : NSExtensionContext <SOHostExtensionContextProtocol> {

	SOExtension* _contextExtension;

}

@property (__weak) SOExtension * contextExtension;                  //@synthesize contextExtension=_contextExtension - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)presentAuthorizationViewControllerWithHints:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)authorizationDidCompleteWithCredential:(id)arg1 error:(id)arg2 ;
-(SOExtension *)contextExtension;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)canOpenURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)remoteContextWithError:(id*)arg1 ;
-(void)setContextExtension:(SOExtension *)arg1 ;
@end

