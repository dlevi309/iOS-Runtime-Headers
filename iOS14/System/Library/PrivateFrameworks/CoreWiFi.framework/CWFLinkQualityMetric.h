/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSData;

@interface CWFLinkQualityMetric : NSObject <NSCopying, NSSecureCoding> {

	NSDate* _updatedAt;
	NSData* _linkQualityMetricData;

}

@property (nonatomic,copy) NSDate * updatedAt;                          //@synthesize updatedAt=_updatedAt - In the implementation block
@property (nonatomic,readonly) long long RSSI; 
@property (nonatomic,readonly) long long noise; 
@property (nonatomic,readonly) double txRate; 
@property (nonatomic,readonly) double rxRate; 
@property (nonatomic,readonly) float CCA; 
@property (nonatomic,copy) NSData * linkQualityMetricData;              //@synthesize linkQualityMetricData=_linkQualityMetricData - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)txRate;
-(void)setUpdatedAt:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)noise;
-(long long)RSSI;
-(id)description;
-(BOOL)isEqualToLinkQualityMetric:(id)arg1 ;
-(NSData *)linkQualityMetricData;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(float)CCA;
-(NSDate *)updatedAt;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLinkQualityMetricData:(NSData *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(double)rxRate;
@end

