/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSDate *)departureDate;
-(BOOL)isCanceled;
-(NSDate *)liveDepartureDate;
-(NSDate *)scheduledDepartureDate;
-(BOOL)isPastDepartureRelativeToDate:(id)arg1 usingGracePeriod:(BOOL)arg2;
-(NSString *)vehicleIdentifier;
-(long long)liveStatus;
-(id<GEOServerFormattedString>)liveStatusString;
-(unsigned long long)tripIdentifier;
-(BOOL)isPastDeparture;

@end

