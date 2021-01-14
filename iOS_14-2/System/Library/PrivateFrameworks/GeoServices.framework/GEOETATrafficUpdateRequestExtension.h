/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOTFTrafficSnapshot;

@interface GEOETATrafficUpdateRequestExtension : PBCodable <NSCopying> {

	GEOTimepoint _clientTimepoint;
	GEOTFTrafficSnapshot* _trafficSnapshot;
	BOOL _needServerLatency;
	BOOL _useClientTimepointAsNow;
	BOOL _useLiveTrafficAsFallback;
	struct {
		unsigned has_clientTimepoint : 1;
		unsigned has_needServerLatency : 1;
		unsigned has_useClientTimepointAsNow : 1;
		unsigned has_useLiveTrafficAsFallback : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasTrafficSnapshot; 
@property (nonatomic,retain) GEOTFTrafficSnapshot * trafficSnapshot; 
@property (assign,nonatomic) BOOL hasUseLiveTrafficAsFallback; 
@property (assign,nonatomic) BOOL useLiveTrafficAsFallback; 
@property (assign,nonatomic) BOOL hasClientTimepoint; 
@property (assign,nonatomic) GEOTimepoint clientTimepoint; 
@property (assign,nonatomic) BOOL hasUseClientTimepointAsNow; 
@property (assign,nonatomic) BOOL useClientTimepointAsNow; 
@property (assign,nonatomic) BOOL hasNeedServerLatency; 
@property (assign,nonatomic) BOOL needServerLatency; 
+(BOOL)isValid:(id)arg1 ;
-(void)setTrafficSnapshot:(GEOTFTrafficSnapshot *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)useLiveTrafficAsFallback;
-(void)setNeedServerLatency:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(GEOTFTrafficSnapshot *)trafficSnapshot;
-(id)jsonRepresentation;
-(BOOL)needServerLatency;
-(void)mergeFrom:(id)arg1 ;
-(void)setUseLiveTrafficAsFallback:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(BOOL)hasNeedServerLatency;
-(void)setHasNeedServerLatency:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setHasUseLiveTrafficAsFallback:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasTrafficSnapshot;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setClientTimepoint:(GEOTimepoint)arg1 ;
-(GEOTimepoint)clientTimepoint;
-(void)setUseClientTimepointAsNow:(BOOL)arg1 ;
-(void)setHasClientTimepoint:(BOOL)arg1 ;
-(BOOL)hasClientTimepoint;
-(BOOL)useClientTimepointAsNow;
-(void)setHasUseClientTimepointAsNow:(BOOL)arg1 ;
-(BOOL)hasUseClientTimepointAsNow;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasUseLiveTrafficAsFallback;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

