/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)finish;
-(id)deferQueryRequestToNetwork;
-(id)deferReportRequestToNetwork;
-(oneway void)deferQueryRequestToNetworkWithReply:(/*^block*/id)arg1 ;
-(oneway void)deferReportRequestToNetworkWithReply:(/*^block*/id)arg1 ;
-(void)handleQueryRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleReportRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDeferQueryRequestToNetwork:(id)arg1 ;
-(void)setDeferReportRequestToNetwork:(id)arg1 ;
@end

