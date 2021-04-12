/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface ASDApplicationMetadata : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isBeta;
	NSString* _accountName;
	NSNumber* _accountID;
	NSString* _altDSID;
	NSString* _artworkPath;
	NSString* _bundleID;
	NSString* _bundleVersion;
	NSString* _cohort;
	NSString* _deviceVendorID;
	NSNumber* _downloaderID;
	NSNumber* _externalVersionIdentifier;
	NSNumber* _installOrder;
	NSNumber* _itemID;
	NSString* _itemName;
	NSNumber* _purchaserDSID;
	NSNumber* _storeFront;
	NSString* _vendorName;
	NSString* _shortVersion;

}

@property (nonatomic,copy) NSString * accountName;                            //@synthesize accountName=_accountName - In the implementation block
@property (nonatomic,copy) NSNumber * accountID;                              //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,copy) NSString * altDSID;                                //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,copy) NSString * artworkPath;                            //@synthesize artworkPath=_artworkPath - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;                           //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;                          //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,copy) NSString * cohort;                                 //@synthesize cohort=_cohort - In the implementation block
@property (nonatomic,copy) NSString * deviceVendorID;                         //@synthesize deviceVendorID=_deviceVendorID - In the implementation block
@property (nonatomic,copy) NSNumber * downloaderID;                           //@synthesize downloaderID=_downloaderID - In the implementation block
@property (nonatomic,copy) NSNumber * externalVersionIdentifier;              //@synthesize externalVersionIdentifier=_externalVersionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isBeta;                                     //@synthesize isBeta=_isBeta - In the implementation block
@property (nonatomic,copy) NSNumber * installOrder;                           //@synthesize installOrder=_installOrder - In the implementation block
@property (nonatomic,copy) NSNumber * itemID;                                 //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,copy) NSString * itemName;                               //@synthesize itemName=_itemName - In the implementation block
@property (nonatomic,copy) NSNumber * purchaserDSID;                          //@synthesize purchaserDSID=_purchaserDSID - In the implementation block
@property (nonatomic,copy) NSNumber * storeFront;                             //@synthesize storeFront=_storeFront - In the implementation block
@property (nonatomic,copy) NSString * vendorName;                             //@synthesize vendorName=_vendorName - In the implementation block
@property (nonatomic,copy) NSString * shortVersion;                           //@synthesize shortVersion=_shortVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleID;
-(NSString *)bundleVersion;
-(NSNumber *)itemID;
-(NSNumber *)externalVersionIdentifier;
-(NSString *)vendorName;
-(NSString *)itemName;
-(NSNumber *)purchaserDSID;
-(NSNumber *)storeFront;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(void)setItemID:(NSNumber *)arg1 ;
-(NSString *)accountName;
-(NSNumber *)accountID;
-(void)setAccountID:(NSNumber *)arg1 ;
-(BOOL)isBeta;
-(void)setBundleVersion:(NSString *)arg1 ;
-(id)initWithBundleID:(id)arg1 ;
-(void)setAccountName:(NSString *)arg1 ;
-(void)setVendorName:(NSString *)arg1 ;
-(void)setExternalVersionIdentifier:(NSNumber *)arg1 ;
-(void)setItemName:(NSString *)arg1 ;
-(void)setIsBeta:(BOOL)arg1 ;
-(NSString *)shortVersion;
-(void)setShortVersion:(NSString *)arg1 ;
-(void)setDownloaderID:(NSNumber *)arg1 ;
-(NSNumber *)downloaderID;
-(void)setPurchaserDSID:(NSNumber *)arg1 ;
-(void)setStoreFront:(NSNumber *)arg1 ;
-(void)setCohort:(NSString *)arg1 ;
-(void)setDeviceVendorID:(NSString *)arg1 ;
-(NSString *)cohort;
-(NSString *)deviceVendorID;
-(NSString *)artworkPath;
-(void)setArtworkPath:(NSString *)arg1 ;
-(NSNumber *)installOrder;
-(void)setInstallOrder:(NSNumber *)arg1 ;
@end

