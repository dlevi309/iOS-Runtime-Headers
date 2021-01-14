/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NearbyInteraction.framework/NearbyInteraction
*/

#import <NearbyInteraction/NearbyInteraction-Structs.h>
#import <NearbyInteraction/NIConfiguration.h>

@class NIDiscoveryToken, NSDictionary;

@interface _NIWiFiRangingTestConfiguration : NIConfiguration {

	NIDiscoveryToken* _peerDiscoveryToken;
	NSDictionary* _parameters;

}

@property (nonatomic,copy,readonly) NIDiscoveryToken * peerDiscoveryToken;              //@synthesize peerDiscoveryToken=_peerDiscoveryToken - In the implementation block
@property (nonatomic,readonly) NSDictionary * parameters;                               //@synthesize parameters=_parameters - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)parameters;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)descriptionInternal;
-(NIDiscoveryToken *)peerDiscoveryToken;
-(id)initWithDiscoveryToken:(id)arg1 wifiRangingParameters:(id)arg2 ;
@end

