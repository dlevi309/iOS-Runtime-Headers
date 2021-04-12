/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@class PKPaymentTransactionIconGenerator, PKPeerPaymentContactResolver;

@interface PKPaymentTransactionCellController : NSObject {

	PKPaymentTransactionIconGenerator* _iconGenerator;
	PKPeerPaymentContactResolver* _contactResolver;

}

@property (nonatomic,readonly) PKPeerPaymentContactResolver * contactResolver;              //@synthesize contactResolver=_contactResolver - In the implementation block
-(void)_updatePrimaryLabelOnTransactionCell:(id)arg1 withPeerPaymentCounterpartHandle:(id)arg2 contact:(id)arg3 ;
-(PKPeerPaymentContactResolver *)contactResolver;
-(void)_updateAvatarOnTransactionCell:(id)arg1 withTransaction:(id)arg2 contact:(id)arg3 ;
-(id)initWithContactResolver:(id)arg1 ;
-(void)configureCell:(id)arg1 forTransaction:(id)arg2 transactionSource:(id)arg3 account:(id)arg4 detailStyle:(long long)arg5 deviceName:(id)arg6 avatarViewDelegate:(id)arg7 ;
@end

