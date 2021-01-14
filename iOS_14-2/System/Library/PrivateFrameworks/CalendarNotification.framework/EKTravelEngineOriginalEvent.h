/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@class NSString, NSDate, CLLocation, NSData;

@interface EKTravelEngineOriginalEvent : NSObject {

	BOOL _locationIsAConferenceRoom;
	BOOL _automaticGeocodingAllowed;
	BOOL _hasPredictedLocation;
	BOOL _isOnSharedCalendar;
	int _transportTypeOverride;
	NSString* _eventExternalURL;
	NSDate* _startDate;
	NSDate* _endDate;
	NSString* _locationString;
	CLLocation* _geoLocation;
	NSData* _locationMapKitHandle;
	NSString* _locationStringWithoutPrediction;

}

@property (nonatomic,retain) NSString * eventExternalURL;                             //@synthesize eventExternalURL=_eventExternalURL - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                      //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                        //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) int transportTypeOverride;                               //@synthesize transportTypeOverride=_transportTypeOverride - In the implementation block
@property (nonatomic,retain) NSString * locationString;                               //@synthesize locationString=_locationString - In the implementation block
@property (nonatomic,retain) CLLocation * geoLocation;                                //@synthesize geoLocation=_geoLocation - In the implementation block
@property (nonatomic,retain) NSData * locationMapKitHandle;                           //@synthesize locationMapKitHandle=_locationMapKitHandle - In the implementation block
@property (assign,nonatomic) BOOL locationIsAConferenceRoom;                          //@synthesize locationIsAConferenceRoom=_locationIsAConferenceRoom - In the implementation block
@property (assign,nonatomic) BOOL automaticGeocodingAllowed;                          //@synthesize automaticGeocodingAllowed=_automaticGeocodingAllowed - In the implementation block
@property (assign,nonatomic) BOOL hasPredictedLocation;                               //@synthesize hasPredictedLocation=_hasPredictedLocation - In the implementation block
@property (assign,nonatomic) BOOL isOnSharedCalendar;                                 //@synthesize isOnSharedCalendar=_isOnSharedCalendar - In the implementation block
@property (nonatomic,retain) NSString * locationStringWithoutPrediction;              //@synthesize locationStringWithoutPrediction=_locationStringWithoutPrediction - In the implementation block
-(NSDate *)endDate;
-(void)setEventExternalURL:(NSString *)arg1 ;
-(NSString *)locationStringWithoutPrediction;
-(void)setStartDate:(NSDate *)arg1 ;
-(CLLocation *)geoLocation;
-(NSString *)locationString;
-(void)setHasPredictedLocation:(BOOL)arg1 ;
-(NSDate *)startDate;
-(void)setAutomaticGeocodingAllowed:(BOOL)arg1 ;
-(void)setLocationStringWithoutPrediction:(NSString *)arg1 ;
-(NSData *)locationMapKitHandle;
-(void)setEndDate:(NSDate *)arg1 ;
-(BOOL)isEqualToOriginalEvent:(id)arg1 ;
-(void)setTransportTypeOverride:(int)arg1 ;
-(void)setLocationString:(NSString *)arg1 ;
-(BOOL)isOnSharedCalendar;
-(BOOL)hasPredictedLocation;
-(id)description;
-(BOOL)locationIsAConferenceRoom;
-(void)setLocationIsAConferenceRoom:(BOOL)arg1 ;
-(int)transportTypeOverride;
-(NSString *)eventExternalURL;
-(void)setIsOnSharedCalendar:(BOOL)arg1 ;
-(BOOL)automaticGeocodingAllowed;
-(void)setLocationMapKitHandle:(NSData *)arg1 ;
-(void)setGeoLocation:(CLLocation *)arg1 ;
@end

