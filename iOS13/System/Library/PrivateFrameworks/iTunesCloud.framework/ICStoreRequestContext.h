/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICRequestContext.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ICUserIdentity, ICUserIdentityStore, ICStoreDialogResponseHandler;

@interface ICStoreRequestContext : ICRequestContext <NSSecureCoding> {

	ICUserIdentity* _delegatedIdentity;
	ICUserIdentity* _identity;
	ICUserIdentityStore* _identityStore;
	ICStoreDialogResponseHandler* _storeDialogResponseHandler;
	long long _personalizationStyle;
	BOOL _allowsExpiredBags;

}

@property (nonatomic,copy,readonly) ICUserIdentity * identity;                                              //@synthesize identity=_identity - In the implementation block
@property (nonatomic,copy,readonly) ICUserIdentity * delegatedIdentity;                                     //@synthesize delegatedIdentity=_delegatedIdentity - In the implementation block
@property (nonatomic,readonly) ICUserIdentityStore * identityStore;                                         //@synthesize identityStore=_identityStore - In the implementation block
@property (nonatomic,copy,readonly) ICStoreDialogResponseHandler * storeDialogResponseHandler;              //@synthesize storeDialogResponseHandler=_storeDialogResponseHandler - In the implementation block
@property (nonatomic,readonly) BOOL allowsExpiredBags;                                                      //@synthesize allowsExpiredBags=_allowsExpiredBags - In the implementation block
@property (nonatomic,readonly) long long personalizationStyle;                                              //@synthesize personalizationStyle=_personalizationStyle - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)activeStoreAccountRequestContext;
-(id)initWithActiveAccountAllowAuthenticationOnceADay_bl;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(ICUserIdentity *)identity;
-(id)initWithIdentity:(id)arg1 ;
-(void)setIdentity:(ICUserIdentity *)arg1 ;
-(long long)personalizationStyle;
-(void)setPersonalizationStyle:(long long)arg1 ;
-(void)setIdentityStore:(ICUserIdentityStore *)arg1 ;
-(void)setDelegatedIdentity:(ICUserIdentity *)arg1 ;
-(void)setAllowsExpiredBags:(BOOL)arg1 ;
-(id)initWithIdentity:(id)arg1 clientInfo:(id)arg2 ;
-(id)copyWithBlock:(/*^block*/id)arg1 ;
-(BOOL)allowsExpiredBags;
-(ICUserIdentity *)delegatedIdentity;
-(ICUserIdentityStore *)identityStore;
-(id)initWithIdentity:(id)arg1 identityStore:(id)arg2 clientInfo:(id)arg3 ;
-(id)initWithIdentity:(id)arg1 identityStore:(id)arg2 clientInfo:(id)arg3 authenticationProvider:(id)arg4 ;
-(void)setStoreDialogResponseHandler:(ICStoreDialogResponseHandler *)arg1 ;
-(ICStoreDialogResponseHandler *)storeDialogResponseHandler;
@end

