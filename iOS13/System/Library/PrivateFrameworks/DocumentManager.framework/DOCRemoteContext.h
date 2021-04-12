/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/DOCRemoteContextInterface.h>

@interface DOCRemoteContext : NSExtensionContext <DOCRemoteContextInterface>
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)updateAppearance:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)updateAppearance:(id)arg1 shouldFlushCA:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)updateEditingTo:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)serviceProxyWithErrorHandler:(/*^block*/id)arg1 ;
@end

