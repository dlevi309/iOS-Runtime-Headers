/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/


#import <VideoSubscriberAccountUI/VideoSubscriberAccountUI-Structs.h>
@class VSIdentityProvider, NSString, VSAppDescription, NSArray, NSDictionary;

@interface VSSetupFlowConfiguration : NSObject {

	BOOL _shouldSkipSetupEntirely;
	BOOL _shouldOfferAuthenticationFlow;
	BOOL _shouldOfferSoleAuthenticationFlow;
	BOOL _shouldOfferSTBAuthenticationFlow;
	BOOL _canShowSupportedAppsButton;
	VSIdentityProvider* _identityProvider;
	NSString* _providerAccountUsername;
	NSString* _preferredAppID;
	VSAppDescription* _msoAppDescription;
	NSArray* _bundlesIDsToConsent;
	NSDictionary* _vouchersByBundleID;

}

@property (assign,nonatomic) BOOL shouldSkipSetupEntirely;                        //@synthesize shouldSkipSetupEntirely=_shouldSkipSetupEntirely - In the implementation block
@property (assign,nonatomic) BOOL shouldOfferAuthenticationFlow;                  //@synthesize shouldOfferAuthenticationFlow=_shouldOfferAuthenticationFlow - In the implementation block
@property (assign,nonatomic) BOOL shouldOfferSoleAuthenticationFlow;              //@synthesize shouldOfferSoleAuthenticationFlow=_shouldOfferSoleAuthenticationFlow - In the implementation block
@property (assign,nonatomic) BOOL shouldOfferSTBAuthenticationFlow;               //@synthesize shouldOfferSTBAuthenticationFlow=_shouldOfferSTBAuthenticationFlow - In the implementation block
@property (nonatomic,retain) VSIdentityProvider * identityProvider;               //@synthesize identityProvider=_identityProvider - In the implementation block
@property (nonatomic,copy) NSString * providerAccountUsername;                    //@synthesize providerAccountUsername=_providerAccountUsername - In the implementation block
@property (nonatomic,copy) NSString * preferredAppID;                             //@synthesize preferredAppID=_preferredAppID - In the implementation block
@property (nonatomic,retain) VSAppDescription * msoAppDescription;                //@synthesize msoAppDescription=_msoAppDescription - In the implementation block
@property (nonatomic,copy) NSArray * bundlesIDsToConsent;                         //@synthesize bundlesIDsToConsent=_bundlesIDsToConsent - In the implementation block
@property (nonatomic,copy) NSDictionary * vouchersByBundleID;                     //@synthesize vouchersByBundleID=_vouchersByBundleID - In the implementation block
@property (assign,nonatomic) BOOL canShowSupportedAppsButton;                     //@synthesize canShowSupportedAppsButton=_canShowSupportedAppsButton - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(VSIdentityProvider *)identityProvider;
-(void)setIdentityProvider:(VSIdentityProvider *)arg1 ;
-(void)setPreferredAppID:(NSString *)arg1 ;
-(NSString *)preferredAppID;
-(BOOL)shouldSkipSetupEntirely;
-(BOOL)shouldOfferSTBAuthenticationFlow;
-(VSAppDescription *)msoAppDescription;
-(NSString *)providerAccountUsername;
-(void)setProviderAccountUsername:(NSString *)arg1 ;
-(BOOL)shouldOfferSoleAuthenticationFlow;
-(BOOL)canShowSupportedAppsButton;
-(NSArray *)bundlesIDsToConsent;
-(BOOL)shouldOfferAuthenticationFlow;
-(NSDictionary *)vouchersByBundleID;
-(void)setShouldSkipSetupEntirely:(BOOL)arg1 ;
-(void)setMsoAppDescription:(VSAppDescription *)arg1 ;
-(void)setShouldOfferSTBAuthenticationFlow:(BOOL)arg1 ;
-(void)setShouldOfferSoleAuthenticationFlow:(BOOL)arg1 ;
-(void)setVouchersByBundleID:(NSDictionary *)arg1 ;
-(void)setBundlesIDsToConsent:(NSArray *)arg1 ;
-(void)setShouldOfferAuthenticationFlow:(BOOL)arg1 ;
-(void)setCanShowSupportedAppsButton:(BOOL)arg1 ;
@end

