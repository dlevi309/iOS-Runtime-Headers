/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/


#import <VideoSubscriberAccountUI/VideoSubscriberAccountUI-Structs.h>
@class NSString, NSNumber, NSURL, UIImage;

@interface VSAppDescription : NSObject {

	BOOL _offersInAppPurchases;
	NSString* _displayName;
	NSNumber* _adamID;
	NSString* _buyParams;
	NSString* _bundleID;
	NSString* _sellerName;
	NSString* _externalVersionID;
	NSURL* _appStoreURL;
	NSURL* _privacyPolicyEndpointURL;
	NSURL* _licenseAgreementEndpointURL;
	NSString* _rating;
	NSNumber* _contentRank;
	NSString* _artworkURLTemplate;
	UIImage* _icon;

}

@property (nonatomic,copy) NSString * displayName;                                //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortenedDisplayName; 
@property (nonatomic,copy) NSNumber * adamID;                                     //@synthesize adamID=_adamID - In the implementation block
@property (nonatomic,copy) NSString * buyParams;                                  //@synthesize buyParams=_buyParams - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                                   //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * sellerName;                                 //@synthesize sellerName=_sellerName - In the implementation block
@property (nonatomic,copy) NSString * externalVersionID;                          //@synthesize externalVersionID=_externalVersionID - In the implementation block
@property (nonatomic,copy) NSURL * appStoreURL;                                   //@synthesize appStoreURL=_appStoreURL - In the implementation block
@property (nonatomic,copy) NSURL * privacyPolicyEndpointURL;                      //@synthesize privacyPolicyEndpointURL=_privacyPolicyEndpointURL - In the implementation block
@property (nonatomic,copy) NSURL * licenseAgreementEndpointURL;                   //@synthesize licenseAgreementEndpointURL=_licenseAgreementEndpointURL - In the implementation block
@property (nonatomic,copy) NSString * rating;                                     //@synthesize rating=_rating - In the implementation block
@property (nonatomic,copy) NSNumber * contentRank;                                //@synthesize contentRank=_contentRank - In the implementation block
@property (assign,nonatomic) BOOL offersInAppPurchases;                           //@synthesize offersInAppPurchases=_offersInAppPurchases - In the implementation block
@property (nonatomic,copy) NSString * artworkURLTemplate;                         //@synthesize artworkURLTemplate=_artworkURLTemplate - In the implementation block
@property (nonatomic,retain) UIImage * icon;                                      //@synthesize icon=_icon - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)rating;
-(id)init;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)externalVersionID;
-(UIImage *)icon;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(void)setRating:(NSString *)arg1 ;
-(void)setExternalVersionID:(NSString *)arg1 ;
-(id)description;
-(void)setAdamID:(NSNumber *)arg1 ;
-(void)setBuyParams:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSNumber *)adamID;
-(NSString *)bundleID;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)appStoreURL;
-(NSString *)shortenedDisplayName;
-(void)setAppStoreURL:(NSURL *)arg1 ;
-(NSString *)buyParams;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(BOOL)isEqual:(id)arg1 ;
-(NSNumber *)contentRank;
-(NSString *)sellerName;
-(NSString *)artworkURLTemplate;
-(void)setArtworkURLTemplate:(NSString *)arg1 ;
-(id)iconURLForSize:(CGSize)arg1 ;
-(void)setSellerName:(NSString *)arg1 ;
-(void)setLicenseAgreementEndpointURL:(NSURL *)arg1 ;
-(void)setPrivacyPolicyEndpointURL:(NSURL *)arg1 ;
-(void)setContentRank:(NSNumber *)arg1 ;
-(void)setOffersInAppPurchases:(BOOL)arg1 ;
-(NSURL *)privacyPolicyEndpointURL;
-(NSURL *)licenseAgreementEndpointURL;
-(BOOL)offersInAppPurchases;
@end

