/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLLocation, NSDate, NSCalendar, NSString, NSNumber;

@interface NTKFaceSnapshotContext : NSObject <NSSecureCoding> {

	CLLocation* _location;
	NSDate* _date;
	NSCalendar* _calendar;
	NSString* _monogram;
	NSString* _locale;
	NSNumber* _uses24hTime;
	NSString* _buildVersion;
	NSString* _tzVersion;
	NSNumber* _enhanceTextLegibilityEnabled;
	NSString* _lunarCalendarLocaleID;

}

@property (nonatomic,retain) CLLocation * location;                                //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSDate * date;                                        //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSCalendar * calendar;                                //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,copy) NSString * monogram;                                    //@synthesize monogram=_monogram - In the implementation block
@property (nonatomic,copy) NSString * locale;                                      //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) NSNumber * uses24hTime;                               //@synthesize uses24hTime=_uses24hTime - In the implementation block
@property (nonatomic,copy) NSString * buildVersion;                                //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,copy) NSString * tzVersion;                                   //@synthesize tzVersion=_tzVersion - In the implementation block
@property (nonatomic,retain) NSNumber * enhanceTextLegibilityEnabled;              //@synthesize enhanceTextLegibilityEnabled=_enhanceTextLegibilityEnabled - In the implementation block
@property (nonatomic,copy) NSString * lunarCalendarLocaleID;                       //@synthesize lunarCalendarLocaleID=_lunarCalendarLocaleID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)currentContext;
-(void)setEnhanceTextLegibilityEnabled:(NSNumber *)arg1 ;
-(NSNumber *)enhanceTextLegibilityEnabled;
-(NSString *)locale;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(void)setLocale:(NSString *)arg1 ;
-(CLLocation *)location;
-(NSCalendar *)calendar;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setBuildVersion:(NSString *)arg1 ;
-(NSString *)buildVersion;
-(NSString *)monogram;
-(id)initWithCoder:(id)arg1 ;
-(void)setMonogram:(NSString *)arg1 ;
-(NSDate *)date;
-(BOOL)calendarDateMatchesContext:(id)arg1 ;
-(BOOL)localeMatchesContext:(id)arg1 ;
-(BOOL)timeZoneMatchesContext:(id)arg1 ;
-(BOOL)locationSignificantlyDiffersFromContext:(id)arg1 ;
-(void)setUses24hTime:(NSNumber *)arg1 ;
-(void)setTzVersion:(NSString *)arg1 ;
-(void)setLunarCalendarLocaleID:(NSString *)arg1 ;
-(id)_yearMonthDay;
-(NSString *)tzVersion;
-(NSNumber *)uses24hTime;
-(double)distanceInKilometersFromContext:(id)arg1 ;
-(NSString *)lunarCalendarLocaleID;
-(BOOL)buildVersionMatchesContext:(id)arg1 ;
-(BOOL)enhanceTextLegibilityEnabledMatchesContext:(id)arg1 ;
-(BOOL)lunarCalendarLocaleIDMatchesContext:(id)arg1 ;
@end

