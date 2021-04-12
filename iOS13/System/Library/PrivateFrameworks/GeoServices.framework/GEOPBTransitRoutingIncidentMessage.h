/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEOPBTransitRoutingIncidentMessage : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE19* _transitIncidentIndexs;
	NSString* _routingMessage;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _routingIncidentMessageIndex;
	struct {
		unsigned has_routingIncidentMessageIndex : 1;
		unsigned read_unknownFields : 1;
		unsigned read_transitIncidentIndexs : 1;
		unsigned read_routingMessage : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_transitIncidentIndexs : 1;
		unsigned wrote_routingMessage : 1;
		unsigned wrote_routingIncidentMessageIndex : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasRoutingIncidentMessageIndex; 
@property (assign,nonatomic) unsigned routingIncidentMessageIndex; 
@property (nonatomic,readonly) BOOL hasRoutingMessage; 
@property (nonatomic,retain) NSString * routingMessage; 
@property (nonatomic,readonly) unsigned long long transitIncidentIndexsCount; 
@property (nonatomic,readonly) unsigned* transitIncidentIndexs; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readRoutingMessage;
-(void)_readTransitIncidentIndexs;
-(void)_addNoFlagsTransitIncidentIndex:(unsigned)arg1 ;
-(NSString *)routingMessage;
-(void)setRoutingMessage:(NSString *)arg1 ;
-(unsigned long long)transitIncidentIndexsCount;
-(void)clearTransitIncidentIndexs;
-(unsigned)transitIncidentIndexAtIndex:(unsigned long long)arg1 ;
-(void)addTransitIncidentIndex:(unsigned)arg1 ;
-(unsigned)routingIncidentMessageIndex;
-(void)setRoutingIncidentMessageIndex:(unsigned)arg1 ;
-(void)setHasRoutingIncidentMessageIndex:(BOOL)arg1 ;
-(BOOL)hasRoutingIncidentMessageIndex;
-(BOOL)hasRoutingMessage;
-(unsigned*)transitIncidentIndexs;
-(void)setTransitIncidentIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end

