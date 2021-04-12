/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/DCMapsLink.h>

@class NSURL, NSArray, NSString;

@interface DCNewGoogleMapsLink : DCMapsLink {

	BOOL _showsTransit;
	BOOL _showsBicycling;
	BOOL _showsStreetView;
	BOOL _showsTraffic;
	BOOL _parsed;
	int _linkType;
	unsigned long long _mapType;
	unsigned long long _directionsMode;
	long long _zoomLevel;
	NSURL* _URL;
	NSArray* _mapsURLComponents;
	NSString* _location;

}

@property (nonatomic,retain) NSURL * URL;                              //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) NSArray * mapsURLComponents;              //@synthesize mapsURLComponents=_mapsURLComponents - In the implementation block
@property (nonatomic,retain) NSString * location;                      //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) BOOL parsed;                            //@synthesize parsed=_parsed - In the implementation block
@property (nonatomic,readonly) int linkType;                           //@synthesize linkType=_linkType - In the implementation block
+(BOOL)isMapsURL:(id)arg1 ;
+(id)mapsLinkWithURL:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)parse;
-(NSURL *)URL;
-(NSString *)location;
-(void)setLocation:(NSString *)arg1 ;
-(id)destinationAddress;
-(id)searchLocation;
-(unsigned long long)mapType;
-(id)searchQuery;
-(long long)zoomLevel;
-(int)linkType;
-(BOOL)showsTraffic;
-(id)dataString;
-(id)startAddress;
-(unsigned long long)directionsMode;
-(id)searchNearQuery;
-(id)centerLocation;
-(BOOL)showsTransit;
-(BOOL)showsStreetView;
-(BOOL)showsBicycling;
-(id)streetViewLocation;
-(NSArray *)mapsURLComponents;
-(id)mapsURLComponentAtIndex:(long long)arg1 ;
-(void)parseLinkType;
-(id)latLonZoomString;
-(void)parseLatLonZoom;
-(void)parseMapsData;
-(void)setMapsURLComponents:(NSArray *)arg1 ;
-(BOOL)parsed;
@end

