/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ICUserIdentity, NSURL, NSError, ICAgeVerifier;

@interface ICAgeVerificationState : NSObject <NSCopying> {

	long long _status;
	ICUserIdentity* _userIdentity;
	long long _treatment;
	NSURL* _verificationURL;
	NSError* _error;
	ICAgeVerifier* _ageVerifier;

}

@property (nonatomic,copy,readonly) ICAgeVerifier * ageVerifier;                                         //@synthesize ageVerifier=_ageVerifier - In the implementation block
@property (getter=isDynamic,nonatomic,readonly) BOOL dynamic; 
@property (nonatomic,readonly) long long treatment;                                                      //@synthesize treatment=_treatment - In the implementation block
@property (nonatomic,readonly) long long status;                                                         //@synthesize status=_status - In the implementation block
@property (nonatomic,copy,readonly) NSURL * verificationURL;                                             //@synthesize verificationURL=_verificationURL - In the implementation block
@property (getter=isExplicitContentAllowed,nonatomic,readonly) BOOL explicitContentAllowed; 
@property (nonatomic,readonly) NSError * error;                                                          //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) ICUserIdentity * userIdentity;                                            //@synthesize userIdentity=_userIdentity - In the implementation block
+(id)_stateFromDictionaryRepresentation:(id)arg1 DSID:(id)arg2 ;
+(id)ageVerificationStateNotRequiredForUserIdentity:(id)arg1 withError:(id)arg2 ;
+(id)cachedStateForDSID:(id)arg1 ;
+(id)ageVerificationStateNotRequiredForUserIdentity:(id)arg1 ;
+(id)ageVerificationStateNotRequiredForUserIdentity:(id)arg1 withTreatment:(long long)arg2 verificationURL:(id)arg3 ;
+(id)ageVerificationStateNotRequiredForUserIdentity:(id)arg1 withTreatment:(long long)arg2 ;
-(long long)treatment;
-(ICUserIdentity *)userIdentity;
-(BOOL)isDynamic;
-(NSURL *)verificationURL;
-(void)saveToUserDefaults;
-(NSError *)error;
-(BOOL)isExplicitContentAllowed;
-(id)_initWithUserIdentity:(id)arg1 status:(long long)arg2 treatment:(long long)arg3 verificationURL:(id)arg4 error:(id)arg5 ;
-(id)description;
-(id)initWithUserIdentity:(id)arg1 ageVerifier:(id)arg2 treatment:(long long)arg3 verificationURL:(id)arg4 ;
-(ICAgeVerifier *)ageVerifier;
-(id)_dictionaryRepresentationWithDSID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)status;
@end

