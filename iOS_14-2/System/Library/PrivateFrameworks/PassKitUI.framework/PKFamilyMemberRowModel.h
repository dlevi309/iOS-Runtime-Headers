/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@class PKFamilyMember, PKPeerPaymentAccount, PKPeerPaymentAccountInvitation, UIImage;

@interface PKFamilyMemberRowModel : NSObject {

	PKFamilyMember* _familyMember;
	PKPeerPaymentAccount* _account;
	PKPeerPaymentAccountInvitation* _invitation;
	UIImage* _image;

}

@property (nonatomic,readonly) PKFamilyMember * familyMember;                          //@synthesize familyMember=_familyMember - In the implementation block
@property (nonatomic,retain) PKPeerPaymentAccount * account;                           //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) PKPeerPaymentAccountInvitation * invitation;              //@synthesize invitation=_invitation - In the implementation block
@property (nonatomic,retain) UIImage * image;                                          //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) unsigned long long state; 
+(id)sortedRowsFromFamilyMembers:(id)arg1 peerPaymentAccount:(id)arg2 ;
-(PKPeerPaymentAccount *)account;
-(long long)compare:(id)arg1 ;
-(void)setAccount:(PKPeerPaymentAccount *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(PKFamilyMember *)familyMember;
-(id)initWithFamilyMember:(id)arg1 ;
-(unsigned long long)state;
-(long long)accessoryType;
-(PKPeerPaymentAccountInvitation *)invitation;
-(void)setInvitation:(PKPeerPaymentAccountInvitation *)arg1 ;
@end

