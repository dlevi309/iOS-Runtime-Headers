/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOComposedRouteStepTransitInstructionMerging.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOFormattedString, NSString;

@interface GEOTransitListTimeInstruction : PBCodable <GEOComposedRouteStepTransitInstructionMerging, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOFormattedString* _primaryText;
	GEOFormattedString* _secondaryText;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _hideWhenListCollapsed;
	struct {
		unsigned has_hideWhenListCollapsed : 1;
		unsigned read_unknownFields : 1;
		unsigned read_primaryText : 1;
		unsigned read_secondaryText : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_primaryText : 1;
		unsigned wrote_secondaryText : 1;
		unsigned wrote_hideWhenListCollapsed : 1;
	}  _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasPrimaryText; 
@property (nonatomic,retain) GEOFormattedString * primaryText; 
@property (nonatomic,readonly) BOOL hasSecondaryText; 
@property (nonatomic,retain) GEOFormattedString * secondaryText; 
@property (assign,nonatomic) BOOL hasHideWhenListCollapsed; 
@property (assign,nonatomic) BOOL hideWhenListCollapsed; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
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
-(GEOFormattedString *)primaryText;
-(void)setPrimaryText:(GEOFormattedString *)arg1 ;
-(BOOL)hasPrimaryText;
-(void)_readPrimaryText;
-(void)_readSecondaryText;
-(GEOFormattedString *)secondaryText;
-(void)setSecondaryText:(GEOFormattedString *)arg1 ;
-(BOOL)hasSecondaryText;
-(BOOL)hasHideWhenListCollapsed;
-(BOOL)hideWhenListCollapsed;
-(void)setHideWhenListCollapsed:(BOOL)arg1 ;
-(void)setHasHideWhenListCollapsed:(BOOL)arg1 ;
-(void)_transit_prepareForDeepMergeFrom:(id)arg1 ;
@end

