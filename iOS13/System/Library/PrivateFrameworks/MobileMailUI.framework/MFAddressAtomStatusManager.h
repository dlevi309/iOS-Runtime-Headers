/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/

#import <libobjc.A.dylib/MFAddressBookClient.h>

@protocol MFAddressAtomProvider;
@class MFMessageLoadingContext, EMAccount, MailAccount, EMSecurityInformation, NSError, NSString;

@interface MFAddressAtomStatusManager : NSObject <MFAddressBookClient> {

	id<MFAddressAtomProvider> _atomProvider;
	MFMessageLoadingContext* _context;
	EMAccount* _account;
	MailAccount* _legacyAccount;
	EMSecurityInformation* _securityInformation;
	NSError* _smimeError;

}

@property (assign,nonatomic,__weak) MFMessageLoadingContext * context;                   //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) EMAccount * account;                                        //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) MailAccount * legacyAccount;                                //@synthesize legacyAccount=_legacyAccount - In the implementation block
@property (nonatomic,retain) EMSecurityInformation * securityInformation;                //@synthesize securityInformation=_securityInformation - In the implementation block
@property (setter=setSMIMEError:,nonatomic,retain) NSError * smimeError;                 //@synthesize smimeError=_smimeError - In the implementation block
@property (assign,nonatomic,__weak) id<MFAddressAtomProvider> atomProvider;              //@synthesize atomProvider=_atomProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(MFMessageLoadingContext *)context;
-(void)setContext:(MFMessageLoadingContext *)arg1 ;
-(EMAccount *)account;
-(void)setAccount:(EMAccount *)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(void)_commonInit;
-(NSError *)smimeError;
-(void)addressBookManager:(id)arg1 addressBookDidChange:(void*)arg2 ;
-(void)addressBookPreferencesChangedForAddressBookManager:(id)arg1 ;
-(id)otherSigners;
-(EMSecurityInformation *)securityInformation;
-(void)setSecurityInformation:(EMSecurityInformation *)arg1 ;
-(void)_trustDidChange:(id)arg1 ;
-(void)_legacyAccountsDidChange:(id)arg1 ;
-(void)_vipSendersDidChange:(id)arg1 ;
-(void)updateTrustForDisplayedAtoms;
-(void)_invalidateAtoms;
-(id<MFAddressAtomProvider>)atomProvider;
-(void)setSMIMEError:(id)arg1 ;
-(void)_updateAtomsInList:(id)arg1 ;
-(int)actionForTrustInformation:(id)arg1 ;
-(void)_updateOtherSignersList:(id)arg1 ;
-(BOOL)_atomContainsVIPSender:(id)arg1 ;
-(MailAccount *)legacyAccount;
-(void)setLegacyAccount:(MailAccount *)arg1 ;
-(void)_updateVIPStatus;
-(void)setAtomProvider:(id<MFAddressAtomProvider>)arg1 ;
-(void)updateWithSecurityInformation:(id)arg1 ;
@end

