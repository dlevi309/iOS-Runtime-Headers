/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEORPGroundViewFeedbackContext, GEORPGroundViewCorrections;

@interface GEORPGroundViewFeedback : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEORPGroundViewFeedbackContext* _groundViewContext;
	GEORPGroundViewCorrections* _groundViewCorrections;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_groundViewContext : 1;
		unsigned read_groundViewCorrections : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_groundViewContext : 1;
		unsigned wrote_groundViewCorrections : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasGroundViewContext; 
@property (nonatomic,retain) GEORPGroundViewFeedbackContext * groundViewContext; 
@property (nonatomic,readonly) BOOL hasGroundViewCorrections; 
@property (nonatomic,retain) GEORPGroundViewCorrections * groundViewCorrections; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
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
-(void)_readGroundViewContext;
-(void)_readGroundViewCorrections;
-(GEORPGroundViewFeedbackContext *)groundViewContext;
-(GEORPGroundViewCorrections *)groundViewCorrections;
-(void)setGroundViewContext:(GEORPGroundViewFeedbackContext *)arg1 ;
-(void)setGroundViewCorrections:(GEORPGroundViewCorrections *)arg1 ;
-(BOOL)hasGroundViewContext;
-(BOOL)hasGroundViewCorrections;
@end

