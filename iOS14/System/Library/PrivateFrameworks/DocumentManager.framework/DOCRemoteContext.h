/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/DOCRemoteContextInterface.h>

@interface DOCRemoteContext : NSExtensionContext <DOCRemoteContextInterface>
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(id)serviceProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)updateAppearance:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)updateAppearance:(id)arg1 shouldFlushCA:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)updateEditingTo:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

