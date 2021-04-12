/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

@class NSString, GEOMapRegion;


@protocol MSPFavoriteRegion <MSPFavorite>
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,readonly) GEOMapRegion * geoMapRegion; 
@required
-(NSString *)title;
-(GEOMapRegion *)geoMapRegion;

@end

