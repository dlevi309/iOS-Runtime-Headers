/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSRequest.h>

@class SSDownloadMetadata, SSPurchaseResponse;

@interface SSImportDownloadToIPodLibraryRequest : SSRequest {

	SSDownloadMetadata* _downloadMetadata;
	SSPurchaseResponse* _purchaseResponse;

}

@property (nonatomic,readonly) SSDownloadMetadata * downloadMetadata;              //@synthesize downloadMetadata=_downloadMetadata - In the implementation block
@property (nonatomic,readonly) SSPurchaseResponse * purchaseResponse;              //@synthesize purchaseResponse=_purchaseResponse - In the implementation block
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)startWithResponseBlock:(/*^block*/id)arg1 ;
-(SSPurchaseResponse *)purchaseResponse;
-(id)initWithPurchase:(id)arg1 ;
-(id)initWithDownloadMetadata:(id)arg1 ;
-(SSDownloadMetadata *)downloadMetadata;
@end

