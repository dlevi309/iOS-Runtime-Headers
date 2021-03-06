/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKObject.h>

@class EKAvailabilityCache, NSDate, NSString, NSSet, NSData, EKSourceConstraints, REMObjectID, NSError, NSNumber, NSDictionary;

@interface EKSource : EKObject {

	EKAvailabilityCache* _availabilityCache;
	BOOL _isFacebook;
	BOOL _snoozeAlarmRequiresDetach;
	NSDate* _timeOfLastExternalIdentificationCache;
	NSString* _cachedHost;
	long long _cachedPort;
	NSSet* _cachedOwnerAddresses;

}

@property (nonatomic,readonly) BOOL hasOwnerEmailAddress; 
@property (nonatomic,retain) NSDate * timeOfLastExternalIdentificationCache;                      //@synthesize timeOfLastExternalIdentificationCache=_timeOfLastExternalIdentificationCache - In the implementation block
@property (nonatomic,retain) NSString * cachedHost;                                               //@synthesize cachedHost=_cachedHost - In the implementation block
@property (assign,nonatomic) long long cachedPort;                                                //@synthesize cachedPort=_cachedPort - In the implementation block
@property (nonatomic,retain) NSSet * cachedOwnerAddresses;                                        //@synthesize cachedOwnerAddresses=_cachedOwnerAddresses - In the implementation block
@property (nonatomic,retain) NSData * lastSyncErrorData; 
@property (nonatomic,copy) NSString * delegatedAccountOwnerStoreID; 
@property (nonatomic,readonly) BOOL isDelegate; 
@property (nonatomic,copy) NSString * externalID; 
@property (nonatomic,readonly) NSSet * allCalendars; 
@property (nonatomic,readonly) EKAvailabilityCache * availabilityCache; 
@property (nonatomic,readonly) int displayOrderForNewCalendar; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,readonly) BOOL isFacebookSource; 
@property (nonatomic,readonly) BOOL supportsCalendarCreation; 
@property (nonatomic,readonly) BOOL supportsReminderActions; 
@property (nonatomic,readonly) EKSourceConstraints * constraints; 
@property (nonatomic,readonly) BOOL isWritable; 
@property (nonatomic,readonly) BOOL supportsFreebusy; 
@property (nonatomic,readonly) BOOL supportsEventCalendarCreation; 
@property (nonatomic,readonly) BOOL supportsFloatingTimeZone; 
@property (nonatomic,readonly) BOOL supportsMultipleAlarms; 
@property (nonatomic,readonly) BOOL supportsMultipleMonthsInYearlyRecurrence; 
@property (nonatomic,readonly) BOOL supportsMultipleDaysInMonthlyRecurrence; 
@property (nonatomic,readonly) BOOL supportsYearlyRecurrenceWithArbitraryInterval; 
@property (nonatomic,readonly) BOOL supportsURLs; 
@property (nonatomic,readonly) BOOL prefersSuggestingNewTimeViaEmail; 
@property (nonatomic,readonly) BOOL supportsAttendeeEventForwarding; 
@property (nonatomic,readonly) BOOL preferUsingEventOrganizerEmailWhenComposingMail; 
@property (nonatomic,readonly) BOOL isEnabledForEvents; 
@property (nonatomic,readonly) REMObjectID * remAccountObjectID; 
@property (nonatomic,readonly) NSError * sourceError; 
@property (nonatomic,readonly) BOOL syncs; 
@property (nonatomic,copy) NSNumber * defaultAlarmOffset; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * creatorBundleID; 
@property (nonatomic,copy) NSString * creatorCodeSigningIdentity; 
@property (assign,nonatomic) BOOL onlyCreatorCanModify; 
@property (nonatomic,readonly) BOOL wantsCommentPromptWhenDeclining; 
@property (assign,nonatomic) long long preferredEventPrivateValue; 
@property (assign,nonatomic) long long strictestEventPrivateValue; 
@property (nonatomic,readonly) NSString * serverHost; 
@property (nonatomic,readonly) long long serverPort; 
@property (nonatomic,readonly) BOOL serverUsesSSL; 
@property (nonatomic,readonly) NSSet * ownerAddresses; 
@property (nonatomic,readonly) NSString * preferredOwnerAddress; 
@property (assign,nonatomic) BOOL wasMigrated; 
@property (nonatomic,retain) NSString * sourceIdentifier; 
@property (assign,nonatomic) long long sourceType; 
@property (assign,nonatomic) BOOL showsNotifications; 
@property (nonatomic,retain) NSString * constraintsDescriptionPath; 
@property (nonatomic,retain) NSString * constraintsName; 
@property (nonatomic,retain) NSString * constraintsDescriptionPathForUnitTesting; 
@property (assign,nonatomic) BOOL allowsTasks; 
@property (assign,nonatomic) BOOL allowsEvents; 
@property (assign,nonatomic) BOOL allowsCalendarAddDeleteModify; 
@property (assign,nonatomic) BOOL supportsSharedCalendars; 
@property (assign,nonatomic) BOOL supportsAlarmAcknowledgedDate; 
@property (assign,nonatomic) BOOL supportsPrivateEvents; 
@property (assign,nonatomic) BOOL prohibitsPrivateEventsWithAttendees; 
@property (assign,nonatomic) BOOL requiresSamePrivacyLevelAcrossRecurrenceSeries; 
@property (assign,nonatomic) BOOL supportsAvailabilityRequests; 
@property (assign,nonatomic) BOOL supportsIgnoringEventsInAvailabilityRequests; 
@property (assign,nonatomic) BOOL supportsLocationDirectorySearches; 
@property (assign,nonatomic) BOOL allowsProposeNewTime; 
@property (assign,nonatomic) BOOL prohibitsICSImport; 
@property (assign,nonatomic) BOOL isFacebook;                                                     //@synthesize isFacebook=_isFacebook - In the implementation block
@property (assign,nonatomic) BOOL prohibitsDetachmentOnCommentChange; 
@property (assign,nonatomic) BOOL prohibitsMultipleDaysInMonthlyRecurrence; 
@property (assign,nonatomic) BOOL prohibitsMultipleMonthsInYearlyRecurrence; 
@property (assign,nonatomic) BOOL prohibitsYearlyRecurrenceInterval; 
@property (assign,nonatomic) BOOL usesSelfAttendee; 
@property (assign,nonatomic) BOOL snoozeAlarmRequiresDetach;                                      //@synthesize snoozeAlarmRequiresDetach=_snoozeAlarmRequiresDetach - In the implementation block
@property (nonatomic,readonly) NSString * personaIdentifier; 
@property (nonatomic,readonly) BOOL supportsJunkReporting; 
@property (nonatomic,readonly) BOOL supportsPhoneNumbers; 
@property (nonatomic,readonly) unsigned long long lastSyncError; 
@property (nonatomic,copy,readonly) NSDictionary * lastSyncErrorUserInfo; 
@property (nonatomic,retain) NSDate * lastSyncStartDate; 
@property (nonatomic,retain) NSDate * lastSyncEndDate; 
@property (nonatomic,readonly) BOOL isSyncing; 
@property (assign,nonatomic) int flags; 
@property (assign,nonatomic) int flags2; 
@property (nonatomic,readonly) NSSet * calendars; 
+(id)knownIdentityKeysForComparison;
+(long long)_calEventPrivacyLevelToEKPrivacyLevel:(int)arg1 ;
+(int)_ekPrivacyLevelToCalEventPrivacyLevel:(long long)arg1 ;
+(id)sourceWithEventStore:(id)arg1 ;
+(BOOL)isWeakRelationship;
+(id)knownSingleValueKeysForComparison;
+(Class)frozenClass;
-(BOOL)validate:(id*)arg1 ;
-(long long)serverPort;
-(BOOL)remove:(id*)arg1 ;
-(NSError *)sourceError;
-(void)setPreferredEventPrivateValueRaw:(int)arg1 ;
-(BOOL)commit:(id*)arg1 ;
-(NSString *)constraintsName;
-(void)setLastSyncError:(unsigned long long)arg1 ;
-(void)setCreatorCodeSigningIdentity:(NSString *)arg1 ;
-(int)strictestEventPrivateValueRaw;
-(NSDate *)lastSyncStartDate;
-(void)setCreatorBundleID:(NSString *)arg1 ;
-(BOOL)onlyCreatorCanModify;
-(void)setLastSyncErrorData:(NSData *)arg1 ;
-(void)setDefaultAlarmOffset:(NSNumber *)arg1 ;
-(NSNumber *)defaultAlarmOffset;
-(void)setFlags2:(int)arg1 ;
-(NSString *)preferredOwnerAddress;
-(BOOL)isEnabledForEvents;
-(NSDate *)lastSyncEndDate;
-(void)setIsFacebook:(BOOL)arg1 ;
-(void)setLastSyncStartDate:(NSDate *)arg1 ;
-(NSString *)delegatedAccountOwnerStoreID;
-(NSData *)lastSyncErrorData;
-(EKSourceConstraints *)constraints;
-(unsigned long long)lastSyncError;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(BOOL)showsNotifications;
-(NSString *)creatorBundleID;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(int)flags2;
-(void)setDisabled:(BOOL)arg1 ;
-(BOOL)allowsEvents;
-(void)setWasMigrated:(BOOL)arg1 ;
-(BOOL)refresh;
-(NSString *)serverHost;
-(long long)sourceType;
-(void)setShowsNotifications:(BOOL)arg1 ;
-(BOOL)prohibitsICSImport;
-(void)_setConstraintsNameWithoutValidation:(id)arg1 ;
-(NSString *)personaIdentifier;
-(void)setUsesSelfAttendee:(BOOL)arg1 ;
-(id)UUID;
-(BOOL)isDelegate;
-(BOOL)supportsEventCalendarCreation;
-(id)calendarWithExternalIdentifier:(id)arg1 ;
-(void)setCachedOwnerAddresses:(NSSet *)arg1 ;
-(void)setExternalID:(NSString *)arg1 ;
-(NSString *)constraintsDescriptionPath;
-(long long)cachedPort;
-(NSDictionary *)lastSyncErrorUserInfo;
-(BOOL)supportsIgnoringEventsInAvailabilityRequests;
-(long long)strictestEventPrivateValue;
-(void)setSupportsLocationDirectorySearches:(BOOL)arg1 ;
-(BOOL)wantsCommentPromptWhenDeclining;
-(BOOL)supportsLocationDirectorySearches;
-(BOOL)removeCalendarItemsOlderThanDate:(id)arg1 entityTypeMask:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)countCalendarItemsOfType:(unsigned long long)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)setFlag2:(int)arg1 value:(BOOL)arg2 ;
-(void)setProhibitsICSImport:(BOOL)arg1 ;
-(id)readWriteCalendarsForEntityType:(unsigned long long)arg1 ;
-(void)setOfficeHours:(id)arg1 withCompletion:(/*^block*/id)arg2 onQueue:(id)arg3 ;
-(void)setSupportsAlarmAcknowledgedDate:(BOOL)arg1 ;
-(void)setSnoozeAlarmRequiresDetach:(BOOL)arg1 ;
-(void)setSupportsAvailabilityRequests:(BOOL)arg1 ;
-(NSString *)cachedHost;
-(BOOL)isFacebookSource;
-(int)flags;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)allowsTasks;
-(NSString *)externalID;
-(NSString *)externalModificationTag;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)prefersSuggestingNewTimeViaEmail;
-(BOOL)isFacebook;
-(void)setProhibitsYearlyRecurrenceInterval:(BOOL)arg1 ;
-(void)setSourceType:(long long)arg1 ;
-(BOOL)supportsMultipleDaysInMonthlyRecurrence;
-(BOOL)prohibitsYearlyRecurrenceInterval;
-(void)countCalendarItemsWithResultHandler:(/*^block*/id)arg1 ;
-(void)_countCalendarItemsOfCalType:(int)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)setLastSyncEndDate:(NSDate *)arg1 ;
-(NSSet *)cachedOwnerAddresses;
-(void)setSupportsPrivateEvents:(BOOL)arg1 ;
-(BOOL)supportsAlarmAcknowledgedDate;
-(void)fetchOfficeHoursWithCompletion:(/*^block*/id)arg1 onQueue:(id)arg2 ;
-(BOOL)supportsPrivateEvents;
-(void)setFlag:(int)arg1 value:(BOOL)arg2 ;
-(BOOL)supportsFloatingTimeZone;
-(REMObjectID *)remAccountObjectID;
-(NSString *)constraintsDescriptionPathForUnitTesting;
-(void)setPreferredEventPrivateValue:(long long)arg1 ;
-(void)setConstraintsName:(NSString *)arg1 ;
-(void)setProhibitsMultipleMonthsInYearlyRecurrence:(BOOL)arg1 ;
-(void)setCachedHost:(NSString *)arg1 ;
-(BOOL)prohibitsMultipleDaysInMonthlyRecurrence;
-(BOOL)serverUsesSSL;
-(void)setTimeOfLastExternalIdentificationCache:(NSDate *)arg1 ;
-(id)description;
-(NSSet *)allCalendars;
-(id)calendarsForEntityType:(unsigned long long)arg1 ;
-(NSString *)creatorCodeSigningIdentity;
-(BOOL)allowsCalendarAddDeleteModify;
-(BOOL)isSyncing;
-(BOOL)flag:(int)arg1 ;
-(void)setConstraintsDescriptionPathForUnitTesting:(NSString *)arg1 ;
-(id)_calDAVOfficeHoursFromEKOfficeHours:(id)arg1 ;
-(BOOL)hasOwnerEmailAddress;
-(BOOL)isWritable;
-(BOOL)supportsSharedCalendars;
-(void)setLastSyncErrorUserInfo:(NSDictionary *)arg1 ;
-(void)setOnlyCreatorCanModify:(BOOL)arg1 ;
-(BOOL)supportsPhoneNumbers;
-(void)setProhibitsDetachmentOnCommentChange:(BOOL)arg1 ;
-(BOOL)prohibitsDetachmentOnCommentChange;
-(int)preferredEventPrivateValueRaw;
-(long long)preferredEventPrivateValue;
-(BOOL)prohibitsPrivateEventsWithAttendees;
-(BOOL)supportsMultipleMonthsInYearlyRecurrence;
-(void)_cacheExternalIdentificationIfNeeded;
-(void)setRequiresSamePrivacyLevelAcrossRecurrenceSeries:(BOOL)arg1 ;
-(void)setFlags:(int)arg1 ;
-(BOOL)allowsProposeNewTime;
-(void)setAllowsEvents:(BOOL)arg1 ;
-(BOOL)supportsAvailabilityRequests;
-(BOOL)prohibitsMultipleMonthsInYearlyRecurrence;
-(BOOL)preferUsingEventOrganizerEmailWhenComposingMail;
-(NSSet *)ownerAddresses;
-(void)setAllowsProposeNewTime:(BOOL)arg1 ;
-(void)setAllowsCalendarAddDeleteModify:(BOOL)arg1 ;
-(BOOL)supportsAttendeeEventForwarding;
-(void)setSupportsSharedCalendars:(BOOL)arg1 ;
-(BOOL)_reset;
-(BOOL)supportsCalendarCreation;
-(void)setCachedPort:(long long)arg1 ;
-(BOOL)flag2:(int)arg1 ;
-(BOOL)isEnabled;
-(BOOL)wasMigrated;
-(int)managedConfigurationAccountAccess;
-(void)setUUID:(id)arg1 ;
-(void)setLastSyncError:(unsigned long long)arg1 userInfo:(id)arg2 ;
-(BOOL)snoozeAlarmRequiresDetach;
-(int)displayOrderForNewCalendar;
-(BOOL)supportsFreebusy;
-(BOOL)supportsReminderActions;
-(BOOL)supportsYearlyRecurrenceWithArbitraryInterval;
-(EKAvailabilityCache *)availabilityCache;
-(BOOL)disabled;
-(BOOL)supportsMultipleAlarms;
-(BOOL)syncs;
-(void)_cacheExternalIdentification;
-(NSSet *)calendars;
-(void)setSupportsIgnoringEventsInAvailabilityRequests:(BOOL)arg1 ;
-(void)setStrictestEventPrivateValueRaw:(int)arg1 ;
-(NSDate *)timeOfLastExternalIdentificationCache;
-(void)setDelegatedAccountOwnerStoreID:(NSString *)arg1 ;
-(void)setAllowsTasks:(BOOL)arg1 ;
-(BOOL)usesSelfAttendee;
-(BOOL)supportsJunkReporting;
-(NSString *)title;
-(BOOL)supportsURLs;
-(BOOL)requiresSamePrivacyLevelAcrossRecurrenceSeries;
-(void)setProhibitsMultipleDaysInMonthlyRecurrence:(BOOL)arg1 ;
-(id)_ekOfficeHoursFromCalDAVOfficeHours:(id)arg1 ;
-(void)setStrictestEventPrivateValue:(long long)arg1 ;
-(NSString *)sourceIdentifier;
-(void)setProhibitsPrivateEventsWithAttendees:(BOOL)arg1 ;
-(void)setConstraintsDescriptionPath:(NSString *)arg1 ;
@end

