/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <iTunesCloud/ICMusicSubscriptionStatus.h>

@class NSDate, NSArray, NSString;

@interface ICMutableMusicSubscriptionStatus : ICMusicSubscriptionStatus

@property (assign,getter=isMinorAccountHolder,nonatomic) BOOL minorAccountHolder; 
@property (assign,nonatomic) BOOL hasFamily; 
@property (assign,nonatomic) BOOL hasFamilyGreaterThanOneMember; 
@property (assign,getter=isHeadOfHousehold,nonatomic) BOOL headOfHousehold; 
@property (assign,getter=isMatchEnabled,nonatomic) BOOL matchEnabled; 
@property (nonatomic,copy) NSDate * expirationDate; 
@property (assign,nonatomic) BOOL hasOfflineSlots; 
@property (assign,getter=isInFreeTrial,nonatomic) BOOL inFreeTrial; 
@property (assign,getter=isEligibleForFreeTrial,nonatomic) BOOL eligibleForFreeTrial; 
@property (assign,getter=isPurchaser,nonatomic) BOOL purchaser; 
@property (assign,nonatomic) long long carrierBundlingStatusType; 
@property (assign,nonatomic) long long reasonType; 
@property (assign,nonatomic) long long sourceType; 
@property (assign,nonatomic) long long statusType; 
@property (assign,getter=isAdministrator,nonatomic) BOOL administrator; 
@property (assign,getter=isDiscoveryModeEligible,nonatomic) BOOL discoveryModeEligible; 
@property (assign,nonatomic) long long statusCode; 
@property (nonatomic,copy) NSArray * termsStatusList; 
@property (nonatomic,copy) NSString * phoneNumber; 
@property (nonatomic,copy) NSString * cellularOperatorName; 
@property (nonatomic,copy) NSString * sessionIdentifier; 
@property (assign,nonatomic) long long carrierBundlingErrorCode; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setReasonType:(long long)arg1 ;
-(void)setSourceType:(long long)arg1 ;
-(void)setSessionIdentifier:(NSString *)arg1 ;
-(void)setStatusCode:(long long)arg1 ;
-(void)setCarrierBundlingErrorCode:(long long)arg1 ;
-(void)setCellularOperatorName:(NSString *)arg1 ;
-(void)setDiscoveryModeEligible:(BOOL)arg1 ;
-(void)setHasFamily:(BOOL)arg1 ;
-(void)setHasOfflineSlots:(BOOL)arg1 ;
-(void)setCarrierBundlingStatusType:(long long)arg1 ;
-(void)setMinorAccountHolder:(BOOL)arg1 ;
-(void)setHasFamilyGreaterThanOneMember:(BOOL)arg1 ;
-(void)setHeadOfHousehold:(BOOL)arg1 ;
-(void)setMatchEnabled:(BOOL)arg1 ;
-(void)setInFreeTrial:(BOOL)arg1 ;
-(void)setEligibleForFreeTrial:(BOOL)arg1 ;
-(void)setPurchaser:(BOOL)arg1 ;
-(void)setStatusType:(long long)arg1 ;
-(void)setAdministrator:(BOOL)arg1 ;
-(void)setTermsStatusList:(NSArray *)arg1 ;
@end

