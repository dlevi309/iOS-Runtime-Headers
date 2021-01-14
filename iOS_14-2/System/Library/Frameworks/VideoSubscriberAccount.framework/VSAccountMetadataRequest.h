/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface VSAccountMetadataRequest : NSObject <NSCopying, NSSecureCoding> {

	BOOL _includeAccountProviderIdentifier;
	BOOL _includeAuthenticationExpirationDate;
	BOOL _interruptionAllowed;
	BOOL _forceAuthentication;
	NSString* _channelIdentifier;
	NSArray* _supportedAccountProviderIdentifiers;
	NSArray* _featuredAccountProviderIdentifiers;
	NSString* _verificationToken;
	NSString* _localizedVideoTitle;
	NSArray* _attributeNames;
	NSArray* _supportedAuthenticationSchemes;
	NSString* _accountProviderAuthenticationToken;
	NSArray* _applicationAccountProviders;

}

@property (nonatomic,copy) NSString * channelIdentifier;                                         //@synthesize channelIdentifier=_channelIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * supportedAccountProviderIdentifiers;                        //@synthesize supportedAccountProviderIdentifiers=_supportedAccountProviderIdentifiers - In the implementation block
@property (nonatomic,copy) NSArray * featuredAccountProviderIdentifiers;                         //@synthesize featuredAccountProviderIdentifiers=_featuredAccountProviderIdentifiers - In the implementation block
@property (nonatomic,copy) NSString * verificationToken;                                         //@synthesize verificationToken=_verificationToken - In the implementation block
@property (assign,nonatomic) BOOL includeAccountProviderIdentifier;                              //@synthesize includeAccountProviderIdentifier=_includeAccountProviderIdentifier - In the implementation block
@property (assign,nonatomic) BOOL includeAuthenticationExpirationDate;                           //@synthesize includeAuthenticationExpirationDate=_includeAuthenticationExpirationDate - In the implementation block
@property (nonatomic,copy) NSString * localizedVideoTitle;                                       //@synthesize localizedVideoTitle=_localizedVideoTitle - In the implementation block
@property (assign,getter=isInterruptionAllowed,nonatomic) BOOL interruptionAllowed;              //@synthesize interruptionAllowed=_interruptionAllowed - In the implementation block
@property (assign,nonatomic) BOOL forceAuthentication;                                           //@synthesize forceAuthentication=_forceAuthentication - In the implementation block
@property (nonatomic,copy) NSArray * attributeNames;                                             //@synthesize attributeNames=_attributeNames - In the implementation block
@property (nonatomic,copy) NSArray * supportedAuthenticationSchemes;                             //@synthesize supportedAuthenticationSchemes=_supportedAuthenticationSchemes - In the implementation block
@property (nonatomic,copy) NSString * accountProviderAuthenticationToken;                        //@synthesize accountProviderAuthenticationToken=_accountProviderAuthenticationToken - In the implementation block
@property (nonatomic,copy) NSArray * applicationAccountProviders;                                //@synthesize applicationAccountProviders=_applicationAccountProviders - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSString *)channelIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setChannelIdentifier:(NSString *)arg1 ;
-(id)description;
-(NSArray *)attributeNames;
-(NSString *)verificationToken;
-(void)setVerificationToken:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isInterruptionAllowed;
-(NSArray *)supportedAccountProviderIdentifiers;
-(NSArray *)featuredAccountProviderIdentifiers;
-(NSArray *)applicationAccountProviders;
-(NSArray *)supportedAuthenticationSchemes;
-(NSString *)localizedVideoTitle;
-(NSString *)accountProviderAuthenticationToken;
-(void)setSupportedAuthenticationSchemes:(NSArray *)arg1 ;
-(void)setAttributeNames:(NSArray *)arg1 ;
-(void)setSupportedAccountProviderIdentifiers:(NSArray *)arg1 ;
-(void)setFeaturedAccountProviderIdentifiers:(NSArray *)arg1 ;
-(BOOL)includeAccountProviderIdentifier;
-(void)setIncludeAccountProviderIdentifier:(BOOL)arg1 ;
-(BOOL)includeAuthenticationExpirationDate;
-(void)setIncludeAuthenticationExpirationDate:(BOOL)arg1 ;
-(void)setLocalizedVideoTitle:(NSString *)arg1 ;
-(void)setInterruptionAllowed:(BOOL)arg1 ;
-(BOOL)forceAuthentication;
-(void)setForceAuthentication:(BOOL)arg1 ;
-(void)setAccountProviderAuthenticationToken:(NSString *)arg1 ;
-(void)setApplicationAccountProviders:(NSArray *)arg1 ;
@end

