/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ICStoreRequestContext, NSUUID;

@interface ICMusicSubscriptionStatusRequest : NSObject <NSCopying, NSSecureCoding> {

	BOOL _shouldIgnoreCache;
	BOOL _allowsFallbackToExpiredStatus;
	BOOL _allowsFallbackToStatusNeedingReload;
	BOOL _shouldReturnLastKnownStatusOnly;
	BOOL _shouldBypassEnforcementOfPrivacyAcknowledgement;
	ICStoreRequestContext* _storeRequestContext;
	long long _reason;
	long long _carrierBundleProvisioningStyle;
	NSUUID* _requestIdentifier;

}

@property (assign,nonatomic) BOOL shouldBypassEnforcementOfPrivacyAcknowledgement;              //@synthesize shouldBypassEnforcementOfPrivacyAcknowledgement=_shouldBypassEnforcementOfPrivacyAcknowledgement - In the implementation block
@property (nonatomic,copy) ICStoreRequestContext * storeRequestContext;                         //@synthesize storeRequestContext=_storeRequestContext - In the implementation block
@property (assign,nonatomic) long long reason;                                                  //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreCache;                                            //@synthesize shouldIgnoreCache=_shouldIgnoreCache - In the implementation block
@property (assign,nonatomic) BOOL allowsFallbackToExpiredStatus;                                //@synthesize allowsFallbackToExpiredStatus=_allowsFallbackToExpiredStatus - In the implementation block
@property (assign,nonatomic) BOOL allowsFallbackToStatusNeedingReload;                          //@synthesize allowsFallbackToStatusNeedingReload=_allowsFallbackToStatusNeedingReload - In the implementation block
@property (assign,nonatomic) BOOL shouldReturnLastKnownStatusOnly;                              //@synthesize shouldReturnLastKnownStatusOnly=_shouldReturnLastKnownStatusOnly - In the implementation block
@property (assign,nonatomic) long long carrierBundleProvisioningStyle;                          //@synthesize carrierBundleProvisioningStyle=_carrierBundleProvisioningStyle - In the implementation block
@property (nonatomic,readonly) NSUUID * requestIdentifier;                                      //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)shouldIgnoreCache;
-(NSUUID *)requestIdentifier;
-(void)setShouldIgnoreCache:(BOOL)arg1 ;
-(BOOL)shouldReturnLastKnownStatusOnly;
-(void)encodeWithCoder:(id)arg1 ;
-(ICStoreRequestContext *)storeRequestContext;
-(void)setCarrierBundleProvisioningStyle:(long long)arg1 ;
-(id)initWithStoreRequestContext:(id)arg1 ;
-(id)description;
-(long long)reason;
-(void)setStoreRequestContext:(ICStoreRequestContext *)arg1 ;
-(void)setAllowsFallbackToStatusNeedingReload:(BOOL)arg1 ;
-(void)setShouldReturnLastKnownStatusOnly:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setShouldBypassEnforcementOfPrivacyAcknowledgement:(BOOL)arg1 ;
-(BOOL)allowsFallbackToExpiredStatus;
-(BOOL)allowsFallbackToStatusNeedingReload;
-(void)setAllowsFallbackToExpiredStatus:(BOOL)arg1 ;
-(void)setReason:(long long)arg1 ;
-(BOOL)shouldBypassEnforcementOfPrivacyAcknowledgement;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)carrierBundleProvisioningStyle;
-(BOOL)isEqual:(id)arg1 ;
@end

