/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class NSDate, NSString;


@protocol GEOTransitDeparture <NSObject>
@property (nonatomic,readonly) NSDate * departureDate; 
@property (nonatomic,readonly) NSDate * scheduledDepartureDate; 
@property (nonatomic,readonly) NSString * vehicleIdentifier; 
@property (nonatomic,readonly) unsigned long long tripIdentifier; 
@property (nonatomic,readonly) NSDate * liveDepartureDate; 
@property (nonatomic,readonly) long long liveStatus; 
@property (nonatomic,readonly) id<GEOServerFormattedString> liveStatusString; 
@property (nonatomic,readonly) BOOL isPastDeparture; 
@property (nonatomic,readonly) BOOL isCanceled; 
@required
-(BOOL)isCanceled;
-(NSString *)vehicleIdentifier;
-(NSDate *)departureDate;
-(long long)liveStatus;
-(NSDate *)liveDepartureDate;
-(NSDate *)scheduledDepartureDate;
-(BOOL)isPastDepartureRelativeToDate:(id)arg1 usingGracePeriod:(BOOL)arg2;
-(id<GEOServerFormattedString>)liveStatusString;
-(unsigned long long)tripIdentifier;
-(BOOL)isPastDeparture;

@end

