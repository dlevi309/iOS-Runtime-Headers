/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSNumber, NSString, NSObject, SSDownloadPolicy, NSMutableDictionary, NSArray, SSItem, SSItemOffer, SSNetworkConstraints, SSURLRequestProperties, NSDictionary, NSData;

@interface SSPurchase : NSObject <SSXPCCoding, NSSecureCoding, NSCopying> {

	NSNumber* _accountIdentifier;
	NSString* _affiliateIdentifier;
	BOOL _backgroundPurchase;
	long long _batchIdentifier;
	NSString* _buyParameters;
	NSNumber* _buyParamsCreatesDownloads;
	NSNumber* _buyParamsCreatesInstallJobs;
	NSNumber* _buyParamsCreatesJobs;
	BOOL _createsDownloads;
	BOOL _createsJobs;
	BOOL _createsInstallJobs;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _displaysOnLockScreen;
	SSDownloadPolicy* _downloadPolicy;
	NSMutableDictionary* _downloadProperties;
	NSNumber* _enabledServiceType;
	long long _expectedDownloadFileSize;
	NSArray* _filteredAssetTypes;
	NSArray* _gratisIdentifiers;
	BOOL _ignoresForcedPasswordRestriction;
	SSItem* _item;
	SSItemOffer* _itemOffer;
	SSNetworkConstraints* _networkConstraints;
	NSNumber* _ownerAccountDSID;
	long long _placeholderDownloadIdentifier;
	BOOL _playbackRequest;
	BOOL _preauthenticated;
	SSURLRequestProperties* _requestProperties;
	id _requiredDeviceCapabilities;
	BOOL _skipSoftwareAccountPreflight;
	NSDictionary* _tidHeaders;
	long long _uniqueIdentifier;
	BOOL _usesLocalRedownloadParametersIfPossible;

}

