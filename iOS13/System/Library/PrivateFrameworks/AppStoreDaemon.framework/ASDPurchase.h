/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, NSNumber, NSDictionary;

@interface ASDPurchase : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _buyParameters;
	BOOL _createsJobs;
	BOOL _displaysOnLockScreen;
	BOOL _installUniversalVariant;
	BOOL _isDSIDLess;
	BOOL _isUpdate;
	BOOL _isBackgroundUpdate;
	BOOL _isRedownload;
	BOOL _shouldCancelForInstalledBundleItems;
	BOOL _isCompatibilityUpdate;
	BOOL _isRefresh;
	BOOL _sendGUID;
	NSString* _bundleID;
	NSNumber* _itemID;
	NSString* _itemName;
	NSString* _vendorName;
	NSDictionary* _additionalHeaders;
	NSNumber* _accountIdentifier;
	NSString* _affiliateIdentifier;
	NSString* _bagKey;
	long long _extensionsToEnable;
	NSArray* _gratisIdentifiers;
	NSString* _referrerName;
	NSString* _referrerURL;
	long long _purchaseID;
	NSArray* _requiredCapabilities;
	NSString* _preflightURLString;
	NSString* _clientID;
	NSNumber* _ownerDSID;
	NSNumber* _purchaserDSID;

}

