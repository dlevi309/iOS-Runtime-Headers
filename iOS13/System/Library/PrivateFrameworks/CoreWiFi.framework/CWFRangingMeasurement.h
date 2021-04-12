/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)channel;
-(void)setChannel:(unsigned long long)arg1 ;
-(void)setRSSI:(long long)arg1 ;
-(long long)RSSI;
-(unsigned long long)roundTripTime;
-(void)setRoundTripTime:(unsigned long long)arg1 ;
-(BOOL)isEqualToRangingMeasurement:(id)arg1 ;
@end

