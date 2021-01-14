/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

#import <WiFiPolicy/WiFiPolicy-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface WiFiUsageInterfaceStats : NSObject <NSCopying> {

	unsigned long long _txBytes;
	unsigned long long _rxBytes;
	NSDate* _timestamp;

}

@property (assign,nonatomic) unsigned long long txBytes;              //@synthesize txBytes=_txBytes - In the implementation block
@property (assign,nonatomic) unsigned long long rxBytes;              //@synthesize rxBytes=_rxBytes - In the implementation block
@property (nonatomic,copy) NSDate * timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
+(id)statsForInterfaceName:(id)arg1 ;
-(void)setTxBytes:(unsigned long long)arg1 ;
-(unsigned long long)txBytes;
-(unsigned long long)rxBytes;
-(void)setRxBytes:(unsigned long long)arg1 ;
-(NSDate *)timestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
@end