@property (nonatomic,copy) NSString * clientID;                                     //@synthesize clientID=_clientID - In the implementation block
@property (assign,nonatomic) BOOL isCompatibilityUpdate;                            //@synthesize isCompatibilityUpdate=_isCompatibilityUpdate - In the implementation block
@property (assign,nonatomic) BOOL isRefresh;                                        //@synthesize isRefresh=_isRefresh - In the implementation block
@property (nonatomic,copy) NSNumber * ownerDSID;                                    //@synthesize ownerDSID=_ownerDSID - In the implementation block
@property (nonatomic,copy) NSNumber * purchaserDSID;                                //@synthesize purchaserDSID=_purchaserDSID - In the implementation block
@property (assign,nonatomic) BOOL sendGUID;                                         //@synthesize sendGUID=_sendGUID - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                                     //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * buyParameters; 
@property (nonatomic,copy) NSNumber * itemID;                                       //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,copy) NSString * itemName;                                     //@synthesize itemName=_itemName - In the implementation block
@property (nonatomic,copy) NSString * vendorName;                                   //@synthesize vendorName=_vendorName - In the implementation block
@property (nonatomic,copy) NSDictionary * additionalHeaders;                        //@synthesize additionalHeaders=_additionalHeaders - In the implementation block
@property (nonatomic,copy) NSNumber * accountIdentifier;                            //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * affiliateIdentifier;                          //@synthesize affiliateIdentifier=_affiliateIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bagKey;                                       //@synthesize bagKey=_bagKey - In the implementation block
@property (assign,nonatomic) BOOL createsJobs;                                      //@synthesize createsJobs=_createsJobs - In the implementation block
@property (assign,nonatomic) BOOL displaysOnLockScreen;                             //@synthesize displaysOnLockScreen=_displaysOnLockScreen - In the implementation block
@property (assign) long long extensionsToEnable;                                    //@synthesize extensionsToEnable=_extensionsToEnable - In the implementation block
@property (nonatomic,copy) NSArray * gratisIdentifiers;                             //@synthesize gratisIdentifiers=_gratisIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL installUniversalVariant;                          //@synthesize installUniversalVariant=_installUniversalVariant - In the implementation block
@property (assign,nonatomic) BOOL isDSIDLess;                                       //@synthesize isDSIDLess=_isDSIDLess - In the implementation block
@property (assign,nonatomic) BOOL isUpdate;                                         //@synthesize isUpdate=_isUpdate - In the implementation block
@property (assign,nonatomic) BOOL isBackgroundUpdate;                               //@synthesize isBackgroundUpdate=_isBackgroundUpdate - In the implementation block
@property (nonatomic,copy) NSString * referrerName;                                 //@synthesize referrerName=_referrerName - In the implementation block
@property (nonatomic,copy) NSString * referrerURL;                                  //@synthesize referrerURL=_referrerURL - In the implementation block
@property (assign,nonatomic) BOOL isRedownload;                                     //@synthesize isRedownload=_isRedownload - In the implementation block
@property (assign) long long purchaseID;                                            //@synthesize purchaseID=_purchaseID - In the implementation block
@property (nonatomic,copy) NSArray * requiredCapabilities;                          //@synthesize requiredCapabilities=_requiredCapabilities - In the implementation block
@property (assign,nonatomic) BOOL shouldCancelForInstalledBundleItems;              //@synthesize shouldCancelForInstalledBundleItems=_shouldCancelForInstalledBundleItems - In the implementation block
@property (copy) NSString * preflightURLString;                                     //@synthesize preflightURLString=_preflightURLString - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)referrerURL;
-(void)setReferrerURL:(NSString *)arg1 ;
-(NSString *)bundleID;
-(NSNumber *)itemID;
-(NSString *)vendorName;
-(NSString *)itemName;
-(NSNumber *)purchaserDSID;
-(void)setBundleID:(NSString *)arg1 ;
-(NSNumber *)accountIdentifier;
-(void)setItemID:(NSNumber *)arg1 ;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(void)setClientID:(NSString *)arg1 ;
-(NSString *)clientID;
-(NSArray *)requiredCapabilities;
-(NSString *)bagKey;
-(BOOL)isUpdate;
-(void)setRequiredCapabilities:(NSArray *)arg1 ;
-(NSString *)buyParameters;
-(void)setDisplaysOnLockScreen:(BOOL)arg1 ;
-(void)setBuyParameters:(NSString *)arg1 ;
-(NSDictionary *)additionalHeaders;
-(void)setAdditionalHeaders:(NSDictionary *)arg1 ;
-(void)setIsUpdate:(BOOL)arg1 ;
-(void)setVendorName:(NSString *)arg1 ;
-(void)setAffiliateIdentifier:(NSString *)arg1 ;
-(NSString *)affiliateIdentifier;
-(void)setCreatesJobs:(BOOL)arg1 ;
-(BOOL)createsJobs;
-(BOOL)displaysOnLockScreen;
-(NSArray *)gratisIdentifiers;
-(void)setGratisIdentifiers:(NSArray *)arg1 ;
-(void)setItemName:(NSString *)arg1 ;
-(void)setIsRedownload:(BOOL)arg1 ;
-(void)setBagKey:(NSString *)arg1 ;
-(void)setExtensionsToEnable:(long long)arg1 ;
-(void)setShouldCancelForInstalledBundleItems:(BOOL)arg1 ;
-(void)setReferrerName:(NSString *)arg1 ;
-(void)setPurchaserDSID:(NSNumber *)arg1 ;
-(long long)purchaseID;
-(void)setPurchaseID:(long long)arg1 ;
-(void)appendValue:(id)arg1 forBuyParameter:(id)arg2 ;
-(id)firstValueForBuyParameter:(id)arg1 ;
-(long long)extensionsToEnable;
-(BOOL)installUniversalVariant;
-(void)setInstallUniversalVariant:(BOOL)arg1 ;
-(BOOL)isDSIDLess;
-(void)setIsDSIDLess:(BOOL)arg1 ;
-(BOOL)isBackgroundUpdate;
-(void)setIsBackgroundUpdate:(BOOL)arg1 ;
-(NSString *)referrerName;
-(BOOL)isRedownload;
-(BOOL)shouldCancelForInstalledBundleItems;
-(NSString *)preflightURLString;
-(void)setPreflightURLString:(NSString *)arg1 ;
-(BOOL)isCompatibilityUpdate;
-(void)setIsCompatibilityUpdate:(BOOL)arg1 ;
-(BOOL)isRefresh;
-(void)setIsRefresh:(BOOL)arg1 ;
-(NSNumber *)ownerDSID;
-(void)setOwnerDSID:(NSNumber *)arg1 ;
-(BOOL)sendGUID;
-(void)setSendGUID:(BOOL)arg1 ;
@end

