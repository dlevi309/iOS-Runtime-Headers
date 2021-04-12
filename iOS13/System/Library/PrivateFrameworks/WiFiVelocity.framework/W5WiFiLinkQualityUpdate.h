/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(long long)rssi;
-(void)setRssi:(long long)arg1 ;
-(float)cca;
-(void)setCca:(float)arg1 ;
-(void)setTxRate:(long long)arg1 ;
-(long long)txRate;
@end

