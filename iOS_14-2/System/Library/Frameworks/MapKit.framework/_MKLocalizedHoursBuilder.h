/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class NSString, UIColor, NSDate, NSTimeZone, GEOBusinessHours;

@interface _MKLocalizedHoursBuilder : NSObject {

	BOOL _isClosedTodayAllDay;
	BOOL _isCurrentlyClosed;
	BOOL _isClosingSoon;
	BOOL _isOpeningSoon;
	BOOL _isPermanentlyClosed;
	BOOL _isTemporarilyClosed;
	NSString* _localizedOperatingHours;
	NSString* _localizedOpenState;
	UIColor* _hoursStateLabelColor;
	NSDate* _compareDate;
	unsigned long long _geoMapItemOpeningHourOptions;
	unsigned long long _localizedHoursStringOptions;
	NSTimeZone* _timeZone;
	GEOBusinessHours* _operatingHours;

}

@property (assign,nonatomic) unsigned long long geoMapItemOpeningHourOptions;              //@synthesize geoMapItemOpeningHourOptions=_geoMapItemOpeningHourOptions - In the implementation block
@property (assign,nonatomic) unsigned long long localizedHoursStringOptions;               //@synthesize localizedHoursStringOptions=_localizedHoursStringOptions - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone;                                        //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,retain) GEOBusinessHours * operatingHours;                            //@synthesize operatingHours=_operatingHours - In the implementation block
@property (nonatomic,retain) NSDate * compareDate;                                         //@synthesize compareDate=_compareDate - In the implementation block
@property (nonatomic,readonly) NSString * localizedOperatingHours;                         //@synthesize localizedOperatingHours=_localizedOperatingHours - In the implementation block
@property (nonatomic,readonly) NSString * localizedOpenState;                              //@synthesize localizedOpenState=_localizedOpenState - In the implementation block
@property (nonatomic,readonly) UIColor * hoursStateLabelColor;                             //@synthesize hoursStateLabelColor=_hoursStateLabelColor - In the implementation block
+(id)testGetMonthAndDayFormatter;
+(id)testGetDayOfWeekFormatterFull;
+(id)testGetDayOfWeekFormatterShort;
+(id)testGetHoursFormatter;
+(id)localizedHoursStringNormalHours;
+(id)localizedHoursStringSpecialHours;
+(id)localizedHoursDayRangeString:(id)arg1 ;
-(NSTimeZone *)timeZone;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(void)_resetLocalizedBuilder:(BOOL)arg1 ;
-(void)_resetLocalizedStrings:(BOOL)arg1 ;
-(void)_updateLocalizedString;
-(id)_updateLocalizedOperatingHoursString:(unsigned long long)arg1 ;
-(id)concatenateStrings:(id)arg1 joinedByString:(id)arg2 ;
-(void)updateHoursLabelColorWithDefaultLabelColor:(id)arg1 ;
-(NSString *)localizedOpenState;
-(void)calculateWidthsForData:(id)arg1 ;
-(void)setOperatingHours:(GEOBusinessHours *)arg1 ;
-(void)setGeoMapItemOpeningHourOptions:(unsigned long long)arg1 ;
-(void)setCompareDate:(NSDate *)arg1 ;
-(unsigned long long)geoMapItemOpeningHourOptions;
-(unsigned long long)localizedHoursStringOptions;
-(GEOBusinessHours *)operatingHours;
-(void)_commonInit;
-(id)initWithMapItem:(id)arg1 localizedHoursStringOptions:(unsigned long long)arg2 ;
-(void)setLocalizedHoursStringOptions:(unsigned long long)arg1 ;
-(NSString *)localizedOperatingHours;
-(UIColor *)hoursStateLabelColor;
-(NSDate *)compareDate;
-(id)initWithBusinessHours:(id)arg1 timeZone:(id)arg2 localizedHoursStringOptions:(unsigned long long)arg3 ;
-(void)updateHoursLabelColor;
-(id)initWithMapItemForMessageForBusiness:(id)arg1 localizedHoursStringOptions:(unsigned long long)arg2 ;
-(id)formatData:(id)arg1 ;
@end

