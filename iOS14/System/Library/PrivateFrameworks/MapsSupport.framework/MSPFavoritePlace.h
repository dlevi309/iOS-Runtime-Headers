/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

@class NSString;


@protocol MSPFavoritePlace <MSPFavorite>
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,readonly) id<GEOMapItem> geoMapItem; 
@property (nonatomic,readonly) CLLocationCoordinate2D coordinateOfDroppedPin; 
@property (nonatomic,readonly) int floorOrdinalOfDroppedPin; 
@required
-(id<GEOMapItem>)geoMapItem;
-(NSString *)title;
-(CLLocationCoordinate2D)coordinateOfDroppedPin;
-(int)floorOrdinalOfDroppedPin;

@end

