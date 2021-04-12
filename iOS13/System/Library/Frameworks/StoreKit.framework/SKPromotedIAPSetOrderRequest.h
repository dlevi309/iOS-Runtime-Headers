/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/

#import <StoreKit/SKRequest.h>

@class NSArray, NSString;

@interface SKPromotedIAPSetOrderRequest : SKRequest {

	/*^block*/id _completionHandler;
	NSArray* _order;
	NSString* _bundleId;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSArray * order;                   //@synthesize order=_order - In the implementation block
@property (nonatomic,copy) NSString * bundleId;               //@synthesize bundleId=_bundleId - In the implementation block
-(NSArray *)order;
-(void)_start;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setOrder:(NSArray *)arg1 ;
-(void)_handleReply:(id)arg1 ;
-(id)initWithOrder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithOrder:(id)arg1 bundleId:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

