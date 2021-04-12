/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, WiFiAnalyticsAWDSlowWiFiNotification;

@interface WiFiAnalyticsAWDWiFiSlowWiFiReport : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSMutableArray* _linkQualSamples;
	WiFiAnalyticsAWDSlowWiFiNotification* _slowNotice;
	SCD_Struct_Wi1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                   //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasSlowNotice; 
@property (nonatomic,retain) WiFiAnalyticsAWDSlowWiFiNotification * slowNotice;              //@synthesize slowNotice=_slowNotice - In the implementation block
@property (nonatomic,retain) NSMutableArray * linkQualSamples;                               //@synthesize linkQualSamples=_linkQualSamples - In the implementation block
+(Class)linkQualSampleType;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addLinkQualSample:(id)arg1 ;
-(void)setSlowNotice:(WiFiAnalyticsAWDSlowWiFiNotification *)arg1 ;
-(unsigned long long)linkQualSamplesCount;
-(void)clearLinkQualSamples;
-(id)linkQualSampleAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasSlowNotice;
-(WiFiAnalyticsAWDSlowWiFiNotification *)slowNotice;
-(NSMutableArray *)linkQualSamples;
-(void)setLinkQualSamples:(NSMutableArray *)arg1 ;
@end

