/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/ILMessageFilterExtensionHostProtocol.h>

@class NSString;

@interface ILMessageFilterExtensionHostContext : NSExtensionContext <ILMessageFilterExtensionHostProtocol> {

	/*^block*/id _deferQueryRequestToNetwork;
	/*^block*/id _deferReportRequestToNetwork;

}

@property (nonatomic,copy) id deferQueryRequestToNetwork;               //@synthesize deferQueryRequestToNetwork=_deferQueryRequestToNetwork - In the implementation block
@property (nonatomic,copy) id deferReportRequestToNetwork;              //@synthesize deferReportRequestToNetwork=_deferReportRequestToNetwork - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)finish;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)deferQueryRequestToNetwork;
-(id)deferReportRequestToNetwork;
-(oneway void)deferQueryRequestToNetworkWithReply:(/*^block*/id)arg1 ;
-(oneway void)deferReportRequestToNetworkWithReply:(/*^block*/id)arg1 ;
-(void)handleQueryRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleReportRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDeferQueryRequestToNetwork:(id)arg1 ;
-(void)setDeferReportRequestToNetwork:(id)arg1 ;
@end

