/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)zoomLevel;
-(BOOL)showsTraffic;
-(id)initWithURL:(id)arg1 ;
-(unsigned long long)mapType;
-(void)setURL:(NSURL *)arg1 ;
-(unsigned long long)directionsMode;
-(id)startAddress;
-(id)searchQuery;
-(NSURL *)URL;
-(id)searchLocation;
-(id)destinationAddress;
-(NSDictionary *)queryDictionary;
-(void)setQueryDictionary:(NSDictionary *)arg1 ;
-(id)searchNearQuery;
-(id)centerLocation;
-(BOOL)showsTransit;
-(BOOL)showsStreetView;
-(BOOL)showsBicycling;
-(id)streetViewLocation;
@end

