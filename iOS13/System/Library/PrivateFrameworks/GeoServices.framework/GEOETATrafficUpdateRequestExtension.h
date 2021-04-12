/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(GEOTFTrafficSnapshot *)trafficSnapshot;
-(void)setTrafficSnapshot:(GEOTFTrafficSnapshot *)arg1 ;
-(BOOL)hasTrafficSnapshot;
-(BOOL)useLiveTrafficAsFallback;
-(void)setUseLiveTrafficAsFallback:(BOOL)arg1 ;
-(void)setHasUseLiveTrafficAsFallback:(BOOL)arg1 ;
-(BOOL)hasUseLiveTrafficAsFallback;
-(BOOL)needServerLatency;
-(void)setNeedServerLatency:(BOOL)arg1 ;
-(void)setHasNeedServerLatency:(BOOL)arg1 ;
-(BOOL)hasNeedServerLatency;
-(GEOTimepoint)clientTimepoint;
-(void)setClientTimepoint:(GEOTimepoint)arg1 ;
-(void)setHasClientTimepoint:(BOOL)arg1 ;
-(BOOL)hasClientTimepoint;
-(BOOL)useClientTimepointAsNow;
-(void)setUseClientTimepointAsNow:(BOOL)arg1 ;
-(void)setHasUseClientTimepointAsNow:(BOOL)arg1 ;
-(BOOL)hasUseClientTimepointAsNow;
@end

