/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CWFRangingMeasurement : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _roundTripTime;
	long long _RSSI;
	unsigned long long _channel;

}

@property (assign,nonatomic) unsigned long long roundTripTime;              //@synthesize roundTripTime=_roundTripTime - In the implementation block
@property (assign,nonatomic) long long RSSI;                                //@synthesize RSSI=_RSSI - In the implementation block
@property (assign,nonatomic) unsigned long long channel;                    //@synthesize channel=_channel - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setRoundTripTime:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setChannel:(unsigned long long)arg1 ;
-(long long)RSSI;
-(unsigned long long)channel;
-(unsigned long long)roundTripTime;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setRSSI:(long long)arg1 ;
-(BOOL)isEqualToRangingMeasurement:(id)arg1 ;
@end

