/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@class NSString, EKStructuredLocation, NSDate, NSURL, NSDictionary, EKTravelEngineHypothesis;

@interface CALNTriggeredEventNotificationSourceNotificationInfo : NSObject {

	BOOL _isAllDay;
	BOOL _isLocationEvent;
	BOOL _hasSuggestedLocation;
	BOOL _eventHasAlarms;
	BOOL _isOffsetFromTravelTimeStart;
	BOOL _allowsLocationAlerts;
	BOOL _forceDisplayOfNewTravelAdvisoryHypotheses;
	NSString* _title;
	NSString* _location;
	NSString* _locationWithoutPrediction;
	EKStructuredLocation* _preferredLocation;
	NSDate* _startDate;
	NSDate* _endDate;
	NSURL* _launchURL;
	NSString* _eventID;
	NSString* _eventObjectID;
	NSDictionary* _eventRepresentationDictionary;
	NSString* _legacyIdentifier;
	NSURL* _mapItemURL;
	NSURL* _conferenceURL;
	NSURL* _mailtoURL;
	NSString* _alarmID;
	NSDate* _lastFireTimeOfAlertOffsetFromTravelTime;
	EKTravelEngineHypothesis* _hypothesis;
	unsigned long long _travelAdvisoryTimelinessPeriod;

}

@property (nonatomic,copy,readonly) NSString * title;                                              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * location;                                           //@synthesize location=_location - In the implementation block
@property (nonatomic,copy,readonly) NSString * locationWithoutPrediction;                          //@synthesize locationWithoutPrediction=_locationWithoutPrediction - In the implementation block
@property (nonatomic,readonly) EKStructuredLocation * preferredLocation;                           //@synthesize preferredLocation=_preferredLocation - In the implementation block
@property (nonatomic,copy,readonly) NSDate * startDate;                                            //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * endDate;                                              //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) BOOL isAllDay;                                                      //@synthesize isAllDay=_isAllDay - In the implementation block
@property (nonatomic,copy,readonly) NSURL * launchURL;                                             //@synthesize launchURL=_launchURL - In the implementation block
@property (nonatomic,readonly) BOOL isLocationEvent;                                               //@synthesize isLocationEvent=_isLocationEvent - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventID;                                            //@synthesize eventID=_eventID - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventObjectID;                                      //@synthesize eventObjectID=_eventObjectID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * eventRepresentationDictionary;                  //@synthesize eventRepresentationDictionary=_eventRepresentationDictionary - In the implementation block
@property (nonatomic,copy,readonly) NSString * legacyIdentifier;                                   //@synthesize legacyIdentifier=_legacyIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSURL * mapItemURL;                                            //@synthesize mapItemURL=_mapItemURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * conferenceURL;                                         //@synthesize conferenceURL=_conferenceURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * mailtoURL;                                             //@synthesize mailtoURL=_mailtoURL - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestedLocation;                                          //@synthesize hasSuggestedLocation=_hasSuggestedLocation - In the implementation block
@property (nonatomic,readonly) BOOL eventHasAlarms;                                                //@synthesize eventHasAlarms=_eventHasAlarms - In the implementation block
@property (nonatomic,copy,readonly) NSString * alarmID;                                            //@synthesize alarmID=_alarmID - In the implementation block
@property (nonatomic,readonly) BOOL isOffsetFromTravelTimeStart;                                   //@synthesize isOffsetFromTravelTimeStart=_isOffsetFromTravelTimeStart - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastFireTimeOfAlertOffsetFromTravelTime;              //@synthesize lastFireTimeOfAlertOffsetFromTravelTime=_lastFireTimeOfAlertOffsetFromTravelTime - In the implementation block
@property (nonatomic,readonly) BOOL allowsLocationAlerts;                                          //@synthesize allowsLocationAlerts=_allowsLocationAlerts - In the implementation block
@property (nonatomic,copy,readonly) EKTravelEngineHypothesis * hypothesis;                         //@synthesize hypothesis=_hypothesis - In the implementation block
@property (nonatomic,readonly) unsigned long long travelAdvisoryTimelinessPeriod;                  //@synthesize travelAdvisoryTimelinessPeriod=_travelAdvisoryTimelinessPeriod - In the implementation block
@property (nonatomic,readonly) BOOL forceDisplayOfNewTravelAdvisoryHypotheses;                     //@synthesize forceDisplayOfNewTravelAdvisoryHypotheses=_forceDisplayOfNewTravelAdvisoryHypotheses - In the implementation block
-(NSString *)eventID;
-(NSDate *)endDate;
-(NSDictionary *)eventRepresentationDictionary;
-(BOOL)isAllDay;
-(BOOL)forceDisplayOfNewTravelAdvisoryHypotheses;
-(BOOL)allowsLocationAlerts;
-(NSString *)legacyIdentifier;
-(NSURL *)conferenceURL;
-(NSDate *)startDate;
-(NSString *)location;
-(id)description;
-(EKTravelEngineHypothesis *)hypothesis;
-(NSString *)alarmID;
-(NSURL *)launchURL;
-(NSString *)locationWithoutPrediction;
-(NSURL *)mapItemURL;
-(EKStructuredLocation *)preferredLocation;
-(NSString *)title;
-(BOOL)hasSuggestedLocation;
-(NSDate *)lastFireTimeOfAlertOffsetFromTravelTime;
-(BOOL)isOffsetFromTravelTimeStart;
-(BOOL)isLocationEvent;
-(NSURL *)mailtoURL;
-(BOOL)eventHasAlarms;
-(unsigned long long)travelAdvisoryTimelinessPeriod;
-(id)initWithTitle:(id)arg1 location:(id)arg2 locationWithoutPrediction:(id)arg3 preferredLocation:(id)arg4 startDate:(id)arg5 endDate:(id)arg6 isAllDay:(BOOL)arg7 launchURL:(id)arg8 isLocationEvent:(BOOL)arg9 eventID:(id)arg10 eventObjectID:(id)arg11 eventRepresentationDictionary:(id)arg12 legacyIdentifier:(id)arg13 mapItemURL:(id)arg14 conferenceURL:(id)arg15 mailtoURL:(id)arg16 hasSuggestedLocation:(BOOL)arg17 eventHasAlarms:(BOOL)arg18 alarmID:(id)arg19 isOffsetFromTravelTimeStart:(BOOL)arg20 lastFireTimeOfAlertOffsetFromTravelTime:(id)arg21 allowsLocationAlerts:(BOOL)arg22 hypothesis:(id)arg23 travelAdvisoryTimelinessPeriod:(unsigned long long)arg24 forceDisplayOfNewTravelAdvisoryHypotheses:(BOOL)arg25 ;
-(NSString *)eventObjectID;
@end

