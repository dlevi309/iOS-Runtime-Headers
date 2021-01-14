/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/ASDAppMetadata.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ACAccount, NSURL, NSString, NSNumber, NSDictionary, NSData, NSArray;

@interface ASDTestFlightAppMetadata : NSObject <ASDAppMetadata, NSCopying, NSSecureCoding> {

	BOOL _hasMessagesExtension;
	BOOL _launchProhibited;
	BOOL _userInitiated;
	ACAccount* _account;
	NSURL* _artworkURL;
	NSString* _bundleID;
	NSString* _companionBundleID;
	NSNumber* _externalVersionIdentifier;
	NSNumber* _initialODRSize;
	NSNumber* _itemID;
	NSString* _itemName;
	NSDictionary* _placeholderEntitlements;
	NSURL* _messagesArtworkURL;
	long long _packageCompression;
	NSData* _packageDPInfo;
	NSData* _packageSINF;
	NSURL* _packageURL;
	NSArray* _provisioningProfiles;
	NSString* _storeCohort;
	NSNumber* _storeFront;
	NSString* _variantID;
	NSString* _vendorName;

}

@property (nonatomic,copy) ACAccount * account;                                            //@synthesize account=_account - In the implementation block
@property (nonatomic,copy) NSURL * artworkURL;                                             //@synthesize artworkURL=_artworkURL - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;                                        //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * companionBundleID;                                   //@synthesize companionBundleID=_companionBundleID - In the implementation block
@property (nonatomic,copy) NSNumber * externalVersionIdentifier;                           //@synthesize externalVersionIdentifier=_externalVersionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasMessagesExtension;                                    //@synthesize hasMessagesExtension=_hasMessagesExtension - In the implementation block
@property (nonatomic,copy) NSNumber * initialODRSize;                                      //@synthesize initialODRSize=_initialODRSize - In the implementation block
@property (nonatomic,copy) NSNumber * itemID;                                              //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,copy) NSString * itemName;                                            //@synthesize itemName=_itemName - In the implementation block
@property (assign,getter=isLaunchProhibited,nonatomic) BOOL launchProhibited;              //@synthesize launchProhibited=_launchProhibited - In the implementation block
@property (nonatomic,copy) NSDictionary * placeholderEntitlements;                         //@synthesize placeholderEntitlements=_placeholderEntitlements - In the implementation block
@property (nonatomic,copy) NSURL * messagesArtworkURL;                                     //@synthesize messagesArtworkURL=_messagesArtworkURL - In the implementation block
@property (assign,nonatomic) long long packageCompression;                                 //@synthesize packageCompression=_packageCompression - In the implementation block
@property (nonatomic,copy) NSData * packageDPInfo;                                         //@synthesize packageDPInfo=_packageDPInfo - In the implementation block
@property (nonatomic,copy) NSData * packageSINF;                                           //@synthesize packageSINF=_packageSINF - In the implementation block
@property (nonatomic,copy) NSURL * packageURL;                                             //@synthesize packageURL=_packageURL - In the implementation block
@property (nonatomic,copy) NSArray * provisioningProfiles;                                 //@synthesize provisioningProfiles=_provisioningProfiles - In the implementation block
@property (nonatomic,copy) NSString * storeCohort;                                         //@synthesize storeCohort=_storeCohort - In the implementation block
@property (nonatomic,copy) NSNumber * storeFront;                                          //@synthesize storeFront=_storeFront - In the implementation block
@property (assign,nonatomic) BOOL userInitiated;                                           //@synthesize userInitiated=_userInitiated - In the implementation block
@property (nonatomic,copy) NSString * variantID;                                           //@synthesize variantID=_variantID - In the implementation block
@property (nonatomic,copy) NSString * vendorName;                                          //@synthesize vendorName=_vendorName - In the implementation block
@property (readonly) long long metadataType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(ACAccount *)account;
-(NSString *)vendorName;
-(void)setArtworkURL:(NSURL *)arg1 ;
-(void)setItemID:(NSNumber *)arg1 ;
-(NSURL *)artworkURL;
-(NSNumber *)externalVersionIdentifier;
-(void)setAccount:(ACAccount *)arg1 ;
-(NSNumber *)storeFront;
-(void)setExternalVersionIdentifier:(NSNumber *)arg1 ;
-(void)setStoreFront:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)packageURL;
-(NSURL *)messagesArtworkURL;
-(void)setMessagesArtworkURL:(NSURL *)arg1 ;
-(void)setHasMessagesExtension:(BOOL)arg1 ;
-(void)setStoreCohort:(NSString *)arg1 ;
-(void)setLaunchProhibited:(BOOL)arg1 ;
-(id)initWithBundleID:(id)arg1 ;
-(NSString *)itemName;
-(BOOL)hasMessagesExtension;
-(NSNumber *)itemID;
-(void)setInitialODRSize:(NSNumber *)arg1 ;
-(NSString *)companionBundleID;
-(void)setCompanionBundleID:(NSString *)arg1 ;
-(NSDictionary *)placeholderEntitlements;
-(void)setPlaceholderEntitlements:(NSDictionary *)arg1 ;
-(long long)packageCompression;
-(void)setPackageCompression:(long long)arg1 ;
-(void)setProvisioningProfiles:(NSArray *)arg1 ;
-(NSString *)bundleID;
-(void)setVariantID:(NSString *)arg1 ;
-(NSArray *)provisioningProfiles;
-(id)initWithCoder:(id)arg1 ;
-(void)setUserInitiated:(BOOL)arg1 ;
-(NSString *)storeCohort;
-(BOOL)userInitiated;
-(BOOL)isLaunchProhibited;
-(NSNumber *)initialODRSize;
-(long long)metadataType;
-(NSData *)packageDPInfo;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVendorName:(NSString *)arg1 ;
-(void)setItemName:(NSString *)arg1 ;
-(NSString *)variantID;
-(void)setPackageDPInfo:(NSData *)arg1 ;
-(NSData *)packageSINF;
-(void)setPackageSINF:(NSData *)arg1 ;
-(void)setPackageURL:(NSURL *)arg1 ;
@end

