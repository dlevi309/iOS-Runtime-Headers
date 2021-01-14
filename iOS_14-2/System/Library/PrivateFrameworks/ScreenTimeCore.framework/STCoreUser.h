/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <CoreData/NSManagedObject.h>

@class NSString, STCoreOrganization, STCoreOrganizationSettings, STLocalOrganizationSettings, STiCloudOrganizationSettings, STFamilyOrganizationSettings, NSSet, NSNumber, STUserDeviceState, NSDate;

@interface STCoreUser : NSManagedObject

@property (readonly) BOOL screenTimeEnabled; 
@property (readonly) BOOL syncingEnabled; 
@property (readonly) BOOL allLimitsEnabled; 
@property (nonatomic,copy,readonly) NSString * localizedFullName; 
@property (readonly) STCoreOrganization * managingOrganization; 
@property (readonly) BOOL canSetUpFamily; 
@property (getter=isManaged,readonly) BOOL managed; 
@property (getter=isManaging,readonly) BOOL managing; 
@property (readonly) BOOL shareWebUsage; 
@property (copy,readonly) NSString * effectivePasscode; 
@property (copy,readonly) NSString * effectiveRecoveryAltDSID; 
@property (readonly) BOOL needsToSetPasscode; 
@property (readonly) NSString * organizationIdentifier; 
@property (readonly) long long communicationPolicy; 
@property (readonly) long long communicationWhileLimitedPolicy; 
@property (readonly) BOOL contactsEditable; 
@property (assign) BOOL screenTimeEnabled; 
@property (assign) BOOL syncingEnabled; 
@property (assign) BOOL allLimitsEnabled; 
@property (assign) BOOL shareWebUsage; 
@property (copy) NSString * effectivePasscode; 
@property (copy) NSString * effectiveRecoveryAltDSID; 
@property (assign,nonatomic) long long communicationPolicy; 
@property (assign,nonatomic) long long communicationWhileLimitedPolicy; 
@property (assign,nonatomic) long long contactManagementState; 
@property (assign,nonatomic) BOOL contactsEditable; 
@property (readonly) BOOL unmodeledParticipatesInSharedLedger; 
@property (readonly) STCoreOrganizationSettings * unmodeledManagingOrganizationSettings; 
@property (copy,readonly) NSString * alwaysAllowActivationIdentifier; 
@property (copy,readonly) NSString * alwaysAllowConfigurationIdentifier; 
@property (copy,readonly) NSString * managedUserActivationIdentifier; 
@property (copy,readonly) NSString * iCloudLogoutConfigurationIdentifier; 
@property (copy,readonly) NSString * automaticDateTimeConfigurationIdentifier; 
@property (nonatomic,copy,readonly) NSString * phoneticGivenName; 
@property (nonatomic,copy,readonly) NSString * phoneticFamilyName; 
@property (assign,nonatomic) BOOL isFamilyOrganizer; 
@property (nonatomic,retain) STLocalOrganizationSettings * localSettings; 
@property (nonatomic,retain) STiCloudOrganizationSettings * cloudSettings; 
@property (nonatomic,retain) STFamilyOrganizationSettings * familySettings; 
@property (nonatomic,retain) NSSet * userDeviceAddresses; 
@property (nonatomic,copy) NSNumber * dsid; 
@property (nonatomic,copy) NSString * altDSID; 
@property (nonatomic,copy) NSString * givenName; 
@property (nonatomic,copy) NSString * familyName; 
@property (nonatomic,copy) NSString * familyMemberType; 
@property (assign,nonatomic) BOOL isParent; 
@property (nonatomic,retain) STUserDeviceState * localUserDeviceState; 
@property (nonatomic,retain) NSSet * userDeviceStates; 
@property (nonatomic,retain) NSSet * usages; 
@property (assign,nonatomic) long long passcodeEntryAttemptCount; 
@property (nonatomic,copy) NSDate * passcodeEntryTimeoutEndDate; 
@property (assign,nonatomic) long long passcodeRecoveryAttemptCount; 
@property (assign,nonatomic) BOOL supportsEncryption; 
@property (nonatomic,copy) NSString * appleID; 
@property (nonatomic,retain) NSSet * blueprints; 
+(id)keyPathsForValuesAffectingCommunicationPolicy;
+(id)fetchRequestMatchingAppleID:(id)arg1 ;
+(id)keyPathsForValuesAffectingShareWebUsage;
+(id)keyPathsForValuesAffectingContactManagementState;
+(id)keyPathsForValuesAffectingLocalizedFullName;
+(id)fetchLocalUserInContext:(id)arg1 error:(id*)arg2 ;
+(id)keyPathsForValuesAffectingNeedsToSetPasscode;
+(id)keyPathsForValuesAffectingManaging;
+(id)keyPathsForValuesAffectingEffectivePasscode;
+(id)fetchUserWithAppleID:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
+(id)keyPathsForValuesAffectingScreenTimeEnabled;
+(id)keyPathsForValuesAffectingCommunicationWhileLimitedPolicy;
+(id)fetchRequestForUsersWithDSID:(id)arg1 ;
+(id)keyPathsForValuesAffectingManaged;
+(id)fetchRequestForFamilyMembers;
+(id)keyPathsForValuesAffectingAllLimitsEnabled;
+(id)fetchUserWithDSID:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
+(id)keyPathsForValuesAffectingEffectiveRecoveryAltDSID;
+(id)keyPathsForValuesAffectingCanSetUpFamily;
+(id)keyPathsForValuesAffectingSyncingEnabled;
+(id)fetchRequestMatchingLocalUser;
-(void)setSyncingEnabled:(BOOL)arg1 ;
-(NSString *)organizationIdentifier;
-(void)setScreenTimeEnabled:(BOOL)arg1 ;
-(BOOL)isManaged;
-(id)_contactStoreForUser;
-(NSString *)iCloudLogoutConfigurationIdentifier;
-(STCoreOrganization *)managingOrganization;
-(BOOL)unmodeledParticipatesInSharedLedger;
-(void)setCommunicationWhileLimitedPolicy:(long long)arg1 ;
-(BOOL)screenTimeEnabled;
-(NSString *)alwaysAllowConfigurationIdentifier;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)setCommunicationPolicy:(long long)arg1 ;
-(BOOL)canSetUpFamily;
-(BOOL)needsToSetPasscode;
-(NSString *)localizedFullName;
-(long long)contactManagementState;
-(long long)communicationPolicy;
-(void)setContactManagementState:(long long)arg1 ;
-(BOOL)shareWebUsage;
-(id)_primaryContainerInContactStore:(id)arg1 withError:(id*)arg2 ;
-(void)notifyServerOfScreenTimeEnabled:(BOOL)arg1 ;
-(void)setEffectiveRecoveryAltDSID:(NSString *)arg1 ;
-(void)setContactsEditable:(BOOL)arg1 ;
-(NSString *)managedUserActivationIdentifier;
-(void)setShareWebUsage:(BOOL)arg1 ;
-(NSString *)automaticDateTimeConfigurationIdentifier;
-(void)setAllLimitsEnabled:(BOOL)arg1 ;
-(NSString *)alwaysAllowActivationIdentifier;
-(BOOL)isManaging;
-(BOOL)allLimitsEnabled;
-(BOOL)syncingEnabled;
-(BOOL)contactsEditable;
-(void)updateWithDescription:(id)arg1 ;
-(void)setEffectivePasscode:(NSString *)arg1 ;
-(NSString *)effectiveRecoveryAltDSID;
-(NSString *)effectivePasscode;
-(long long)communicationWhileLimitedPolicy;
-(STCoreOrganizationSettings *)unmodeledManagingOrganizationSettings;
@end

