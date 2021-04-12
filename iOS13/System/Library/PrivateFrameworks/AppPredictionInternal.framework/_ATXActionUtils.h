/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@interface _ATXActionUtils : NSObject
+(id)slotSetsForAction:(id)arg1 ;
+(id)_extractValueInKeyValueBlob:(id)arg1 withKey:(id)arg2 ;
+(id)getBundleIdAndActionTypeFromActionKey:(id)arg1 ;
+(id)getActivityTypeFromNSUAType:(id)arg1 ;
+(BOOL)isNSUAType:(id)arg1 ;
+(id)getBundleIdFromActionKey:(id)arg1 ;
+(id)getActionTypeFromActionKey:(id)arg1 ;
+(id)getActionTypesFromActionKeys:(id)arg1 ;
+(BOOL)isActionKey:(id)arg1 ;
+(id)getBundleIdsFromActionKeys:(id)arg1 ;
+(id)slotSetFromAction:(id)arg1 ;
+(id)limitParameterCombinations:(id)arg1 limit:(int)arg2 ;
+(id)filterContainersWithNilAction:(id)arg1 ;
+(void)fetchDataAndUpdateContentAttributeSetForAction:(id)arg1 ;
+(/*^block*/id)actionKeyFilterForCandidateBundleIds:(id)arg1 candidateActionTypes:(id)arg2 blacklist:(id)arg3 ;
+(void)prefillActionHistograms;
+(void)prefillActionSlotDatabase;
+(id)firstIntent:(id)arg1 inAppLaunchSession:(id)arg2 ;
+(void)resetActionPredictions;
+(id)swapUserActivityString:(id)arg1 withActionKey:(id)arg2 withNewTitle:(id)arg3 withNewDateString:(id)arg4 ;
+(id)markTodayInTitleAndUserActivityString:(id)arg1 withActionKey:(id)arg2 ;
+(id)timeOfDayAndDayOfWeekForDate:(id)arg1 timeZone:(id)arg2 ;
+(id)stringForTimeOfDayAndDayOfWeek:(id)arg1 timeZone:(id)arg2 ;
+(id)stringForTwoHourTimeWindow:(id)arg1 timeZone:(id)arg2 ;
+(id)stringForDayOfWeek:(id)arg1 timeZone:(id)arg2 ;
+(int)timeBucketFromZeroToTwentyFour:(unsigned long long)arg1 ;
+(int)timeBucketFromZeroToTwentyFour:(id)arg1 timeZone:(id)arg2 ;
+(id)stringForSpecificTimeDOWLocation:(id)arg1 timeZone:(id)arg2 location:(id)arg3 locationEnabled:(BOOL)arg4 ;
+(id)stringForCoarseTimePOWLocation:(id)arg1 timeZone:(id)arg2 location:(id)arg3 locationEnabled:(BOOL)arg4 ;
+(id)stringForSpecificLocation:(id)arg1 locationEnabled:(BOOL)arg2 ;
+(id)stringForCoarseLocation:(id)arg1 locationEnabled:(BOOL)arg2 ;
+(id)stringForZoom7Geohash:(id)arg1 locationEnabled:(BOOL)arg2 ;
+(BOOL)uniqueRecipientsMatchedBetweenIntent:(id)arg1 andIntent:(id)arg2 ;
+(id)filterDuplicateActionPredictions:(id)arg1 ;
+(id)filterDuplicateTVActionPredictions:(id)arg1 ;
+(BOOL)isTitleEquivalenceBetweenAction:(id)arg1 other:(id)arg2 ;
+(BOOL)isCallIntentEquivalenceBetweenAction:(id)arg1 other:(id)arg2 ;
+(BOOL)isContainmentBetweenAction:(id)arg1 other:(id)arg2 ;
+(id)_contactIdentifiersReferencedByAction:(id)arg1 ;
+(BOOL)isBlockedPhoneNumberContainedInNumbers:(id)arg1 ;
+(BOOL)isBlockedEmailAddressContainedInAddresses:(id)arg1 ;
+(id)filterMissingOrBlockedRecipientPredictions:(id)arg1 ;
+(id)filterRecentlyDeletedNotePredictions:(id)arg1 ;
+(id)filterAlarmsThatDoNotToggleOnAnExistingDisabledAlarm:(id)arg1 ;
+(id)sha256hex:(id)arg1 ;
+(double)calculateWeightWith:(unsigned long long)arg1 strength:(double)arg2 termFreq:(unsigned long long)arg3 docFreq:(unsigned long long)arg4 docLength:(unsigned long long)arg5 ;
+(BOOL)shouldPredictRecipient:(id)arg1 withDate:(id)arg2 andRecipientDate:(id)arg3 ;
+(BOOL)shouldAcceptMessageContent:(id)arg1 ;
+(id)recipientFromMessageIntent:(id)arg1 ;
+(id)partOfWeekStringForDate:(id)arg1 ;
+(BOOL)isINStartCallIntentSupportedForAction:(id)arg1 ;
+(BOOL)shouldAcceptAudioOrVideoCallIntent:(id)arg1 ;
@end

