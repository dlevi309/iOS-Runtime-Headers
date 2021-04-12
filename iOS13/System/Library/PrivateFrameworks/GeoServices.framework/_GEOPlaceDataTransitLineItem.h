/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
@property (nonatomic,readonly) NSArray * labelItems; 
@property (nonatomic,readonly) id<GEOTransitAttribution> attribution; 
@property (nonatomic,readonly) GEOMapRegion * mapRegion; 
@property (nonatomic,readonly) NSArray * incidents; 
@property (nonatomic,readonly) BOOL isIncidentsTTLExpired; 
@property (nonatomic,readonly) BOOL hasIncidentComponent; 
@property (nonatomic,readonly) BOOL hasEncyclopedicInfo; 
@property (nonatomic,readonly) id<GEOEncyclopedicInfo> encyclopedicInfo; 
-(NSString *)name;
-(GEOMapItemIdentifier *)identifier;
-(id<GEOTransitSystem>)system;
-(unsigned long long)muid;
-(GEOMapRegion *)mapRegion;
-(id<GEOTransitArtworkDataSource>)artwork;
-(id<GEOTransitAttribution>)attribution;
-(NSArray *)operatingHours;
-(id<GEOTransitArtworkDataSource>)modeArtwork;
-(id<GEOTransitArtworkDataSource>)alternateArtwork;
-(NSArray *)incidents;
-(id)initWithMapItem:(id)arg1 ;
-(NSString *)lineColorString;
-(BOOL)showVehicleNumber;
-(NSArray *)labelItems;
-(BOOL)departuresAreVehicleSpecific;
-(unsigned long long)departureTimeDisplayStyle;
-(BOOL)isBus;
-(BOOL)hasLineColorString;
-(BOOL)isIncidentsTTLExpired;
-(BOOL)hasIncidentComponent;
-(BOOL)hasEncyclopedicInfo;
-(id<GEOEncyclopedicInfo>)encyclopedicInfo;
@end

