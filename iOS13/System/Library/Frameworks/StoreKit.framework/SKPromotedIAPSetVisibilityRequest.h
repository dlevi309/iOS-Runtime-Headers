/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/

#import <StoreKit/SKRequest.h>

@class NSString;

@interface SKPromotedIAPSetVisibilityRequest : SKRequest {

	/*^block*/id _completionHandler;
	long long _visibility;
	NSString* _productId;
	NSString* _bundleId;

}

@property (nonatomic,copy) id completionHandler;                //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) long long visibility;              //@synthesize visibility=_visibility - In the implementation block
@property (nonatomic,copy) NSString * productId;                //@synthesize productId=_productId - In the implementation block
@property (nonatomic,copy) NSString * bundleId;                 //@synthesize bundleId=_bundleId - In the implementation block
-(void)setVisibility:(long long)arg1 ;
-(long long)visibility;
-(void)_start;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(NSString *)productId;
-(void)_handleReply:(id)arg1 ;
-(void)setProductId:(NSString *)arg1 ;
-(id)initWithVisibility:(long long)arg1 productId:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithVisibility:(long long)arg1 productId:(id)arg2 bundleId:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

