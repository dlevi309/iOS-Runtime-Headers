/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class NSString, GEOMapItemIdentifier, NSArray;


@protocol GEOTransitLine <NSObject>
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) GEOMapItemIdentifier * identifier; 
@property (nonatomic,readonly) id<GEOTransitSystem> system; 
@property (nonatomic,readonly) unsigned long long departureTimeDisplayStyle; 
@property (nonatomic,readonly) BOOL departuresAreVehicleSpecific; 
@property (nonatomic,readonly) BOOL isBus; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> artwork; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> modeArtwork; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> alternateArtwork; 
@property (nonatomic,readonly) BOOL hasLineColorString; 
@property (nonatomic,readonly) NSString * lineColorString; 
@property (nonatomic,readonly) BOOL showVehicleNumber; 
@property (nonatomic,readonly) NSArray * operatingHours; 
@required
-(BOOL)isBus;
-(NSArray *)operatingHours;
-(NSString *)name;
-(id<GEOTransitArtworkDataSource>)artwork;
-(id<GEOTransitSystem>)system;
-(NSString *)lineColorString;
-(unsigned long long)muid;
-(GEOMapItemIdentifier *)identifier;
-(id<GEOTransitArtworkDataSource>)modeArtwork;
-(id<GEOTransitArtworkDataSource>)alternateArtwork;
-(BOOL)showVehicleNumber;
-(BOOL)departuresAreVehicleSpecific;
-(unsigned long long)departureTimeDisplayStyle;
-(BOOL)hasLineColorString;

@end

