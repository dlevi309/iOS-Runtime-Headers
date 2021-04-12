/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentCalendarItem.h>

@interface EKPersistentEvent : EKPersistentCalendarItem
+(id)relations;
+(id)defaultPropertiesToLoad;
+(Class)meltedClass;
+(id)eventWithRandomUUID;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)endDate;
-(long long)status;
-(void)setEndDate:(id)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(id)actions;
-(void)setActions:(id)arg1 ;
-(id)travelTime;
-(void)setTravelTime:(id)arg1 ;
-(id)organizer;
-(long long)availability;
-(void)setAvailability:(long long)arg1 ;
-(int)entityType;
-(id)proposedStartDate;
-(id)suggestionInfo;
-(void)setProposedStartDate:(id)arg1 ;
-(void)setInvitationStatus:(unsigned long long)arg1 ;
-(id)responseComment;
-(void)setResponseComment:(id)arg1 ;
-(long long)privacyLevel;
-(void)setPrivacyLevel:(long long)arg1 ;
-(void)setSuggestionInfo:(id)arg1 ;
-(void)setTravelAdvisoryBehavior:(long long)arg1 ;
-(id)originalStartDate;
-(id)birthdayContactIdentifier;
-(BOOL)canForward;
-(unsigned long long)invitationStatus;
-(void)setJunkStatus:(unsigned long long)arg1 ;
-(unsigned long long)junkStatus;
-(id)conferenceURL;
-(void)setConferenceURL:(id)arg1 ;
-(id)birthdayContactName;
-(void)setOriginalStartDate:(id)arg1 ;
-(long long)travelAdvisoryBehavior;
-(long long)locationPredictionState;
-(void)setLocationPredictionState:(long long)arg1 ;
-(id)birthdayID;
-(void)setBirthdayID:(id)arg1 ;
-(void)setCanForward:(BOOL)arg1 ;
-(BOOL)disallowProposeNewTime;
-(void)setDisallowProposeNewTime:(BOOL)arg1 ;
-(BOOL)pushDirtyProperties:(id*)arg1 ;
-(id)suggestedEventInfo;
-(void)setSuggestedEventInfo:(id)arg1 ;
-(BOOL)needsOccurrenceCacheUpdate;
-(void)setNeedsOccurrenceCacheUpdate:(BOOL)arg1 ;
-(unsigned)invitationChangedProperties;
-(void)setInvitationChangedProperties:(unsigned)arg1 ;
-(int)externalTrackingStatus;
-(void)setExternalTrackingStatus:(int)arg1 ;
-(void)setBirthdayContactIdentifier:(id)arg1 ;
-(void)setBirthdayContactName:(id)arg1 ;
-(id)recurrenceSet;
-(void)setRecurrenceSet:(id)arg1 ;
-(BOOL)firedTTL;
-(void)setFiredTTL:(BOOL)arg1 ;
@end

