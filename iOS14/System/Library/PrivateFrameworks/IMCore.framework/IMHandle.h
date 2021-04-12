/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class IMAccount, NSString, NSDictionary, NSDate, NSSet, NSArray, NSData, NSAttributedString, NSMutableArray, NSNumber, MKMapItem, CNContact, IMServiceImpl;

@interface IMHandle : NSObject <NSSecureCoding> {

	IMAccount* _account;
	NSString* _id;
	NSString* _uncanonicalID;
	NSString* _countryCode;
	NSDictionary* _otherServiceIDs;
	NSDate* _idleSince;
	NSDate* _feedUpdatedDate;
	NSDictionary* _extraProps;
	NSDictionary* _certs;
	NSSet* _groups;
	NSString* _cnFirstName;
	NSString* _cnLastName;
	NSString* _cnFullName;
	NSString* _cnNickname;
	NSString* _displayID;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _fullName;
	NSString* _nickname;
	NSArray* _emails;
	NSString* _normalizedFormOfID;
	NSString* _IDWithoutResource;
	NSString* _IDWithTrimmedServer;
	NSString* _uniqueName;
	NSData* _pictureData;
	NSString* _statusMsg;
	NSString* _processedStatusMsg;
	NSAttributedString* _richStatusMsg;
	NSDate* _whenWentOffline;
	NSDate* _whenStatusChanged;
	NSString* _prevStatusMsg;
	NSMutableArray* _notificationNameQueue;
	NSMutableArray* _notificationQueue;
	CFPhoneNumberRef _phoneNumberRef;
	NSString* _formattedNumber;
	unsigned long long _status;
	unsigned long long _prevStatus;
	unsigned long long _capabilities;
	unsigned _authRequestStatus;
	unsigned long long _resourceIndex;
	long long _IDStatus;
	BOOL _blockNotifications;
	BOOL _hasTemporaryWatch;
	BOOL _isMobile;
	BOOL _isBot;
	BOOL _isAnonymous;
	BOOL _beingTornDown;
	BOOL _hasCheckedPhoneNumber;
	long long _priority;
	int _addressBookIdentifier;
	int _notificationQueueCount;
	NSNumber* _isBusiness;
	NSNumber* _isMako;
	NSNumber* _isApple;
	BOOL _hasSuggestedName;
	BOOL _hasCheckedForSuggestions;
	NSString* _personCentricID;
	NSString* _guid;
	MKMapItem* _mapItem;
	NSData* _mapItemImageData;
	NSData* _mapItemBannerImageData;
	CNContact* _cnContact;
	NSString* _suggestedName;
	NSString* _cachedDisplayNameWithAbbreviation;

}

