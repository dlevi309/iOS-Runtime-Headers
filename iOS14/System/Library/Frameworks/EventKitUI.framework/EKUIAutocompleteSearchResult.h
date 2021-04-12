/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@class NSString, NSDate, NSTimeZone, EKStructuredLocation, NSArray, NSURL, EKCalendar, UIColor, EKSuggestedEventInfo;

@interface EKUIAutocompleteSearchResult : NSObject {

	BOOL _allDay;
	BOOL _suggested;
	NSString* _title;
	NSDate* _startDate;
	NSDate* _endDate;
	NSTimeZone* _timeZone;
	NSString* _location;
	NSString* _locationWithoutPrediction;
	EKStructuredLocation* _preferredLocation;
	NSArray* _alarms;
	NSArray* _attendees;
	NSURL* _URL;
	NSString* _notes;
	EKCalendar* _calendar;
	UIColor* _calendarColor;
	EKSuggestedEventInfo* _suggestionInfo;
	NSString* _foundInBundleID;
	NSString* _uniqueID;

}

@property (nonatomic,retain) NSString * uniqueID;                                   //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,retain) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                    //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                      //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone;                                 //@synthesize timeZone=_timeZone - In the implementation block
@property (assign,getter=isAllDay,nonatomic) BOOL allDay;                           //@synthesize allDay=_allDay - In the implementation block
@property (nonatomic,retain) NSString * location;                                   //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSString * locationWithoutPrediction;                  //@synthesize locationWithoutPrediction=_locationWithoutPrediction - In the implementation block
@property (nonatomic,retain) EKStructuredLocation * preferredLocation;              //@synthesize preferredLocation=_preferredLocation - In the implementation block
@property (nonatomic,retain) NSArray * alarms;                                      //@synthesize alarms=_alarms - In the implementation block
@property (nonatomic,retain) NSArray * attendees;                                   //@synthesize attendees=_attendees - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                           //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) NSString * notes;                                      //@synthesize notes=_notes - In the implementation block
@property (nonatomic,retain) EKCalendar * calendar;                                 //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,retain) UIColor * calendarColor;                               //@synthesize calendarColor=_calendarColor - In the implementation block
@property (assign,getter=isSuggested,nonatomic) BOOL suggested;                     //@synthesize suggested=_suggested - In the implementation block
@property (nonatomic,retain) EKSuggestedEventInfo * suggestionInfo;                 //@synthesize suggestionInfo=_suggestionInfo - In the implementation block
@property (nonatomic,retain) NSString * foundInBundleID;                            //@synthesize foundInBundleID=_foundInBundleID - In the implementation block
+(BOOL)_participantShouldBeUsedForAutocomplete:(id)arg1 ;
-(NSString *)notes;
-(NSArray *)alarms;
-(NSArray *)attendees;
-(NSTimeZone *)timeZone;
-(NSDate *)endDate;
-(void)setAllDay:(BOOL)arg1 ;
-(void)setUniqueID:(NSString *)arg1 ;
-(void)setSuggestionInfo:(EKSuggestedEventInfo *)arg1 ;
-(NSString *)uniqueID;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(void)setCalendar:(EKCalendar *)arg1 ;
-(BOOL)isAllDay;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setNotes:(NSString *)arg1 ;
-(NSDate *)startDate;
-(NSString *)location;
-(void)setURL:(NSURL *)arg1 ;
-(EKCalendar *)calendar;
-(void)setTitle:(NSString *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(id)initWithUniqueID:(id)arg1 ;
-(void)setLocationWithoutPrediction:(NSString *)arg1 ;
-(void)setPreferredLocation:(EKStructuredLocation *)arg1 ;
-(UIColor *)calendarColor;
-(void)setLocation:(NSString *)arg1 ;
-(void)setSuggested:(BOOL)arg1 ;
-(void)setAlarms:(NSArray *)arg1 ;
-(EKSuggestedEventInfo *)suggestionInfo;
-(void)setAttendees:(NSArray *)arg1 ;
-(void)setFoundInBundleID:(NSString *)arg1 ;
-(NSURL *)URL;
-(NSString *)locationWithoutPrediction;
-(unsigned long long)hash;
-(EKStructuredLocation *)preferredLocation;
-(BOOL)isSuggested;
-(NSString *)title;
-(void)setCalendarColor:(UIColor *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)foundInBundleID;
@end

