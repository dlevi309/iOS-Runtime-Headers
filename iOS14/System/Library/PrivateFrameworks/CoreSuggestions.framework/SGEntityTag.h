/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SGEntityTag : NSObject <NSCopying> {

	BOOL _indexed;
	BOOL _stored;
	BOOL _tracked;
	NSString* _label;
	NSString* _value;

}

@property (nonatomic,readonly) NSString * label;              //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSString * value;              //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) BOOL indexed;                  //@synthesize indexed=_indexed - In the implementation block
@property (nonatomic,readonly) BOOL stored;                   //@synthesize stored=_stored - In the implementation block
@property (nonatomic,readonly) BOOL tracked;                  //@synthesize tracked=_tracked - In the implementation block
+(id)fromTextMessage;
+(void)initialize;
+(id)url:(id)arg1 ;
+(id)contactDetail:(id)arg1 ;
+(id)timezoneIdentifier:(id)arg1 ;
+(id)reminderMetadata:(id)arg1 ;
+(id)confidenceScore:(float)arg1 ;
+(id)messageWithMessageId:(id)arg1 fromSource:(id)arg2 ;
+(id)remember:(id)arg1 ;
+(id)mailAppUsageLevel:(unsigned char)arg1 ;
+(id)extractedMovie;
+(id)allTags;
+(id)fromInteraction;
+(id)containsEntityExtraction:(long long)arg1 ;
+(id)inhuman;
+(id)naturalLanguageEventTypeIdentifier:(id)arg1 ;
+(id)messageWithMailMessageKey:(id)arg1 ;
+(id)extractedBus;
+(id)domain:(id)arg1 ;
+(id)naturalLanguageEvent;
+(id)tagForLabel:(id)arg1 value:(id)arg2 ;
+(id)allDay;
+(id)interactionContactIdentifier:(id)arg1 ;
+(id)extractedFromTemplateWithShortName:(id)arg1 ;
+(id)categoryTagWithCategoryType:(int)arg1 ;
+(id)defaultDuration;
+(id)intentResponseUserActivityString:(id)arg1 ;
+(id)ekEventAvailabilityState:(id)arg1 ;
+(id)interactionTeamId:(id)arg1 ;
+(id)templateException;
+(id)usedBubblesCount:(unsigned char)arg1 ;
+(id)mailingListId:(id)arg1 ;
+(id)interactionGroupId:(id)arg1 ;
+(id)human;
+(id)isSent;
+(id)extractedTrain;
+(id)resolveName:(id)arg1 ;
+(void)tombstoneLabel:(id)arg1 ;
+(id)extractedEventCancellation;
+(id)extractedFood;
+(id)geocodingModeAddressWithCanonicalSearch;
+(id)fromCalendarAttachment;
+(id)reservationItemReferencesWithData:(id)arg1 ;
+(id)naturalLanguageEventLanguageID:(id)arg1 ;
+(id)fromSync;
+(id)extractedFromTemplateWithName:(id)arg1 ;
+(id)messagesAppUsageLevel:(unsigned char)arg1 ;
+(id)hardName;
+(id)extractedBoat;
+(id)poiFilters:(id)arg1 ;
+(id)extractedFlight;
+(id)reservationItemReferences:(id)arg1 ;
+(id)extractedHotel;
+(id)interactionId:(id)arg1 ;
+(id)significantSender;
+(id)calendarAppUsageLevel:(float)arg1 ;
+(id)interactionBundleId:(id)arg1 ;
+(id)fullyDissected;
+(id)reservationContainerReferenceWithData:(id)arg1 ;
+(id)extractedSocial;
+(id)extraKey:(id)arg1 ;
+(id)extractedEvent;
+(id)titleGeneratedFromTemplate;
+(void)rememberLabel:(id)arg1 stored:(BOOL)arg2 indexed:(BOOL)arg3 tracked:(BOOL)arg4 ;
+(id)textCalendarAttachment:(id)arg1 ;
+(id)participantCount:(unsigned char)arg1 ;
+(id)reservationContainerReference:(id)arg1 ;
+(id)eventMetadata:(id)arg1 ;
+(id)fromForwardedMessage;
+(id)identity:(id)arg1 ;
+(id)messageWithEmailKey:(id)arg1 ;
+(id)fromExtractedDomain;
+(id)extractedTicket;
+(id)testTag:(int)arg1 ;
+(id)geocodingModeAddressOnly;
+(id)isPartiallyDownloaded;
+(id)naturalLanguageEventAttributes:(unsigned long long)arg1 ;
+(id)titleGeneratedFromSubject;
+(id)reminderHash:(id)arg1 ;
+(id)schemaOrg:(id)arg1 ;
+(id)geocodingModeAddressThenPOI;
+(id)eventHash:(id)arg1 ;
+(id)geocodingModePOIOnly;
+(id)fromReply;
+(id)extractedCarRental;
-(BOOL)stored;
-(BOOL)isContactDetail;
-(BOOL)isNaturalLanguageEventAttributes;
-(BOOL)isInteractionTeamId;
-(BOOL)isParticipantCount;
-(BOOL)indexed;
-(BOOL)isExtractedEventCategory;
-(BOOL)isPOIFilters;
-(BOOL)isInteractionGroupId;
-(BOOL)isInteractionId;
-(id)intentResponseUserActivityString;
-(id)eventMetadata;
-(BOOL)isExtraKey;
-(BOOL)isCalendarAppUsageLevel;
-(BOOL)isNaturalLanguageEventTypeIdentifier;
-(id)reservationItemReferences;
-(id)initWithLabel:(id)arg1 value:(id)arg2 stored:(BOOL)arg3 indexed:(BOOL)arg4 tracked:(BOOL)arg5 ;
-(BOOL)isInteractionBundleId;
-(BOOL)isTemplateName;
-(id)name;
-(BOOL)isMailAppUsageLevel;
-(BOOL)isIntentResponseUserActivityString;
-(BOOL)isInteractionContactIdentifier;
-(BOOL)isReminderHash;
-(id)description;
-(BOOL)tracked;
-(BOOL)isTemplateShortName;
-(BOOL)isReservationItemReferences;
-(BOOL)isReservationContainerReference;
-(BOOL)isSchemaOrg;
-(unsigned long long)hash;
-(BOOL)isEKEventAvailabilityState;
-(BOOL)isUsedBubblesCount;
-(BOOL)isDomain;
-(BOOL)isNaturalLanguageEventLanguageID;
-(BOOL)isConfidenceScore;
-(BOOL)isMailingListId;
-(BOOL)isUrl;
-(id)reservationContainerReference;
-(BOOL)isMessagesAppUsageLevel;
-(id)reminderMetadata;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(BOOL)isReminderMetadata;
-(BOOL)isEventHash;
-(NSString *)value;
-(BOOL)isEqualToEntityTag:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEventMetadata;
-(id)initWithLabel:(id)arg1 stored:(BOOL)arg2 indexed:(BOOL)arg3 tracked:(BOOL)arg4 ;
@end

