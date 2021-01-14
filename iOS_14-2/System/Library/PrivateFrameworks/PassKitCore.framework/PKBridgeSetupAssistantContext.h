/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class FAFamilyMember;

@interface PKBridgeSetupAssistantContext : NSObject {

	FAFamilyMember* _pairingFamilyMember;
	FAFamilyMember* _parentFamilyMember;

}

@property (nonatomic,retain) FAFamilyMember * pairingFamilyMember;              //@synthesize pairingFamilyMember=_pairingFamilyMember - In the implementation block
@property (nonatomic,retain) FAFamilyMember * parentFamilyMember;               //@synthesize parentFamilyMember=_parentFamilyMember - In the implementation block
-(void)setPairingFamilyMember:(FAFamilyMember *)arg1 ;
-(FAFamilyMember *)parentFamilyMember;
-(FAFamilyMember *)pairingFamilyMember;
-(void)setParentFamilyMember:(FAFamilyMember *)arg1 ;
@end

