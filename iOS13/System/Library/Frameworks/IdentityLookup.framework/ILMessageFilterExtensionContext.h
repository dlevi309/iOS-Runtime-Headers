/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/ILMessageFilterExtensionVendorProtocol.h>

@class NSString;

@interface ILMessageFilterExtensionContext : NSExtensionContext <ILMessageFilterExtensionVendorProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(oneway void)finish;
-(id)extension;
-(oneway void)handleQueryRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)handleReportRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)deferQueryRequestToNetworkWithCompletion:(/*^block*/id)arg1 ;
-(void)deferReportRequestToNetworkWithCompletion:(/*^block*/id)arg1 ;
@end

