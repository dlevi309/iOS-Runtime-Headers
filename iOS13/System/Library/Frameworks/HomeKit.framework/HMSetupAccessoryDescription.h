/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, HMAccessoryOwnershipToken, HMAccessoryCategory, NSUUID, HMSetupAccessoryPayload, HMSetupAccessoryBrowsingRequest, HMAccessory;

@interface HMSetupAccessoryDescription : NSObject <NSCopying, NSSecureCoding> {

	BOOL _supportsIP;
	BOOL _supportsBTLE;
	BOOL _supportsWAC;
	BOOL _paired;
	BOOL _isTrustedOrigin;
	BOOL _userConsentedForReplace;
	BOOL _addAndSetupAccessories;
	BOOL _legacyAPI;
	NSString* _setupID;
	NSString* _setupCode;
	HMAccessoryOwnershipToken* _ownershipToken;
	HMAccessoryCategory* _category;
	unsigned long long _certificationStatus;
	unsigned long long _userConsentReasons;
	NSString* _storeID;
	NSString* _bundleID;
	NSUUID* _accessoryUUID;
	NSString* _accessoryName;
	NSString* _manufacturerName;
	NSString* _appIdentifier;
	NSUUID* _homeUUID;
	NSString* _homeName;
	NSString* _suggestedRoomName;
	HMSetupAccessoryPayload* _setupAccessoryPayload;
	HMSetupAccessoryBrowsingRequest* _accessoryBrowsingRequest;
	HMAccessory* _accessoryBeingReplaced;
	NSUUID* _addRequestIdentifier;
	NSString* _accessoryServerIdentifier;

}

