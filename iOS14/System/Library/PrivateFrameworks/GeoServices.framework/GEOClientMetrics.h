/*
* Generated on Thursday, January 14, 2021 at 2:21:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOClientNetworkMetrics;

@interface GEOClientMetrics : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOClientNetworkMetrics* _networkMetrics;
	int _offlineReason;
	int _responseSource;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasResponseSource; 
@property (assign,nonatomic) int responseSource; 
@property (nonatomic,readonly) BOOL hasNetworkMetrics; 
@property (nonatomic,retain) GEOClientNetworkMetrics * networkMetrics; 
@property (assign,nonatomic) BOOL hasOfflineReason; 
@property (assign,nonatomic) int offlineReason; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setOfflineReason:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)setNetworkMetrics:(GEOClientNetworkMetrics *)arg1 ;
-(int)StringAsResponseSource:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(GEOClientNetworkMetrics *)networkMetrics;
-(BOOL)hasNetworkMetrics;
-(int)responseSource;
-(id)description;
-(int)offlineReason;
-(void)setHasResponseSource:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasOfflineReason;
-(void)setResponseSource:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)StringAsOfflineReason:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasResponseSource;
-(id)offlineReasonAsString:(int)arg1 ;
-(id)responseSourceAsString:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasOfflineReason:(BOOL)arg1 ;
@end

