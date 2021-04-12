/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/TUCallRequest.h>
#import <libobjc.A.dylib/TUVideoRequest.h>
#import <libobjc.A.dylib/TUFilteredRequest.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, TUSenderIdentityClient, CNGeminiManager, TUCallProvider, TUHandle, TUCallProviderManager, NSDate, NSUUID, BSProcessHandle, IDSDestination, TUSenderIdentity, NSURL, NSUserActivity, NSArray;

@interface TUDialRequest : NSObject <TUCallRequest, TUVideoRequest, TUFilteredRequest, NSSecureCoding, NSCopying> {

	BOOL _video;
	BOOL _performDialAssist;
	BOOL _performLocalDialAssist;
	BOOL _dialAssisted;
	BOOL _showUIPrompt;
	BOOL _hostOnCurrentDevice;
	BOOL _endpointOnCurrentDevice;
	BOOL _sos;
	BOOL _redial;
	BOOL _shouldSuppressInCallUI;
	NSString* _uniqueProxyIdentifier;
	TUSenderIdentityClient* _senderIdentityClient;
	CNGeminiManager* _contactGeminiManager;
	TUCallProvider* _provider;
	long long _dialType;
	TUHandle* _handle;
	NSString* _contactIdentifier;
	NSString* _providerCustomIdentifier;
	NSString* _audioSourceIdentifier;
	long long _ttyType;
	TUCallProviderManager* _providerManager;
	/*^block*/id _isEmergencyNumberBlock;
	/*^block*/id _isEmergencyNumberOrIsWhitelistedBlock;
	NSDate* _dateDialed;
	NSString* _endpointIDSDestinationURI;
	NSString* _endpointRapportMediaSystemIdentifier;
	NSString* _endpointRapportEffectiveIdentifier;
	NSUUID* _localSenderIdentityUUID;
	NSUUID* _localSenderIdentityAccountUUID;
	long long _originatingUIType;
	NSString* _successNotification;
	NSString* _failureNotification;
	BSProcessHandle* _processHandle;
	CGSize _localPortraitAspectRatio;
	CGSize _localLandscapeAspectRatio;

}

