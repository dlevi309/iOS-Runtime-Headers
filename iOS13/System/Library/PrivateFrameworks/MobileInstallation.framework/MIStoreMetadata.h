/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileInstallation.framework/MobileInstallation
*/

#import <MobileInstallation/MobileInstallation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSArray, NSDictionary;

@interface MIStoreMetadata : NSObject <NSSecureCoding, NSCopying> {

	BOOL _hasMessagesExtension;
	BOOL _purchasedRedownload;
	BOOL _launchProhibited;
	BOOL _gameCenterEnabled;
	BOOL _gameCenterEverEnabled;
	BOOL _isAutoDownload;
	BOOL _sideLoadedDeviceBasedVPP;
	BOOL _deviceBasedVPP;
	BOOL _factoryInstall;
	NSString* _iAdAttribution;
	NSString* _iAdConversionDate;
	NSString* _iAdImpressionDate;
	NSString* _artistName;
	NSNumber* _betaExternalVersionIdentifier;
	NSString* _bundleVersion;
	NSString* _bundleShortVersionString;
	NSString* _purchaseDate;
	NSString* _appleID;
	NSNumber* _DSPersonID;
	NSNumber* _downloaderID;
	NSNumber* _familyID;
	NSNumber* _purchaserID;
	NSString* _altDSID;
	NSNumber* _initialODRSize;
	NSNumber* _itemID;
	NSString* _itemName;
	NSString* _kind;
	NSString* _label;
	NSString* _ratingLabel;
	NSNumber* _ratingRank;
	NSString* _releaseDate;
	NSString* _softwareVersionBundleID;
	NSNumber* _softwareVersionExternalIdentifier;
	NSString* _sourceApp;
	NSString* _storeCohort;
	NSNumber* _storefront;
	NSString* _variantID;
	NSString* _genre;
	NSNumber* _genreID;
	NSArray* _subGenres;
	NSString* _referrerURL;
	NSString* _referrerApp;
	NSString* _enterpriseInstallURL;
	NSString* _redownloadParams;
	NSDictionary* _nameTranscriptions;
	NSString* _md5;

}

