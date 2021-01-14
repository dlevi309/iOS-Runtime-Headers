/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/

#import <StoreKit/SKRequest.h>

@class NSString;

@interface SKPromotedIAPGetVisibilityRequest : SKRequest {

	/*^block*/id _completionHandler;
	NSString* _productId;
	NSString* _bundleId;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSString * productId;              //@synthesize productId=_productId - In the implementation block
@property (nonatomic,copy) NSString * bundleId;               //@synthesize bundleId=_bundleId - In the implementation block
-(void)setCompletionHandler:(id)arg1 ;
-(void)setBundleId:(NSString *)arg1 ;
-(NSString *)bundleId;
-(void)_start;
-(id)completionHandler;
-(void)setProductId:(NSString *)arg1 ;
-(NSString *)productId;
-(void)_handleReply:(id)arg1 ;
-(id)initWithProductId:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithProductId:(id)arg1 bundleId:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

