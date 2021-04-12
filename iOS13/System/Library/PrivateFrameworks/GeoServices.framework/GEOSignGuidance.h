/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOJunctionInfo, NSMutableArray, GEONameInfo;

@interface GEOSignGuidance : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOJunctionInfo* _junctionInfo;
	NSMutableArray* _secondarySigns;
	GEONameInfo* _shieldName;
	NSMutableArray* _signDetails;
	NSMutableArray* _signTitles;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _maneuverArrowOverride;
	unsigned _stackRanking;
	struct {
		unsigned has_maneuverArrowOverride : 1;
		unsigned has_stackRanking : 1;
		unsigned read_unknownFields : 1;
		unsigned read_junctionInfo : 1;
		unsigned read_secondarySigns : 1;
		unsigned read_shieldName : 1;
		unsigned read_signDetails : 1;
		unsigned read_signTitles : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_junctionInfo : 1;
		unsigned wrote_secondarySigns : 1;
		unsigned wrote_shieldName : 1;
		unsigned wrote_signDetails : 1;
		unsigned wrote_signTitles : 1;
		unsigned wrote_maneuverArrowOverride : 1;
		unsigned wrote_stackRanking : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * signTitles; 
@property (nonatomic,retain) NSMutableArray * signDetails; 
@property (nonatomic,retain) NSMutableArray * secondarySigns; 
@property (assign,nonatomic) BOOL hasManeuverArrowOverride; 
@property (assign,nonatomic) int maneuverArrowOverride; 
@property (nonatomic,readonly) BOOL hasShieldName; 
@property (nonatomic,retain) GEONameInfo * shieldName; 
@property (assign,nonatomic) BOOL hasStackRanking; 
@property (assign,nonatomic) unsigned stackRanking; 
@property (nonatomic,readonly) BOOL hasJunctionInfo; 
@property (nonatomic,retain) GEOJunctionInfo * junctionInfo; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)signTitleType;
+(Class)signDetailType;
+(Class)secondarySignType;
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
-(unsigned long long)secondarySignsCount;
-(BOOL)hasManeuverArrowOverride;
-(int)maneuverArrowOverride;
-(BOOL)hasJunctionInfo;
-(GEOJunctionInfo *)junctionInfo;
-(NSMutableArray *)signDetails;
-(BOOL)hasStackRanking;
-(unsigned)stackRanking;
-(NSMutableArray *)signTitles;
-(NSMutableArray *)secondarySigns;
-(GEONameInfo *)shieldName;
-(void)_readSignTitles;
-(void)_addNoFlagsSignTitle:(id)arg1 ;
-(void)_readSignDetails;
-(void)_addNoFlagsSignDetail:(id)arg1 ;
-(void)_readSecondarySigns;
-(void)_addNoFlagsSecondarySign:(id)arg1 ;
-(void)_readShieldName;
-(void)_readJunctionInfo;
-(unsigned long long)signTitlesCount;
-(void)clearSignTitles;
-(id)signTitleAtIndex:(unsigned long long)arg1 ;
-(void)addSignTitle:(id)arg1 ;
-(unsigned long long)signDetailsCount;
-(void)clearSignDetails;
-(id)signDetailAtIndex:(unsigned long long)arg1 ;
-(void)addSignDetail:(id)arg1 ;
-(void)clearSecondarySigns;
-(id)secondarySignAtIndex:(unsigned long long)arg1 ;
-(void)addSecondarySign:(id)arg1 ;
-(void)setShieldName:(GEONameInfo *)arg1 ;
-(void)setJunctionInfo:(GEOJunctionInfo *)arg1 ;
-(void)setSignTitles:(NSMutableArray *)arg1 ;
-(void)setSignDetails:(NSMutableArray *)arg1 ;
-(void)setSecondarySigns:(NSMutableArray *)arg1 ;
-(void)setManeuverArrowOverride:(int)arg1 ;
-(void)setHasManeuverArrowOverride:(BOOL)arg1 ;
-(id)maneuverArrowOverrideAsString:(int)arg1 ;
-(int)StringAsManeuverArrowOverride:(id)arg1 ;
-(BOOL)hasShieldName;
-(void)setStackRanking:(unsigned)arg1 ;
-(void)setHasStackRanking:(BOOL)arg1 ;
@end

