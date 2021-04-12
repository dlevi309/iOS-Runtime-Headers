/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@class EMDaemonInterface, ECDKIMVerifier;

@interface SGMailClientUtil : NSObject {

	EMDaemonInterface* _emailDaemon;
	ECDKIMVerifier* _dkimVerifier;

}

@property (nonatomic,readonly) EMDaemonInterface * emailDaemon;              //@synthesize emailDaemon=_emailDaemon - In the implementation block
@property (nonatomic,readonly) ECDKIMVerifier * dkimVerifier;                //@synthesize dkimVerifier=_dkimVerifier - In the implementation block
+(id)sharedInstance;
+(id)convertLineEndingsToNetwork:(id)arg1 ;
-(id)dataForMessageWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(long long)verifyDKIMSignatureForStorageEvent:(id)arg1 error:(id*)arg2 ;
-(long long)verifyDKIMSignatureForMailWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)messageWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(long long)verifyDKIMSignatureForMailWithData:(id)arg1 error:(id*)arg2 ;
-(ECDKIMVerifier *)dkimVerifier;
-(EMDaemonInterface *)emailDaemon;
-(id)allVIPEmailAddresses;
-(long long)verifyDKIMSignatureForMailWithData:(id)arg1 options:(long long)arg2 error:(id*)arg3 ;
-(id)signaturesToRemoveForDKIMVerificationContext:(id)arg1 withFromHeaderDomain:(id)arg2 ;
-(id)_init;
-(long long)verifyDKIMSignatureForPipelineEntity:(id)arg1 error:(id*)arg2 ;
-(BOOL)isMessageAvailable:(id)arg1 ;
@end

