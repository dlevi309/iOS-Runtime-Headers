/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class _PASLock, NSUbiquitousKeyValueStore, SGNoCloudNSUbiquitousKeyValueStore;

@interface SGSuggestHistory : NSObject {

	_PASLock* _lock;
	NSUbiquitousKeyValueStore* _backingKVStore;
	SGNoCloudNSUbiquitousKeyValueStore* _noCloudFakeBackingKVStore;

}

@property (nonatomic,readonly) NSUbiquitousKeyValueStore * kvs; 
+(id)newTestingInstanceWithSharedKVS:(id)arg1 ;
+(id)sharedSuggestHistory;
+(void)reset;
+(void)resetNoFlush;
-(NSUbiquitousKeyValueStore *)kvs;
-(id)identitySalt;
-(void)confirmEvent:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(BOOL)_anyHash:(id)arg1 inSet:(id)arg2 ;
-(void)confirmOrRejectContact:(id)arg1 ;
-(id)_canaryHash;
-(id)keysForContact:(id)arg1 ;
-(id)confirmHashesForOpaqueKey:(id)arg1 withCreationTime:(SGUnixTimestamp_)arg2 forMatching:(BOOL)arg3 ;
-(void)pushRejectedEvents:(id)arg1 ;
-(id)init;
-(id)hashesForOpaqueKey:(id)arg1 forMatching:(BOOL)arg2 ;
-(id)setForKey:(id)arg1 ;
-(void)_setInternalStateAccordingToKVS:(id)arg1 ;
-(void)pushStorageDetails:(id)arg1 ;
-(BOOL)hasConfirmedField:(id)arg1 value:(id)arg2 forStorageEvent:(id)arg3 ;
-(void)_tellObserversHashesDidChange;
-(BOOL)isConfirmedReminder:(id)arg1 ;
-(void)writeAndPushRejectedEventHashes:(id)arg1 ;
-(void)rejectRealtimeContact:(id)arg1 ;
-(BOOL)isRejectedEvent:(id)arg1 ;
-(void)rejectEvent:(id)arg1 ;
-(void)pushAll:(id)arg1 ;
-(id)keysForContactDetail:(id)arg1 ofContact:(id)arg2 ;
-(id)identityBasedHashesForPseudoReminder:(id)arg1 withCreationTime:(SGUnixTimestamp_)arg2 ;
-(id)hashesForContact:(id)arg1 forMatching:(BOOL)arg2 ;
-(void)_setHashes:(id)arg1 forKey:(id)arg2 ;
-(id)hashesForStorageContact:(id)arg1 forMatching:(BOOL)arg2 ;
-(void)confirmFieldValues:(id)arg1 forStorageEvent:(id)arg2 ;
-(BOOL)isValidSuggestion:(id)arg1 ;
-(id)keysForStorageContact:(id)arg1 ;
-(void)confirmOrRejectRecordForContact:(id)arg1 ;
-(void)pushConfirmedEventsWithoutTimestamp:(id)arg1 ;
-(BOOL)hasContact:(id)arg1 ;
-(void)pushEmptyHashesForTestingKey:(id)arg1 ;
-(id)description;
-(void)confirmStorageEvent:(id)arg1 ;
-(void)confirmRealtimeContact:(id)arg1 ;
-(id)confirmHashesForRemindersOpaqueKey:(id)arg1 withCreationTime:(SGUnixTimestamp_)arg2 forMatching:(BOOL)arg3 ;
-(void)pushDontUpdate:(id)arg1 ;
-(id)hashesForCuratedContactDetail:(id)arg1 fromContact:(id)arg2 forMatching:(BOOL)arg3 ;
-(id)rejectHashesForOpaqueKey:(id)arg1 forMatching:(BOOL)arg2 ;
-(void)pushConfirmedReminders:(id)arg1 ;
-(id)hashesForStrings:(id)arg1 forMatching:(BOOL)arg2 ;
-(id)loadResetInfo;
-(void)writeAndPushConfirmedReminderHashes:(id)arg1 ;
-(void)pushConfirmedEventWithoutTimestampFields:(id)arg1 ;
-(void)confirmReminderFromExternalDevice:(id)arg1 ;
-(void)confirmOrRejectDetail:(id)arg1 forContact:(id)arg2 ;
-(BOOL)isConfirmedEvent:(id)arg1 ;
-(id)confirmHashesForOpaqueKeyWithoutTimestamp:(id)arg1 forMatching:(BOOL)arg2 ;
-(BOOL)hasStorageContact:(id)arg1 ;
-(void)confirmOrRejectDetailHashes:(id)arg1 ;
-(id)modernHashesForClassicHashes:(id)arg1 forMatching:(BOOL)arg2 ;
-(void)rejectEventFromExternalDevice:(id)arg1 ;
-(void)reset;
-(void)setInternalStateAccordingToKVS;
-(void)writeAndPushConfirmedEventHashes:(id)arg1 ;
-(void)confirmEventFromExternalDevice:(id)arg1 ;
-(void)writeAndPushRejectedReminderHashes:(id)arg1 ;
-(id)hashesForContactDetail:(id)arg1 fromContact:(id)arg2 forMatching:(BOOL)arg3 ;
-(void)removeConfirmationHistoryForEvent:(id)arg1 ;
-(id)mutableSetForKey:(id)arg1 ;
-(void)writeAndPushConfirmedEventWithoutTimestampHashes:(id)arg1 ;
-(void)confirmReminder:(id)arg1 ;
-(BOOL)isValidCancelledEvent:(id)arg1 ;
-(id)initWithKVS:(id)arg1 ;
-(id)identityBasedHashesForPseudoEvent:(id)arg1 withCreationTime:(SGUnixTimestamp_)arg2 ;
-(void)handleSyncedDataChanged:(id)arg1 ;
-(BOOL)isConfirmedEventWithoutTimeStamp:(id)arg1 ;
-(id)hashesForPseudoEventByKey:(id)arg1 forMatching:(BOOL)arg2 ;
-(void)rejectReminder:(id)arg1 ;
-(BOOL)isValidNewReminder:(id)arg1 ;
-(BOOL)isRejectedReminder:(id)arg1 ;
-(void)rejectReminderFromExternalDevice:(id)arg1 ;
-(void)pushContacts:(id)arg1 ;
-(void)pushRejectedReminders:(id)arg1 ;
-(void)pushConfirmedEventFields:(id)arg1 ;
-(void)pushConfirmedEvents:(id)arg1 ;
-(id)_hashesForConfirmedField:(id)arg1 value:(id)arg2 storageEvent:(id)arg3 forMatching:(BOOL)arg4 ;
-(id)keysForCuratedContactDetail:(id)arg1 ofContact:(id)arg2 ;
-(void)removeConfirmationHistoryForEntityWithOpaqueKey:(id)arg1 creationTimestamp:(SGUnixTimestamp_)arg2 ;
-(BOOL)isUpdatableContact:(id)arg1 ;
-(BOOL)isValidNewEvent:(id)arg1 ;
-(void)rejectStorageEvent:(id)arg1 ;
-(BOOL)hasContactDetail:(id)arg1 forContact:(id)arg2 ;
-(void)resetNoFlush;
-(void)pushResetInfo:(id)arg1 ;
@end

