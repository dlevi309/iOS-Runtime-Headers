/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
*/


#import <SharedUtils/SharedUtils-Structs.h>
@interface LAACMHelper : NSObject {

	BOOL _contextOwner;
	unsigned _acmTrackingNumber;
	ACMHandleRef _acmContext;

}

@property (nonatomic,readonly) unsigned acmTrackingNumber;              //@synthesize acmTrackingNumber=_acmTrackingNumber - In the implementation block
@property (nonatomic,readonly) ACMHandleRef acmContext;                 //@synthesize acmContext=_acmContext - In the implementation block
+(const char*)acmPolicyForPolicy:(long long)arg1 ;
-(id)initWithExternalizedContext:(id)arg1 ;
-(void)dealloc;
-(ACMHandleRef)acmContext;
-(unsigned)acmTrackingNumber;
-(BOOL)performCredentialBlock:(/*^block*/id)arg1 credentialType:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)performContextBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(BOOL)_verifyRequirement:(ACMRequirementRef)arg1 satisfiedForType:(unsigned)arg2 ;
-(id)initWithACMContext:(ACMHandleRef)arg1 ;
-(BOOL)addCredential:(unsigned)arg1 scope:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)replacePassphraseCredentialWithPurpose:(unsigned)arg1 passphrase:(id)arg2 scope:(unsigned)arg3 error:(id*)arg4 ;
-(BOOL)addExtractablePassphrase:(id)arg1 scope:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)removeCredentialsOfType:(unsigned)arg1 error:(id*)arg2 ;
-(BOOL)isCredentialOfTypeSet:(unsigned)arg1 error:(id*)arg2 ;
-(id)credentialOfType:(unsigned)arg1 property:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)verifyRequirementOfType:(unsigned)arg1 policy:(char*)arg2 error:(id*)arg3 ;
-(BOOL)setData:(id)arg1 type:(unsigned)arg2 error:(id*)arg3 ;
@end

