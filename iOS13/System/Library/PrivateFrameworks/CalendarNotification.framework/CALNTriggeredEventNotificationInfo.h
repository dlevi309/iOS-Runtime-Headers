/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@class NSString, NSDate, NSDictionary, EKStructuredLocation, NSURL;

@interface CALNTriggeredEventNotificationInfo : NSObject {

	BOOL _isAllDay;
	BOOL _hasSuggestedLocation;
	BOOL _eventHasAlarms;
	BOOL _allowsLocationAlerts;
	BOOL _forceDisplayOfNewTravelAdvisoryHypotheses;
	NSString* _title;
	NSString* _location;
	NSString* _locationWithoutPrediction;
	NSDate* _startDate;
	NSDate* _endDate;
	NSString* _eventID;
	NSString* _eventObjectID;
	NSDictionary* _eventRepresentationDictionary;
	NSString* _legacyIdentifier;
	EKStructuredLocation* _preferredLocation;
	NSURL* _conferenceURL;
	NSURL* _mailtoURL;

}

@property (nonatomic,copy,readonly) NSString * title;                                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * location;                                       //@synthesize location=_location - In the implementation block
@property (nonatomic,copy,readonly) NSString * locationWithoutPrediction;                      //@synthesize locationWithoutPrediction=_locationWithoutPrediction - In the implementation block
@property (nonatomic,copy,readonly) NSDate * startDate;                                        //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * endDate;                                          //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) BOOL isAllDay;                                                  //@synthesize isAllDay=_isAllDay - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventID;                                        //@synthesize eventID=_eventID - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventObjectID;                                  //@synthesize eventObjectID=_eventObjectID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * eventRepresentationDictionary;              //@synthesize eventRepresentationDictionary=_eventRepresentationDictionary - In the implementation block
@property (nonatomic,copy,readonly) NSString * legacyIdentifier;                               //@synthesize legacyIdentifier=_legacyIdentifier - In the implementation block
@property (nonatomic,readonly) EKStructuredLocation * preferredLocation;                       //@synthesize preferredLocation=_preferredLocation - In the implementation block
@property (nonatomic,copy,readonly) NSURL * conferenceURL;                                     //@synthesize conferenceURL=_conferenceURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * mailtoURL;                                         //@synthesize mailtoURL=_mailtoURL - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestedLocation;                                      //@synthesize hasSuggestedLocation=_hasSuggestedLocation - In the implementation block
@property (nonatomic,readonly) BOOL eventHasAlarms;                                            //@synthesize eventHasAlarms=_eventHasAlarms - In the implementation block
@property (nonatomic,readonly) BOOL allowsLocationAlerts;                                      //@synthesize allowsLocationAlerts=_allowsLocationAlerts - In the implementation block
@property (nonatomic,readonly) BOOL forceDisplayOfNewTravelAdvisoryHypotheses;                 //@synthesize forceDisplayOfNewTravelAdvisoryHypotheses=_forceDisplayOfNewTravelAdvisoryHypotheses - In the implementation block
-(id)description;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSString *)title;
-(NSString *)location;
-(NSString *)legacyIdentifier;
-(BOOL)isAllDay;
-(EKStructuredLocation *)preferredLocation;
-(NSString *)locationWithoutPrediction;
-(NSString *)eventID;
-(NSURL *)conferenceURL;
-(BOOL)forceDisplayOfNewTravelAdvisoryHypotheses;
-(NSDictionary *)eventRepresentationDictionary;
-(BOOL)allowsLocationAlerts;
-(id)initWithTitle:(id)arg1 location:(id)arg2 locationWithoutPrediction:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 isAllDay:(BOOL)arg6 eventID:(id)arg7 eventObjectID:(id)arg8 eventRepresentationDictionary:(id)arg9 legacyIdentifier:(id)arg10 preferredLocation:(id)arg11 conferenceURL:(id)arg12 mailtoURL:(id)arg13 hasSuggestedLocation:(BOOL)arg14 eventHasAlarms:(BOOL)arg15 allowsLocationAlerts:(BOOL)arg16 forceDisplayOfNewTravelAdvisoryHypotheses:(BOOL)arg17 ;
-(NSURL *)mailtoURL;
-(BOOL)hasSuggestedLocation;
-(BOOL)eventHasAlarms;
-(NSString *)eventObjectID;
@end

