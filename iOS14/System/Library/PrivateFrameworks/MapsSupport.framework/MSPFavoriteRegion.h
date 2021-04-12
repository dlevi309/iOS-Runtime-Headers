/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

@class NSString, GEOMapRegion;


@protocol MSPFavoriteRegion <MSPFavorite>
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,readonly) GEOMapRegion * geoMapRegion; 
@required
-(GEOMapRegion *)geoMapRegion;
-(NSString *)title;

@end

