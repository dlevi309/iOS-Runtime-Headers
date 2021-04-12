/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL _forceWatchInstall;
	BOOL _iOSBinaryMacOSCompatible;
	BOOL _isDSIDLess;
	BOOL _isUpdate;
	BOOL _isBackgroundUpdate;
	BOOL _isRedownload;
	BOOL _shouldCancelForInstalledBundleItems;
	BOOL _expectsIOSAppOnMac;
	BOOL _installUniversalVariant;
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
	long long _softwarePlatform;
	long long _purchaseID;
	NSArray* _requiredCapabilities;
	NSString* _preflightURLString;
	NSString* _clientID;
	NSNumber* _ownerDSID;
	NSNumber* _purchaserDSID;

}

@property (assign,nonatomic) BOOL expectsIOSAppOnMac;                                                      //@synthesize expectsIOSAppOnMac=_expectsIOSAppOnMac - In the implementation block
@property (assign,nonatomic) BOOL installUniversalVariant;                                                 //@synthesize installUniversalVariant=_installUniversalVariant - In the implementation block
@property (nonatomic,copy) NSString * clientID;                                                            //@synthesize clientID=_clientID - In the implementation block
@property (assign,nonatomic) BOOL isCompatibilityUpdate;                                                   //@synthesize isCompatibilityUpdate=_isCompatibilityUpdate - In the implementation block
@property (assign,nonatomic) BOOL isRefresh;                                                               //@synthesize isRefresh=_isRefresh - In the implementation block
@property (nonatomic,copy) NSNumber * ownerDSID;                                                           //@synthesize ownerDSID=_ownerDSID - In the implementation block
@property (nonatomic,copy) NSNumber * purchaserDSID;                                                       //@synthesize purchaserDSID=_purchaserDSID - In the implementation block
@property (assign,nonatomic) BOOL sendGUID;                                                                //@synthesize sendGUID=_sendGUID - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                                                            //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * buyParameters; 
@property (nonatomic,copy) NSNumber * itemID;                                                              //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,copy) NSString * itemName;                                                            //@synthesize itemName=_itemName - In the implementation block
@property (nonatomic,copy) NSString * vendorName;                                                          //@synthesize vendorName=_vendorName - In the implementation block
@property (nonatomic,copy) NSDictionary * additionalHeaders;                                               //@synthesize additionalHeaders=_additionalHeaders - In the implementation block
@property (nonatomic,copy) NSNumber * accountIdentifier;                                                   //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * affiliateIdentifier;                                                 //@synthesize affiliateIdentifier=_affiliateIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bagKey;                                                              //@synthesize bagKey=_bagKey - In the implementation block
@property (assign,nonatomic) BOOL createsJobs;                                                             //@synthesize createsJobs=_createsJobs - In the implementation block
@property (assign,nonatomic) BOOL displaysOnLockScreen;                                                    //@synthesize displaysOnLockScreen=_displaysOnLockScreen - In the implementation block
@property (assign) long long extensionsToEnable;                                                           //@synthesize extensionsToEnable=_extensionsToEnable - In the implementation block
@property (assign,nonatomic) BOOL forceWatchInstall;                                                       //@synthesize forceWatchInstall=_forceWatchInstall - In the implementation block
@property (nonatomic,copy) NSArray * gratisIdentifiers;                                                    //@synthesize gratisIdentifiers=_gratisIdentifiers - In the implementation block
@property (assign,getter=isIOSBinaryMacOSCompatible,nonatomic) BOOL iOSBinaryMacOSCompatible;              //@synthesize iOSBinaryMacOSCompatible=_iOSBinaryMacOSCompatible - In the implementation block
@property (assign,nonatomic) BOOL isDSIDLess;                                                              //@synthesize isDSIDLess=_isDSIDLess - In the implementation block
@property (assign,nonatomic) BOOL isUpdate;                                                                //@synthesize isUpdate=_isUpdate - In the implementation block
@property (assign,nonatomic) BOOL isBackgroundUpdate;                                                      //@synthesize isBackgroundUpdate=_isBackgroundUpdate - In the implementation block
@property (nonatomic,copy) NSString * referrerName;                                                        //@synthesize referrerName=_referrerName - In the implementation block
@property (nonatomic,copy) NSString * referrerURL;                                                         //@synthesize referrerURL=_referrerURL - In the implementation block
@property (assign,nonatomic) BOOL isRedownload;                                                            //@synthesize isRedownload=_isRedownload - In the implementation block
@property (assign,nonatomic) long long softwarePlatform;                                                   //@synthesize softwarePlatform=_softwarePlatform - In the implementation block
@property (assign) long long purchaseID;                                                                   //@synthesize purchaseID=_purchaseID - In the implementation block
@property (nonatomic,copy) NSArray * requiredCapabilities;                                                 //@synthesize requiredCapabilities=_requiredCapabilities - In the implementation block
@property (assign,nonatomic) BOOL shouldCancelForInstalledBundleItems;                                     //@synthesize shouldCancelForInstalledBundleItems=_shouldCancelForInstalledBundleItems - In the implementation block
@property (copy) NSString * preflightURLString;                                                            //@synthesize preflightURLString=_preflightURLString - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isUpdate;
-(NSString *)clientID;
-(NSString *)vendorName;
-(void)setClientID:(NSString *)arg1 ;
-(void)setItemID:(NSNumber *)arg1 ;
-(void)setPurchaseID:(long long)arg1 ;
-(BOOL)isIOSBinaryMacOSCompatible;
-(void)setIOSBinaryMacOSCompatible:(BOOL)arg1 ;
-(id)init;
-(void)setBundleID:(NSString *)arg1 ;
-(BOOL)isDSIDLess;
-(void)appendValue:(id)arg1 forBuyParameter:(id)arg2 ;
-(id)firstValueForBuyParameter:(id)arg1 ;
-(long long)extensionsToEnable;
-(void)setExtensionsToEnable:(long long)arg1 ;
-(BOOL)forceWatchInstall;
-(void)setForceWatchInstall:(BOOL)arg1 ;
-(void)setIsDSIDLess:(BOOL)arg1 ;
-(BOOL)isBackgroundUpdate;
-(void)setIsBackgroundUpdate:(BOOL)arg1 ;
-(BOOL)sendGUID;
-(NSString *)referrerName;
-(void)setReferrerName:(NSString *)arg1 ;
-(BOOL)isRedownload;
-(void)setIsRedownload:(BOOL)arg1 ;
-(BOOL)shouldCancelForInstalledBundleItems;
-(void)setShouldCancelForInstalledBundleItems:(BOOL)arg1 ;
-(NSString *)preflightURLString;
-(void)setPreflightURLString:(NSString *)arg1 ;
-(BOOL)expectsIOSAppOnMac;
-(void)setExpectsIOSAppOnMac:(BOOL)arg1 ;
-(BOOL)installUniversalVariant;
-(void)setInstallUniversalVariant:(BOOL)arg1 ;
-(void)setIsRefresh:(BOOL)arg1 ;
-(BOOL)isCompatibilityUpdate;
-(void)setIsCompatibilityUpdate:(BOOL)arg1 ;
-(void)setOwnerDSID:(NSNumber *)arg1 ;
-(void)setSendGUID:(BOOL)arg1 ;
-(void)setIsUpdate:(BOOL)arg1 ;
-(NSNumber *)accountIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)purchaseID;
-(NSNumber *)purchaserDSID;
-(NSArray *)requiredCapabilities;
-(NSString *)buyParameters;
-(NSString *)itemName;
-(id)description;
-(void)setPurchaserDSID:(NSNumber *)arg1 ;
-(NSNumber *)itemID;
-(NSDictionary *)additionalHeaders;
-(void)setAdditionalHeaders:(NSDictionary *)arg1 ;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(void)setBuyParameters:(NSString *)arg1 ;
-(NSString *)bundleID;
-(void)setCreatesJobs:(BOOL)arg1 ;
-(BOOL)createsJobs;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)referrerURL;
-(NSString *)affiliateIdentifier;
-(BOOL)displaysOnLockScreen;
-(void)setAffiliateIdentifier:(NSString *)arg1 ;
-(NSArray *)gratisIdentifiers;
-(void)setGratisIdentifiers:(NSArray *)arg1 ;
-(NSNumber *)ownerDSID;
-(void)setDisplaysOnLockScreen:(BOOL)arg1 ;
-(void)setBagKey:(NSString *)arg1 ;
-(BOOL)isRefresh;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVendorName:(NSString *)arg1 ;
-(void)setItemName:(NSString *)arg1 ;
-(void)setReferrerURL:(NSString *)arg1 ;
-(long long)softwarePlatform;
-(void)setSoftwarePlatform:(long long)arg1 ;
-(NSString *)bagKey;
-(void)setRequiredCapabilities:(NSArray *)arg1 ;
@end

