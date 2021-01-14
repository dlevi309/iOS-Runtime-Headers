/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WiFiAnalyticsAWDWiFiNWActivityHistogramBin : PBCodable <NSCopying> {

	unsigned long long _hits;
	NSString* _bin;
	SCD_Struct_Wi1 _has;

}

@property (nonatomic,readonly) BOOL hasBin; 
@property (nonatomic,retain) NSString * bin;                       //@synthesize bin=_bin - In the implementation block
@property (assign,nonatomic) BOOL hasHits; 
@property (assign,nonatomic) unsigned long long hits;              //@synthesize hits=_hits - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)bin;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasBin;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setBin:(NSString *)arg1 ;
-(BOOL)hasHits;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)hits;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHits:(unsigned long long)arg1 ;
-(void)setHasHits:(BOOL)arg1 ;
@end

