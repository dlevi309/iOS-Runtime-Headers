/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithIdentity:(id)arg1 ;
-(ICUserIdentityStore *)identityStore;
-(void)setIdentity:(ICUserIdentity *)arg1 ;
-(id)initWithIdentity:(id)arg1 clientInfo:(id)arg2 ;
-(id)initWithIdentity:(id)arg1 identityStore:(id)arg2 clientInfo:(id)arg3 ;
-(ICUserIdentity *)identity;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAllowsExpiredBags:(BOOL)arg1 ;
-(void)setIdentityStore:(ICUserIdentityStore *)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)description;
-(id)copyWithBlock:(/*^block*/id)arg1 ;
-(BOOL)allowsExpiredBags;
-(void)setDelegatedIdentity:(ICUserIdentity *)arg1 ;
-(long long)personalizationStyle;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setPersonalizationStyle:(long long)arg1 ;
-(ICUserIdentity *)delegatedIdentity;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithIdentity:(id)arg1 identityStore:(id)arg2 clientInfo:(id)arg3 authenticationProvider:(id)arg4 ;
-(void)setStoreDialogResponseHandler:(ICStoreDialogResponseHandler *)arg1 ;
-(ICStoreDialogResponseHandler *)storeDialogResponseHandler;
@end

