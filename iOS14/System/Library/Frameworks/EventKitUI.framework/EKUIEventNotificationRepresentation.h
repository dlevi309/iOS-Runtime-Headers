/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@class EKUITextAndHeaderItem, NSArray, NSDictionary, NSDate, NSString;

@interface EKUIEventNotificationRepresentation : NSObject {

	BOOL _allDay;
	unsigned long long _type;
	EKUITextAndHeaderItem* _titleItem;
	EKUITextAndHeaderItem* _subtitleItem;
	NSArray* _supplementaryItems;
	NSDictionary* _userActivityUserInfo;
	NSDate* _date;
	NSDate* _endDate;
	NSString* _sourceIdentifier;
	NSString* _externalURLString;
	NSArray* _potentialConflictDates;
	NSString* _notes;
	NSDictionary* _organizerContactDictionary;

}

@property (assign,nonatomic) unsigned long long type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) EKUITextAndHeaderItem * titleItem;                        //@synthesize titleItem=_titleItem - In the implementation block
@property (nonatomic,retain) EKUITextAndHeaderItem * subtitleItem;                     //@synthesize subtitleItem=_subtitleItem - In the implementation block
@property (nonatomic,retain) NSArray * supplementaryItems;                             //@synthesize supplementaryItems=_supplementaryItems - In the implementation block
@property (nonatomic,retain) NSDictionary * userActivityUserInfo;                      //@synthesize userActivityUserInfo=_userActivityUserInfo - In the implementation block
@property (nonatomic,retain) NSDate * date;                                            //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                         //@synthesize endDate=_endDate - In the implementation block
@property (assign,getter=isAllDay,nonatomic) BOOL allDay;                              //@synthesize allDay=_allDay - In the implementation block
@property (nonatomic,retain) NSString * sourceIdentifier;                              //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,retain) NSString * externalURLString;                             //@synthesize externalURLString=_externalURLString - In the implementation block
@property (nonatomic,retain) NSArray * potentialConflictDates;                         //@synthesize potentialConflictDates=_potentialConflictDates - In the implementation block
@property (nonatomic,retain) NSString * notes;                                         //@synthesize notes=_notes - In the implementation block
@property (nonatomic,readonly) NSDictionary * organizerContactDictionary;              //@synthesize organizerContactDictionary=_organizerContactDictionary - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
+(id)_whenLocalizedString;
+(id)responseNotificationWithTitle:(id)arg1 message:(id)arg2 ;
+(id)invitationNotificationRepresentationWithNotification:(id)arg1 event:(id)arg2 date:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 ;
+(id)timeToLeaveNotificationRepresentationWithHypothesisMessage:(id)arg1 event:(id)arg2 date:(id)arg3 displayTimeZone:(id)arg4 ;
+(id)previewForNotes:(id)arg1 ;
+(id)_fromLocalizedString;
+(id)_whereLocalizedString;
+(id)resourceChangeNotificationWithNotification:(id)arg1 message:(id)arg2 date:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 ;
+(id)_invitationUpdatedTitleLocalizedString;
+(id)defaultEventNotificationRepresentationWithTitle:(id)arg1 message:(id)arg2 notes:(id)arg3 ;
+(id)upcomingEventNotificationRepresentationWithEvent:(id)arg1 date:(id)arg2 displayTimeZone:(id)arg3 ;
+(BOOL)_invitationNotificationHasResourceChanges:(id)arg1 changesString:(id*)arg2 ;
-(NSString *)notes;
-(NSDictionary *)dictionaryRepresentation;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(NSDate *)endDate;
-(void)setAllDay:(BOOL)arg1 ;
-(BOOL)isAllDay;
-(NSString *)externalURLString;
-(NSArray *)potentialConflictDates;
-(void)setPotentialConflictDates:(NSArray *)arg1 ;
-(NSArray *)supplementaryItems;
-(void)setNotes:(NSString *)arg1 ;
-(NSDictionary *)userActivityUserInfo;
-(void)setSupplementaryItems:(NSArray *)arg1 ;
-(void)updateUpcomingEventNotificationWithHypothesisMessage:(id)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setExternalURLString:(NSString *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(id)dictionaryRepresentationsOfSupplementaryItems;
-(EKUITextAndHeaderItem *)subtitleItem;
-(void)setTitleItem:(EKUITextAndHeaderItem *)arg1 ;
-(unsigned long long)type;
-(void)setSubtitleItem:(EKUITextAndHeaderItem *)arg1 ;
-(void)setUserActivityUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)organizerContactDictionary;
-(void)_setOwnerForContactDictionary:(id)arg1 ;
-(NSDate *)date;
-(EKUITextAndHeaderItem *)titleItem;
-(void)setOrganizerForContactDictionary:(id)arg1 ;
-(NSString *)sourceIdentifier;
@end