@property (getter=isRTTAvailable,nonatomic,readonly) BOOL rttAvailable; 
@property (getter=isTTYAvailable,nonatomic,readonly) BOOL ttyAvailable; 
@property (nonatomic,retain) TUCallProvider * provider;                                    //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) TUCallProviderManager * providerManager;                    //@synthesize providerManager=_providerManager - In the implementation block
@property (nonatomic,retain) CNGeminiManager * contactGeminiManager;                       //@synthesize contactGeminiManager=_contactGeminiManager - In the implementation block
@property (nonatomic,copy) id isEmergencyNumberBlock;                                      //@synthesize isEmergencyNumberBlock=_isEmergencyNumberBlock - In the implementation block
@property (nonatomic,copy) id isEmergencyNumberOrIsWhitelistedBlock;                       //@synthesize isEmergencyNumberOrIsWhitelistedBlock=_isEmergencyNumberOrIsWhitelistedBlock - In the implementation block
@property (nonatomic,retain) NSDate * dateDialed;                                          //@synthesize dateDialed=_dateDialed - In the implementation block
@property (nonatomic,readonly) TUSenderIdentityClient * senderIdentityClient;              //@synthesize senderIdentityClient=_senderIdentityClient - In the implementation block
@property (assign,nonatomic) BOOL hostOnCurrentDevice;                                     //@synthesize hostOnCurrentDevice=_hostOnCurrentDevice - In the implementation block
@property (assign,nonatomic) BOOL endpointOnCurrentDevice;                                 //@synthesize endpointOnCurrentDevice=_endpointOnCurrentDevice - In the implementation block
@property (nonatomic,copy) NSString * endpointIDSDestinationURI;                           //@synthesize endpointIDSDestinationURI=_endpointIDSDestinationURI - In the implementation block
@property (nonatomic,readonly) IDSDestination * endpointIDSDestination; 
@property (nonatomic,copy) NSString * endpointRapportMediaSystemIdentifier;                //@synthesize endpointRapportMediaSystemIdentifier=_endpointRapportMediaSystemIdentifier - In the implementation block
@property (nonatomic,copy) NSString * endpointRapportEffectiveIdentifier;                  //@synthesize endpointRapportEffectiveIdentifier=_endpointRapportEffectiveIdentifier - In the implementation block
@property (nonatomic,copy,readonly) TUSenderIdentity * localSenderIdentity; 
@property (nonatomic,copy) NSUUID * localSenderIdentityUUID;                               //@synthesize localSenderIdentityUUID=_localSenderIdentityUUID - In the implementation block
@property (nonatomic,copy) NSUUID * localSenderIdentityAccountUUID;                        //@synthesize localSenderIdentityAccountUUID=_localSenderIdentityAccountUUID - In the implementation block
@property (assign,nonatomic) long long originatingUIType;                                  //@synthesize originatingUIType=_originatingUIType - In the implementation block
@property (assign,setter=setSOS:,getter=isSOS,nonatomic) BOOL sos;                         //@synthesize sos=_sos - In the implementation block
@property (assign,getter=isRedial,nonatomic) BOOL redial;                                  //@synthesize redial=_redial - In the implementation block
@property (assign,nonatomic) BOOL shouldSuppressInCallUI;                                  //@synthesize shouldSuppressInCallUI=_shouldSuppressInCallUI - In the implementation block
@property (nonatomic,copy) NSString * successNotification;                                 //@synthesize successNotification=_successNotification - In the implementation block
@property (nonatomic,copy) NSString * failureNotification;                                 //@synthesize failureNotification=_failureNotification - In the implementation block
@property (nonatomic,retain) BSProcessHandle * processHandle;                              //@synthesize processHandle=_processHandle - In the implementation block
@property (nonatomic,readonly) int service; 
@property (assign,nonatomic) long long dialType;                                           //@synthesize dialType=_dialType - In the implementation block
@property (nonatomic,copy) NSString * destinationID; 
@property (nonatomic,retain) TUHandle * handle;                                            //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy) NSString * contactIdentifier;                                   //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (nonatomic,copy) NSString * providerCustomIdentifier;                            //@synthesize providerCustomIdentifier=_providerCustomIdentifier - In the implementation block
@property (assign,getter=isVideo,nonatomic) BOOL video;                                    //@synthesize video=_video - In the implementation block
@property (nonatomic,copy) NSString * audioSourceIdentifier;                               //@synthesize audioSourceIdentifier=_audioSourceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL performDialAssist;                                       //@synthesize performDialAssist=_performDialAssist - In the implementation block
@property (assign,nonatomic) BOOL performLocalDialAssist;                                  //@synthesize performLocalDialAssist=_performLocalDialAssist - In the implementation block
@property (assign,getter=isDialAssisted,nonatomic) BOOL dialAssisted;                      //@synthesize dialAssisted=_dialAssisted - In the implementation block
@property (assign,nonatomic) long long ttyType;                                            //@synthesize ttyType=_ttyType - In the implementation block
@property (nonatomic,readonly) BOOL useTTY; 
@property (assign,nonatomic) BOOL showUIPrompt;                                            //@synthesize showUIPrompt=_showUIPrompt - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSUserActivity * userActivity; 
@property (nonatomic,copy,readonly) NSArray * validityErrors; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * uniqueProxyIdentifier;                               //@synthesize uniqueProxyIdentifier=_uniqueProxyIdentifier - In the implementation block
@property (assign,nonatomic) CGSize localLandscapeAspectRatio;                             //@synthesize localLandscapeAspectRatio=_localLandscapeAspectRatio - In the implementation block
@property (assign,nonatomic) CGSize localPortraitAspectRatio;                              //@synthesize localPortraitAspectRatio=_localPortraitAspectRatio - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)contactStore;
+(long long)dialRequestTTYTypeForCHRecentCallTTYType:(long long)arg1 ;
+(/*^block*/id)callProviderManagerGeneratorBlock;
+(long long)ttyTypeForString:(id)arg1 ;
+(long long)originatingUITypeForString:(id)arg1 ;
+(long long)dialRequestTypeForIntentDestinationType:(long long)arg1 ;
+(long long)ttyTypeForIntentTTYType:(long long)arg1 ;
+(id)providerForIntentPreferredCallProvider:(long long)arg1 callCapability:(long long)arg2 providerManager:(id)arg3 ;
+(id)stringForDialType:(long long)arg1 ;
+(id)stringForTTYType:(long long)arg1 ;
+(long long)handleTypeForQueryItem:(id)arg1 ;
+(id)stringForOriginatingUIType:(long long)arg1 ;
+(long long)intentTTYTypeForTTYType:(long long)arg1 ;
+(void)setCallProviderManagerGeneratorBlock:(/*^block*/id)arg1 ;
+(void)setLegacyAddressBookIdentifierToContactIdentifierTransformBlock:(/*^block*/id)arg1 ;
+(/*^block*/id)legacyAddressBookIdentifierToContactIdentifierTransformBlock;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(TUHandle *)handle;
-(id)bundleIdentifier;
-(NSURL *)URL;
-(void)setProvider:(TUCallProvider *)arg1 ;
-(BSProcessHandle *)processHandle;
-(NSString *)contactIdentifier;
-(id)handles;
-(int)service;
-(void)setHandle:(TUHandle *)arg1 ;
-(TUCallProvider *)provider;
-(NSUserActivity *)userActivity;
-(BOOL)isVideo;
-(id)initWithProvider:(id)arg1 ;
-(NSString *)destinationID;
-(void)setDestinationID:(NSString *)arg1 ;
-(id)initWithService:(int)arg1 ;
-(BOOL)isSOS;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(long long)ttyType;
-(id)initWithUserActivity:(id)arg1 ;
-(void)setTtyType:(long long)arg1 ;
-(BOOL)isDialAssisted;
-(BOOL)performLocalDialAssist;
-(BOOL)performDialAssist;
-(void)setDialAssisted:(BOOL)arg1 ;
-(NSString *)uniqueProxyIdentifier;
-(BOOL)shouldSuppressInCallUI;
-(BOOL)showUIPrompt;
-(id)shouldSuppressInCallUIQueryItem;
-(void)setShouldSuppressInCallUI:(BOOL)arg1 ;
-(id)contactNamesByHandleWithContactsDataSource:(id)arg1 ;
-(void)setShowUIPrompt:(BOOL)arg1 ;
-(CGSize)localLandscapeAspectRatio;
-(CGSize)localPortraitAspectRatio;
-(IDSDestination *)endpointIDSDestination;
-(NSString *)endpointRapportMediaSystemIdentifier;
-(NSString *)endpointRapportEffectiveIdentifier;
-(void)setUniqueProxyIdentifier:(NSString *)arg1 ;
-(void)setLocalLandscapeAspectRatio:(CGSize)arg1 ;
-(void)setLocalPortraitAspectRatio:(CGSize)arg1 ;
-(void)setEndpointRapportMediaSystemIdentifier:(NSString *)arg1 ;
-(void)setEndpointRapportEffectiveIdentifier:(NSString *)arg1 ;
-(long long)dialType;
-(NSString *)audioSourceIdentifier;
-(NSUUID *)localSenderIdentityUUID;
-(void)setLocalSenderIdentityUUID:(NSUUID *)arg1 ;
-(NSUUID *)localSenderIdentityAccountUUID;
-(void)setLocalSenderIdentityAccountUUID:(NSUUID *)arg1 ;
-(BOOL)hostOnCurrentDevice;
-(BOOL)endpointOnCurrentDevice;
-(void)setEndpointOnCurrentDevice:(BOOL)arg1 ;
-(void)setSOS:(BOOL)arg1 ;
-(TUCallProviderManager *)providerManager;
-(TUSenderIdentityClient *)senderIdentityClient;
-(BOOL)isRTTAvailable;
-(BOOL)isTTYAvailable;
-(id)callProviderFromURLComponents:(id)arg1 video:(BOOL*)arg2 ;
-(id)handleFromURL:(id)arg1 ;
-(id)contactIdentifierFromURLComponents:(id)arg1 ;
-(int)legacyAddressBookIdentifierFromURLComponents:(id)arg1 ;
-(BOOL)boolValueForQueryItemWithName:(id)arg1 inURLComponents:(id)arg2 ;
-(id)initWithUserActivity:(id)arg1 providerManager:(id)arg2 ;
-(id)initWithUserActivity:(id)arg1 providerManager:(id)arg2 contactsDataSource:(id)arg3 senderIdentityClient:(id)arg4 ;
-(id)initWithDialIntent:(id)arg1 providerManager:(id)arg2 contactsDataSource:(id)arg3 senderIdentityClient:(id)arg4 ;
-(id)_contactFromINPerson:(id)arg1 contactsDataSource:(id)arg2 bestGuessHandle:(id*)arg3 ;
-(CNGeminiManager *)contactGeminiManager;
-(NSString *)providerCustomIdentifier;
-(NSString *)endpointIDSDestinationURI;
-(long long)originatingUIType;
-(BOOL)isRedial;
-(NSArray *)validityErrors;
-(id)destinationIDFromURL:(id)arg1 ;
-(id)legacyAddressBookIdentifierQueryItemName;
-(id)URLScheme;
-(id)URLHost;
-(id)URLQueryItems;
-(id)handleTypeURLQueryItem;
-(id)isVoicemailURLQueryItem;
-(id)providerCustomIdentifierURLQueryItem;
-(id)localSenderIdentityUUIDURLQueryItem;
-(id)localSenderIdentityAccountUUIDURLQueryItem;
-(id)contactIdentifierURLQueryItem;
-(id)audioSourceIdentifierURLQueryItem;
-(id)forceAssistURLQueryItem;
-(id)suppressAssistURLQueryItem;
-(id)dialAssistedURLQueryItem;
-(id)ttyTypeURLQueryItem;
-(id)originatingUIURLQueryItem;
-(id)noPromptURLQueryItem;
-(id)sosURLQueryItem;
-(id)redialURLQueryItem;
-(id)endpointIDSDestinationURIQueryItem;
-(id)endpointRapportMediaSystemIdentifierQueryItem;
-(id)endpointRapportEffectiveIdentifierQueryItem;
-(id)successNotificationQueryItem;
-(id)failureNotificationQueryItem;
-(NSString *)successNotification;
-(NSString *)failureNotification;
-(id)userActivityUsingDeprecatedCallingIntents:(BOOL)arg1 ;
-(id)validityErrorForUnspecifiedProvider;
-(id)validityErrorForDestinationIDWithVoicemail;
-(id)validityErrorForNonNormalDialTypeWithoutTelephony;
-(id)validityErrorForEndpointNotOnCurrentDeviceForNonRelayableService;
-(id)validityErrorForEmergencyCall;
-(id)validityErrorForVideoUnsupported;
-(id)validityErrorForNormalDialTypeWithUnknownDestination;
-(id)validityErrorForUnsupportedHandleType;
-(id)validityErrorForSOS;
-(id)isEmergencyNumberOrIsWhitelistedBlock;
-(id)isEmergencyNumberBlock;
-(BOOL)isEqualToDialRequest:(id)arg1 ;
-(NSDate *)dateDialed;
-(void)setDialType:(long long)arg1 ;
-(void)setProviderCustomIdentifier:(NSString *)arg1 ;
-(void)setAudioSourceIdentifier:(NSString *)arg1 ;
-(void)setVideo:(BOOL)arg1 ;
-(void)setPerformDialAssist:(BOOL)arg1 ;
-(void)setPerformLocalDialAssist:(BOOL)arg1 ;
-(void)setHostOnCurrentDevice:(BOOL)arg1 ;
-(void)setOriginatingUIType:(long long)arg1 ;
-(void)setRedial:(BOOL)arg1 ;
-(void)setEndpointIDSDestinationURI:(NSString *)arg1 ;
-(void)setSuccessNotification:(NSString *)arg1 ;
-(void)setFailureNotification:(NSString *)arg1 ;
-(void)setDateDialed:(NSDate *)arg1 ;
-(void)setProcessHandle:(BSProcessHandle *)arg1 ;
-(BOOL)useTTY;
-(TUSenderIdentity *)localSenderIdentity;
-(id)dialRequestByReplacingProvider:(id)arg1 ;
-(void)setContactGeminiManager:(CNGeminiManager *)arg1 ;
-(void)setIsEmergencyNumberBlock:(id)arg1 ;
-(void)setIsEmergencyNumberOrIsWhitelistedBlock:(id)arg1 ;
@end