@property (assign) long long batchIdentifier; 
@property (copy) NSNumber * enabledServiceType; 
@property (assign) long long expectedDownloadFileSize; 
@property (copy) NSArray * gratisIdentifiers; 
@property (getter=isGratisSoftwareClaim,readonly) BOOL gratisSoftwareClaim; 
@property (assign) long long placeholderDownloadIdentifier; 
@property (getter=isPlaybackRequest) BOOL playbackRequest; 
@property (copy) id requiredDeviceCapabilities; 
@property (copy) NSDictionary * tidHeaders; 
@property (assign) long long uniqueIdentifier; 
@property (assign) BOOL usesLocalRedownloadParametersIfPossible; 
@property (getter=isPreauthenticated) BOOL preauthenticated; 
@property (readonly) NSData * databaseEncoding; 
@property (retain) NSNumber * accountIdentifier; 
@property (copy) NSString * affiliateIdentifier; 
@property (copy) NSString * buyParameters; 
@property (assign,nonatomic) BOOL createsDownloads; 
@property (copy) NSArray * filteredAssetTypes; 
@property (getter=isBackgroundPurchase) BOOL backgroundPurchase; 
@property (copy) SSURLRequestProperties * requestProperties; 
@property (copy) NSDictionary * downloadProperties; 
@property (assign) BOOL displaysOnLockScreen; 
@property (copy) SSDownloadPolicy * downloadPolicy; 
@property (assign) BOOL ignoresForcedPasswordRestriction; 
@property (copy) SSNetworkConstraints * networkConstraints; 
@property (assign,nonatomic) BOOL createsJobs; 
@property (assign,nonatomic) BOOL createsInstallJobs; 
@property (retain) NSNumber * ownerAccountDSID; 
@property (assign,nonatomic) BOOL skipSoftwareAccountPreflight;                          //@synthesize skipSoftwareAccountPreflight=_skipSoftwareAccountPreflight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)purchaseWithBuyParameters:(id)arg1 ;
+(id)newPurchaseWithDatabaseEncoding:(id)arg1 ;
+(id)newPurchaseWithXPCEncoding:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)item;
-(long long)uniqueIdentifier;
-(id)requiredDeviceCapabilities;
-(NSNumber *)accountIdentifier;
-(void)setUniqueIdentifier:(long long)arg1 ;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(id)initWithItem:(id)arg1 ;
-(NSString *)buyParameters;
-(void)setPlaybackRequest:(BOOL)arg1 ;
-(id)valueForDownloadProperty:(id)arg1 ;
-(long long)placeholderDownloadIdentifier;
-(void)setRequestProperties:(SSURLRequestProperties *)arg1 ;
-(void)setValue:(id)arg1 forDownloadProperty:(id)arg2 ;
-(void)setDisplaysOnLockScreen:(BOOL)arg1 ;
-(void)setBackgroundPurchase:(BOOL)arg1 ;
-(void)setDownloadPolicy:(SSDownloadPolicy *)arg1 ;
-(SSDownloadPolicy *)downloadPolicy;
-(void)setIgnoresForcedPasswordRestriction:(BOOL)arg1 ;
-(void)setBuyParameters:(NSString *)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setAffiliateIdentifier:(NSString *)arg1 ;
-(NSString *)affiliateIdentifier;
-(SSNetworkConstraints *)networkConstraints;
-(void)setNetworkConstraints:(SSNetworkConstraints *)arg1 ;
-(id)initWithItem:(id)arg1 offer:(id)arg2 ;
-(void)setRequiredDeviceCapabilities:(id)arg1 ;
-(void)setCreatesDownloads:(BOOL)arg1 ;
-(void)setCreatesJobs:(BOOL)arg1 ;
-(NSDictionary *)tidHeaders;
-(void)setTidHeaders:(NSDictionary *)arg1 ;
-(BOOL)createsDownloads;
-(BOOL)isPlaybackRequest;
-(BOOL)createsJobs;
-(SSURLRequestProperties *)requestProperties;
-(id)_initSSPurchase;
-(id)_buyParametersValueForKey:(id)arg1 fromBuyParams:(id)arg2 ;
-(void)_setValuesUsingDatabaseEncoding:(id)arg1 ;
-(void)_addEntriesToDatabaseEncoding:(id)arg1 ;
-(BOOL)_createsDownloadsWithOverride;
-(BOOL)_createsJobsWithOverride;
-(BOOL)_createsInstallJobsWithOverride;
-(BOOL)createsInstallJobs;
-(BOOL)displaysOnLockScreen;
-(NSDictionary *)downloadProperties;
-(NSArray *)filteredAssetTypes;
-(BOOL)ignoresForcedPasswordRestriction;
-(BOOL)isBackgroundPurchase;
-(NSNumber *)ownerAccountDSID;
-(void)setCreatesInstallJobs:(BOOL)arg1 ;
-(void)setDownloadProperties:(NSDictionary *)arg1 ;
-(void)setFilteredAssetTypes:(NSArray *)arg1 ;
-(void)setOwnerAccountDSID:(NSNumber *)arg1 ;
-(void)setSkipSoftwareAccountPreflight:(BOOL)arg1 ;
-(id)initWithDatabaseEncoding:(id)arg1 ;
-(long long)batchIdentifier;
-(NSData *)databaseEncoding;
-(id)buyParametersValueForKey:(id)arg1 ;
-(NSNumber *)enabledServiceType;
-(long long)expectedDownloadFileSize;
-(NSArray *)gratisIdentifiers;
-(id)itemOffer;
-(BOOL)isGratisSoftwareClaim;
-(BOOL)isPreauthenticated;
-(void)setBatchIdentifier:(long long)arg1 ;
-(void)setDefaultUserAgent:(id)arg1 ;
-(void)setEnabledServiceType:(NSNumber *)arg1 ;
-(void)setExpectedDownloadFileSize:(long long)arg1 ;
-(void)setGratisIdentifiers:(NSArray *)arg1 ;
-(void)setPlaceholderDownloadIdentifier:(long long)arg1 ;
-(void)setPreauthenticated:(BOOL)arg1 ;
-(void)setUsesLocalRedownloadParametersIfPossible:(BOOL)arg1 ;
-(BOOL)usesLocalRedownloadParametersIfPossible;
-(id)downloadMetadata;
-(void)setDownloadMetadata:(id)arg1 ;
-(BOOL)skipSoftwareAccountPreflight;
@end

