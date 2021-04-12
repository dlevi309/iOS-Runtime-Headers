/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMService.h>

@class NSString, IMAccount, NSDictionary, NSData, NSArray;

@interface IMServiceImpl : IMService {

	NSString* _name;
	NSString* _localizedName;
	NSString* _localizedShortName;
	NSString* _countryCode;
	IMAccount* _bestAccount;
	NSDictionary* _serviceDefaults;
	NSDictionary* _defaultSettings;
	NSData* _imageData;
	NSArray* _emailDomains;
	NSArray* _siblingServiceNames;
	unsigned _screenNameSensitivity;
	BOOL _hasLoadedServiceProperties;
	BOOL _handlesChatInvites;
	BOOL _supportsSMS;
	BOOL _supportsPhoneNumberMapping;
	BOOL _supportsGroupAttachments;
	BOOL _supportsMutatingGroupMembers;
	BOOL _supportsOneSessionForAllAccounts;
	BOOL _supportsAuthorization;
	BOOL _supportsRegistration;
	BOOL _supportsAdding;
	BOOL _supportsPresence;
	BOOL _supportsIDStatusLookup;
	BOOL _supportsDatabaseStorage;
	BOOL _supportsAudioMessages;
	BOOL _shouldInternationalizeNumbers;
	BOOL _supportsOfflineTransfers;
	BOOL _shouldDisableDeactivation;
	BOOL _ignoresNetworkConnectivity;
	BOOL _isPersistent;
	BOOL _isPlugInService;
	BOOL _allowsMultipleConnections;
	NSArray* _abProperties;
	NSDictionary* _serviceProps;
	NSArray* _addressBookProperties;
	NSString* _addressBookProperty;

}

