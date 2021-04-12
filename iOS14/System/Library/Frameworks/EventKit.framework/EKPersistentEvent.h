/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentCalendarItem.h>

@interface EKPersistentEvent : EKPersistentCalendarItem
+(id)relations;
+(id)defaultPropertiesToLoad;
+(Class)meltedClass;
+(id)eventWithRandomUUID;
-(void)setActions:(id)arg1 ;
-(void)setProposedStartDate:(id)arg1 ;
-(int)entityType;
-(id)travelTime;
-(void)setTravelTime:(id)arg1 ;
-(id)endDate;
-(void)setSuggestionInfo:(id)arg1 ;
-(void)setEndDateRaw:(id)arg1 ;
-(BOOL)pushDirtyProperties:(id*)arg1 ;
-(id)proposedStartDate;
-(id)actions;
-(void)setTravelAdvisoryBehavior:(long long)arg1 ;
-(void)setOriginalStartDate:(id)arg1 ;
-(long long)travelAdvisoryBehavior;
-(id)conferenceURL;
-(id)organizer;
-(void)setInvitationChangedProperties:(unsigned)arg1 ;
-(void)setEndDate:(id)arg1 ;
-(long long)privacyLevel;
-(void)setBirthdayID:(id)arg1 ;
-(void)setPrivacyLevel:(long long)arg1 ;
-(long long)locationPredictionState;
-(void)setLocationPredictionState:(long long)arg1 ;
-(void)setRecurrenceSet:(id)arg1 ;
-(void)setNeedsOccurrenceCacheUpdate:(BOOL)arg1 ;
-(BOOL)disallowProposeNewTime;
-(BOOL)canForward;
-(id)responseComment;
-(id)description;
-(id)birthdayContactName;
-(id)suggestionInfo;
-(void)setConferenceURL:(id)arg1 ;
-(long long)availability;
-(void)setAvailability:(long long)arg1 ;
-(id)birthdayID;
-(id)participationStatusModifiedDate;
-(void)setParticipationStatusModifiedDate:(id)arg1 ;
-(id)endDateRaw;
-(unsigned)invitationChangedProperties;
-(unsigned long long)junkStatus;
-(id)originalStartDate;
-(void)setDisallowProposeNewTime:(BOOL)arg1 ;
-(void)setInvitationStatus:(unsigned long long)arg1 ;
-(void)setBirthdayContactIdentifier:(id)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(id)birthdayContactIdentifier;
-(unsigned long long)invitationStatus;
-(int)externalTrackingStatus;
-(id)recurrenceSet;
-(void)setBirthdayContactName:(id)arg1 ;
-(void)setResponseComment:(id)arg1 ;
-(void)setCanForward:(BOOL)arg1 ;
-(void)setFiredTTL:(BOOL)arg1 ;
-(BOOL)needsOccurrenceCacheUpdate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)firedTTL;
-(void)setExternalTrackingStatus:(int)arg1 ;
-(void)setJunkStatus:(unsigned long long)arg1 ;
-(long long)status;
@end