@property (nonatomic,retain) CNContact * cnContact;                                         //@synthesize cnContact=_cnContact - In the implementation block
@property (nonatomic,retain) NSDictionary * otherServiceIDs;                                //@synthesize otherServiceIDs=_otherServiceIDs - In the implementation block
@property (assign,nonatomic) long long priority;                                            //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) long long IDStatus;                                            //@synthesize IDStatus=_IDStatus - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                           //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,retain) NSData * mapItemImageData;                                     //@synthesize mapItemImageData=_mapItemImageData - In the implementation block
@property (nonatomic,retain) NSData * mapItemBannerImageData;                               //@synthesize mapItemBannerImageData=_mapItemBannerImageData - In the implementation block
@property (nonatomic,copy) NSString * suggestedName;                                        //@synthesize suggestedName=_suggestedName - In the implementation block
@property (assign,nonatomic) BOOL hasCheckedForSuggestions;                                 //@synthesize hasCheckedForSuggestions=_hasCheckedForSuggestions - In the implementation block
@property (assign,nonatomic) BOOL hasSuggestedName;                                         //@synthesize hasSuggestedName=_hasSuggestedName - In the implementation block
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain,readonly) NSString * _displayNameWithAbbreviation; 
@property (nonatomic,retain) NSString * cachedDisplayNameWithAbbreviation;                  //@synthesize cachedDisplayNameWithAbbreviation=_cachedDisplayNameWithAbbreviation - In the implementation block
@property (nonatomic,retain,readonly) NSString * ID;                                        //@synthesize id=_id - In the implementation block
@property (nonatomic,retain,readonly) NSString * originalID;                                //@synthesize uncanonicalID=_uncanonicalID - In the implementation block
@property (nonatomic,retain,readonly) NSString * countryCode; 
@property (nonatomic,retain) NSString * personCentricID;                                    //@synthesize personCentricID=_personCentricID - In the implementation block
@property (nonatomic,retain,readonly) NSString * displayID; 
@property (nonatomic,retain,readonly) NSString * normalizedID; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain,readonly) NSString * name; 
@property (nonatomic,retain,readonly) NSString * fullName; 
@property (nonatomic,retain,readonly) NSString * uniqueName;                                //@synthesize uniqueName=_uniqueName - In the implementation block
@property (nonatomic,retain,readonly) NSString * nameAndID; 
@property (nonatomic,retain,readonly) NSString * nameAndEmail; 
@property (nonatomic,retain,readonly) NSString * firstName; 
@property (nonatomic,retain,readonly) NSString * lastName; 
@property (nonatomic,retain,readonly) NSString * nickname; 
@property (nonatomic,retain,readonly) NSString * phoneticFirstName; 
@property (nonatomic,retain,readonly) NSString * phoneticLastName; 
@property (nonatomic,retain,readonly) NSString * phoneticFullName; 
@property (nonatomic,retain,readonly) IMAccount * account;                                  //@synthesize account=_account - In the implementation block
@property (nonatomic,retain,readonly) IMServiceImpl * service; 
@property (nonatomic,readonly) unsigned long long status; 
@property (nonatomic,retain,readonly) NSString * statusMessage; 
@property (nonatomic,retain,readonly) NSString * nameOfStatus; 
@property (nonatomic,retain,readonly) NSAttributedString * richStatusMessage;               //@synthesize richStatusMsg=_richStatusMsg - In the implementation block
@property (nonatomic,retain,readonly) NSString * offlineString; 
@property (nonatomic,readonly) unsigned long long previousStatus;                           //@synthesize prevStatus=_prevStatus - In the implementation block
@property (nonatomic,retain,readonly) NSString * previousStatusMessage;                     //@synthesize prevStatusMsg=_prevStatusMsg - In the implementation block
@property (nonatomic,readonly) double timeSinceWentOffline; 
@property (nonatomic,readonly) double timeSinceStatusChanged; 
@property (nonatomic,readonly) unsigned authRequestStatus;                                  //@synthesize authRequestStatus=_authRequestStatus - In the implementation block
@property (nonatomic,readonly) double idleTime; 
@property (nonatomic,retain,readonly) NSString * idleString; 
@property (nonatomic,retain,readonly) NSDate * feedUpdatedDate;                             //@synthesize feedUpdatedDate=_feedUpdatedDate - In the implementation block
@property (nonatomic,readonly) BOOL canBeAdded; 
@property (nonatomic,readonly) BOOL canBeDeleted; 
@property (nonatomic,readonly) unsigned long long capabilities; 
@property (nonatomic,readonly) BOOL isBot;                                                  //@synthesize isBot=_isBot - In the implementation block
@property (nonatomic,readonly) BOOL isBuddy; 
@property (nonatomic,readonly) BOOL isLoginIMHandle; 
@property (nonatomic,readonly) BOOL isVisiblyBlocked; 
@property (assign,setter=setBlocked:,nonatomic) BOOL isBlocked; 
@property (nonatomic,readonly) BOOL isAnonymous; 
@property (nonatomic,readonly) BOOL isSystemUser; 
@property (nonatomic,readonly) BOOL isMobile;                                               //@synthesize isMobile=_isMobile - In the implementation block
@property (nonatomic,readonly) BOOL isLoginIMHandleForAnyAccount; 
@property (nonatomic,retain,readonly) NSString * mobileDeviceName; 
@property (nonatomic,readonly) BOOL watchingIMHandle; 
@property (nonatomic,retain,readonly) NSData * pictureData;                                 //@synthesize pictureData=_pictureData - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * extraProperties;                       //@synthesize extraProps=_extraProps - In the implementation block
@property (nonatomic,retain,readonly) NSString * email; 
@property (nonatomic,retain,readonly) NSArray * emails; 
@property (nonatomic,retain,readonly) NSArray * groupsArray; 
@property (nonatomic,retain,readonly) NSSet * groups; 
@property (nonatomic,readonly) BOOL hasOtherSiblings; 
@property (nonatomic,retain,readonly) NSSet * siblings; 
@property (nonatomic,retain,readonly) NSArray * siblingsArray; 
@property (nonatomic,retain,readonly) NSArray * accountSiblingsArray; 
@property (nonatomic,retain,readonly) NSArray * existingAccountSiblingsArray; 
@property (nonatomic,readonly) id bestSibling; 
@property (nonatomic,retain,readonly) id bestAccountSibling; 
@property (nonatomic,readonly) BOOL isConferenceAvailable; 
@property (nonatomic,readonly) BOOL hasConferencing; 
@property (nonatomic,readonly) BOOL hasVideo; 
@property (nonatomic,readonly) BOOL hasMultiwayVideo; 
@property (nonatomic,readonly) BOOL hasAudio; 
@property (nonatomic,readonly) BOOL hasMultiwayAudio; 
@property (nonatomic,retain,readonly) NSString * resource; 
@property (nonatomic,retain,readonly) NSString * IDWithoutResource; 
@property (nonatomic,retain,readonly) NSString * server; 
@property (nonatomic,retain,readonly) NSString * accountTypeName; 
@property (nonatomic,retain,readonly) NSString * guid;                                      //@synthesize guid=_guid - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)imageManager;
+(id)handlesForCNContact:(id)arg1 ;
+(BOOL)notificationsEnabled;
+(void)setNotificationsEnabled:(BOOL)arg1 ;
+(id)filterIMHandlesForBestAccountSiblings:(id)arg1 ;
+(void)_loadStatusNames;
+(id)cnPhoneticKeys;
+(id)bestIMHandleInArray:(id)arg1 ;
+(id)nameOfStatus:(unsigned long long)arg1 ;
+(id)filterIMHandlesForAccountSiblings:(id)arg1 onAccount:(id)arg2 ;
+(void)bestHandlesForCNContacts:(id)arg1 useExtendedAsyncLookup:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
+(void)handlesForCNContacts:(id)arg1 useBestHandle:(BOOL)arg2 useExtendedAsyncLookup:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
+(void)validHandlesForCNContacts:(id)arg1 useExtendedAsyncLookup:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
+(void)bestHandlesForCNContacts:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)validHandlesForCNContacts:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isBlocked;
-(NSString *)ID;
-(IMAccount *)account;
-(void)setEmail:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)phoneticLastName;
-(NSString *)phoneticFirstName;
-(void)_registerForNotifications;
-(NSString *)fullName;
-(BOOL)isAnonymous;
-(BOOL)isContact;
-(NSString *)countryCode;
-(NSSet *)siblings;
-(NSString *)guid;
-(unsigned long long)capabilities;
-(void)setCapabilities:(unsigned long long)arg1 ;
-(id)initWithAccount:(id)arg1 ID:(id)arg2 alreadyCanonical:(BOOL)arg3 ;
-(id)fmfHandle;
-(NSString *)phoneticFullName;
-(BOOL)hasName;
-(BOOL)hasAudio;
-(id)init;
-(BOOL)isApple;
-(NSString *)uniqueName;
-(CFPhoneNumberRef)phoneNumberRef;
-(void)postNotificationName:(id)arg1 ;
-(BOOL)isBot;
-(NSString *)normalizedID;
-(long long)compareStatus:(id)arg1 ;
-(NSData *)mapItemBannerImageData;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isMako;
-(NSString *)nickname;
-(NSArray *)emails;
-(CNContact *)cnContact;
-(BOOL)isBusiness;
-(NSSet *)groups;
-(void)propertiesChanged:(id)arg1 ;
-(id)displayNameForChat:(id)arg1 ;
-(id)cnContactWithKeys:(id)arg1 ;
-(long long)compareAccountNames:(id)arg1 ;
-(MKMapItem *)mapItem;
-(NSString *)_displayNameWithAbbreviation;
-(id)fmfSiblingHandles;
-(NSString *)name;
-(NSString *)originalID;
-(NSString *)suggestedName;
-(NSString *)nameAndID;
-(id)description;
-(NSString *)resource;
-(void)setSuggestedName:(NSString *)arg1 ;
-(NSString *)displayID;
-(BOOL)_setCapabilities:(unsigned long long)arg1 ;
-(NSString *)server;
-(BOOL)hasLocation;
-(NSString *)personCentricID;
-(void)scheduleSuggestedNameFetchIfNecessary;
-(void)setEmails:(NSArray *)arg1 ;
-(BOOL)isBuddy;
-(void)setFirstName:(id)arg1 lastName:(id)arg2 ;
-(long long)compareIDs:(id)arg1 ;
-(id)_contactID;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(void)_sendRemoteLogDumpRequest:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)hasServer;
-(void)_postNotificationName:(id)arg1 userInfo:(id)arg2 ;
-(void)setAnonymous:(BOOL)arg1 ;
-(void)_postNotification:(id)arg1 ;
-(BOOL)_allowedByScreenTime;
-(NSString *)statusMessage;
-(void)setBlocked:(BOOL)arg1 ;
-(void)setCnContact:(CNContact *)arg1 ;
-(BOOL)matchesIMHandle:(id)arg1 ;
-(BOOL)isLoginIMHandle;
-(BOOL)isMobile;
-(long long)IDStatus;
-(id)imHandleForOtherAccount:(id)arg1 ;
-(BOOL)hasSuggestedName;
-(NSData *)mapItemImageData;
-(BOOL)hasCapability:(unsigned long long)arg1 ;
-(NSString *)email;
-(double)idleTime;
-(long long)priority;
-(NSDictionary *)extraProperties;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setImageData:(id)arg1 ;
-(void)setPriority:(long long)arg1 ;
-(IMServiceImpl *)service;
-(void)setPersonCentricID:(NSString *)arg1 ;
-(NSData *)pictureData;
-(unsigned long long)status;
-(void)dealloc;
-(BOOL)hasVideo;
-(id)bestAccountSibling;
-(id)publicAPIPropertiesDictionary;
-(id)immediateNameWithNeedsSuggestedNameFetch:(BOOL*)arg1 useSuggestedName:(BOOL)arg2 ;
-(unsigned)authRequestStatus;
-(void)setCustomPictureData:(id)arg1 key:(id)arg2 ;
-(void)beginNotificationQueue;
-(void)releaseNotificationQueue;
-(void)_stopRetainingAccount:(id)arg1 ;
-(void)_updateOriginalID:(id)arg1 ;
-(void)_setOriginalID:(id)arg1 ;
-(BOOL)watchingIMHandle;
-(void)setHasTemporaryWatch:(BOOL)arg1 ;
-(BOOL)resetCNContact;
-(void)updateCNContact:(id)arg1 ;
-(void)statusChanged:(unsigned long long)arg1 message:(id)arg2 ;
-(void)statusChanged:(unsigned long long)arg1 ;
-(BOOL)_isChatSiblingOf:(id)arg1 ;
-(void)_fetchBusinessInfo;
-(void)_setOriginalID:(id)arg1 updateSiblings:(BOOL)arg2 ;
-(void)_setCountryCode:(id)arg1 updateSiblings:(BOOL)arg2 ;
-(id)existingChatSiblingsArray;
-(NSArray *)groupsArray;
-(id)bestIMHandleForService:(id)arg1 ;
-(BOOL)shouldQueueNotifications;
-(BOOL)areCNContactPropertiesRecent;
-(void)resetCNContactProperties;
-(void)_clearCNContactProperties;
-(BOOL)hasCheckedForSuggestions;
-(void)setHasCheckedForSuggestions:(BOOL)arg1 ;
-(void)setHasSuggestedName:(BOOL)arg1 ;
-(id)_displayNameWithContact:(id)arg1 ;
-(BOOL)_hasServiceNameProperties;
-(id)_IDWithTrimmedServer;
-(id)_displayNameWithNicknameIfAvailable;
-(id)_formattedPhoneNumber;
-(BOOL)_hasABName;
-(void)_setBaseFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3 ;
-(void)setFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3 andUpdateABPerson:(BOOL)arg4 ;
-(void)setEmail:(id)arg1 andUpdateABPerson:(BOOL)arg2 ;
-(id)_fallbackCNContactWithAllKeys;
-(void)setCachedDisplayNameWithAbbreviation:(NSString *)arg1 ;
-(void)sendNotificationABPersonChanged;
-(BOOL)hasResource;
-(NSString *)IDWithoutResource;
-(NSArray *)accountSiblingsArray;
-(void)_createPhoneNumberRefIfNeeded;
-(BOOL)isBetterThanIMHandle:(id)arg1 nonPhoneNumbersPreferred:(BOOL)arg2 ;
-(double)timeSinceWentOffline;
-(id)bestIMHandleForAccount:(id)arg1 onService:(id)arg2 inGroup:(id)arg3 otherThan:(id)arg4 ;
-(NSArray *)existingAccountSiblingsArray;
-(BOOL)isBetterThanIMHandle:(id)arg1 ;
-(void)_setExtraProperties:(id)arg1 ;
-(BOOL)_isMyIDInList:(id)arg1 ;
-(id)imHandleWithoutResource;
-(void)setStatus:(unsigned long long)arg1 message:(id)arg2 richMessage:(id)arg3 ;
-(void)_updateStatusBasedOnAuthRequestStatus;
-(double)timeSinceStatusChanged;
-(void)_filterStatusMessage;
-(void)_clearStatusMessageURLCache;
-(id)_nameForComparisonPreferFirst:(BOOL)arg1 ;
-(id)chatSiblingsArray;
-(id)_chatSiblingsArray;
-(void)customPictureDataChanged:(id)arg1 key:(id)arg2 ;
-(void)_mapItemFetchedWithMapItems:(id)arg1 error:(id)arg2 ;
-(void)_fetchMapItemImageDataForMapItem:(id)arg1 ;
-(void)_fetchMapItemBannerImageDataForMapItem:(id)arg1 ;
-(void)_postOnScreenChangedNotificationForProperty:(id)arg1 ;
-(void)_mapItemImageDataFetchedWithResultData:(id)arg1 error:(id)arg2 ;
-(void)setMapItemImageData:(NSData *)arg1 ;
-(void)_mapItemBannerImageDataFetchedWithResultData:(id)arg1 error:(id)arg2 ;
-(void)setMapItemBannerImageData:(NSData *)arg1 ;
-(id)initWithAccount:(id)arg1 ID:(id)arg2 ;
-(id)_handleInfo;
-(void)_setOriginalID:(id)arg1 countryCode:(id)arg2 updateSiblings:(BOOL)arg3 ;
-(BOOL)canBeDeleted;
-(void)setUniqueName:(NSString *)arg1 ;
-(NSString *)nameAndEmail;
-(void)resetUniqueName;
-(void)setLocalNickname:(id)arg1 ;
-(BOOL)canBeAdded;
-(BOOL)isSystemUser;
-(void)setIsMobile:(BOOL)arg1 ;
-(void)setIsBot:(BOOL)arg1 ;
-(NSString *)mobileDeviceName;
-(BOOL)isLoginIMHandleForAnyAccount;
-(void)requestValueOfProperty:(id)arg1 ;
-(void)setValue:(id)arg1 ofExtraProperty:(id)arg2 ;
-(id)bestIMHandleForAccount:(id)arg1 ;
-(id)bestSibling;
-(BOOL)isVisiblyBlocked;
-(unsigned)sortOrderInGroup:(id)arg1 ;
-(NSString *)accountTypeName;
-(id)existingIMHandleWithoutResource;
-(id)dependentIMHandles;
-(void)setAuthRequestStatus:(unsigned)arg1 ;
-(void)setPersonStatus:(unsigned long long)arg1 ;
-(void)statusMessageChanged:(id)arg1 ;
-(NSString *)nameOfStatus;
-(void)_setIDStatus:(long long)arg1 ;
-(void)setIdleSince:(id)arg1 ;
-(void)setFeedUpdatedDate:(NSDate *)arg1 ;
-(NSString *)offlineString;
-(NSString *)idleString;
-(long long)compareFirstNames:(id)arg1 ;
-(long long)compareLastNames:(id)arg1 ;
-(long long)compareNormalizedIDs:(id)arg1 ;
-(BOOL)hasOtherSiblings;
-(NSArray *)siblingsArray;
-(BOOL)isAccountSiblingOf:(id)arg1 ;
-(BOOL)isSiblingOf:(id)arg1 ;
-(id)_chatSiblings;
-(id)_bestChatSibling;
-(BOOL)hasConferencing;
-(BOOL)isConferenceAvailable;
-(BOOL)hasMultiwayVideo;
-(BOOL)hasMultiwayAudio;
-(void)_sendAutomationData:(id)arg1 properties:(id)arg2 ;
-(void)_sendCommand:(id)arg1 properties:(id)arg2 ;
-(void)_imPersonPictureChanged:(id)arg1 ;
-(id)customPictureData;
-(void)setCustomPictureData:(id)arg1 ;
-(unsigned long long)previousStatus;
-(NSString *)previousStatusMessage;
-(NSAttributedString *)richStatusMessage;
-(NSDate *)feedUpdatedDate;
-(NSDictionary *)otherServiceIDs;
-(void)setOtherServiceIDs:(NSDictionary *)arg1 ;
-(void)setIDStatus:(long long)arg1 ;
-(NSString *)cachedDisplayNameWithAbbreviation;
-(void)_sendRemoteLogDumpRequest;
@end

