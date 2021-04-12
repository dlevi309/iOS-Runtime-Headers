/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/


@class GEOWiFiConnectionQuality, NSString;

@interface WiFiUsageConnectionQualityRecord : NSObject {

	GEOWiFiConnectionQuality* _geoMessage;
	NSString* _identifier;

}

@property (nonatomic,retain) GEOWiFiConnectionQuality * geoMessage;              //@synthesize geoMessage=_geoMessage - In the implementation block
@property (nonatomic,retain) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)initWithUsageSession:(id)arg1 andNeighborBssList:(id)arg2 andOtherBssList:(id)arg3 ;
-(void)queryNetworkPerformanceFeedAndSubmitToGeoWiFi;
-(GEOWiFiConnectionQuality *)geoMessage;
-(void)setGeoMessage:(GEOWiFiConnectionQuality *)arg1 ;
@end

