/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/SGObject.h>
#import <libobjc.A.dylib/SGEventForGeocode.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, NSDate, NSTimeZone, NSArray, NSURL;

@interface SGEvent : SGObject <SGEventForGeocode> {

	NSObject*<OS_dispatch_queue> _geocodeQueue;
	SGEvent* _geocoded;
	BOOL _isAllDay;
	NSString* _title;
	NSString* _notes;
	NSDate* _start;
	NSTimeZone* _startTimeZone;
	NSDate* _end;
	NSTimeZone* _endTimeZone;
	NSDate* _creationDate;
	NSDate* _lastModifiedDate;
	NSArray* _locations;
	NSString* _opaqueKey;
	NSString* _uniqueKey;
	NSArray* _tags;
	NSURL* _URL;
	NSString* _naturalLanguageEventTypeIdentifier;
	unsigned long long _naturalLanguageEventAttributes;
	NSArray* _schemaOrg;

}

@property (nonatomic,readonly) NSString * title;                                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * notes;                                                     //@synthesize notes=_notes - In the implementation block
@property (nonatomic,readonly) NSDate * start;                                                       //@synthesize start=_start - In the implementation block
@property (nonatomic,readonly) NSTimeZone * startTimeZone;                                           //@synthesize startTimeZone=_startTimeZone - In the implementation block
@property (nonatomic,readonly) NSDate * end;                                                         //@synthesize end=_end - In the implementation block
@property (nonatomic,readonly) NSTimeZone * endTimeZone;                                             //@synthesize endTimeZone=_endTimeZone - In the implementation block
@property (nonatomic,readonly) BOOL isAllDay;                                                        //@synthesize isAllDay=_isAllDay - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                                                //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) NSDate * lastModifiedDate;                                            //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (nonatomic,readonly) NSArray * locations;                                                  //@synthesize locations=_locations - In the implementation block
@property (nonatomic,readonly) NSString * opaqueKey;                                                 //@synthesize opaqueKey=_opaqueKey - In the implementation block
@property (nonatomic,readonly) NSString * uniqueKey;                                                 //@synthesize uniqueKey=_uniqueKey - In the implementation block
@property (nonatomic,readonly) NSArray * tags;                                                       //@synthesize tags=_tags - In the implementation block
@property (getter=isGeocodeCandidate,nonatomic,readonly) BOOL geocodeCandidate; 
@property (nonatomic,readonly) NSURL * URL;                                                          //@synthesize URL=_URL - In the implementation block
@property (getter=isNaturalLanguageEvent,nonatomic,readonly) BOOL naturalLanguageEvent; 
@property (nonatomic,readonly) NSString * naturalLanguageEventTypeIdentifier;                        //@synthesize naturalLanguageEventTypeIdentifier=_naturalLanguageEventTypeIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long naturalLanguageEventAttributes;                    //@synthesize naturalLanguageEventAttributes=_naturalLanguageEventAttributes - In the implementation block
@property (nonatomic,readonly) NSArray * schemaOrg;                                                  //@synthesize schemaOrg=_schemaOrg - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)eventWithRecordId:(id)arg1 origin:(id)arg2 uniqueKey:(id)arg3 opaqueKey:(id)arg4 title:(id)arg5 notes:(id)arg6 start:(id)arg7 startTimeZone:(id)arg8 end:(id)arg9 endTimeZone:(id)arg10 isAllDay:(BOOL)arg11 creationDate:(id)arg12 lastModifiedDate:(id)arg13 locations:(id)arg14 tags:(id)arg15 URL:(id)arg16 ;
-(NSArray *)locations;
-(NSString *)notes;
-(NSString *)uniqueKey;
-(NSDate *)end;
-(NSArray *)tags;
-(BOOL)isAllDay;
-(void)_applyTimeRangeToEKEvent:(id)arg1 withTZID:(id)arg2 ;
-(void)geocodeWithCallback:(/*^block*/id)arg1 ;
-(BOOL)isNaturalLanguageEvent;
-(id)geocodeEndDate;
-(id)toEKEventWithStore:(id)arg1 ;
-(id)initWithRecordId:(id)arg1 origin:(id)arg2 uniqueKey:(id)arg3 opaqueKey:(id)arg4 title:(id)arg5 notes:(id)arg6 start:(id)arg7 startTimeZone:(id)arg8 end:(id)arg9 endTimeZone:(id)arg10 isAllDay:(BOOL)arg11 creationDate:(id)arg12 lastModifiedDate:(id)arg13 locations:(id)arg14 tags:(id)arg15 URL:(id)arg16 ;
-(void)mergeIntoEKEvent:(id)arg1 withStore:(id)arg2 ;
-(NSString *)opaqueKey;
-(NSDate *)start;
-(id)geocodeStartTimeZone;
-(NSDate *)lastModifiedDate;
-(id)geocodeStartDate;
-(NSTimeZone *)endTimeZone;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualToEvent:(id)arg1 ;
-(id)dateForUTCDate:(id)arg1 withTimeZone:(id)arg2 ;
-(id)initWithRecordId:(id)arg1 origin:(id)arg2 uniqueKey:(id)arg3 opaqueKey:(id)arg4 title:(id)arg5 notes:(id)arg6 start:(id)arg7 startTimeZone:(id)arg8 end:(id)arg9 endTimeZone:(id)arg10 isAllDay:(BOOL)arg11 creationDate:(id)arg12 lastModifiedDate:(id)arg13 locations:(id)arg14 tagStrings:(id)arg15 URL:(id)arg16 naturalLanguageEventIdentifier:(id)arg17 naturalLanguageEventAttributes:(unsigned long long)arg18 schemaOrg:(id)arg19 ;
-(void)_mergeTagsIntoEKEvent:(id)arg1 withStore:(id)arg2 ;
-(BOOL)isGeocodeCandidate;
-(NSDate *)creationDate;
-(unsigned long long)naturalLanguageEventAttributes;
-(BOOL)shouldAllowNotificationsInCalendarWithAllowListOverride:(id)arg1 ;
-(void)mergeIntoEKEvent:(id)arg1 ;
-(id)startDateComponents;
-(long long)ekEventAvailabilityState;
-(id)firstLocationForType:(unsigned long long)arg1 ;
-(id)geocodedEventWithStartDate:(id)arg1 startTimeZone:(id)arg2 endDate:(id)arg3 endTimeZone:(id)arg4 locations:(id)arg5 ;
-(NSURL *)URL;
-(id)loggingIdentifier;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_componentsForDate:(id)arg1 timeZone:(id)arg2 isEnd:(BOOL)arg3 calendar:(id)arg4 ;
-(NSTimeZone *)startTimeZone;
-(NSString *)naturalLanguageEventTypeIdentifier;
-(id)poiFilters;
-(id)geocodeLocations;
-(unsigned long long)geocodingMode;
-(id)_naturalLanguageEventTagsInTags:(id)arg1 ;
-(void)mergeIntoEKEvent:(id)arg1 withStore:(id)arg2 preservingValuesDifferentFrom:(id)arg3 ;
-(NSArray *)schemaOrg;
-(id)endDateComponents;
-(double)duration;
-(id)geocodeEndTimeZone;
-(BOOL)shouldAllowNotificationsInCalendarForBundleId:(id)arg1 appIsInForeground:(BOOL)arg2 ;
-(BOOL)shouldAllowNotificationsInCalendarForBundleId:(id)arg1 appIsInForeground:(BOOL)arg2 allowListOverride:(id)arg3 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

