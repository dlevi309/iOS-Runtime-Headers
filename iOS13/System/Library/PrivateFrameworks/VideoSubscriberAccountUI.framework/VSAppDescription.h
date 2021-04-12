/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)displayName;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)buyParams;
-(void)setBuyParams:(NSString *)arg1 ;
-(UIImage *)icon;
-(void)setIcon:(UIImage *)arg1 ;
-(NSString *)rating;
-(void)setRating:(NSString *)arg1 ;
-(NSNumber *)adamID;
-(void)setAdamID:(NSNumber *)arg1 ;
-(NSNumber *)contentRank;
-(NSString *)sellerName;
-(void)setExternalVersionID:(NSString *)arg1 ;
-(NSString *)externalVersionID;
-(NSURL *)appStoreURL;
-(void)setAppStoreURL:(NSURL *)arg1 ;
-(NSString *)artworkURLTemplate;
-(NSString *)shortenedDisplayName;
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

