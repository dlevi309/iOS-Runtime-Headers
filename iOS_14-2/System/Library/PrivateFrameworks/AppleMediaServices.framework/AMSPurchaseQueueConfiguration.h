/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol AMSBagProtocol, AMSPurchaseResponseProtocol;
@interface AMSPurchaseQueueConfiguration : NSObject {

	id<AMSBagProtocol> _bag;
	id<AMSPurchaseResponseProtocol> _delegate;

}

@property (nonatomic,readonly) id<AMSBagProtocol> bag;                              //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) id<AMSPurchaseResponseProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<AMSPurchaseResponseProtocol>)delegate;
-(id<AMSBagProtocol>)bag;
-(id)initWithBag:(id)arg1 ;
-(void)setDelegate:(id<AMSPurchaseResponseProtocol>)arg1 ;
@end