@property (nonatomic,copy) NSString * iAdAttribution;                                            //@synthesize iAdAttribution=_iAdAttribution - In the implementation block
@property (nonatomic,copy) NSString * iAdConversionDate;                                         //@synthesize iAdConversionDate=_iAdConversionDate - In the implementation block
@property (nonatomic,copy) NSString * iAdImpressionDate;                                         //@synthesize iAdImpressionDate=_iAdImpressionDate - In the implementation block
@property (nonatomic,copy) NSString * artistName;                                                //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,retain) NSNumber * betaExternalVersionIdentifier;                           //@synthesize betaExternalVersionIdentifier=_betaExternalVersionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;                                             //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,copy) NSString * bundleShortVersionString;                                  //@synthesize bundleShortVersionString=_bundleShortVersionString - In the implementation block
@property (nonatomic,copy) NSString * purchaseDate;                                              //@synthesize purchaseDate=_purchaseDate - In the implementation block
@property (nonatomic,copy) NSString * appleID;                                                   //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,retain) NSNumber * DSPersonID;                                              //@synthesize DSPersonID=_DSPersonID - In the implementation block
@property (nonatomic,retain) NSNumber * downloaderID;                                            //@synthesize downloaderID=_downloaderID - In the implementation block
@property (nonatomic,retain) NSNumber * familyID;                                                //@synthesize familyID=_familyID - In the implementation block
@property (nonatomic,retain) NSNumber * purchaserID;                                             //@synthesize purchaserID=_purchaserID - In the implementation block
@property (nonatomic,copy) NSString * altDSID;                                                   //@synthesize altDSID=_altDSID - In the implementation block
@property (assign,nonatomic) BOOL hasMessagesExtension;                                          //@synthesize hasMessagesExtension=_hasMessagesExtension - In the implementation block
@property (nonatomic,retain) NSNumber * initialODRSize;                                          //@synthesize initialODRSize=_initialODRSize - In the implementation block
@property (assign,getter=isPurchasedRedownload,nonatomic) BOOL purchasedRedownload;              //@synthesize purchasedRedownload=_purchasedRedownload - In the implementation block
@property (nonatomic,retain) NSNumber * itemID;                                                  //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,copy) NSString * itemName;                                                  //@synthesize itemName=_itemName - In the implementation block
@property (nonatomic,copy) NSString * kind;                                                      //@synthesize kind=_kind - In the implementation block
@property (nonatomic,copy) NSString * label;                                                     //@synthesize label=_label - In the implementation block
@property (assign,getter=isLaunchProhibited,nonatomic) BOOL launchProhibited;                    //@synthesize launchProhibited=_launchProhibited - In the implementation block
@property (nonatomic,copy) NSString * ratingLabel;                                               //@synthesize ratingLabel=_ratingLabel - In the implementation block
@property (nonatomic,retain) NSNumber * ratingRank;                                              //@synthesize ratingRank=_ratingRank - In the implementation block
@property (nonatomic,copy) NSString * releaseDate;                                               //@synthesize releaseDate=_releaseDate - In the implementation block
@property (nonatomic,copy) NSString * softwareVersionBundleID;                                   //@synthesize softwareVersionBundleID=_softwareVersionBundleID - In the implementation block
@property (nonatomic,retain) NSNumber * softwareVersionExternalIdentifier;                       //@synthesize softwareVersionExternalIdentifier=_softwareVersionExternalIdentifier - In the implementation block
@property (nonatomic,copy) NSString * sourceApp;                                                 //@synthesize sourceApp=_sourceApp - In the implementation block
@property (nonatomic,copy) NSString * storeCohort;                                               //@synthesize storeCohort=_storeCohort - In the implementation block
@property (nonatomic,retain) NSNumber * storefront;                                              //@synthesize storefront=_storefront - In the implementation block
@property (nonatomic,copy) NSString * variantID;                                                 //@synthesize variantID=_variantID - In the implementation block
@property (nonatomic,copy) NSString * genre;                                                     //@synthesize genre=_genre - In the implementation block
@property (nonatomic,retain) NSNumber * genreID;                                                 //@synthesize genreID=_genreID - In the implementation block
@property (nonatomic,copy) NSArray * subGenres;                                                  //@synthesize subGenres=_subGenres - In the implementation block
@property (assign,getter=isGameCenterEnabled,nonatomic) BOOL gameCenterEnabled;                  //@synthesize gameCenterEnabled=_gameCenterEnabled - In the implementation block
@property (assign,nonatomic) BOOL gameCenterEverEnabled;                                         //@synthesize gameCenterEverEnabled=_gameCenterEverEnabled - In the implementation block
@property (assign,nonatomic) BOOL isAutoDownload;                                                //@synthesize isAutoDownload=_isAutoDownload - In the implementation block
@property (nonatomic,copy) NSString * referrerURL;                                               //@synthesize referrerURL=_referrerURL - In the implementation block
@property (nonatomic,copy) NSString * referrerApp;                                               //@synthesize referrerApp=_referrerApp - In the implementation block
@property (assign,nonatomic) BOOL sideLoadedDeviceBasedVPP;                                      //@synthesize sideLoadedDeviceBasedVPP=_sideLoadedDeviceBasedVPP - In the implementation block
@property (assign,nonatomic) BOOL deviceBasedVPP;                                                //@synthesize deviceBasedVPP=_deviceBasedVPP - In the implementation block
@property (nonatomic,copy) NSString * enterpriseInstallURL;                                      //@synthesize enterpriseInstallURL=_enterpriseInstallURL - In the implementation block
@property (nonatomic,copy) NSString * redownloadParams;                                          //@synthesize redownloadParams=_redownloadParams - In the implementation block
@property (nonatomic,copy) NSDictionary * nameTranscriptions;                                    //@synthesize nameTranscriptions=_nameTranscriptions - In the implementation block
@property (assign,getter=isFactoryInstall,nonatomic) BOOL factoryInstall;                        //@synthesize factoryInstall=_factoryInstall - In the implementation block
@property (nonatomic,copy) NSString * md5;                                                       //@synthesize md5=_md5 - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)metadataFromDictionary:(id)arg1 ;
+(id)metadataFromPlistData:(id)arg1 error:(id*)arg2 ;
+(id)metadataFromPlistAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)referrerURL;
-(void)setReferrerURL:(NSString *)arg1 ;
-(NSString *)kind;
-(void)setKind:(NSString *)arg1 ;
-(NSNumber *)ratingRank;
-(BOOL)isLaunchProhibited;
-(NSString *)bundleVersion;
-(NSNumber *)itemID;
-(NSNumber *)betaExternalVersionIdentifier;
-(BOOL)isGameCenterEnabled;
-(BOOL)gameCenterEverEnabled;
-(NSString *)itemName;
-(NSString *)genre;
-(NSNumber *)genreID;
-(NSNumber *)familyID;
-(NSString *)ratingLabel;
-(NSNumber *)storefront;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)setItemID:(NSNumber *)arg1 ;
-(NSString *)appleID;
-(void)setMd5:(NSString *)arg1 ;
-(NSString *)md5;
-(void)setBundleVersion:(NSString *)arg1 ;
-(void)setStorefront:(NSNumber *)arg1 ;
-(void)setAppleID:(NSString *)arg1 ;
-(NSString *)artistName;
-(void)setArtistName:(NSString *)arg1 ;
-(NSString *)releaseDate;
-(void)setReleaseDate:(NSString *)arg1 ;
-(void)setGenre:(NSString *)arg1 ;
-(void)setRatingLabel:(NSString *)arg1 ;
-(BOOL)hasMessagesExtension;
-(void)setHasMessagesExtension:(BOOL)arg1 ;
-(NSString *)purchaseDate;
-(void)setBetaExternalVersionIdentifier:(NSNumber *)arg1 ;
-(void)setPurchaseDate:(NSString *)arg1 ;
-(void)setDeviceBasedVPP:(BOOL)arg1 ;
-(void)setLaunchProhibited:(BOOL)arg1 ;
-(NSString *)redownloadParams;
-(void)setInitialODRSize:(NSNumber *)arg1 ;
-(void)setGenreID:(NSNumber *)arg1 ;
-(void)setSoftwareVersionExternalIdentifier:(NSNumber *)arg1 ;
-(void)setStoreCohort:(NSString *)arg1 ;
-(void)setVariantID:(NSString *)arg1 ;
-(void)setItemName:(NSString *)arg1 ;
-(NSString *)bundleShortVersionString;
-(void)setGameCenterEnabled:(BOOL)arg1 ;
-(void)setIAdAttribution:(NSString *)arg1 ;
-(void)setIAdConversionDate:(NSString *)arg1 ;
-(void)setIAdImpressionDate:(NSString *)arg1 ;
-(void)setBundleShortVersionString:(NSString *)arg1 ;
-(void)setDSPersonID:(NSNumber *)arg1 ;
-(void)setDownloaderID:(NSNumber *)arg1 ;
-(void)setFamilyID:(NSNumber *)arg1 ;
-(void)setPurchaserID:(NSNumber *)arg1 ;
-(void)setPurchasedRedownload:(BOOL)arg1 ;
-(void)setRatingRank:(NSNumber *)arg1 ;
-(void)setSoftwareVersionBundleID:(NSString *)arg1 ;
-(void)setSourceApp:(NSString *)arg1 ;
-(void)setSubGenres:(NSArray *)arg1 ;
-(void)setGameCenterEverEnabled:(BOOL)arg1 ;
-(void)setIsAutoDownload:(BOOL)arg1 ;
-(void)setReferrerApp:(NSString *)arg1 ;
-(void)setSideLoadedDeviceBasedVPP:(BOOL)arg1 ;
-(void)setEnterpriseInstallURL:(NSString *)arg1 ;
-(void)setRedownloadParams:(NSString *)arg1 ;
-(void)setFactoryInstall:(BOOL)arg1 ;
-(void)setNameTranscriptions:(NSDictionary *)arg1 ;
-(NSString *)iAdAttribution;
-(NSString *)iAdConversionDate;
-(NSString *)iAdImpressionDate;
-(NSNumber *)DSPersonID;
-(NSNumber *)downloaderID;
-(NSNumber *)purchaserID;
-(NSNumber *)initialODRSize;
-(BOOL)isPurchasedRedownload;
-(NSString *)softwareVersionBundleID;
-(NSNumber *)softwareVersionExternalIdentifier;
-(NSString *)sourceApp;
-(NSString *)storeCohort;
-(NSString *)variantID;
-(NSArray *)subGenres;
-(BOOL)isAutoDownload;
-(NSString *)referrerApp;
-(BOOL)sideLoadedDeviceBasedVPP;
-(BOOL)deviceBasedVPP;
-(NSString *)enterpriseInstallURL;
-(NSDictionary *)nameTranscriptions;
-(BOOL)isFactoryInstall;
@end

