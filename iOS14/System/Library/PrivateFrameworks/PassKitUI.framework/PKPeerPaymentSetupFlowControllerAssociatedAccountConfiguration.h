/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKPeerPaymentSetupFlowControllerConfiguration.h>

@protocol PKPeerPaymentAssociatedAccountSetupDelegate;
@class NSString, PKFamilyMember, PKPeerPaymentPreferences;

@interface PKPeerPaymentSetupFlowControllerAssociatedAccountConfiguration : NSObject <PKPeerPaymentSetupFlowControllerConfiguration> {

	NSString* _firstName;
	NSString* _lastName;
	PKFamilyMember* _familyMember;
	PKPeerPaymentPreferences* _updatedPreferences;
	id<PKPeerPaymentAssociatedAccountSetupDelegate> _associatedAccountSetupDelegate;

}

@property (nonatomic,copy) NSString * firstName;                                                                            //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * lastName;                                                                             //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,readonly) PKFamilyMember * familyMember;                                                               //@synthesize familyMember=_familyMember - In the implementation block
@property (nonatomic,retain) PKPeerPaymentPreferences * updatedPreferences;                                                 //@synthesize updatedPreferences=_updatedPreferences - In the implementation block
@property (nonatomic,readonly) id<PKPeerPaymentAssociatedAccountSetupDelegate> associatedAccountSetupDelegate;              //@synthesize associatedAccountSetupDelegate=_associatedAccountSetupDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setLastName:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(id)initWithFamilyMember:(id)arg1 associatedAccountSetupDelegate:(id)arg2 ;
-(void)setUpdatedPreferences:(PKPeerPaymentPreferences *)arg1 ;
-(id<PKPeerPaymentAssociatedAccountSetupDelegate>)associatedAccountSetupDelegate;
-(unsigned long long)peerPaymentSetupConfigurationType;
-(PKFamilyMember *)familyMember;
-(PKPeerPaymentPreferences *)updatedPreferences;
@end

