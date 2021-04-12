/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface W5WiFiLinkQualityUpdate : NSObject <NSCopying, NSSecureCoding> {

	float _cca;
	long long _rssi;
	long long _txRate;
	double _timestamp;

}

@property (assign,nonatomic) long long rssi;                //@synthesize rssi=_rssi - In the implementation block
@property (assign,nonatomic) long long txRate;              //@synthesize txRate=_txRate - In the implementation block
@property (assign,nonatomic) float cca;                     //@synthesize cca=_cca - In the implementation block
@property (assign,nonatomic) double timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)txRate;
-(float)cca;
-(void)setRssi:(long long)arg1 ;
-(double)timestamp;
-(long long)rssi;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCca:(float)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)setTxRate:(long long)arg1 ;
@end

