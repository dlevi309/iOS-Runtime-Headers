/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, NSData;

@interface GEOTrafficPath : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE77* _continuingRoadIds;
	SCD_Struct_GE77* _roadIds;
	NSMutableArray* _geometrys;
	NSData* _openlr;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	float _endOffset;
	float _startOffset;
	struct {
		unsigned has_endOffset : 1;
		unsigned has_startOffset : 1;
		unsigned read_continuingRoadIds : 1;
		unsigned read_roadIds : 1;
		unsigned read_geometrys : 1;
		unsigned read_openlr : 1;
		unsigned wrote_continuingRoadIds : 1;
		unsigned wrote_roadIds : 1;
		unsigned wrote_geometrys : 1;
		unsigned wrote_openlr : 1;
		unsigned wrote_endOffset : 1;
		unsigned wrote_startOffset : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasOpenlr; 
@property (nonatomic,retain) NSData * openlr; 
@property (nonatomic,readonly) unsigned long long roadIdsCount; 
@property (nonatomic,readonly) long long* roadIds; 
@property (assign,nonatomic) BOOL hasStartOffset; 
@property (assign,nonatomic) float startOffset; 
@property (assign,nonatomic) BOOL hasEndOffset; 
@property (assign,nonatomic) float endOffset; 
@property (nonatomic,readonly) unsigned long long continuingRoadIdsCount; 
@property (nonatomic,readonly) long long* continuingRoadIds; 
@property (nonatomic,retain) NSMutableArray * geometrys; 
+(BOOL)isValid:(id)arg1 ;
+(Class)geometryType;
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
-(float)startOffset;
-(float)endOffset;
-(void)setStartOffset:(float)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)_readOpenlr;
-(NSData *)openlr;
-(void)setOpenlr:(NSData *)arg1 ;
-(void)setHasStartOffset:(BOOL)arg1 ;
-(BOOL)hasStartOffset;
-(void)setEndOffset:(float)arg1 ;
-(void)setHasEndOffset:(BOOL)arg1 ;
-(BOOL)hasEndOffset;
-(BOOL)hasOpenlr;
-(void)_readRoadIds;
-(void)_addNoFlagsRoadId:(long long)arg1 ;
-(void)_readContinuingRoadIds;
-(void)_addNoFlagsContinuingRoadId:(long long)arg1 ;
-(void)_readGeometrys;
-(void)_addNoFlagsGeometry:(id)arg1 ;
-(unsigned long long)roadIdsCount;
-(void)clearRoadIds;
-(long long)roadIdAtIndex:(unsigned long long)arg1 ;
-(void)addRoadId:(long long)arg1 ;
-(unsigned long long)continuingRoadIdsCount;
-(void)clearContinuingRoadIds;
-(long long)continuingRoadIdAtIndex:(unsigned long long)arg1 ;
-(void)addContinuingRoadId:(long long)arg1 ;
-(unsigned long long)geometrysCount;
-(void)clearGeometrys;
-(id)geometryAtIndex:(unsigned long long)arg1 ;
-(void)addGeometry:(id)arg1 ;
-(long long*)roadIds;
-(void)setRoadIds:(long long*)arg1 count:(unsigned long long)arg2 ;
-(long long*)continuingRoadIds;
-(void)setContinuingRoadIds:(long long*)arg1 count:(unsigned long long)arg2 ;
-(NSMutableArray *)geometrys;
-(void)setGeometrys:(NSMutableArray *)arg1 ;
@end

