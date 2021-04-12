/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OKMediaClusterPredicate.h>

@class NSString, NSDictionary;

@interface OKMediaEventClusterPredicate : OKMediaClusterPredicate {

	unsigned long long _type;
	NSString* _countryName;
	NSDictionary* _calendarEventsDictionary;

}

@property (retain) NSString * countryName;                               //@synthesize countryName=_countryName - In the implementation block
@property (retain) NSDictionary * calendarEventsDictionary;              //@synthesize calendarEventsDictionary=_calendarEventsDictionary - In the implementation block
@property (readonly) unsigned long long type;                            //@synthesize type=_type - In the implementation block
-(void)dealloc;
-(unsigned long long)type;
-(id)title;
-(id)initWithType:(unsigned long long)arg1 ;
-(void)setCountryName:(NSString *)arg1 ;
-(NSString *)countryName;
-(id)evaluateItems:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(float)efficiencyForItems:(id)arg1 ;
-(void)setCalendarEventsDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)calendarEventsDictionary;
-(id)eventNameForDate:(id)arg1 ;
-(double)maximumDistanceBetweenLocations:(id)arg1 ;
-(double)floatingAverageTimeDeltaForItem:(id)arg1 inArray:(id)arg2 ;
-(id)barycenterOfLocations:(id)arg1 ;
-(double)floatingAverageDistanceDeltaForItem:(id)arg1 inArray:(id)arg2 ;
-(id)clusterDateStringForPeriodFrom:(id)arg1 to:(id)arg2 ;
-(id)clusterLocationStringForLocations:(id)arg1 ;
@end

