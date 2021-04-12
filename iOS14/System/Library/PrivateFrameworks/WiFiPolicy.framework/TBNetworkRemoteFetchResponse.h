/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

#import <WiFiPolicy/TBRemoteFetchResponse.h>

@class GEOWiFiQualityNetworkSearchResult;

@interface TBNetworkRemoteFetchResponse : TBRemoteFetchResponse {

	GEOWiFiQualityNetworkSearchResult* _networkSearchResult;

}

@property (nonatomic,retain) GEOWiFiQualityNetworkSearchResult * networkSearchResult;              //@synthesize networkSearchResult=_networkSearchResult - In the implementation block
+(id)responseWithNetworkSearchResults:(id)arg1 ;
-(id)initWithNetworkSearchResults:(id)arg1 ;
-(GEOWiFiQualityNetworkSearchResult *)networkSearchResult;
-(void)setNetworkSearchResult:(GEOWiFiQualityNetworkSearchResult *)arg1 ;
@end

