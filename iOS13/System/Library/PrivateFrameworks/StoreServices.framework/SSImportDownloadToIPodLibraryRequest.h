/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithDownloadMetadata:(id)arg1 ;
-(id)initWithPurchase:(id)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)startWithResponseBlock:(/*^block*/id)arg1 ;
-(SSDownloadMetadata *)downloadMetadata;
-(SSPurchaseResponse *)purchaseResponse;
@end

