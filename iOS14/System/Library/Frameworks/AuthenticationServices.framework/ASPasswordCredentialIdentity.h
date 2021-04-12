/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/

#import <AuthenticationServices/AuthenticationServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ASCredentialServiceIdentifier, NSString;

@interface ASPasswordCredentialIdentity : NSObject <NSCopying, NSSecureCoding> {

	ASCredentialServiceIdentifier* _serviceIdentifier;
	NSString* _user;
	NSString* _recordIdentifier;
	long long _rank;
	id _credentialIdentityStoreIdentifier;

}

@property (nonatomic,readonly) id credentialIdentityStoreIdentifier;                           //@synthesize credentialIdentityStoreIdentifier=_credentialIdentityStoreIdentifier - In the implementation block
@property (nonatomic,readonly) ASCredentialServiceIdentifier * serviceIdentifier;              //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * user;                                           //@synthesize user=_user - In the implementation block
@property (nonatomic,copy,readonly) NSString * recordIdentifier;                               //@synthesize recordIdentifier=_recordIdentifier - In the implementation block
@property (assign,nonatomic) long long rank;                                                   //@synthesize rank=_rank - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)identityWithServiceIdentifier:(id)arg1 user:(id)arg2 recordIdentifier:(id)arg3 ;
-(void)setRank:(long long)arg1 ;
-(NSString *)recordIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(ASCredentialServiceIdentifier *)serviceIdentifier;
-(id)description;
-(NSString *)user;
-(long long)rank;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithFoundationCredentialIdentity:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)credentialIdentityStoreIdentifier;
-(id)initWithServiceIdentifier:(id)arg1 user:(id)arg2 recordIdentifier:(id)arg3 ;
@end

