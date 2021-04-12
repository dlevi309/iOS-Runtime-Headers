/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString;

@interface CWFLinkChangeStatus : NSObject <NSCopying, NSSecureCoding> {

	BOOL _linkDown;
	BOOL _involuntaryLinkDown;
	int _reason;
	float _CCA;
	NSDate* _timestamp;
	NSString* _interfaceName;
	long long _subreason;
	long long _RSSI;
	long long _noise;

}

@property (nonatomic,copy) NSDate * timestamp;                                                   //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSString * interfaceName;                                             //@synthesize interfaceName=_interfaceName - In the implementation block
@property (assign,getter=isLinkDown,nonatomic) BOOL linkDown;                                    //@synthesize linkDown=_linkDown - In the implementation block
@property (assign,getter=isInvoluntaryLinkDown,nonatomic) BOOL involuntaryLinkDown;              //@synthesize involuntaryLinkDown=_involuntaryLinkDown - In the implementation block
@property (assign,nonatomic) int reason;                                                         //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) long long subreason;                                                //@synthesize subreason=_subreason - In the implementation block
@property (assign,nonatomic) long long RSSI;                                                     //@synthesize RSSI=_RSSI - In the implementation block
@property (assign,nonatomic) long long noise;                                                    //@synthesize noise=_noise - In the implementation block
@property (assign,nonatomic) float CCA;                                                          //@synthesize CCA=_CCA - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setSubreason:(long long)arg1 ;
-(NSDate *)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)noise;
-(long long)RSSI;
-(NSString *)interfaceName;
-(id)description;
-(int)reason;
-(void)setNoise:(long long)arg1 ;
-(BOOL)isInvoluntaryLinkDown;
-(unsigned long long)hash;
-(BOOL)isLinkDown;
-(id)initWithCoder:(id)arg1 ;
-(void)setCCA:(float)arg1 ;
-(BOOL)isEqualToLinkChangeStatus:(id)arg1 ;
-(void)setInvoluntaryLinkDown:(BOOL)arg1 ;
-(float)CCA;
-(void)setLinkDown:(BOOL)arg1 ;
-(long long)subreason;
-(void)setReason:(int)arg1 ;
-(void)setInterfaceName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setRSSI:(long long)arg1 ;
@end

