/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/DCMapsLink.h>

@class NSString;

@interface DCMutableMapsLink : DCMapsLink {

	NSString* _searchQuery;
	NSString* _searchNearQuery;
	NSString* _searchLocation;
	NSString* _startAddress;
	NSString* _destinationAddress;
	unsigned long long _directionsMode;
	NSString* _centerLocation;
	long long _zoomLevel;
	unsigned long long _mapType;
	BOOL _showsTraffic;
	BOOL _showsTransit;
	BOOL _showsStreetView;
	BOOL _showsBicycling;
	NSString* _streetViewLocation;

}

@property (nonatomic,copy) NSString * searchQuery;                           //@synthesize searchQuery=_searchQuery - In the implementation block
@property (nonatomic,copy) NSString * searchNearQuery;                       //@synthesize searchNearQuery=_searchNearQuery - In the implementation block
@property (nonatomic,copy) NSString * searchLocation;                        //@synthesize searchLocation=_searchLocation - In the implementation block
@property (nonatomic,copy) NSString * startAddress;                          //@synthesize startAddress=_startAddress - In the implementation block
@property (nonatomic,copy) NSString * destinationAddress;                    //@synthesize destinationAddress=_destinationAddress - In the implementation block
@property (assign,nonatomic) unsigned long long directionsMode;              //@synthesize directionsMode=_directionsMode - In the implementation block
@property (nonatomic,copy) NSString * centerLocation;                        //@synthesize centerLocation=_centerLocation - In the implementation block
@property (assign,nonatomic) long long zoomLevel;                            //@synthesize zoomLevel=_zoomLevel - In the implementation block
@property (assign,nonatomic) unsigned long long mapType;                     //@synthesize mapType=_mapType - In the implementation block
@property (assign,nonatomic) BOOL showsTraffic;                              //@synthesize showsTraffic=_showsTraffic - In the implementation block
@property (assign,nonatomic) BOOL showsTransit;                              //@synthesize showsTransit=_showsTransit - In the implementation block
@property (assign,nonatomic) BOOL showsStreetView;                           //@synthesize showsStreetView=_showsStreetView - In the implementation block
@property (assign,nonatomic) BOOL showsBicycling;                            //@synthesize showsBicycling=_showsBicycling - In the implementation block
@property (nonatomic,copy) NSString * streetViewLocation;                    //@synthesize streetViewLocation=_streetViewLocation - In the implementation block
-(NSString *)destinationAddress;
-(void)setDestinationAddress:(NSString *)arg1 ;
-(NSString *)searchLocation;
-(void)setSearchLocation:(NSString *)arg1 ;
-(void)setMapType:(unsigned long long)arg1 ;
-(unsigned long long)mapType;
-(NSString *)searchQuery;
-(long long)zoomLevel;
-(void)setStartAddress:(NSString *)arg1 ;
-(void)setZoomLevel:(long long)arg1 ;
-(void)setSearchQuery:(NSString *)arg1 ;
-(void)setShowsTraffic:(BOOL)arg1 ;
-(BOOL)showsTraffic;
-(NSString *)startAddress;
-(unsigned long long)directionsMode;
-(NSString *)searchNearQuery;
-(NSString *)centerLocation;
-(BOOL)showsTransit;
-(BOOL)showsStreetView;
-(BOOL)showsBicycling;
-(NSString *)streetViewLocation;
-(void)setSearchNearQuery:(NSString *)arg1 ;
-(void)setDirectionsMode:(unsigned long long)arg1 ;
-(void)setCenterLocation:(NSString *)arg1 ;
-(void)setShowsTransit:(BOOL)arg1 ;
-(void)setShowsStreetView:(BOOL)arg1 ;
-(void)setShowsBicycling:(BOOL)arg1 ;
-(void)setStreetViewLocation:(NSString *)arg1 ;
@end

