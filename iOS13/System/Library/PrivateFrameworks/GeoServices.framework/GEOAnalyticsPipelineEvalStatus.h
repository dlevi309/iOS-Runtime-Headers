/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray;

@interface GEOAnalyticsPipelineEvalStatus : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _inflightTypeCounts;
	NSMutableArray* _shadowTypeCounts;
	NSMutableArray* _storedTypeCounts;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _evalModeEnabled;
	struct {
		unsigned has_evalModeEnabled : 1;
		unsigned read_inflightTypeCounts : 1;
		unsigned read_shadowTypeCounts : 1;
		unsigned read_storedTypeCounts : 1;
		unsigned wrote_inflightTypeCounts : 1;
		unsigned wrote_shadowTypeCounts : 1;
		unsigned wrote_storedTypeCounts : 1;
		unsigned wrote_evalModeEnabled : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasEvalModeEnabled; 
@property (assign,nonatomic) BOOL evalModeEnabled; 
@property (nonatomic,retain) NSMutableArray * storedTypeCounts; 
@property (nonatomic,retain) NSMutableArray * inflightTypeCounts; 
@property (nonatomic,retain) NSMutableArray * shadowTypeCounts; 
+(BOOL)isValid:(id)arg1 ;
+(Class)storedTypeCountsType;
+(Class)inflightTypeCountsType;
+(Class)shadowTypeCountsType;
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
-(void)_readStoredTypeCounts;
-(void)_addNoFlagsStoredTypeCounts:(id)arg1 ;
-(void)_readInflightTypeCounts;
-(void)_addNoFlagsInflightTypeCounts:(id)arg1 ;
-(void)_readShadowTypeCounts;
-(void)_addNoFlagsShadowTypeCounts:(id)arg1 ;
-(unsigned long long)storedTypeCountsCount;
-(void)clearStoredTypeCounts;
-(id)storedTypeCountsAtIndex:(unsigned long long)arg1 ;
-(void)addStoredTypeCounts:(id)arg1 ;
-(unsigned long long)inflightTypeCountsCount;
-(void)clearInflightTypeCounts;
-(id)inflightTypeCountsAtIndex:(unsigned long long)arg1 ;
-(void)addInflightTypeCounts:(id)arg1 ;
-(unsigned long long)shadowTypeCountsCount;
-(void)clearShadowTypeCounts;
-(id)shadowTypeCountsAtIndex:(unsigned long long)arg1 ;
-(void)addShadowTypeCounts:(id)arg1 ;
-(BOOL)evalModeEnabled;
-(void)setEvalModeEnabled:(BOOL)arg1 ;
-(void)setHasEvalModeEnabled:(BOOL)arg1 ;
-(BOOL)hasEvalModeEnabled;
-(NSMutableArray *)storedTypeCounts;
-(void)setStoredTypeCounts:(NSMutableArray *)arg1 ;
-(NSMutableArray *)inflightTypeCounts;
-(void)setInflightTypeCounts:(NSMutableArray *)arg1 ;
-(NSMutableArray *)shadowTypeCounts;
-(void)setShadowTypeCounts:(NSMutableArray *)arg1 ;
@end

