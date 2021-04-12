/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)reason;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)setReason:(int)arg1 ;
-(NSString *)interfaceName;
-(void)setInterfaceName:(NSString *)arg1 ;
-(void)setRSSI:(long long)arg1 ;
-(long long)RSSI;
-(void)setNoise:(long long)arg1 ;
-(BOOL)isLinkDown;
-(BOOL)isInvoluntaryLinkDown;
-(long long)subreason;
-(long long)noise;
-(float)CCA;
-(BOOL)isEqualToLinkChangeStatus:(id)arg1 ;
-(void)setLinkDown:(BOOL)arg1 ;
-(void)setInvoluntaryLinkDown:(BOOL)arg1 ;
-(void)setSubreason:(long long)arg1 ;
-(void)setCCA:(float)arg1 ;
@end

