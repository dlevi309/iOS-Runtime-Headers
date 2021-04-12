/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
*/


@class FAFamilyMember;

@interface BPSTinkerFamilyDetails : NSObject {

	FAFamilyMember* _tinkerFamilyMember;
	FAFamilyMember* _pairingParentFamilyMember;
	FAFamilyMember* _organizerParentFamilyMember;

}

@property (nonatomic,retain) FAFamilyMember * tinkerFamilyMember;                       //@synthesize tinkerFamilyMember=_tinkerFamilyMember - In the implementation block
@property (nonatomic,retain) FAFamilyMember * pairingParentFamilyMember;                //@synthesize pairingParentFamilyMember=_pairingParentFamilyMember - In the implementation block
@property (nonatomic,retain) FAFamilyMember * organizerParentFamilyMember;              //@synthesize organizerParentFamilyMember=_organizerParentFamilyMember - In the implementation block
-(FAFamilyMember *)tinkerFamilyMember;
-(void)setTinkerFamilyMember:(FAFamilyMember *)arg1 ;
-(FAFamilyMember *)pairingParentFamilyMember;
-(void)setPairingParentFamilyMember:(FAFamilyMember *)arg1 ;
-(FAFamilyMember *)organizerParentFamilyMember;
-(void)setOrganizerParentFamilyMember:(FAFamilyMember *)arg1 ;
@end

