/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMService.h>

@class NSString, NSMutableDictionary, NSDictionary, IMAccount, NSData, NSArray;

@interface IMServiceImpl : IMService {

	NSString* _name;
	NSString* _localizedName;
	NSString* _localizedShortName;
	NSMutableDictionary* _cardMap;
	NSDictionary* _personToIDMap;
	NSString* _countryCode;
	IMAccount* _bestAccount;
	NSDictionary* _serviceDefaults;
	NSDictionary* _serviceProps;
	NSDictionary* _defaultSettings;
	NSData* _imageData;
	NSArray* _abProperties;
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

}

@property (nonatomic,readonly) BOOL _wantsInternationizedNumbers; 
@property (nonatomic,readonly) BOOL _supportsDatabaseStorage; 
@property (nonatomic,retain) NSDictionary * serviceDefaults;                         //@synthesize serviceDefaults=_serviceDefaults - In the implementation block
@property (nonatomic,readonly) NSArray * accountIDs; 
@property (nonatomic,retain) NSString * countryCode; 
@property (nonatomic,readonly) NSDictionary * cardMap; 
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
@property (nonatomic,readonly) BOOL isPlugInService;                                 //@synthesize isPlugInService=_isPlugInService - In the implementation block
@property (getter=isDiscontinued,nonatomic,readonly) BOOL discontinued; 
@property (nonatomic,readonly) NSArray * addressBookProperties;                      //@synthesize abProperties=_abProperties - In the implementation block
@property (nonatomic,readonly) NSString * addressBookProperty; 
@property (nonatomic,readonly) NSArray * siblingServices; 
@property (nonatomic,readonly) NSArray * emailDomains;                               //@synthesize emailDomains=_emailDomains - In the implementation block
@property (nonatomic,readonly) BOOL allowsMultipleConnections;                       //@synthesize allowsMultipleConnections=_allowsMultipleConnections - In the implementation block
@property (nonatomic,readonly) long long buddyNotesMaxByteLength; 
@property (nonatomic,readonly) NSData * serviceImageData; 
@property (nonatomic,readonly) Class accountClass; 
+(Class)serviceClass;
+(void)setServiceClass:(Class)arg1 ;
+(id)connectedServices;
+(id)allServices;
+(BOOL)smsEnabled;
+(BOOL)iMessageEnabledForSenderLastAddressedHandle:(id)arg1 simID:(id)arg2 ;
+(BOOL)mmsEnabledforPhoneNumber:(id)arg1 simID:(id)arg2 ;
+(BOOL)iMessageEnabledForSenderLastAddressedHandle:(id)arg1 simID:(id)arg2 previousService:(id)arg3 ;
+(BOOL)iMessageEnabled;
+(id)serviceWithInternalName:(id)arg1 ;
+(id)allServicesNonBlocking;
+(id)serviceWithName:(id)arg1 ;
+(id)_phoneNumberOnSubscriptionWithSIMID:(id)arg1 ;
+(BOOL)hasAlias:(id)arg1 onAccountForService:(id)arg2 ;
+(BOOL)_isSIMIdIDSRegisteredSIM:(id)arg1 ;
+(BOOL)_shouldCheckIfLastAddressedHandleIsInSubscriptionsAnymoreButiMessageIsEnabledForAlias:(id)arg1 previousService:(id)arg2 ;
+(BOOL)_isiMessageEnabledIfLastAddressedHandleIsNotActiveAnymore:(id)arg1 ;
+(BOOL)_iMessageEnabledForMultipleSubscriptionsForSenderLastAddressedHandle:(id)arg1 simID:(id)arg2 previousService:(id)arg3 ;
+(BOOL)_readMMSUserOverride;
+(id)activeServices;
+(id)servicesWithCapability:(unsigned long long)arg1 ;
+(id)connectedServicesWithCapability:(unsigned long long)arg1 ;
+(id)operationalServicesWithCapability:(unsigned long long)arg1 ;
+(BOOL)mmsEnabled;
+(id)supportedCountryCodes;
+(BOOL)systemSupportsSMSSending;
+(BOOL)systemSupportsSendingAttachmentsOfTypes:(id)arg1 error:(long long*)arg2 ;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(NSString *)countryCode;
-(id)localizedName;
-(id)localizedShortName;
-(unsigned long long)status;
-(void)disconnect;
-(BOOL)isEnabled;
-(BOOL)isPersistent;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSString *)internalName;
-(NSString *)shortName;
-(BOOL)ignoresNetworkConnectivity;
-(Class)accountClass;
-(BOOL)supportsMutatingGroupMembers;
-(long long)maxChatParticipantsForHandle:(id)arg1 simID:(id)arg2 ;
-(void)setServiceProperties:(NSDictionary *)arg1 ;
-(BOOL)initialSyncPerformed;
-(id)infoForScreenName:(id)arg1 ;
-(id)infoForAllScreenNames;
-(id)infoForPreferredScreenNames;
-(id)canonicalFormOfID:(id)arg1 ;
-(id)peopleWithScreenName:(id)arg1 ;
-(id)screenNamesForPerson:(id)arg1 ;
-(id)myScreenNames;
-(void)activeAccountsChanged:(id)arg1 ;
-(void)_syncWithRemoteBuddies;
-(void)statusChangedForAccount:(id)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3 ;
-(void)clearIDToCardMap;
-(void)_calculateBestAccount;
-(void)_blockUntilInitialSyncPerformed;
-(id)_abPropertiesBySanitizingABProperties:(id)arg1 ;
-(void)_loadPropertiesIfNeeded;
-(BOOL)supportsPhoneNumberMapping;
-(id)_IDsToMapForIMPerson:(id)arg1 ;
-(NSDictionary *)cardMap;
-(id)imABPeopleWithScreenName:(id)arg1 countryCode:(id)arg2 identifier:(int*)arg3 ;
-(id)imABPeopleWithScreenName:(id)arg1 identifier:(int*)arg2 ;
-(BOOL)isDiscontinued;
-(void)doneSetup;
-(BOOL)equalID:(id)arg1 andID:(id)arg2 ;
-(id)normalizedFormOfID:(id)arg1 ;
-(long long)compareNames:(id)arg1 ;
-(NSDictionary *)serviceProperties;
-(id)subtypeInformationForAccount:(id)arg1 ;
-(NSData *)serviceImageData;
-(long long)maxAttachmentSize;
-(BOOL)_supportsDatabaseStorage;
-(BOOL)_wantsInternationizedNumbers;
-(NSString *)addressBookProperty;
-(NSArray *)siblingServices;
-(long long)buddyNotesMaxByteLength;
-(NSArray *)accountIDs;
-(void)_addAddressBookCards:(id)arg1 toMap:(id)arg2 ;
-(void)_dumpCardMap;
-(id)_newIDToCardMap;
-(void)updateIDToCardMapWithNotification:(id)arg1 ;
-(id)imABPeopleWithScreenName:(id)arg1 ;
-(id)imABPeopleWithScreenName:(id)arg1 options:(unsigned long long)arg2 ;
-(id)_personToIDMap;
-(id)screenNamesForIMPerson:(id)arg1 ;
-(void)defaultsChanged:(id)arg1 ;
-(NSDictionary *)serviceDefaults;
-(void)setServiceDefaults:(NSDictionary *)arg1 ;
-(NSDictionary *)defaultAccountSettings;
-(void)setDefaultAccountSettings:(NSDictionary *)arg1 ;
-(BOOL)supportsIDStatusLookup;
-(BOOL)supportsAudioMessages;
-(BOOL)supportsAuthorization;
-(BOOL)handlesChatInvites;
-(BOOL)supportsRegistration;
-(BOOL)supportsOfflineTransfers;
-(BOOL)supportsPresence;
-(BOOL)supportsOneSessionForAllAccounts;
-(BOOL)supportsGroupAttachments;
-(BOOL)supportsAdding;
-(BOOL)isPlugInService;
-(BOOL)allowsMultipleConnections;
-(BOOL)shouldDisableDeactivation;
-(unsigned)IDSensitivity;
-(NSArray *)addressBookProperties;
-(NSArray *)emailDomains;
@end

