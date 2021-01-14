/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/


@protocol OS_dispatch_queue;
@class UIImage, NSDate, CLLocation, NSString, WFGeocodeRequest, NSObject;

@interface WeatherAQIAttribution : NSObject {

	UIImage* _cachedLogoImage;
	NSDate* _stationLastReadDate;
	CLLocation* _stationLocation;
	NSString* _stationLocationName;
	NSString* _name;
	long long _dataOrigination;
	WFGeocodeRequest* _geocodeRequest;
	NSObject*<OS_dispatch_queue> _reverseGeocodingQueue;

}

@property (nonatomic,retain) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long dataOrigination;                                       //@synthesize dataOrigination=_dataOrigination - In the implementation block
@property (nonatomic,retain) NSString * stationLocationName;                                  //@synthesize stationLocationName=_stationLocationName - In the implementation block
@property (nonatomic,retain) WFGeocodeRequest * geocodeRequest;                               //@synthesize geocodeRequest=_geocodeRequest - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> reverseGeocodingQueue;              //@synthesize reverseGeocodingQueue=_reverseGeocodingQueue - In the implementation block
@property (nonatomic,readonly) UIImage * cachedLogoImage;                                     //@synthesize cachedLogoImage=_cachedLogoImage - In the implementation block
@property (nonatomic,readonly) NSDate * stationLastReadDate;                                  //@synthesize stationLastReadDate=_stationLastReadDate - In the implementation block
@property (nonatomic,readonly) CLLocation * stationLocation;                                  //@synthesize stationLocation=_stationLocation - In the implementation block
@property (nonatomic,readonly) BOOL isValid; 
-(void)setDataOrigination:(long long)arg1 ;
-(NSString *)name;
-(BOOL)isValid;
-(UIImage *)cachedLogoImage;
-(WFGeocodeRequest *)geocodeRequest;
-(void)setName:(NSString *)arg1 ;
-(void)setGeocodeRequest:(WFGeocodeRequest *)arg1 ;
-(long long)dataOrigination;
-(void)reverseGeocodeStationLocation:(/*^block*/id)arg1 ;
-(CLLocation *)stationLocation;
-(NSObject*<OS_dispatch_queue>)reverseGeocodingQueue;
-(void)setStationLocationName:(NSString *)arg1 ;
-(id)initWithFoundationAttribution:(id)arg1 ;
-(NSDate *)stationLastReadDate;
-(NSString *)stationLocationName;
-(void)setReverseGeocodingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