@property (nonatomic,readonly) BOOL _wantsInternationizedNumbers; 
@property (nonatomic,readonly) BOOL _supportsDatabaseStorage; 
@property (nonatomic,retain) NSDictionary * serviceDefaults;                         //@synthesize serviceDefaults=_serviceDefaults - In the implementation block
@property (nonatomic,readonly) NSArray * accountIDs; 
@property (nonatomic,retain) NSString * countryCode;                                 //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) BOOL handlesChatInvites;                              //@synthesize handlesChatInvites=_handlesChatInvites - In the implementation block
@property (nonatomic,readonly) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * shortName;                                 //@synthesize localizedShortName=_localizedShortName - In the implementation block
@property (nonatomic,readonly) NSString * internalName; 
@property (nonatomic,retain) NSDictionary * serviceProperties; 
@property (nonatomic,retain) NSDictionary * defaultAccountSettings;                  //@synthesize defaultSettings=_defaultSettings - In the implementation block
@property (nonatomic,readonly) BOOL supportsAdding;                                  //@synthesize supportsAdding=_supportsAdding - In the implementation block
@property (nonatomic,readonly) BOOL supportsPresence;                                //@synthesize supportsPresence=_supportsPresence - In the implementation block
@property (nonatomic,readonly) BOOL supportsGroupAttachments;                        //@synthesize supportsGroupAttachments=_supportsGroupAttachments - In the implementation block
@property (nonatomic,readonly) BOOL supportsMutatingGroupMembers;                    //@synthesize supportsMutatingGroupMembers=_supportsMutatingGroupMembers - In the implementation block
@property (nonatomic,readonly) BOOL supportsOneSessionForAllAccounts;                //@synthesize supportsOneSessionForAllAccounts=_supportsOneSessionForAllAccounts - In the implementation block
@property (nonatomic,readonly) BOOL supportsRegistration;                            //@synthesize supportsRegistration=_supportsRegistration - In the implementation block
@property (nonatomic,readonly) BOOL supportsAuthorization;                           //@synthesize supportsAuthorization=_supportsAuthorization - In the implementation block
@property (nonatomic,readonly) BOOL supportsPhoneNumberMapping;                      //@synthesize supportsPhoneNumberMapping=_supportsPhoneNumberMapping - In the implementation block
@property (nonatomic,readonly) BOOL supportsIDStatusLookup;                          //@synthesize supportsIDStatusLookup=_supportsIDStatusLookup - In the implementation block
@property (nonatomic,readonly) BOOL supportsOfflineTransfers;                        //@synthesize supportsOfflineTransfers=_supportsOfflineTransfers - In the implementation block
@property (nonatomic,readonly) BOOL supportsAudioMessages;                           //@synthesize supportsAudioMessages=_supportsAudioMessages - In the implementation block
@property (nonatomic,readonly) BOOL isPersistent;                                    //@synthesize isPersistent=_isPersistent - In the implementation block
@property (nonatomic,readonly) BOOL ignoresNetworkConnectivity;                      //@synthesize ignoresNetworkConnectivity=_ignoresNetworkConnectivity - In the implementation block
@property (nonatomic,readonly) long long maxAttachmentSize; 
@property (nonatomic,readonly) unsigned IDSensitivity;                               //@synthesize screenNameSensitivity=_screenNameSensitivity - In the implementation block
@property (nonatomic,readonly) BOOL shouldDisableDeactivation;                       //@synthesize shouldDisableDeactivation=_shouldDisableDeactivation - In the implementation block
@property (nonatomic,readonly) NSArray * siblingServices; 
@property (nonatomic,readonly) BOOL isPlugInService;                                 //@synthesize isPlugInService=_isPlugInService - In the implementation block
@property (getter=isDiscontinued,nonatomic,readonly) BOOL discontinued; 
@property (nonatomic,readonly) NSArray * emailDomains;                               //@synthesize emailDomains=_emailDomains - In the implementation block
@property (nonatomic,readonly) BOOL allowsMultipleConnections;                       //@synthesize allowsMultipleConnections=_allowsMultipleConnections - In the implementation block
@property (nonatomic,readonly) long long buddyNotesMaxByteLength; 
@property (nonatomic,readonly) NSData * serviceImageData; 
@property (nonatomic,readonly) NSArray * addressBookProperties;                      //@synthesize addressBookProperties=_addressBookProperties - In the implementation block
@property (nonatomic,readonly) NSString * addressBookProperty;                       //@synthesize addressBookProperty=_addressBookProperty - In the implementation block
@property (nonatomic,readonly) Class accountClass; 
+(BOOL)smsEnabled;
+(id)connectedServices;
+(BOOL)mmsEnabledforPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(Class)serviceClass;
+(BOOL)_readMMSUserOverride;
+(BOOL)iMessageEnabledForSenderLastAddressedHandle:(id)arg1 simID:(id)arg2 ;
+(id)servicesWithCapability:(unsigned long long)arg1 ;
+(BOOL)systemSupportsSendingAttachmentsOfTypes:(id)arg1 error:(long long*)arg2 ;
+(id)activeServices;
+(BOOL)mmsEnabled;
+(id)connectedServicesWithCapability:(unsigned long long)arg1 ;
+(id)supportedCountryCodes;
+(BOOL)_deviceIsAltAccount;
+(BOOL)_shouldCheckIfLastAddressedHandleIsInSubscriptionsAnymoreButiMessageIsEnabledForAlias:(id)arg1 previousService:(id)arg2 ;
+(BOOL)_isSIMIdIDSRegisteredSIM:(id)arg1 ;
+(id)serviceWithName:(id)arg1 ;
+(BOOL)iMessageEnabled;
+(BOOL)systemSupportsSMSSending;
+(BOOL)_iMessageEnabledForMultipleSubscriptionsForSenderLastAddressedHandle:(id)arg1 simID:(id)arg2 previousService:(id)arg3 ;
+(id)_phoneNumberOnSubscriptionWithSIMID:(id)arg1 ;
+(BOOL)_isiMessageEnabledIfLastAddressedHandleIsNotActiveAnymore:(id)arg1 ;
+(id)operationalServicesWithCapability:(unsigned long long)arg1 ;
+(id)allServicesNonBlocking;
+(void)setServiceClass:(Class)arg1 ;
+(BOOL)hasAlias:(id)arg1 onAccountForService:(id)arg2 ;
+(id)allServices;
+(BOOL)iMessageEnabledForSenderLastAddressedHandle:(id)arg1 simID:(id)arg2 previousService:(id)arg3 ;
+(id)serviceWithInternalName:(id)arg1 ;
-(BOOL)supportsRegistration;
-(id)canonicalFormOfID:(id)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSArray *)emailDomains;
-(void)_syncWithRemoteBuddies;
-(BOOL)handlesChatInvites;
-(id)localizedShortName;
-(long long)compareNames:(id)arg1 ;
-(NSString *)internalName;
-(void)disconnect;
-(BOOL)equalID:(id)arg1 andID:(id)arg2 ;
-(BOOL)isPersistent;
-(id)localizedName;
-(NSString *)countryCode;
-(NSString *)addressBookProperty;
-(void)setServiceProperties:(NSDictionary *)arg1 ;
-(void)setDefaultAccountSettings:(NSDictionary *)arg1 ;
-(Class)accountClass;
-(BOOL)supportsPresence;
-(BOOL)supportsAuthorization;
-(NSArray *)addressBookProperties;
-(BOOL)supportsAdding;
-(void)_calculateBestAccount;
-(void)statusChangedForAccount:(id)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3 ;
-(BOOL)_wantsInternationizedNumbers;
-(id)infoForAllScreenNames;
-(long long)maxChatParticipantsForHandle:(id)arg1 simID:(id)arg2 ;
-(BOOL)supportsMutatingGroupMembers;
-(BOOL)_supportsDatabaseStorage;
-(void)activeAccountsChanged:(id)arg1 ;
-(id)infoForPreferredScreenNames;
-(NSArray *)siblingServices;
-(NSString *)shortName;
-(NSDictionary *)serviceProperties;
-(unsigned)IDSensitivity;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)description;
-(long long)buddyNotesMaxByteLength;
-(NSArray *)accountIDs;
-(id)normalizedFormOfID:(id)arg1 ;
-(BOOL)supportsIDStatusLookup;
-(BOOL)shouldDisableDeactivation;
-(long long)maxAttachmentSize;
-(id)myScreenNames;
-(BOOL)supportsOneSessionForAllAccounts;
-(BOOL)supportsGroupAttachments;
-(BOOL)allowsMultipleConnections;
-(BOOL)ignoresNetworkConnectivity;
-(BOOL)supportsAudioMessages;
-(BOOL)supportsOfflineTransfers;
-(NSDictionary *)defaultAccountSettings;
-(BOOL)initialSyncPerformed;
-(void)doneSetup;
-(BOOL)isEnabled;
-(id)infoForScreenName:(id)arg1 ;
-(void)setServiceDefaults:(NSDictionary *)arg1 ;
-(NSData *)serviceImageData;
-(void)defaultsChanged:(id)arg1 ;
-(BOOL)supportsPhoneNumberMapping;
-(BOOL)isDiscontinued;
-(void)_loadPropertiesIfNeeded;
-(id)subtypeInformationForAccount:(id)arg1 ;
-(BOOL)isPlugInService;
-(void)_blockUntilInitialSyncPerformed;
-(unsigned long long)status;
-(void)dealloc;
-(NSDictionary *)serviceDefaults;
@end

