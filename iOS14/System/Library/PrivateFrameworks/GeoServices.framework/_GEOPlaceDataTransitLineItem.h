/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOTransitLineItem.h>

@protocol GEOTransitAttribution, GEOTransitLine, GEOMapItemTransitInfo, GEOEncyclopedicInfo;
@class NSArray, GEOMapRegion, NSString, GEOMapItemIdentifier;

@interface _GEOPlaceDataTransitLineItem : NSObject <GEOTransitLineItem> {

	id<GEOTransitAttribution> _attribution;
	id<GEOTransitLine> _line;
	id<GEOMapItemTransitInfo> _transitInfo;
	GEOMapRegion* _mapRegion;
	BOOL _hasEncyclopedicInfo;
	id<GEOEncyclopedicInfo> _encyclopedicInfo;

}

@property (nonatomic,readonly) NSArray * labelItems; 
@property (nonatomic,readonly) id<GEOTransitAttribution> attribution; 
@property (nonatomic,readonly) GEOMapRegion * mapRegion; 
@property (nonatomic,readonly) NSArray * incidents; 
@property (nonatomic,readonly) BOOL isIncidentsTTLExpired; 
@property (nonatomic,readonly) BOOL hasIncidentComponent; 
@property (nonatomic,readonly) BOOL hasEncyclopedicInfo; 
@property (nonatomic,readonly) id<GEOEncyclopedicInfo> encyclopedicInfo; 
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isBus;
-(GEOMapRegion *)mapRegion;
-(NSArray *)operatingHours;
-(NSString *)name;
-(id<GEOTransitAttribution>)attribution;
-(id<GEOTransitArtworkDataSource>)artwork;
-(id<GEOTransitSystem>)system;
-(NSString *)lineColorString;
-(NSArray *)incidents;
-(BOOL)hasIncidentComponent;
-(BOOL)isIncidentsTTLExpired;
-(BOOL)hasEncyclopedicInfo;
-(id<GEOEncyclopedicInfo>)encyclopedicInfo;
-(NSArray *)labelItems;
-(unsigned long long)muid;
-(GEOMapItemIdentifier *)identifier;
-(id)initWithMapItem:(id)arg1 ;
-(id<GEOTransitArtworkDataSource>)modeArtwork;
-(id<GEOTransitArtworkDataSource>)alternateArtwork;
-(BOOL)showVehicleNumber;
-(BOOL)departuresAreVehicleSpecific;
-(unsigned long long)departureTimeDisplayStyle;
-(BOOL)hasLineColorString;
@end

