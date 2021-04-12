/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NearbyInteraction.framework/NearbyInteraction
*/

#import <NearbyInteraction/NearbyInteraction-Structs.h>
#import <NearbyInteraction/NIConfiguration.h>

@class NIDiscoveryToken;

@interface NINearbyPeerConfiguration : NIConfiguration {

	NIDiscoveryToken* _peerDiscoveryToken;

}

@property (nonatomic,copy) NIDiscoveryToken * peerDiscoveryToken;              //@synthesize peerDiscoveryToken=_peerDiscoveryToken - In the implementation block
+(id)new;
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)descriptionInternal;
-(id)initWithPeerToken:(id)arg1 ;
-(NIDiscoveryToken *)peerDiscoveryToken;
-(void)setPeerDiscoveryToken:(NIDiscoveryToken *)arg1 ;
@end

