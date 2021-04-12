/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSNumber, NSString, SSItemContentRating, NSArray, NSDate;

@interface ISSoftwareApplication : NSObject <SSXPCCoding> {

	NSNumber* _accountDSID;
	NSString* _accountIdentifier;
	BOOL _beta;
	NSString* _bundleIdentifier;
	NSString* _bundleShortVersionString;
	NSString* _bundleVersion;
	NSString* _containerPath;
	SSItemContentRating* _contentRating;
	NSString* _deviceIdentifierForVendor;
	NSNumber* _familyAccountIdentifier;
	BOOL _hasMIDBasedSINF;
	NSNumber* _itemIdentifier;
	NSString* _itemName;
	BOOL _missingRequiredSINF;
	BOOL _placeholder;
	BOOL _profileValidated;
	NSString* _softwareType;
	NSNumber* _storeFrontIdentifier;
	NSString* _vendorName;
	NSNumber* _versionIdentifier;
	NSArray* _versionOrdering;
	NSDate* _receiptExpirationDate;
	unsigned long long _vppStateFlags;
	BOOL _launchProhibited;
	BOOL _didCheckLaunchProhibited;
	unsigned long long _removableStatus;

}

@property (assign,nonatomic) BOOL didCheckLaunchProhibited;                                //@synthesize didCheckLaunchProhibited=_didCheckLaunchProhibited - In the implementation block
@property (nonatomic,readonly) NSDate * receiptExpirationDate;                             //@synthesize receiptExpirationDate=_receiptExpirationDate - In the implementation block
@property (nonatomic,readonly) unsigned long long removableStatus;                         //@synthesize removableStatus=_removableStatus - In the implementation block
@property (nonatomic,readonly) unsigned long long vppStateFlags; 
@property (nonatomic,retain) NSNumber * accountDSID;                                       //@synthesize accountDSID=_accountDSID - In the implementation block
@property (nonatomic,copy) NSString * accountIdentifier;                                   //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (assign,getter=isBeta,nonatomic) BOOL beta;                                      //@synthesize beta=_beta - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleShortVersionString;                            //@synthesize bundleShortVersionString=_bundleShortVersionString - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;                                       //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,copy) NSString * containerPath;                                       //@synthesize containerPath=_containerPath - In the implementation block
@property (nonatomic,copy) SSItemContentRating * contentRating;                            //@synthesize contentRating=_contentRating - In the implementation block
@property (nonatomic,copy) NSString * deviceIdentifierForVendor;                           //@synthesize deviceIdentifierForVendor=_deviceIdentifierForVendor - In the implementation block
@property (nonatomic,copy) NSNumber * familyAccountIdentifier;                             //@synthesize familyAccountIdentifier=_familyAccountIdentifier - In the implementation block
@property (nonatomic,retain) NSNumber * itemIdentifier;                                    //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,copy) NSString * itemName;                                            //@synthesize itemName=_itemName - In the implementation block
@property (assign,getter=isLaunchProhibited,nonatomic) BOOL launchProhibited;              //@synthesize launchProhibited=_launchProhibited - In the implementation block
@property (assign,getter=isPlaceholder,nonatomic) BOOL placeholder;                        //@synthesize placeholder=_placeholder - In the implementation block
@property (assign,getter=isProfileValidated,nonatomic) BOOL profileValidated;              //@synthesize profileValidated=_profileValidated - In the implementation block
@property (nonatomic,copy) NSString * softwareType;                                        //@synthesize softwareType=_softwareType - In the implementation block
@property (nonatomic,retain) NSNumber * storeFrontIdentifier;                              //@synthesize storeFrontIdentifier=_storeFrontIdentifier - In the implementation block
@property (nonatomic,copy) NSString * vendorName;                                          //@synthesize vendorName=_vendorName - In the implementation block
@property (nonatomic,retain) NSNumber * versionIdentifier;                                 //@synthesize versionIdentifier=_versionIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * versionOrdering;                                      //@synthesize versionOrdering=_versionOrdering - In the implementation block
@property (assign,nonatomic) BOOL hasMIDBasedSINF;                                         //@synthesize hasMIDBasedSINF=_hasMIDBasedSINF - In the implementation block
@property (assign,nonatomic) BOOL missingRequiredSINF;                                     //@synthesize missingRequiredSINF=_missingRequiredSINF - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(NSString *)containerPath;
-(NSString *)bundleIdentifier;
-(NSNumber *)itemIdentifier;
-(void)setItemIdentifier:(NSNumber *)arg1 ;
-(BOOL)isPlaceholder;
-(NSString *)deviceIdentifierForVendor;
-(BOOL)isLaunchProhibited;
-(NSString *)bundleVersion;
-(BOOL)hasMIDBasedSINF;
-(BOOL)missingRequiredSINF;
-(NSString *)vendorName;
-(NSString *)itemName;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(void)setPlaceholder:(BOOL)arg1 ;
-(NSNumber *)versionIdentifier;
-(BOOL)isBeta;
-(void)setBundleVersion:(NSString *)arg1 ;
-(NSNumber *)storeFrontIdentifier;
-(NSNumber *)accountDSID;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setContainerPath:(NSString *)arg1 ;
-(void)setContentRating:(SSItemContentRating *)arg1 ;
-(SSItemContentRating *)contentRating;
-(void)setVendorName:(NSString *)arg1 ;
-(void)setVersionIdentifier:(NSNumber *)arg1 ;
-(void)setStoreFrontIdentifier:(NSNumber *)arg1 ;
-(NSString *)softwareType;
-(void)setLaunchProhibited:(BOOL)arg1 ;
-(NSNumber *)familyAccountIdentifier;
-(void)setFamilyAccountIdentifier:(NSNumber *)arg1 ;
-(void)setBeta:(BOOL)arg1 ;
-(BOOL)isProfileValidated;
-(void)setProfileValidated:(BOOL)arg1 ;
-(void)setItemName:(NSString *)arg1 ;
-(void)setAccountDSID:(NSNumber *)arg1 ;
-(NSString *)bundleShortVersionString;
-(NSArray *)versionOrdering;
-(void)setSoftwareType:(NSString *)arg1 ;
-(void)setVersionOrdering:(NSArray *)arg1 ;
-(void)setBundleShortVersionString:(NSString *)arg1 ;
-(id)initWithLaunchServicesApplication:(id)arg1 containerPath:(id)arg2 ;
-(void)_loadMetadataFromContainer:(id)arg1 ;
-(void)setHasMIDBasedSINF:(BOOL)arg1 ;
-(void)setMissingRequiredSINF:(BOOL)arg1 ;
-(BOOL)didCheckLaunchProhibited;
-(void)setDidCheckLaunchProhibited:(BOOL)arg1 ;
-(id)initWithLaunchServicesApplication:(id)arg1 ;
-(void)resetVPPStateFlags;
-(unsigned long long)vppStateFlags;
-(id)ITunesMetadataDictionary;
-(void)setDeviceIdentifierForVendor:(NSString *)arg1 ;
-(NSDate *)receiptExpirationDate;
-(unsigned long long)removableStatus;
@end

