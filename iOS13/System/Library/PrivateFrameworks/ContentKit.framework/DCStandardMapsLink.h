/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/DCMapsLink.h>

@class NSURL, NSDictionary;

@interface DCStandardMapsLink : DCMapsLink {

	NSURL* _URL;
	NSDictionary* _queryDictionary;

}

@property (nonatomic,retain) NSURL * URL;                               //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSDictionary * queryDictionary;              //@synthesize queryDictionary=_queryDictionary - In the implementation block
+(BOOL)isMapsURL:(id)arg1 ;
+(id)mapsLinkWithURL:(id)arg1 ;
+(BOOL)isStandardAppleMapsURL:(id)arg1 ;
+(BOOL)isStandardGoogleMapsURL:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(id)destinationAddress;
-(id)searchLocation;
-(unsigned long long)mapType;
-(id)searchQuery;
-(long long)zoomLevel;
-(BOOL)showsTraffic;
-(id)startAddress;
-(NSDictionary *)queryDictionary;
-(void)setQueryDictionary:(NSDictionary *)arg1 ;
-(unsigned long long)directionsMode;
-(id)searchNearQuery;
-(id)centerLocation;
-(BOOL)showsTransit;
-(BOOL)showsStreetView;
-(BOOL)showsBicycling;
-(id)streetViewLocation;
@end

