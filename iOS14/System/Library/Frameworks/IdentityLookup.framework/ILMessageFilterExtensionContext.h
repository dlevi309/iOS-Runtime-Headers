/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(oneway void)finish;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)extension;
-(oneway void)handleQueryRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)handleReportRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)deferQueryRequestToNetworkWithCompletion:(/*^block*/id)arg1 ;
-(void)deferReportRequestToNetworkWithCompletion:(/*^block*/id)arg1 ;
@end

