/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class NSDate, NSString;


@protocol GEOTransitVehiclePosition <NSObject>
@property (nonatomic,readonly) unsigned long long tripID; 
@property (nonatomic,readonly) SCD_Struct_GE32 coordinate; 
@property (nonatomic,readonly) double heading; 
@property (nonatomic,readonly) NSDate * timestamp; 
@property (nonatomic,copy,readonly) NSString * direction; 
@property (nonatomic,copy,readonly) NSString * headsign; 
@property (nonatomic,copy,readonly) NSString * colorHexString; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> artworkDataSource; 
@required
-(SCD_Struct_GE32)coordinate;
-(NSDate *)timestamp;
-(NSString *)direction;
-(double)heading;
-(unsigned long long)tripID;
-(NSString *)headsign;
-(NSString *)colorHexString;
-(id<GEOTransitArtworkDataSource>)artworkDataSource;

@end

