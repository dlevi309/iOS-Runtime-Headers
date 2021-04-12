/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSURLRequestEncoder.h>

@protocol AMSBagProtocol, OS_dispatch_queue;
@class AMSPurchaseContext, NSObject;

@interface AMSPurchaseRequestEncoder : AMSURLRequestEncoder {

	id<AMSBagProtocol> _bag;
	AMSPurchaseContext* _context;
	NSObject*<OS_dispatch_queue> _purchaseRequestQueue;

}

@property (nonatomic,readonly) AMSPurchaseContext * context;                                 //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> purchaseRequestQueue;              //@synthesize purchaseRequestQueue=_purchaseRequestQueue - In the implementation block
+(void)configureRequest:(id)arg1 context:(id)arg2 bag:(id)arg3 error:(id*)arg4 ;
+(long long)_anisetteTypeFromAccount:(id)arg1 ;
+(id)_parametersFromContext:(id)arg1 error:(id*)arg2 ;
-(AMSPurchaseContext *)context;
-(id)initWithContext:(id)arg1 ;
-(id)_bagURL;
-(id)bag;
-(void)setBag:(id)arg1 ;
-(id)initWithContext:(id)arg1 bag:(id)arg2 ;
-(id)encodeRequest;
-(NSObject*<OS_dispatch_queue>)purchaseRequestQueue;
-(void)setPurchaseRequestQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

