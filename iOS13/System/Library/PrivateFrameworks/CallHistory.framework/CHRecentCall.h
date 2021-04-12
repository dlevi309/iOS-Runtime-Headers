/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/

#import <CallHistory/CallHistory-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue, CHPhoneBookManagerProtocol;
@class NSString, NSUUID, NSSet, CHHandle, NSNumber, NSDate, NSValue, NSObject, NSMutableArray, CNContact;

@interface CHRecentCall : NSObject <NSSecureCoding, NSCopying> {

	BOOL _read;
	BOOL _callerIdIsBlocked;
	BOOL _multiCall;
	BOOL _answered;
	BOOL _mobileOriginated;
	unsigned _callerIdAvailability;
	unsigned _callStatus;
	unsigned _callCategory;
	unsigned _callType;
	NSString* _callerNetworkName;
	long long _handleType;
	NSUUID* _localParticipantUUID;
	NSUUID* _outgoingLocalParticipantUUID;
	NSSet* _remoteParticipantHandles;
	long long _verificationStatus;
	CHHandle* _localParticipantHandle;
	NSString* _uniqueId;
	NSString* _serviceProvider;
	NSNumber* _bytesOfDataUsed;
	NSDate* _date;
	double _duration;
	NSString* _isoCountryCode;
	NSString* _mobileCountryCode;
	NSString* _mobileNetworkCode;
	NSNumber* _disconnectedCause;
	NSNumber* _filteredOutReason;
	NSString* _callerNetworkFirstName;
	NSString* _callerNetworkSecondName;
	unsigned long long _unreadCount;
	NSString* _clientAddressBookRecordId;
	NSString* _contactIdentifier;
	long long _mediaType;
	long long _ttyType;
	NSNumber* _timeToEstablish;
	NSValue* _addressBookRecordRef;
	NSString* _addressBookRecordId;
	NSString* _addressBookCallerIDMultiValueId;
	NSString* _devicePhoneId;
	NSString* _callerId;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _callerName;
	NSMutableArray* _callOccurrences;
	NSString* _callerIdLabel;
	NSString* _callerIdLocation;
	CNContact* _contactRef;
	NSString* _callerIdFormatted;
	id<CHPhoneBookManagerProtocol> _phoneBookManager;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) long long verificationStatus;                                      //@synthesize verificationStatus=_verificationStatus - In the implementation block
