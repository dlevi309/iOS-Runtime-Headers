/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSDate, NSArray, NSString;

@interface ICMusicSubscriptionStatus : NSObject <NSMutableCopying, NSCopying, NSSecureCoding> {

	NSDictionary* _responseDictionary;
	BOOL _isMinorAccountHolder;
	BOOL _hasFamily;
	BOOL _hasFamilyGreaterThanOneMember;
	BOOL _isHeadOfHousehold;
	BOOL _isMatchEnabled;
	NSDate* _expirationDate;
	BOOL _hasOfflineSlots;
	BOOL _isInFreeTrial;
	BOOL _isEligibleForFreeTrial;
	BOOL _isPurchaser;
	long long _carrierBundlingStatusType;
	long long _reasonType;
	long long _sourceType;
	long long _statusType;
	BOOL _isAdministrator;
	BOOL _isDiscoveryModeEligible;
	NSArray* _termsStatusList;
	NSString* _phoneNumber;
	NSString* _cellularOperatorName;
	NSString* _sessionIdentifier;
	long long _carrierBundlingErrorCode;

}

@property (nonatomic,readonly) BOOL hasCatalogPlaybackCapability; 
@property (nonatomic,readonly) BOOL hasAddToCloudLibraryCapability; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,copy,readonly) NSDictionary * responseDictionary;                                       //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (getter=isMinorAccountHolder,nonatomic,readonly) BOOL minorAccountHolder;                          //@synthesize isMinorAccountHolder=_isMinorAccountHolder - In the implementation block
@property (nonatomic,readonly) BOOL hasFamily;                                                               //@synthesize hasFamily=_hasFamily - In the implementation block
@property (nonatomic,readonly) BOOL hasFamilyGreaterThanOneMember;                                           //@synthesize hasFamilyGreaterThanOneMember=_hasFamilyGreaterThanOneMember - In the implementation block
@property (getter=isHeadOfHousehold,nonatomic,readonly) BOOL headOfHousehold;                                //@synthesize isHeadOfHousehold=_isHeadOfHousehold - In the implementation block
@property (getter=isMatchEnabled,nonatomic,readonly) BOOL matchEnabled;                                      //@synthesize isMatchEnabled=_isMatchEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationDate;                                                 //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) BOOL hasOfflineSlots;                                                         //@synthesize hasOfflineSlots=_hasOfflineSlots - In the implementation block
@property (getter=isInFreeTrial,nonatomic,readonly) BOOL inFreeTrial;                                        //@synthesize isInFreeTrial=_isInFreeTrial - In the implementation block
@property (getter=isEligibleForFreeTrial,nonatomic,readonly) BOOL eligibleForFreeTrial;                      //@synthesize isEligibleForFreeTrial=_isEligibleForFreeTrial - In the implementation block
@property (getter=isPurchaser,nonatomic,readonly) BOOL purchaser;                                            //@synthesize isPurchaser=_isPurchaser - In the implementation block
@property (nonatomic,readonly) long long carrierBundlingStatusType;                                          //@synthesize carrierBundlingStatusType=_carrierBundlingStatusType - In the implementation block
@property (nonatomic,readonly) long long reasonType;                                                         //@synthesize reasonType=_reasonType - In the implementation block
@property (nonatomic,readonly) long long sourceType;                                                         //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,readonly) long long statusType;                                                         //@synthesize statusType=_statusType - In the implementation block
@property (getter=isAdministrator,nonatomic,readonly) BOOL administrator;                                    //@synthesize isAdministrator=_isAdministrator - In the implementation block
@property (getter=isDiscoveryModeEligible,nonatomic,readonly) BOOL discoveryModeEligible;                    //@synthesize isDiscoveryModeEligible=_isDiscoveryModeEligible - In the implementation block
@property (nonatomic,copy,readonly) NSArray * termsStatusList;                                               //@synthesize termsStatusList=_termsStatusList - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneNumber;                                                  //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * cellularOperatorName;                                         //@synthesize cellularOperatorName=_cellularOperatorName - In the implementation block
@property (nonatomic,copy,readonly) NSString * sessionIdentifier;                                            //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) long long carrierBundlingErrorCode;                                           //@synthesize carrierBundlingErrorCode=_carrierBundlingErrorCode - In the implementation block
@property (getter=isCloudMusicServiceEnabled,nonatomic,readonly) BOOL cloudMusicServiceEnabled; 
+(BOOL)supportsSecureCoding;
-(NSDictionary *)dictionaryRepresentation;
-(long long)sourceType;
-(long long)carrierBundlingErrorCode;
-(BOOL)hasCatalogPlaybackCapability;
-(BOOL)isDiscoveryModeEligible;
-(long long)carrierBundlingStatusType;
-(long long)reasonType;
-(BOOL)isEligibleForFreeTrial;
-(BOOL)hasOfflineSlots;
-(BOOL)isAdministrator;
-(NSString *)cellularOperatorName;
-(NSArray *)termsStatusList;
-(BOOL)hasFamilyGreaterThanOneMember;
-(BOOL)isHeadOfHousehold;
-(long long)statusType;
-(NSString *)phoneNumber;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isPurchaser;
-(NSDictionary *)responseDictionary;
-(id)initWithResponseDictionary:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)isMinorAccountHolder;
-(BOOL)isInFreeTrial;
-(NSString *)sessionIdentifier;
-(BOOL)isEqualToStatus:(id)arg1 ;
-(void)_copySubscriptionStatusPropertiesToStatus:(id)arg1 withZone:(NSZone*)arg2 ;
-(BOOL)isMatchEnabled;
-(BOOL)hasAddToCloudLibraryCapability;
-(id)description;
-(BOOL)isCloudMusicServiceEnabled;
-(BOOL)hasFamily;
-(NSDate *)expirationDate;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

