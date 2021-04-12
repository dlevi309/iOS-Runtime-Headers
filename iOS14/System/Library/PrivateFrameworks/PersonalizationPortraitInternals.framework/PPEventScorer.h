/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class NSDictionary, EAEmailAddressSet, NSSet;

@interface PPEventScorer : NSObject {

	NSDictionary* _pastEventTitlesAndParticipants;
	double _earliestStartTime;
	BOOL _shouldConsiderAlarms;
	EAEmailAddressSet* _emailVIPEmailAddresses;
	NSSet* _favoritesEmailAddresses;
	int _rankingOptions;
	long long _pastTitlesCount;

}
+(void)setLocationsOfInterestLocations:(id)arg1 withReferenceDate:(id)arg2 ;
+(id)participantsInEvent:(id)arg1 ;
+(id)eventScorerConfig;
+(id)cacheKeyforCoreRoutineCacheForStartDate:(id)arg1 endDate:(id)arg2 ;
+(id)enrichDictionary:(id)arg1 withEvent:(id)arg2 ;
+(BOOL)scoreIsExtraordinary:(double)arg1 rankingOptions:(int)arg2 ;
+(id)emailAddressFromEKAttendee:(id)arg1 ;
+(void)clearAssetCache;
-(id)scoreEvent:(id)arg1 usingDate:(id)arg2 ;
-(id)scoreDuration:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)init;
-(id)favoriteEmailAddresses;
-(id)scoreSelfAttendeeRole:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)scoreAvailabilityStatus:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)scoreAttachments:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)emailVIPEmailAddresses;
-(id)initWithPastEventTitlesAndParticipants:(id)arg1 andEarliestStartTime:(double)arg2 shouldConsiderAlarms:(BOOL)arg3 withOptions:(int)arg4 ;
-(id)scoreAlarmIsSet:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)scoreParticipantStatusAndCount:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)scoreNotes:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)scoreTitle:(id)arg1 withFeatureSchema:(id)arg2 ;
-(BOOL)isHomeCalendar:(id)arg1 ;
-(void)setEmailVIPEmailAddresses:(id)arg1 ;
-(id)coreRoutineLocationsOfInterestLocationsUsingDate:(id)arg1 ;
-(id)scoreRecurrenceRules:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)scoreTravelTimeSet:(id)arg1 withFeatureSchema:(id)arg2 ;
-(BOOL)isWorkCalendar:(id)arg1 ;
-(id)scoreCalendar:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)scorePastEventVolumesWithFeatureSchema:(id)arg1 ;
-(id)scoreParticipantsInPast:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)scoreCoreRoutine:(id)arg1 usingDate:(id)arg2 withFeatureSchema:(id)arg3 ;
-(id)scoreContentModifications:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)scoreSuggestionsInfo:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)scoreUnusualStartTime:(id)arg1 withFeatureSchema:(id)arg2 ;
-(void)setFavoritesEmailAddresses:(id)arg1 ;
-(id)scoreURL:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)scoreParticipantsInEmailVIPAndFavorites:(id)arg1 withFeatureSchema:(id)arg2 ;
@end

