/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

#import <WiFiPolicy/WiFiRecommendation.h>

@protocol WiFiCandidateNetwork, WiFiScannedNetwork;
@class NSString, NSDate;

@interface WiFiAvailabilityMatch : NSObject <WiFiRecommendation> {

	BOOL _unwantedNetworkName;
	long long _priority;
	id<WiFiCandidateNetwork> _network;
	NSString* _SSID;
	id<WiFiScannedNetwork> _scannedNetwork;
	NSDate* _matchedAt;

}

@property (nonatomic,retain) id<WiFiScannedNetwork> scannedNetwork;              //@synthesize scannedNetwork=_scannedNetwork - In the implementation block
@property (nonatomic,retain) NSDate * matchedAt;                                 //@synthesize matchedAt=_matchedAt - In the implementation block
@property (assign,nonatomic) BOOL unwantedNetworkName;                           //@synthesize unwantedNetworkName=_unwantedNetworkName - In the implementation block
@property (setter=SID,nonatomic,copy,readonly) NSString * SSID;                  //@synthesize SSID=_SSID - In the implementation block
@property (nonatomic,readonly) id<WiFiCandidateNetwork> network;                 //@synthesize network=_network - In the implementation block
@property (nonatomic,readonly) long long priority;                               //@synthesize priority=_priority - In the implementation block
+(id)matchWithNetwork:(id)arg1 scannedNetwork:(id)arg2 ;
-(NSString *)SSID;
-(id<WiFiCandidateNetwork>)network;
-(id)description;
-(unsigned long long)hash;
-(long long)priority;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithNetwork:(id)arg1 scannedNetwork:(id)arg2 ;
-(BOOL)isEqualToAvailabilityMatch:(id)arg1 ;
-(id<WiFiScannedNetwork>)scannedNetwork;
-(NSDate *)matchedAt;
-(BOOL)unwantedNetworkName;
-(BOOL)isEqualToScannedNetwork:(id)arg1 ;
-(void)setScannedNetwork:(id<WiFiScannedNetwork>)arg1 ;
-(void)setMatchedAt:(NSDate *)arg1 ;
-(void)setUnwantedNetworkName:(BOOL)arg1 ;
@end

