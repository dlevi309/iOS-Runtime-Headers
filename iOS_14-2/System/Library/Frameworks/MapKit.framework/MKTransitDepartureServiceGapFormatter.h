/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class NSDate, NSTimeZone;

@interface MKTransitDepartureServiceGapFormatter : NSObject {

	NSDate* _departureCutoffDate;
	NSTimeZone* _timeZone;

}

@property (nonatomic,readonly) NSDate * departureCutoffDate;              //@synthesize departureCutoffDate=_departureCutoffDate - In the implementation block
@property (nonatomic,readonly) NSTimeZone * timeZone;                     //@synthesize timeZone=_timeZone - In the implementation block
-(NSTimeZone *)timeZone;
-(id)_descriptionForDepartureDate:(id)arg1 canIncludeDate:(BOOL)arg2 outDateFormat:(out unsigned long long*)arg3 ;
-(NSDate *)departureCutoffDate;
-(id)initWithTimeZone:(id)arg1 departureCutoffDate:(id)arg2 ;
-(id)lastDepartureUntilStringFromDate:(id)arg1 ;
-(id)lastDepartureString;
-(id)lastDepartureAtStringFromDate:(id)arg1 ;
@end

