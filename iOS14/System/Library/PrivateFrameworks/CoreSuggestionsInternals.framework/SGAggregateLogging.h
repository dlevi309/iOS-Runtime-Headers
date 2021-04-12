/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@interface SGAggregateLogging : NSObject
+(void)assetVersion;
+(id)aggregateKeyForKeySuffix:(id)arg1 ;
+(id)_appNameForApp:(unsigned long long)arg1 ;
+(void)messagesAdded:(unsigned long long)arg1 ;
+(void)hypotheticalContactSuggestionImpressionsIncludingInsignificant:(int)arg1 ;
+(void)incrementKeyWithDomain:(id)arg1 subdomain:(id)arg2 suffix:(id)arg3 action:(id)arg4 by:(unsigned long long)arg5 ;
+(void)_pushValuesForContact:(id)arg1 usingDomain:(id)arg2 subdomain:(id)arg3 type:(id)arg4 action:(id)arg5 extraSignature:(id)arg6 ;
+(void)detail:(id)arg1 confirmedForContact:(id)arg2 ;
+(void)incrementKeyWithDomain:(id)arg1 suffix:(id)arg2 ;
+(id)eventsFromEntity:(id)arg1 ;
+(void)suggestionImpressionsViaBanner:(int)arg1 ;
+(void)pushValueForDistributionKeyWithDomain:(id)arg1 subdomain:(id)arg2 suffix:(id)arg3 action:(id)arg4 value:(long long)arg5 ;
+(void)incrementKeyWithDomain:(id)arg1 subdomain:(id)arg2 suffix:(id)arg3 ;
+(void)messagesUndisplayablyLost:(long long)arg1 ;
+(void)eventRejected:(id)arg1 inApp:(unsigned long long)arg2 ;
+(void)eventsFoundOnDeviceEnabled:(BOOL)arg1 ;
+(void)eventsSuggested:(id)arg1 withElapsedTime:(unsigned long long)arg2 inApp:(unsigned long long)arg3 ;
+(void)eventRejectedByRecord:(id)arg1 ;
+(id)contactsFromEntity:(id)arg1 ;
+(void)addValueForScalarKeyWithDomain:(id)arg1 subdomain:(id)arg2 suffix:(id)arg3 action:(id)arg4 value:(long long)arg5 ;
+(void)contactsFoundOnDeviceEnabled:(BOOL)arg1 ;
+(void)performedAction:(id)arg1 onDetail:(id)arg2 forContact:(id)arg3 ;
+(void)databaseCorruptionDetectedViaIntegrityCheck;
+(void)recordConfirmedForContact:(id)arg1 ;
+(void)contactSuggestionImpressionsViaBanner:(int)arg1 ;
+(void)recordRejectedForContact:(id)arg1 ;
+(void)messagesLost:(unsigned long long)arg1 ;
+(void)pushValue:(double)arg1 toDistKeyWithDomain:(id)arg2 suffix:(id)arg3 ;
+(void)performedAction:(id)arg1 forApp:(id)arg2 onEvent:(id)arg3 ;
+(void)incrementKeyWithDomain:(id)arg1 subdomain:(id)arg2 suffix:(id)arg3 by:(unsigned long long)arg4 ;
+(void)harvestedMessageInQueueSince:(double)arg1 ;
+(void)harvestDrainedNumberOfMails:(int)arg1 ;
+(void)eventConfirmedByRecord:(id)arg1 ;
+(unsigned long long)twoSigFigs:(id)arg1 ;
+(void)contactConfirmed:(id)arg1 inApp:(unsigned long long)arg2 ;
+(void)contactsSuggested:(id)arg1 withElapsedTime:(unsigned long long)arg2 inApp:(unsigned long long)arg3 ;
+(void)pushValue:(double)arg1 toDistKeyWithSuffix:(id)arg2 ;
+(void)performedAction:(id)arg1 onEventInCalendar:(id)arg2 ;
+(void)messagesFound:(unsigned long long)arg1 ;
+(void)performedAction:(id)arg1 forApp:(id)arg2 onContact:(id)arg3 ;
+(void)harvestedEntity:(id)arg1 withElapsedTime:(unsigned long long)arg2 ;
+(void)app:(id)arg1 performedAction:(id)arg2 onContacts:(id)arg3 withResult:(id)arg4 elapsedTime:(unsigned long long)arg5 ;
+(void)incrementKeyWithDomain:(id)arg1 subdomain:(id)arg2 suffix:(id)arg3 action:(id)arg4 ;
+(void)messagesPruned:(unsigned long long)arg1 ;
+(void)messagesDeleted:(unsigned long long)arg1 ;
+(void)eventConfirmed:(id)arg1 inApp:(unsigned long long)arg2 ;
+(void)setKeyWithDomain:(id)arg1 suffix:(id)arg2 toValue:(unsigned long long)arg3 ;
+(void)app:(id)arg1 performedAction:(id)arg2 onEvents:(id)arg3 withResult:(id)arg4 elapsedTime:(unsigned long long)arg5 ;
+(void)detail:(id)arg1 rejectedForContact:(id)arg2 ;
+(void)databaseCorruptionDetectedViaCorruptionMarker;
+(void)suggestionImpressionsViaBannerSuppressed:(int)arg1 ;
+(void)identityGroupSize:(unsigned long long)arg1 ;
+(void)hypotheticalSuggestionImpressionsIncludingActedOn:(int)arg1 ;
+(void)eventSuggestionImpressionsViaBanner:(int)arg1 ;
+(void)incrementValuesInDomain:(id)arg1 subdomain:(id)arg2 type:(id)arg3 action:(id)arg4 withKeysAndIncrements:(id)arg5 extraSignature:(id)arg6 ;
+(void)performedAction:(id)arg1 onRecordForContact:(id)arg2 ;
+(void)reMatched:(id)arg1 ;
+(void)setValueForScalarKeyWithDomain:(id)arg1 subdomain:(id)arg2 suffix:(id)arg3 action:(id)arg4 value:(long long)arg5 ;
+(void)contactRejected:(id)arg1 inApp:(unsigned long long)arg2 ;
+(void)messagesFoundAfterUndisplayablyLost:(unsigned long long)arg1 ;
+(void)assetVersion:(long long)arg1 ;
@end

