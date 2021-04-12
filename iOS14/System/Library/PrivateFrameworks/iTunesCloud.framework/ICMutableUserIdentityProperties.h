/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICUserIdentityProperties.h>

@class NSString, ICDelegateToken, NSNumber, NSDate, NSDictionary;

@interface ICMutableUserIdentityProperties : ICUserIdentityProperties

@property (assign,getter=isActiveLocker,nonatomic) BOOL activeLocker; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (nonatomic,copy) NSString * alternateDSID; 
@property (nonatomic,copy) NSString * carrierBundleDeviceIdentifier; 
@property (assign,getter=isDelegated,nonatomic) BOOL delegated; 
@property (nonatomic,copy) ICDelegateToken * delegateToken; 
@property (nonatomic,copy) NSNumber * DSID; 
@property (nonatomic,copy) NSString * firstName; 
@property (nonatomic,copy) NSString * lastName; 
@property (assign,getter=isManagedAppleID,nonatomic) BOOL managedAppleID; 
@property (assign,getter=isSandboxed,nonatomic) BOOL sandboxed; 
@property (nonatomic,copy) NSString * storefrontIdentifier; 
@property (assign,getter=isSubscriptionStatusEnabled,nonatomic) BOOL subscriptionStatusEnabled; 
@property (nonatomic,copy) NSString * username; 
@property (nonatomic,copy) NSDate * ageVerificationExpirationDate; 
@property (nonatomic,copy) NSNumber * mergeToCloudLibraryPreference; 
@property (nonatomic,copy) NSDictionary * cloudLibraryStateReason; 
@property (nonatomic,copy) NSNumber * privateListeningEnabled; 
-(void)setManagedAppleID:(BOOL)arg1 ;
-(void)setPrivateListeningEnabled:(NSNumber *)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(void)setDelegated:(BOOL)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setStorefrontIdentifier:(NSString *)arg1 ;
-(void)setSubscriptionStatusEnabled:(BOOL)arg1 ;
-(void)setMergeToCloudLibraryPreference:(NSNumber *)arg1 ;
-(void)setHomeUserIdentifiers:(id)arg1 ;
-(void)setCloudLibraryStateReason:(NSDictionary *)arg1 ;
-(void)setActiveLocker:(BOOL)arg1 ;
-(void)setPrivateListeningEnabledForHomeUsers:(id)arg1 ;
-(void)replaceValuesWithValuesFromProperties:(id)arg1 ;
-(void)setCarrierBundleDeviceIdentifier:(NSString *)arg1 ;
-(void)setSandboxed:(BOOL)arg1 ;
-(void)setDSID:(NSNumber *)arg1 ;
-(void)setAgeVerificationExpirationDate:(NSDate *)arg1 ;
-(void)setDelegateToken:(ICDelegateToken *)arg1 ;
-(void)setICloudPersonID:(id)arg1 ;
-(void)setCloudBackupEnabled:(BOOL)arg1 ;
-(void)setAlternateDSID:(NSString *)arg1 ;
@end

