/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NearbyInteraction.framework/NearbyInteraction
*/

#import <NearbyInteraction/NearbyInteraction-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NIDiscoveryToken, NSString;

@interface NINearbyObject : NSObject <NSCopying, NSSecureCoding> {

	float _distance;
	float _azimuth;
	float _elevation;
	NIDiscoveryToken* _discoveryToken;
	unsigned long long _relationship;
	NSString* _deviceIdentifer;
	 _direction;
	SCD_Struct_NI7 _quaternion;

}

@property (nonatomic,copy) NIDiscoveryToken * discoveryToken;              //@synthesize discoveryToken=_discoveryToken - In the implementation block
@property (assign,nonatomic) float distance;                               //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic)  direction;                                   //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) SCD_Struct_NI7 quaternion;                    //@synthesize quaternion=_quaternion - In the implementation block
@property (assign,nonatomic) float azimuth;                                //@synthesize azimuth=_azimuth - In the implementation block
@property (assign,nonatomic) float elevation;                              //@synthesize elevation=_elevation - In the implementation block
@property (assign,nonatomic) unsigned long long relationship;              //@synthesize relationship=_relationship - In the implementation block
@property (copy) NSString * deviceIdentifer;                               //@synthesize deviceIdentifer=_deviceIdentifer - In the implementation block
+(id)new;
+(BOOL)supportsSecureCoding;
-()direction;
-(void)setDistance:(float)arg1 ;
-(id)init;
-(unsigned long long)relationship;
-(void)setDirection:;
-(float)distance;
-(void)setQuaternion:(SCD_Struct_NI7)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(float)azimuth;
-(void)setRelationship:(unsigned long long)arg1 ;
-(id)description;
-(SCD_Struct_NI7)quaternion;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithToken:(id)arg1 ;
-(void)setAzimuth:(float)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(float)elevation;
-(void)setElevation:(float)arg1 ;
-(NIDiscoveryToken *)discoveryToken;
-(NSString *)deviceIdentifer;
-(id)initWithNearbyObject:(id)arg1 ;
-(void)setDiscoveryToken:(NIDiscoveryToken *)arg1 ;
-(void)setDeviceIdentifer:(NSString *)arg1 ;
@end

