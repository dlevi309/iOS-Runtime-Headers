/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/


@class NSString, NSDate, NSURL;

@interface WFSevereWeatherEvent : NSObject {

	NSString* _identifier;
	NSString* _areaName;
	NSString* _eventDescription;
	NSString* _source;
	NSDate* _expirationDate;
	NSURL* _URL;
	unsigned long long _importance;

}

@property (nonatomic,copy,readonly) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * areaName;                      //@synthesize areaName=_areaName - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventDescription;              //@synthesize eventDescription=_eventDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * source;                        //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationDate;                  //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSURL * URL;                              //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) unsigned long long importance;                 //@synthesize importance=_importance - In the implementation block
-(NSDate *)expirationDate;
-(unsigned long long)importance;
-(NSURL *)URL;
-(id)initWithIdentifier:(id)arg1 areaName:(id)arg2 eventDescription:(id)arg3 source:(id)arg4 expirationDate:(id)arg5 URL:(id)arg6 importance:(unsigned long long)arg7 ;
-(NSString *)areaName;
-(NSString *)eventDescription;
-(NSString *)identifier;
-(NSString *)source;
@end

