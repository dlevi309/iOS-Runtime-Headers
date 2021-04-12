/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)presentAuthorizationViewControllerWithHints:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)authorizationDidCompleteWithCredential:(id)arg1 error:(id)arg2 ;
-(void)canOpenURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)remoteContextWithError:(id*)arg1 ;
-(void)setContextExtension:(SOExtension *)arg1 ;
-(SOExtension *)contextExtension;
@end

