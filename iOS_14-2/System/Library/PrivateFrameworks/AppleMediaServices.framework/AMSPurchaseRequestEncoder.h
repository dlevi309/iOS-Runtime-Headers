/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSURLRequestEncoder.h>

@protocol AMSBagProtocol, OS_dispatch_queue;
@class AMSPurchaseInfo, NSObject;

@interface AMSPurchaseRequestEncoder : AMSURLRequestEncoder {

	id<AMSBagProtocol> _bag;
	AMSPurchaseInfo* _purchaseInfo;
	NSObject*<OS_dispatch_queue> _purchaseRequestQueue;

}

@property (nonatomic,readonly) AMSPurchaseInfo * purchaseInfo;                               //@synthesize purchaseInfo=_purchaseInfo - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> purchaseRequestQueue;              //@synthesize purchaseRequestQueue=_purchaseRequestQueue - In the implementation block
+(id)_parametersFromPurchaseInfo:(id)arg1 error:(id*)arg2 ;
+(void)configureRequest:(id)arg1 purchaseInfo:(id)arg2 bag:(id)arg3 error:(id*)arg4 ;
+(long long)_anisetteTypeFromAccount:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)purchaseRequestQueue;
-(AMSPurchaseInfo *)purchaseInfo;
-(id)initWithPurchaseInfo:(id)arg1 ;
-(id)bag;
-(id)encodeRequest;
-(void)setBag:(id)arg1 ;
-(void)setPurchaseRequestQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithPurchaseInfo:(id)arg1 bag:(id)arg2 ;
-(id)_bagURL;
@end

