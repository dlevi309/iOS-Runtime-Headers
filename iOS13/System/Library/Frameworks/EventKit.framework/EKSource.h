/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKObject.h>

@class EKAvailabilityCache, NSDate, NSString, NSSet, EKSourceConstraints, REMObjectID, NSNumber;

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
@property (nonatomic,retain) NSDate * timeOfLastExternalIdentificationCache;                   //@synthesize timeOfLastExternalIdentificationCache=_timeOfLastExternalIdentificationCache - In the implementation block
@property (nonatomic,retain) NSString * cachedHost;                                            //@synthesize cachedHost=_cachedHost - In the implementation block
@property (assign,nonatomic) long long cachedPort;                                             //@synthesize cachedPort=_cachedPort - In the implementation block
@property (nonatomic,retain) NSSet * cachedOwnerAddresses;                                     //@synthesize cachedOwnerAddresses=_cachedOwnerAddresses - In the implementation block
@property (assign,nonatomic) int flags; 
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
@property (nonatomic,readonly) REMObjectID * remAccountObjectID; 
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
@property (nonatomic,readonly) NSSet * ownerAddresses; 
@property (assign,nonatomic) BOOL wasMigrated; 
@property (nonatomic,retain) NSString * sourceIdentifier; 
@property (assign,nonatomic) long long sourceType; 
@property (assign,nonatomic) BOOL showsNotifications; 
@property (nonatomic,retain) NSString * constraintsDescriptionPath; 
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
@property (assign,nonatomic) BOOL isFacebook;                                                  //@synthesize isFacebook=_isFacebook - In the implementation block
@property (assign,nonatomic) BOOL prohibitsDetachmentOnCommentChange; 
@property (assign,nonatomic) BOOL prohibitsMultipleDaysInMonthlyRecurrence; 
@property (assign,nonatomic) BOOL prohibitsMultipleMonthsInYearlyRecurrence; 
@property (assign,nonatomic) BOOL prohibitsYearlyRecurrenceInterval; 
@property (assign,nonatomic) BOOL usesSelfAttendee; 
@property (assign,nonatomic) BOOL snoozeAlarmRequiresDetach;                                   //@synthesize snoozeAlarmRequiresDetach=_snoozeAlarmRequiresDetach - In the implementation block
@property (nonatomic,readonly) NSString * personaIdentifier; 
@property (nonatomic,readonly) BOOL supportsJunkReporting; 
@property (nonatomic,readonly) BOOL supportsPhoneNumbers; 
@property (assign,nonatomic) unsigned long long lastSyncError; 
@property (nonatomic,retain) NSDate * lastSyncStartDate; 
@property (nonatomic,retain) NSDate * lastSyncEndDate; 
@property (nonatomic,readonly) BOOL isSyncing; 
@property (nonatomic,readonly) NSSet * calendars; 
+(Class)frozenClass;
+(BOOL)isWeakRelationship;
+(long long)_calEventPrivacyLevelToEKPrivacyLevel:(int)arg1 ;
+(int)_ekPrivacyLevelToCalEventPrivacyLevel:(long long)arg1 ;
+(id)sourceWithEventStore:(id)arg1 ;
-(id)description;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)remove:(id*)arg1 ;
-(int)flags;
-(EKSourceConstraints *)constraints;
-(BOOL)_reset;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(BOOL)disabled;
-(BOOL)validate:(id*)arg1 ;
-(BOOL)refresh;
-(void)setFlags:(int)arg1 ;
-(NSString *)personaIdentifier;
-(long long)serverPort;
-(void)setDisabled:(BOOL)arg1 ;
-(long long)sourceType;
-(void)setSourceType:(long long)arg1 ;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(NSString *)sourceIdentifier;
-(NSString *)externalID;
-(void)setExternalID:(NSString *)arg1 ;
-(BOOL)isWritable;
-(NSString *)externalModificationTag;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(void)setCreatorBundleID:(NSString *)arg1 ;
-(NSString *)creatorBundleID;
-(BOOL)isDelegate;
-(BOOL)prohibitsMultipleDaysInMonthlyRecurrence;
-(void)setProhibitsMultipleDaysInMonthlyRecurrence:(BOOL)arg1 ;
-(BOOL)prohibitsMultipleMonthsInYearlyRecurrence;
-(void)setProhibitsMultipleMonthsInYearlyRecurrence:(BOOL)arg1 ;
-(BOOL)prohibitsYearlyRecurrenceInterval;
-(void)setProhibitsYearlyRecurrenceInterval:(BOOL)arg1 ;
-(NSSet *)ownerAddresses;
-(BOOL)isSyncing;
-(NSDate *)lastSyncEndDate;
-(BOOL)isFacebookSource;
-(id)readWriteCalendarsForEntityType:(unsigned long long)arg1 ;
-(BOOL)supportsSharedCalendars;
-(BOOL)allowsCalendarAddDeleteModify;
-(BOOL)supportsCalendarCreation;
-(int)displayOrderForNewCalendar;
-(BOOL)supportsPhoneNumbers;
-(BOOL)supportsLocationDirectorySearches;
-(BOOL)supportsAvailabilityRequests;
-(BOOL)supportsPrivateEvents;
-(long long)preferredEventPrivateValue;
-(id)calendarsForEntityType:(unsigned long long)arg1 ;
-(BOOL)prohibitsPrivateEventsWithAttendees;
-(BOOL)syncs;
-(unsigned long long)lastSyncError;
-(BOOL)isFacebook;
-(BOOL)prohibitsICSImport;
-(NSSet *)allCalendars;
-(BOOL)allowsEvents;
-(BOOL)supportsIgnoringEventsInAvailabilityRequests;
-(BOOL)allowsTasks;
-(BOOL)supportsReminderActions;
-(void)setAllowsEvents:(BOOL)arg1 ;
-(void)setAllowsCalendarAddDeleteModify:(BOOL)arg1 ;
-(NSSet *)calendars;
-(BOOL)commit:(id*)arg1 ;
-(BOOL)snoozeAlarmRequiresDetach;
-(void)setSnoozeAlarmRequiresDetach:(BOOL)arg1 ;
-(void)setAllowsTasks:(BOOL)arg1 ;
-(void)setSupportsSharedCalendars:(BOOL)arg1 ;
-(void)setIsFacebook:(BOOL)arg1 ;
-(void)setSupportsPrivateEvents:(BOOL)arg1 ;
-(void)setProhibitsPrivateEventsWithAttendees:(BOOL)arg1 ;
-(void)setSupportsAvailabilityRequests:(BOOL)arg1 ;
-(void)setSupportsIgnoringEventsInAvailabilityRequests:(BOOL)arg1 ;
-(void)setSupportsLocationDirectorySearches:(BOOL)arg1 ;
-(BOOL)requiresSamePrivacyLevelAcrossRecurrenceSeries;
-(void)setRequiresSamePrivacyLevelAcrossRecurrenceSeries:(BOOL)arg1 ;
-(BOOL)prohibitsDetachmentOnCommentChange;
-(void)setProhibitsDetachmentOnCommentChange:(BOOL)arg1 ;
-(BOOL)allowsProposeNewTime;
-(void)setAllowsProposeNewTime:(BOOL)arg1 ;
-(void)setProhibitsICSImport:(BOOL)arg1 ;
-(BOOL)supportsJunkReporting;
-(NSString *)delegatedAccountOwnerStoreID;
-(NSDate *)lastSyncStartDate;
-(void)setLastSyncError:(unsigned long long)arg1 ;
-(void)setLastSyncStartDate:(NSDate *)arg1 ;
-(void)setLastSyncEndDate:(NSDate *)arg1 ;
-(NSNumber *)defaultAlarmOffset;
-(BOOL)hasOwnerEmailAddress;
-(long long)strictestEventPrivateValue;
-(EKAvailabilityCache *)availabilityCache;
-(int)preferredEventPrivateValueRaw;
-(void)setPreferredEventPrivateValueRaw:(int)arg1 ;
-(int)strictestEventPrivateValueRaw;
-(void)setStrictestEventPrivateValueRaw:(int)arg1 ;
-(BOOL)flag:(int)arg1 ;
-(void)setFlag:(int)arg1 value:(BOOL)arg2 ;
-(REMObjectID *)remAccountObjectID;
-(void)_countCalendarItemsOfCalType:(int)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)_cacheExternalIdentification;
-(void)_cacheExternalIdentificationIfNeeded;
-(int)managedConfigurationAccountAccess;
-(void)setPreferredEventPrivateValue:(long long)arg1 ;
-(void)setStrictestEventPrivateValue:(long long)arg1 ;
-(void)setDefaultAlarmOffset:(NSNumber *)arg1 ;
-(NSString *)constraintsDescriptionPath;
-(void)setConstraintsDescriptionPath:(NSString *)arg1 ;
-(NSString *)creatorCodeSigningIdentity;
-(void)setCreatorCodeSigningIdentity:(NSString *)arg1 ;
-(BOOL)onlyCreatorCanModify;
-(void)setOnlyCreatorCanModify:(BOOL)arg1 ;
-(BOOL)wasMigrated;
-(void)setWasMigrated:(BOOL)arg1 ;
-(BOOL)showsNotifications;
-(void)setShowsNotifications:(BOOL)arg1 ;
-(BOOL)usesSelfAttendee;
-(void)setUsesSelfAttendee:(BOOL)arg1 ;
-(BOOL)supportsAlarmAcknowledgedDate;
-(void)setSupportsAlarmAcknowledgedDate:(BOOL)arg1 ;
-(void)setDelegatedAccountOwnerStoreID:(NSString *)arg1 ;
-(id)calendarWithExternalIdentifier:(id)arg1 ;
-(BOOL)removeCalendarItemsOlderThanDate:(id)arg1 entityTypeMask:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)countCalendarItemsWithResultHandler:(/*^block*/id)arg1 ;
-(void)countCalendarItemsOfType:(unsigned long long)arg1 resultHandler:(/*^block*/id)arg2 ;
-(BOOL)wantsCommentPromptWhenDeclining;
-(NSString *)serverHost;
-(NSDate *)timeOfLastExternalIdentificationCache;
-(void)setTimeOfLastExternalIdentificationCache:(NSDate *)arg1 ;
-(NSString *)cachedHost;
-(void)setCachedHost:(NSString *)arg1 ;
-(long long)cachedPort;
-(void)setCachedPort:(long long)arg1 ;
-(NSSet *)cachedOwnerAddresses;
-(void)setCachedOwnerAddresses:(NSSet *)arg1 ;
@end