@property (nonatomic,copy) NSString * callerName;                                               //@synthesize callerName=_callerName - In the implementation block
@property (assign) BOOL callerIdIsBlocked;                                                      //@synthesize callerIdIsBlocked=_callerIdIsBlocked - In the implementation block
@property (copy) NSString * callerNetworkFirstName;                                             //@synthesize callerNetworkFirstName=_callerNetworkFirstName - In the implementation block
@property (copy) NSString * callerNetworkSecondName;                                            //@synthesize callerNetworkSecondName=_callerNetworkSecondName - In the implementation block
@property (assign) unsigned long long unreadCount;                                              //@synthesize unreadCount=_unreadCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * callOccurrences;                                  //@synthesize callOccurrences=_callOccurrences - In the implementation block
@property (nonatomic,copy) NSString * callerIdLabel;                                            //@synthesize callerIdLabel=_callerIdLabel - In the implementation block
@property (nonatomic,copy) NSString * callerIdLocation;                                         //@synthesize callerIdLocation=_callerIdLocation - In the implementation block
@property (assign) BOOL multiCall;                                                              //@synthesize multiCall=_multiCall - In the implementation block
@property (nonatomic,copy) CNContact * contactRef;                                              //@synthesize contactRef=_contactRef - In the implementation block
@property (getter=callerIdForDisplay,nonatomic,copy) NSString * callerIdFormatted;              //@synthesize callerIdFormatted=_callerIdFormatted - In the implementation block
@property (retain) id<CHPhoneBookManagerProtocol> phoneBookManager;                             //@synthesize phoneBookManager=_phoneBookManager - In the implementation block
@property (assign) BOOL answered;                                                               //@synthesize answered=_answered - In the implementation block
@property (assign) BOOL mobileOriginated;                                                       //@synthesize mobileOriginated=_mobileOriginated - In the implementation block
@property (nonatomic,retain) CHHandle * localParticipantHandle;                                 //@synthesize localParticipantHandle=_localParticipantHandle - In the implementation block
@property (nonatomic,retain) NSUUID * localParticipantUUID;                                     //@synthesize localParticipantUUID=_localParticipantUUID - In the implementation block
@property (nonatomic,retain) NSUUID * outgoingLocalParticipantUUID;                             //@synthesize outgoingLocalParticipantUUID=_outgoingLocalParticipantUUID - In the implementation block
@property (nonatomic,copy) NSSet * remoteParticipantHandles;                                    //@synthesize remoteParticipantHandles=_remoteParticipantHandles - In the implementation block
@property (nonatomic,copy) NSString * uniqueId;                                                 //@synthesize uniqueId=_uniqueId - In the implementation block
@property (nonatomic,copy) NSString * callerNetworkName;                                        //@synthesize callerNetworkName=_callerNetworkName - In the implementation block
@property (assign,nonatomic) unsigned callStatus;                                               //@synthesize callStatus=_callStatus - In the implementation block
@property (nonatomic,copy) NSString * serviceProvider;                                          //@synthesize serviceProvider=_serviceProvider - In the implementation block
@property (nonatomic,copy) NSNumber * bytesOfDataUsed;                                          //@synthesize bytesOfDataUsed=_bytesOfDataUsed - In the implementation block
@property (nonatomic,copy) NSDate * date;                                                       //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) double duration;                                                   //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) NSString * isoCountryCode;                                           //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
@property (assign,nonatomic) BOOL read;                                                         //@synthesize read=_read - In the implementation block
@property (copy) NSString * mobileCountryCode;                                                  //@synthesize mobileCountryCode=_mobileCountryCode - In the implementation block
@property (copy) NSString * mobileNetworkCode;                                                  //@synthesize mobileNetworkCode=_mobileNetworkCode - In the implementation block
@property (copy) NSNumber * disconnectedCause;                                                  //@synthesize disconnectedCause=_disconnectedCause - In the implementation block
@property (copy) NSNumber * filteredOutReason;                                                  //@synthesize filteredOutReason=_filteredOutReason - In the implementation block
@property (assign,nonatomic) unsigned callerIdAvailability;                                     //@synthesize callerIdAvailability=_callerIdAvailability - In the implementation block
@property (copy) NSString * clientAddressBookRecordId;                                          //@synthesize clientAddressBookRecordId=_clientAddressBookRecordId - In the implementation block
@property (nonatomic,copy) NSString * contactIdentifier;                                        //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (assign,nonatomic) long long mediaType;                                               //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) long long ttyType;                                                 //@synthesize ttyType=_ttyType - In the implementation block
@property (assign,nonatomic) long long handleType;                                              //@synthesize handleType=_handleType - In the implementation block
@property (nonatomic,copy) NSNumber * timeToEstablish;                                          //@synthesize timeToEstablish=_timeToEstablish - In the implementation block
@property (copy) NSValue * addressBookRecordRef;                                                //@synthesize addressBookRecordRef=_addressBookRecordRef - In the implementation block
@property (nonatomic,copy) NSString * addressBookRecordId;                                      //@synthesize addressBookRecordId=_addressBookRecordId - In the implementation block
@property (nonatomic,copy) NSString * addressBookCallerIDMultiValueId;                          //@synthesize addressBookCallerIDMultiValueId=_addressBookCallerIDMultiValueId - In the implementation block
@property (assign,nonatomic) unsigned callCategory;                                             //@synthesize callCategory=_callCategory - In the implementation block
@property (assign,nonatomic) unsigned callType;                                                 //@synthesize callType=_callType - In the implementation block
@property (copy) NSString * devicePhoneId;                                                      //@synthesize devicePhoneId=_devicePhoneId - In the implementation block
@property (copy) NSString * callerId;                                                           //@synthesize callerId=_callerId - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predicateForCallsWithAnyRemoteParticipantHandleNormalizedValues:(id)arg1 ;
+(id)callTypeAsString:(unsigned)arg1 ;
+(id)unarchivedObjectClasses;
+(id)unarchivedObjectFromData:(id)arg1 error:(id*)arg2 ;
+(id)predicateForCallsWithStatusRead:(BOOL)arg1 ;
+(id)predicateForCallsWithMediaType:(long long)arg1 ;
+(unsigned)categoryForCallType:(unsigned)arg1 ;
+(id)serviceProviderForCallType:(unsigned)arg1 ;
+(id)predicateForCallsWithTTYType:(long long)arg1 ;
+(id)predicateForCallsWithServiceProvider:(id)arg1 ;
+(id)getLocationForCallerId:(id)arg1 andIsoCountryCode:(id)arg2 ;
+(id)callStatusAsString:(unsigned)arg1 ;
+(id)callMediaTypeAsString:(long long)arg1 ;
+(id)callTTYTypeAsString:(long long)arg1 ;
+(id)callCategoryAsString:(unsigned)arg1 ;
+(id)callHandleTypeAsString:(long long)arg1 ;
+(unsigned)getCallTypeForCategory:(unsigned)arg1 andServiceProvider:(id)arg2 ;
+(unsigned)categoryForMediaType:(long long)arg1 andTTYType:(long long)arg2 ;
+(long long)mediaTypeForCallCategory:(unsigned)arg1 ;
+(long long)ttyTypeForCallCategory:(unsigned)arg1 ;
+(id)predicateForCallsWithCategory:(unsigned)arg1 ;
+(id)predicateForCallsWithRemoteParticipantHandleValue:(id)arg1 ;
+(id)predicateForCallsWithRemoteParticipantHandleNormalizedValue:(id)arg1 ;
+(id)predicateForCallsWithRemoteParticipantHandleType:(long long)arg1 ;
+(id)predicateForCallsWithAnyRemoteParticipantHandleTypes:(id)arg1 ;
+(id)predicateForCallsWithAnyRemoteParticipantHandleValues:(id)arg1 ;
+(id)predicateForCallsWithRemoteParticipantHandle:(id)arg1 ;
+(id)predicateForCallsWithUniqueID:(id)arg1 ;
+(id)predicateForCallsBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
+(id)predicateForCallsWithAnyMediaTypes:(id)arg1 ;
+(id)predicateForCallsWithRemoteParticipantCount:(long long)arg1 ;
+(id)predicateForCallsWithAnyRemoteParticipantHandles:(id)arg1 ;
+(id)predicateForCallsWithAnyServiceProviders:(id)arg1 ;
+(id)predicateForCallsWithStatus:(unsigned)arg1 ;
+(id)predicateForCallsWithStatusAnswered:(BOOL)arg1 ;
+(id)predicateForCallsWithStatusOriginated:(BOOL)arg1 ;
+(id)predicateForCallsWithAnyTTYTypes:(id)arg1 ;
+(id)predicateForCallsWithAnyUniqueIDs:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(id)initWithQueue:(id)arg1 ;
-(double)duration;
-(long long)mediaType;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)contactIdentifier;
-(NSString *)isoCountryCode;
-(unsigned)callStatus;
-(void)execute:(/*^block*/id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(NSString *)uniqueId;
-(NSString *)mobileNetworkCode;
-(NSString *)mobileCountryCode;
-(void)setMobileCountryCode:(NSString *)arg1 ;
-(void)setMobileNetworkCode:(NSString *)arg1 ;
-(void)setIsoCountryCode:(NSString *)arg1 ;
-(void)executeSync:(/*^block*/id)arg1 ;
-(void)setHandleType:(long long)arg1 ;
-(long long)handleType;
-(NSUUID *)outgoingLocalParticipantUUID;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(void)setMediaType:(long long)arg1 ;
-(NSString *)serviceProvider;
-(NSNumber *)timeToEstablish;
-(void)setTimeToEstablish:(NSNumber *)arg1 ;
-(long long)ttyType;
-(unsigned)callType;
-(void)setCallType:(unsigned)arg1 ;
-(void)setTtyType:(long long)arg1 ;
-(id)archivedDataWithError:(id*)arg1 ;
-(NSSet *)remoteParticipantHandles;
-(NSString *)callerId;
-(BOOL)canCoalesceWithCall:(id)arg1 withStrategy:(id)arg2 ;
-(BOOL)coalesceWithCall:(id)arg1 withStrategy:(id)arg2 ;
-(id)callerIdSubStringForDisplay;
-(id)callerIdForDisplay;
-(id)callerNameForDisplay;
-(NSString *)addressBookRecordId;
-(void)setRemoteParticipantHandles:(NSSet *)arg1 ;
-(void)setCallStatus:(unsigned)arg1 ;
-(NSNumber *)filteredOutReason;
-(long long)verificationStatus;
-(void)setFilteredOutReason:(NSNumber *)arg1 ;
-(void)setVerificationStatus:(long long)arg1 ;
-(void)setRead:(BOOL)arg1 ;
-(BOOL)read;
-(void)setUniqueId:(NSString *)arg1 ;
-(unsigned long long)unreadCount;
-(BOOL)answered;
-(void)setUnreadCount:(unsigned long long)arg1 ;
-(void)setServiceProvider:(NSString *)arg1 ;
-(void)setAnswered:(BOOL)arg1 ;
-(id)executeSyncWithResult:(/*^block*/id)arg1 ;
-(void)setLocalParticipantUUID:(NSUUID *)arg1 ;
-(void)setOutgoingLocalParticipantUUID:(NSUUID *)arg1 ;
-(NSUUID *)localParticipantUUID;
-(void)setCallerIdFormatted:(NSString *)arg1 ;
-(id)coalescingHash;
-(unsigned long long)numberOfOccurrences;
-(NSMutableArray *)callOccurrences;
-(void)setBytesOfDataUsed:(NSNumber *)arg1 ;
-(void)setCallOccurrences:(NSMutableArray *)arg1 ;
-(void)setMultiCall:(BOOL)arg1 ;
-(BOOL)multiCall;
-(NSNumber *)disconnectedCause;
-(NSNumber *)bytesOfDataUsed;
-(NSString *)callerNetworkName;
-(unsigned)callerIdAvailability;
-(unsigned)callCategory;
-(void)setCallerIdAvailability:(unsigned)arg1 ;
-(void)setCallerIdLocation:(NSString *)arg1 ;
-(void)setCallerNetworkName:(NSString *)arg1 ;
-(void)setDisconnectedCause:(NSNumber *)arg1 ;
-(void)setCallCategory:(unsigned)arg1 ;
-(void)setCallerId:(NSString *)arg1 ;
-(void)setPhoneBookManager:(id<CHPhoneBookManagerProtocol>)arg1 ;
-(void)fixCallTypeInfo;
-(NSString *)devicePhoneId;
-(void)setDevicePhoneId:(NSString *)arg1 ;
-(BOOL)callerIdIsBlocked;
-(void)setCallerIdIsBlocked:(BOOL)arg1 ;
-(NSString *)callerNetworkFirstName;
-(void)setCallerNetworkFirstName:(NSString *)arg1 ;
-(NSString *)callerNetworkSecondName;
-(void)setCallerNetworkSecondName:(NSString *)arg1 ;
-(void)setCallerIdLabel:(NSString *)arg1 ;
-(NSString *)clientAddressBookRecordId;
-(void)setClientAddressBookRecordId:(NSString *)arg1 ;
-(id)callerNameSync;
-(void)setCallerName:(NSString *)arg1 ;
-(void)setAddressBookRecordId:(NSString *)arg1 ;
-(void)setAddressBookCallerIDMultiValueId:(NSString *)arg1 ;
-(void)setAddressBookRecordRef:(NSValue *)arg1 ;
-(void)setContactRef:(CNContact *)arg1 ;
-(BOOL)canCoalesceRemoteParticipantHandlesFromCall:(id)arg1 ;
-(BOOL)canCoalesceSyncWithRecentsStrategyWithCall:(id)arg1 ;
-(BOOL)canCoalesceSyncWithCollapseIfEqualStrategyWithCall:(id)arg1 ;
-(id)contactIdentifierSync;
-(BOOL)canCoalesceSyncWithCall:(id)arg1 withStrategy:(id)arg2 ;
-(id)callOccurrencesSync;
-(void)addOccurrencesFromArraySync:(id)arg1 ;
-(unsigned long long)numberOfOccurrencesSync;
-(void)createOccurrenceArraySync;
-(BOOL)callerIdIsEmailAddressSync;
-(id<CHPhoneBookManagerProtocol>)phoneBookManager;
-(void)fetchAndSetContactIdentifierSync;
-(void)fetchAndSetFullContactSync;
-(id)contactRefSync;
-(id)addressBookRecordIdSync;
-(long long)handleTypeSync;
-(id)callerIdForDisplaySync;
-(id)getLocalizedStringSync:(id)arg1 ;
-(id)callerNameForDisplaySync;
-(id)callerIdLabelSync;
-(id)callerIdLocationSync;
-(id)callOccurrencesAsStringSync;
-(void)updateTTYAndMediaType;
-(void)addressBookChanged;
-(CNContact *)contactRef;
-(NSString *)addressBookCallerIDMultiValueId;
-(id)addressBookRecordRefSync;
-(BOOL)callerIdIsEmailAddress;
-(NSString *)callerName;
-(NSString *)callerIdLabel;
-(NSString *)callerIdLocation;
-(BOOL)representsCallAtDate:(id)arg1 ;
-(id)descriptionInDepth;
-(CHHandle *)localParticipantHandle;
-(void)setLocalParticipantHandle:(CHHandle *)arg1 ;
-(NSValue *)addressBookRecordRef;
-(BOOL)mobileOriginated;
-(void)setMobileOriginated:(BOOL)arg1 ;
@end

