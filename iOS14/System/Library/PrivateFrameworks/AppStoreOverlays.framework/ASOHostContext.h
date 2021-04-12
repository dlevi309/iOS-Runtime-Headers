/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreOverlays.framework/AppStoreOverlays
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/ASOHostProtocol.h>

@class NSString;

@interface ASOHostContext : NSExtensionContext <ASOHostProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(id)serviceContext;
-(void)presentOverlayWithConfiguration:(id)arg1 delegate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)dismissOverlayWithReply:(/*^block*/id)arg1 ;
@end

