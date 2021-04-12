/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface CWFLinkQualityMetric : NSObject <NSCopying, NSSecureCoding> {

	float _CCA;
	NSDate* _updatedAt;
	long long _RSSI;
	double _txRate;

}

@property (nonatomic,copy) NSDate * updatedAt;              //@synthesize updatedAt=_updatedAt - In the implementation block
@property (assign,nonatomic) long long RSSI;                //@synthesize RSSI=_RSSI - In the implementation block
@property (assign,nonatomic) double txRate;                 //@synthesize txRate=_txRate - In the implementation block
@property (assign,nonatomic) float CCA;                     //@synthesize CCA=_CCA - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setRSSI:(long long)arg1 ;
-(long long)RSSI;
-(float)CCA;
-(void)setCCA:(float)arg1 ;
-(void)setTxRate:(double)arg1 ;
-(double)txRate;
-(BOOL)isEqualToLinkQualityMetric:(id)arg1 ;
-(NSDate *)updatedAt;
-(void)setUpdatedAt:(NSDate *)arg1 ;
@end

