/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

@class NSString;


@protocol MSPFavoritePlace <MSPFavorite>
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,readonly) id<GEOMapItem> geoMapItem; 
@property (nonatomic,readonly) CLLocationCoordinate2D coordinateOfDroppedPin; 
@property (nonatomic,readonly) int floorOrdinalOfDroppedPin; 
@required
-(NSString *)title;
-(id<GEOMapItem>)geoMapItem;
-(CLLocationCoordinate2D)coordinateOfDroppedPin;
-(int)floorOrdinalOfDroppedPin;

@end

