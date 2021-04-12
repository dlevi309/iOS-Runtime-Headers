/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(void)initialize;
+(id)defaultDuration;
+(id)isSent;
+(id)allDay;
+(id)isPartiallyDownloaded;
+(id)domain:(id)arg1 ;
+(id)significantSender;
+(id)remember:(id)arg1 ;
+(void)rememberLabel:(id)arg1 stored:(BOOL)arg2 indexed:(BOOL)arg3 tracked:(BOOL)arg4 ;
+(void)tombstoneLabel:(id)arg1 ;
+(id)resolveName:(id)arg1 ;
+(id)extractedEvent;
+(id)extractedFlight;
+(id)extractedBus;
+(id)extractedTrain;
+(id)extractedHotel;
+(id)extractedCarRental;
+(id)extractedTicket;
+(id)extractedMovie;
+(id)extractedFood;
+(id)extractedSocial;
+(id)categoryTagWithCategoryType:(int)arg1 ;
+(id)geocodingModeAddressOnly;
+(id)geocodingModePOIOnly;
+(id)geocodingModeAddressThenPOI;
+(id)geocodingModeAddressWithCanonicalSearch;
+(id)fromExtractedDomain;
+(id)extractedEventCancellation;
+(id)inhuman;
+(id)human;
+(id)hardName;
+(id)naturalLanguageEvent;
+(id)fromCalendarAttachment;
+(id)textCalendarAttachment:(id)arg1 ;
+(id)timezoneIdentifier:(id)arg1 ;
+(id)fromInteraction;
+(id)interactionId:(id)arg1 ;
+(id)interactionGroupId:(id)arg1 ;
+(id)interactionBundleId:(id)arg1 ;
+(id)interactionTeamId:(id)arg1 ;
+(id)naturalLanguageEventTypeIdentifier:(id)arg1 ;
+(id)naturalLanguageEventLanguageID:(id)arg1 ;
+(id)naturalLanguageEventAttributes:(unsigned long long)arg1 ;
+(id)confidenceScore:(float)arg1 ;
+(id)participantCount:(unsigned char)arg1 ;
+(id)usedBubblesCount:(unsigned char)arg1 ;
+(id)calendarAppUsageLevel:(float)arg1 ;
+(id)mailAppUsageLevel:(unsigned char)arg1 ;
+(id)messagesAppUsageLevel:(unsigned char)arg1 ;
+(id)schemaOrg:(id)arg1 ;
+(id)reservationContainerReferenceWithData:(id)arg1 ;
+(id)reservationContainerReference:(id)arg1 ;
+(id)reservationItemReferencesWithData:(id)arg1 ;
+(id)reservationItemReferences:(id)arg1 ;
+(id)intentResponseUserActivityString:(id)arg1 ;
+(id)eventMetadata:(id)arg1 ;
+(id)fromTextMessage;
+(id)fromSync;
+(id)titleGeneratedFromTemplate;
+(id)titleGeneratedFromSubject;
+(id)templateException;
+(id)fromForwardedMessage;
+(id)fromReply;
+(id)fullyDissected;
+(id)tagForLabel:(id)arg1 value:(id)arg2 ;
+(id)url:(id)arg1 ;
+(id)mailingListId:(id)arg1 ;
+(id)contactDetail:(id)arg1 ;
+(id)interactionContactIdentifier:(id)arg1 ;
+(id)identity:(id)arg1 ;
+(id)extraKey:(id)arg1 ;
+(id)containsEntityExtraction:(long long)arg1 ;
+(id)messageWithMessageId:(id)arg1 fromSource:(id)arg2 ;
+(id)messageWithMailMessageKey:(id)arg1 ;
+(id)messageWithEmailKey:(id)arg1 ;
+(id)extractedFromTemplateWithShortName:(id)arg1 ;
+(id)extractedFromTemplateWithName:(id)arg1 ;
+(id)eventHash:(id)arg1 ;
+(id)reminderHash:(id)arg1 ;
+(id)poiFilters:(id)arg1 ;
+(id)allTags;
+(id)testTag:(int)arg1 ;
+(id)reminderMetadata:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)value;
-(NSString *)label;
-(id)reservationContainerReference;
-(id)reservationItemReferences;
-(BOOL)stored;
-(BOOL)indexed;
-(BOOL)tracked;
-(id)initWithLabel:(id)arg1 stored:(BOOL)arg2 indexed:(BOOL)arg3 tracked:(BOOL)arg4 ;
-(id)initWithLabel:(id)arg1 value:(id)arg2 stored:(BOOL)arg3 indexed:(BOOL)arg4 tracked:(BOOL)arg5 ;
-(BOOL)isEqualToEntityTag:(id)arg1 ;
-(BOOL)isInteractionId;
-(BOOL)isInteractionGroupId;
-(BOOL)isInteractionBundleId;
-(BOOL)isInteractionTeamId;
-(BOOL)isIntentResponseUserActivityString;
-(id)intentResponseUserActivityString;
-(BOOL)isUrl;
-(BOOL)isMailingListId;
-(BOOL)isContactDetail;
-(BOOL)isInteractionContactIdentifier;
-(BOOL)isExtraKey;
-(BOOL)isNaturalLanguageEventTypeIdentifier;
-(BOOL)isNaturalLanguageEventAttributes;
-(BOOL)isNaturalLanguageEventLanguageID;
-(BOOL)isConfidenceScore;
-(BOOL)isParticipantCount;
-(BOOL)isUsedBubblesCount;
-(BOOL)isCalendarAppUsageLevel;
-(BOOL)isMailAppUsageLevel;
-(BOOL)isMessagesAppUsageLevel;
-(BOOL)isSchemaOrg;
-(BOOL)isReservationContainerReference;
-(BOOL)isReservationItemReferences;
-(BOOL)isEventMetadata;
-(id)eventMetadata;
-(BOOL)isTemplateShortName;
-(BOOL)isTemplateName;
-(BOOL)isDomain;
-(BOOL)isEventHash;
-(BOOL)isReminderHash;
-(BOOL)isPOIFilters;
-(BOOL)isExtractedEventCategory;
-(BOOL)isReminderMetadata;
-(id)reminderMetadata;
@end

