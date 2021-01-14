/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@class PKFamilyMember, PKPaymentTransaction;

@interface PKPeerPaymentAssociatedAccountPresentationContext : NSObject {

	PKFamilyMember* _member;
	PKPaymentTransaction* _transaction;

}

@property (nonatomic,retain) PKFamilyMember * member;                         //@synthesize member=_member - In the implementation block
@property (nonatomic,retain) PKPaymentTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
-(PKFamilyMember *)member;
-(void)setTransaction:(PKPaymentTransaction *)arg1 ;
-(PKPaymentTransaction *)transaction;
-(id)description;
-(id)initWithFAFamilyMember:(id)arg1 options:(id)arg2 ;
-(id)initWithPKFamilyMember:(id)arg1 options:(id)arg2 ;
-(id)initWithPKFamilyMember:(id)arg1 transaction:(id)arg2 ;
-(void)setMember:(PKFamilyMember *)arg1 ;
@end