@property (nonatomic,retain) NSString * appIdentifier;                                                //@synthesize appIdentifier=_appIdentifier - In the implementation block
@property (nonatomic,retain) HMSetupAccessoryPayload * setupAccessoryPayload;                         //@synthesize setupAccessoryPayload=_setupAccessoryPayload - In the implementation block
@property (assign,nonatomic) BOOL addAndSetupAccessories;                                             //@synthesize addAndSetupAccessories=_addAndSetupAccessories - In the implementation block
@property (assign,nonatomic) BOOL isTrustedOrigin;                                                    //@synthesize isTrustedOrigin=_isTrustedOrigin - In the implementation block
@property (nonatomic,retain) HMSetupAccessoryBrowsingRequest * accessoryBrowsingRequest;              //@synthesize accessoryBrowsingRequest=_accessoryBrowsingRequest - In the implementation block
@property (nonatomic,retain) NSString * accessoryName;                                                //@synthesize accessoryName=_accessoryName - In the implementation block
@property (nonatomic,retain) NSString * manufacturerName;                                             //@synthesize manufacturerName=_manufacturerName - In the implementation block
@property (nonatomic,retain) HMAccessoryCategory * category;                                          //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) NSUUID * accessoryUUID;                                                  //@synthesize accessoryUUID=_accessoryUUID - In the implementation block
@property (nonatomic,copy) NSString * suggestedRoomName;                                              //@synthesize suggestedRoomName=_suggestedRoomName - In the implementation block
@property (nonatomic,retain) NSString * storeID;                                                      //@synthesize storeID=_storeID - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                                                     //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSString * setupID;                                                    //@synthesize setupID=_setupID - In the implementation block
@property (nonatomic,retain) NSString * setupCode;                                                    //@synthesize setupCode=_setupCode - In the implementation block
@property (nonatomic,readonly) HMAccessoryOwnershipToken * ownershipToken;                            //@synthesize ownershipToken=_ownershipToken - In the implementation block
@property (nonatomic,retain) NSUUID * addRequestIdentifier;                                           //@synthesize addRequestIdentifier=_addRequestIdentifier - In the implementation block
@property (assign,nonatomic) BOOL legacyAPI;                                                          //@synthesize legacyAPI=_legacyAPI - In the implementation block
@property (nonatomic,readonly) BOOL supportsIP;                                                       //@synthesize supportsIP=_supportsIP - In the implementation block
@property (nonatomic,readonly) BOOL supportsWAC;                                                      //@synthesize supportsWAC=_supportsWAC - In the implementation block
@property (nonatomic,readonly) BOOL supportsBTLE;                                                     //@synthesize supportsBTLE=_supportsBTLE - In the implementation block
@property (getter=isPaired,nonatomic,readonly) BOOL paired;                                           //@synthesize paired=_paired - In the implementation block
@property (assign,nonatomic) unsigned long long certificationStatus;                                  //@synthesize certificationStatus=_certificationStatus - In the implementation block
@property (assign,nonatomic) BOOL userConsentedForReplace;                                            //@synthesize userConsentedForReplace=_userConsentedForReplace - In the implementation block
@property (assign,nonatomic,__weak) HMAccessory * accessoryBeingReplaced;                             //@synthesize accessoryBeingReplaced=_accessoryBeingReplaced - In the implementation block
@property (nonatomic,retain) NSString * accessoryServerIdentifier;                                    //@synthesize accessoryServerIdentifier=_accessoryServerIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasAddRequest; 
@property (nonatomic,readonly) NSUUID * homeUUID;                                                     //@synthesize homeUUID=_homeUUID - In the implementation block
@property (nonatomic,readonly) NSString * homeName;                                                   //@synthesize homeName=_homeName - In the implementation block
@property (nonatomic,readonly) unsigned long long userConsentReasons;                                 //@synthesize userConsentReasons=_userConsentReasons - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)setupAccessoryProgressAsString:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HMAccessoryCategory *)category;
-(void)setCategory:(HMAccessoryCategory *)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(NSUUID *)homeUUID;
-(NSUUID *)accessoryUUID;
-(NSString *)accessoryName;
-(NSString *)storeID;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(NSString *)appIdentifier;
-(NSString *)manufacturerName;
-(void)setManufacturerName:(NSString *)arg1 ;
-(BOOL)isPaired;
-(void)setStoreID:(NSString *)arg1 ;
-(HMAccessoryOwnershipToken *)ownershipToken;
-(id)dumpState;
-(void)setAccessoryName:(NSString *)arg1 ;
-(NSString *)homeName;
-(id)initWithAccessoryUUID:(id)arg1 accessoryName:(id)arg2 appID:(id)arg3 homeName:(id)arg4 homeUUID:(id)arg5 trustedOrigin:(BOOL)arg6 ;
-(id)initToSetupAccessories:(id)arg1 legacyAPI:(BOOL)arg2 homeName:(id)arg3 homeUUID:(id)arg4 trustedOrigin:(BOOL)arg5 ;
-(id)initToSetupAccessories:(id)arg1 legacyAPI:(BOOL)arg2 homeName:(id)arg3 homeUUID:(id)arg4 trustedOrigin:(BOOL)arg5 browseRequest:(id)arg6 ;
-(id)initToSetupAccessoriesWithSetupAccessoryPayload:(id)arg1 appID:(id)arg2 homeName:(id)arg3 homeUUID:(id)arg4 trustedOrigin:(BOOL)arg5 ownershipToken:(id)arg6 ;
-(void)setLegacyAPI:(BOOL)arg1 ;
-(void)setAccessoryBrowsingRequest:(HMSetupAccessoryBrowsingRequest *)arg1 ;
-(void)setSetupAccessoryPayload:(HMSetupAccessoryPayload *)arg1 ;
-(void)setAccessoryUUID:(NSUUID *)arg1 ;
-(HMSetupAccessoryPayload *)setupAccessoryPayload;
-(BOOL)supportsIP;
-(BOOL)supportsWAC;
-(BOOL)supportsBTLE;
-(NSString *)setupCode;
-(NSString *)setupID;
-(unsigned long long)certificationStatus;
-(BOOL)addAndSetupAccessories;
-(BOOL)isTrustedOrigin;
-(HMSetupAccessoryBrowsingRequest *)accessoryBrowsingRequest;
-(NSString *)suggestedRoomName;
-(NSUUID *)addRequestIdentifier;
-(BOOL)legacyAPI;
-(void)setAddAndSetupAccessories:(BOOL)arg1 ;
-(void)setIsTrustedOrigin:(BOOL)arg1 ;
-(void)setCertificationStatus:(unsigned long long)arg1 ;
-(void)setSuggestedRoomName:(NSString *)arg1 ;
-(BOOL)userConsentedForReplace;
-(void)setUserConsentedForReplace:(BOOL)arg1 ;
-(id)initWithAccessoryUUID:(id)arg1 accessoryName:(id)arg2 appID:(id)arg3 homeName:(id)arg4 homeUUID:(id)arg5 ;
-(id)initToSetupAccessories:(id)arg1 legacyAPI:(BOOL)arg2 homeName:(id)arg3 homeUUID:(id)arg4 ;
-(id)initToSetupAccessoriesWithSetupAccessoryPayload:(id)arg1 appID:(id)arg2 homeName:(id)arg3 homeUUID:(id)arg4 ;
-(id)initWithAddRequest:(id)arg1 setupAccessoryPayload:(id)arg2 appID:(id)arg3 ownershipToken:(id)arg4 ;
-(void)updateWithSetupAccessoryPayload:(id)arg1 ;
-(void)updateWithAccessory:(id)arg1 ;
-(void)updateOwnershipToken:(id)arg1 ;
-(void)updateAppIdentifier:(id)arg1 ;
-(void)setSetupCode:(NSString *)arg1 ;
-(BOOL)hasAddRequest;
-(unsigned long long)userConsentReasons;
-(HMAccessory *)accessoryBeingReplaced;
-(void)setAccessoryBeingReplaced:(HMAccessory *)arg1 ;
-(void)setAddRequestIdentifier:(NSUUID *)arg1 ;
-(NSString *)accessoryServerIdentifier;
-(void)setAccessoryServerIdentifier:(NSString *)arg1 ;
@end

