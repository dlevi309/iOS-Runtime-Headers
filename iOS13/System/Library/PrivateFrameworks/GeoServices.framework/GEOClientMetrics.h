/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasResponseSource; 
@property (assign,nonatomic) int responseSource; 
@property (nonatomic,readonly) BOOL hasNetworkMetrics; 
@property (nonatomic,retain) GEOClientNetworkMetrics * networkMetrics; 
@property (assign,nonatomic) BOOL hasOfflineReason; 
@property (assign,nonatomic) int offlineReason; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(int)responseSource;
-(GEOClientNetworkMetrics *)networkMetrics;
-(void)setNetworkMetrics:(GEOClientNetworkMetrics *)arg1 ;
-(void)setResponseSource:(int)arg1 ;
-(void)setHasResponseSource:(BOOL)arg1 ;
-(BOOL)hasResponseSource;
-(id)responseSourceAsString:(int)arg1 ;
-(int)StringAsResponseSource:(id)arg1 ;
-(BOOL)hasNetworkMetrics;
-(int)offlineReason;
-(void)setOfflineReason:(int)arg1 ;
-(void)setHasOfflineReason:(BOOL)arg1 ;
-(BOOL)hasOfflineReason;
-(id)offlineReasonAsString:(int)arg1 ;
-(int)StringAsOfflineReason:(id)arg1 ;
@end

