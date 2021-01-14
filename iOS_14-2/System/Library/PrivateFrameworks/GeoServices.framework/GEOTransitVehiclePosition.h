/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class NSDate, NSString;


@protocol GEOTransitVehiclePosition <NSObject>
@property (nonatomic,readonly) unsigned long long tripID; 
@property (nonatomic,readonly) GEOCoarseLocationLatLng coordinate; 
@property (nonatomic,readonly) double heading; 
@property (nonatomic,readonly) NSDate * timestamp; 
@property (nonatomic,copy,readonly) NSString * direction; 
@property (nonatomic,copy,readonly) NSString * headsign; 
@property (nonatomic,copy,readonly) NSString * colorHexString; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> artworkDataSource; 
@required
-(NSString *)direction;
-(double)heading;
-(id<GEOTransitArtworkDataSource>)artworkDataSource;
-(unsigned long long)tripID;
-(GEOCoarseLocationLatLng)coordinate;
-(NSDate *)timestamp;
-(NSString *)headsign;
-(NSString *)colorHexString;

@end

