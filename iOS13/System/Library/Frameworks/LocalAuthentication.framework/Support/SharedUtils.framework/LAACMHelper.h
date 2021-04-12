/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
*/


#import <SharedUtils/SharedUtils-Structs.h>
@interface LAACMHelper : NSObject {

	BOOL _contextOwner;
	ACMHandleRef _acmContext;

}

@property (nonatomic,readonly) ACMHandleRef acmContext;              //@synthesize acmContext=_acmContext - In the implementation block
-(void)dealloc;
-(id)initWithExternalizedContext:(id)arg1 ;
-(BOOL)performCredentialBlock:(/*^block*/id)arg1 credentialType:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)performContextBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(BOOL)_verifyRequirement:(ACMRequirementRef)arg1 satisfiedForType:(unsigned)arg2 ;
-(id)initWithACMContext:(ACMHandleRef)arg1 ;
-(BOOL)addCredential:(unsigned)arg1 scope:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)replacePassphraseCredentialWithPurpose:(unsigned)arg1 passphrase:(id)arg2 scope:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)removeCredentialsOfType:(unsigned)arg1 error:(id*)arg2 ;
-(BOOL)isCredentialOfTypeSet:(unsigned)arg1 error:(id*)arg2 ;
-(BOOL)verifyRequirementOfType:(unsigned)arg1 policy:(char*)arg2 error:(id*)arg3 ;
-(ACMHandleRef)acmContext;
@end

